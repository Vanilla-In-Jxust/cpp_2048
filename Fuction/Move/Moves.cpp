#include <vector>

#include "../Check/Check.h"

using namespace std;

vector<int> moveUp(vector<int> before) {
    vector<int> after = before;
    vector<bool> movedFlags = {false, false, false, false,
                               false, false, false, false,
                               false, false, false, false,
                               false, false, false, false};

    while (!checkUp(after, movedFlags)) {
        for (int i = 0; i < 12; i++) {
            if (after[i] == 0 && after[i + 4] == 0) {
                continue;
            } else if (after[i] == 0 && after[i + 4] != 0) {
                // when has up and hasn't down.
                // up = down, down = up(0).
                after[i + 4] = before[i];
                bool tempFlag = movedFlags[i + 4];
                movedFlags[i + 4] = movedFlags[i];
                after[i] = before[i + 4];
                movedFlags[i] = tempFlag;

                break;
            } else if (after[i] == after[i + 4]) {
                if (movedFlags[i] || movedFlags[i + 4]) {
                    continue;
                } else {
                    // when up = down.
                    // up = 2 * down, down = 0.
                    after[i] = 2 * before[i + 4];
                    after[i + 4] = 0;

                    movedFlags[i] = true;
                    break;
                }
            }
        }
        before = after;
    }

    return after;
}