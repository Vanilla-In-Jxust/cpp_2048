#include <vector>

#include "../Check/Check.h"

using namespace std;

vector<int> moveUp(vector<int> before) {
    vector<int> after = before;

    while (!checkUp(after)) {
        for (int i = 0; i < 12; i++) {
            if (after[i] == 0 && after[i + 4] == 0) {
                continue;
            } else if (after[i] == 0 && after[i + 4] != 0) {
                // when has up and hasn't down.
                // up = down, down = up(0).
                after[i + 4] = before[i];
                after[i] = before[i + 4];
                break;
            } else if (after[i] == after[i + 4]) {
                // when up = down.
                // up = 2 * down, down = 0.
                after[i] = 2 * before[i + 4];
                after[i + 4] = 0;
                break;
            }
        }
        before = after;
    }

    return after;
}