#include "Fuction.h"
#include "../Define/Define.h"
#include "../Define/BlockLocation.h"

vector<IMAGE> c_IMAGEs(const vector<int> &intsVector) {
    vector<IMAGE> IMAGEsVector;

    for (int i = 0; i < 16; i++) {
        int IMAGEInt = intsVector[i];
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

void showBlocks(const vector<int> &vectorInts) {
    vector<IMAGE> vectorIMAGEs = c_IMAGEs(vectorInts);
    for (int i = 0; i < 16; i++) {
        vector<int> location = Locations[i];
        IMAGE image = vectorIMAGEs[i];
        putimage(location[0], location[1], &image);
    }
}
