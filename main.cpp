#include <easyx.h>

#include <conio.h>

#include "Define/Define.h"
#include "Fuction/Fuction.h"

// test
#include "Define/BlockLocation.h"
#include "Fuction/Move/Moves.h"
#include "Fuction/Rotate/Rotate.h"

int main() {
    // init screen with 959 x 959.
    initgraph(959, 959);

    // load & put bg IMAGE with bgPath.
    string bgPath = BASE_PATH + "bg.png";
    IMAGE bg;
    loadimage(&bg, bgPath.c_str());
    putimage(0, 0, &bg);

    showBlocks(testBlocks);
    _getch();

    // Clear screen.
    cleardevice();
    putimage(0, 0, &bg);

    vector<int> moved = rotateRight(testBlocks);
    showBlocks(moved);

    // Press any key to exit.
    _getch();
    closegraph();

    return 0;
}
