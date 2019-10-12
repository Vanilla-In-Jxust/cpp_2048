#include <easyx.h>

#include <conio.h>
#include <WinUser.h>

#include "Define/Define.h"
#include "Fuction/Fuction.h"

int main() {
    // init screen with 959 x 959.
    HWND window = initgraph(959, 959);

    // load & put bg IMAGE with bgPath.
    string bgPath = BASE_PATH + "bg.png";
    IMAGE bg;
    loadimage(&bg, bgPath.c_str());
    putimage(0, 0, &bg);

    vector<int> init = initBlocks();
    showBlocks(init);

    vector<int> current = init;
    vector<int> before = current;

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
                    before = current;

                    // Pressed Up
                    current = moveUp(current);

                    if (current == before)
                        break;

                    current = randomAdd(current);
                    showBlocks(current);
                    break;
                }
                case 80: {
                    before = current;

                    // Pressed Down
                    current = moveDown(current);

                    if (current == before)
                        break;

                    current = randomAdd(current);
                    showBlocks(current);
                    break;
                }
                case 75: {
                    before = current;

                    // Pressed Left
                    current = moveLeft(current);

                    if (current == before)
                        break;

                    current = randomAdd(current);
                    showBlocks(current);
                    break;
                }
                case 77: {
                    before = current;

                    // Pressed Right
                    current = moveRight(current);

                    if (current == before)
                        break;

                    current = randomAdd(current);
                    showBlocks(current);
                    break;
                }
            }
        }

        if (isDead(current)) {
            cleardevice();
            closegraph();

            return 0;
        }
    }
}
