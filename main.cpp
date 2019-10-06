#include <easyx.h>

#include <conio.h>

#include "Define/Define.h"
#include "Fuction/Fuction.h"

// test
#include "Define/BlockLocation.h"
#include "Fuction/Move/Moves.h"
#include "Fuction/Rotate/Rotate.h"
#include "Fuction/Check/Check.h"
#include "Fuction/Random/Random.h"

int main() {
    // init screen with 959 x 959.
    initgraph(959, 959);

    // load & put bg IMAGE with bgPath.
    string bgPath = BASE_PATH + "bg.png";
    IMAGE bg;
    loadimage(&bg, bgPath.c_str());
    putimage(0, 0, &bg);

    vector<int> init = initBlocks();
    showBlocks(init);

    vector<int> current = init;

    while (true) {
        int key = _getch();

        // When press esc key, clean screen and exit.
        if (key == 27) {
            cleardevice();
            closegraph();

            return 0;
        } else if (key == 224) {
            int ctrl = _getch();

            switch (ctrl) { // NOLINT(hicpp-multiway-paths-covered)
                case 72: {
                    // Pressed Up
                    current = moveUp(current);

                    current = randomAdd(current);
                    showBlocks(current);
                    break;
                }
                case 80: {
                    // Pressed Down
                    current = rotateDown(current);
                    current = moveUp(current);
                    current = rotateDown(current);

                    current = randomAdd(current);
                    showBlocks(current);
                    break;
                }
                case 75: {
                    // Pressed Left
                    current = rotateRight(current);
                    current = moveUp(current);
                    current = rotateLeft(current);

                    current = randomAdd(current);
                    showBlocks(current);
                    break;
                }
                case 77: {
                    // Pressed Right
                    current = rotateLeft(current);
                    current = moveUp(current);
                    current = rotateRight(current);

                    current = randomAdd(current);
                    showBlocks(current);
                    break;
                }
            }
        }
    }
}
