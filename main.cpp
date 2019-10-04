#include <easyx.h>

#include <conio.h>

#include "Define/Define.h"
#include "Fuction/Fuction.h"

// test
#include "Define/BlockLocation.h"
#include "Fuction/Move/Moves.h"

int main() {
    // init screen with 959 x 959.
    initgraph(959, 959);

    // load & put bg IMAGE with bgPath.
    string bgPath = BASE_PATH + "bg.png";
    IMAGE bg;
    loadimage(&bg, bgPath.c_str());
    putimage(0, 0, &bg);

    // show 2048 game demo arrangements.
    // showBlocks(demoBlocks);

    // test
    showBlocks(testBlocks);

    // press any key to exit.
    _getch();

    // test
    cleardevice();
    putimage(0, 0, &bg);

    vector<int> moved = moveUp(testBlocks);
    showBlocks(moved);

    _getch();
    closegraph();

    return 0;
}