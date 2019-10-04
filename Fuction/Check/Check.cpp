#include <vector>

using namespace std;

bool checkUp(const vector<int> &after) {
    for (int i = 0; i < 12; i++) {
        if ((after[i] == 0 && after[i + 4] != 0) || (after[i] == after[i + 4])) {
            if (after[i] == 0 && after[i + 4] == 0) {
                continue;
            }
            return false;
        }
    }

    return true;
}