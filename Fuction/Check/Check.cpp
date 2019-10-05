#include <vector>

using namespace std;

bool checkUp(const vector<int> &after, const vector<bool> &movedFlags) {
    for (int i = 0; i < 12; i++) {
        if (after[i] == 0 && after[i + 4] != 0) {
            return false;
        } else if ((after[i] == after[i + 4])) {
            if ((after[i] == 0 && after[i + 4] == 0) || movedFlags[i]) {
                continue;
            } else return false;
        }
    }

    return true;
}