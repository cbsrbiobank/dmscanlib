#ifndef __INC_PALLET_CELL_H
#define __INC_PALLET_CELL_H

#include "DecodedWell.h"
#include "WellRectangle.h"
#include "geometry.h"

#include <dmtx.h>
#include <string>
#include <ostream>
#include <memory>
#include <OpenThreads/Mutex>
#include <OpenThreads/ScopedLock>
#include <OpenThreads/Thread>

using namespace std;

class Decoder;
class Dib;
struct RgbQuad;
class PalletGrid;

class WellDecoder : public OpenThreads::Thread {
public:
   WellDecoder(const Dib & image, const Decoder & decoder,
		   const WellRectangle<unsigned> & _wellRectangle);

   virtual ~WellDecoder();

   virtual void run();

   bool isFinished();

   void decodeCallback(std::string & decodedMsg, Point<unsigned>(&corners)[4]);

	const string & getLabel() {
		return decodedWell.getWellRectangle().getLabel();
	}

	const string & getMessage() const {
		return decodedWell.getMessage();
	}

   const Rect<unsigned> & getWellRectangle() const {
      return decodedWell.getWellRectangle().getRectangle();
   }

   const Rect<unsigned> & getDecodedRectangle() const {
	   return decodedWell.getDecodedRect();
   }

   const bool getDecodeValid() {
      return !decodedWell.getMessage().empty();
   }

   const std::string & getBarcodeMsg();

   void drawCellBox(Dib & image, const RgbQuad & color) const;

   void drawBarcodeBox(Dib & image, const RgbQuad & color) const;

   void writeImage(std::string basename);

private:
   const Decoder & decoder;
   unique_ptr<const Dib> wellImage;
   DecodedWell decodedWell;

   friend std::ostream & operator<<(std::ostream & os, WellDecoder & m);
};

#endif /* __INC_PALLET_CELL_H */
