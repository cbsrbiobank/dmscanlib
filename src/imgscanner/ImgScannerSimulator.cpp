/*
 Dmscanlib is a software library and standalone application that scans
 and decodes libdmtx compatible test-tubes. It is currently designed
 to decode 12x8 pallets that use 2D data-matrix laser etched test-tubes.
 Copyright (C) 2010 Canadian Biosample Repository

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
/**
 * Implements the ImgScanner.
 *
 * This class performs all interfacing with the TWAIN driver to acquire images
 * from the scanner.
 *
 * Some portions of the implementation borrowed from EZTWAIN.
 */

#include "ImgScannerSimulator.h"

#include <glog/logging.h>
#include <math.h>

#if defined(USE_NVWA)
#   include "debug_new.h"
#endif

namespace dmscanlib {

namespace imgscanner {

ImgScannerSimulator::ImgScannerSimulator() {
}

ImgScannerSimulator::~ImgScannerSimulator() {
}

bool ImgScannerSimulator::selectSourceAsDefault() {
    VLOG(2) << "selectSourceAsDefault";
    return false;
}

int ImgScannerSimulator::getScannerCapability() {
    VLOG(2) << "getScannerCapability";
    return 0;
}

HANDLE ImgScannerSimulator::acquireImage(
        const unsigned dpi,
        const int brightness,
        const int contrast,
        const cv::Rect_<float> & bbox) {
    VLOG(2) << "acquireImage";
    return NULL;
}

HANDLE ImgScannerSimulator::acquireFlatbed(unsigned dpi, int brightness, int contrast) {
    VLOG(2) << "acquireFlatbed";
    return NULL;
}

void ImgScannerSimulator::freeImage(HANDLE handle) {
    VLOG(2) << "freeImage";
}

} /* namespace */

} /* namespace */
