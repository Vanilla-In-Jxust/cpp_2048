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

    vector<int> current = testBlocks;

    while (true) {
        int key = _getch();

        // When press esc key.
        if (key == 27) {
            closegraph();
            return 0;
        } else if (key == 224) {
            int ctrl = _getch();

            switch (ctrl) { // NOLINT(hicpp-multiway-paths-covered)
                case 72: {
                    // Pressed Up
                    current = moveUp(current);
                    showBlocks(current);

                    break;
                }
                case 80: {
                    // Pressed Down
                    current = rotateDown(current);
                    current = moveUp(current);
                    current = rotateDown(current);
                    showBlocks(current);

                    break;
                }
                case 75: {
                    // Pressed Left

                    break;
                }
                case 77: {
                    // Pressed Right

                    break;
                }
            }
        }
    }
}
