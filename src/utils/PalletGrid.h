#ifndef PALLET_GRID_H_
#define PALLET_GRID_H_

/*
 * CellPosition.h
 *
 * Dmscanlib is a software library and standalone application that scans
 * and decodes libdmtx compatible test-tubes. It is currently designed
 * to decode 12x8 pallets that use 2D data-matrix laser etched test-tubes.
 * Copyright (C) 2010 Canadian Biosample Repository
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <string>

struct CvRect;

using namespace std;

class PalletGrid {
public:
	enum Orientation {
		ORIENTATION_HORIZONTAL, ORIENTATION_VERTICAL
	};

	static const unsigned NUM_CELLS = 96;

	static const unsigned MAX_ROWS = 8;

	static const unsigned MAX_COLS = 12;

	PalletGrid(Orientation o, unsigned imgWidth, unsigned imgHeight,
			unsigned cellWidth, unsigned cellHeight);
	~PalletGrid();

	void getImageCoordinates(unsigned row, unsigned col, CvRect & rect);

	unsigned getPosition(unsigned row, unsigned col);

	void getPositionStr(unsigned row, unsigned col, string & str);

private:
	unsigned orientation;
	unsigned imgWidth;
	unsigned imgHeight;
	unsigned cellWidth;
	unsigned cellHeight;

};

#endif /* PALLET_GRID_H_ */