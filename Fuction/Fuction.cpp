#include "Fuction.h"
#include "../Define/BlockLocation.h"

#include <string>

void showDemo() {
    vector<IMAGE> images = c_IMAGEs(demoBlocks);
    showBlocks(images);
}

vector<IMAGE> c_IMAGEs(const int IMAGEInts[16]) {
    vector<IMAGE> IMAGEsVector;

    for (int i = 0; i < 16; i++) {
        int IMAGEInt = IMAGEInts[i];
        IMAGE image = getImage(IMAGEInt);
        IMAGEsVector.push_back(image);
    }

    return IMAGEsVector;
}

IMAGE getImage(int w) {
    IMAGE imgw;
    string fileName = BASE_PATH + to_string(w) + ".png";
    loadimage(&imgw, fileName.c_str());

    return imgw;
}

void showBlocks(const vector<IMAGE> &vectorIMAGEs) {
    for (int i = 0; i < 16; i++) {
        vector<int> location = Locations[i];
        IMAGE image = vectorIMAGEs[i];
        putimage(location[0], location[1], &image);
    }
}
