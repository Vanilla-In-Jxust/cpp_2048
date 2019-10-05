#include <vector>

using namespace std;

bool checkUp(const vector<int> &vec, const vector<bool> &movedFlags) {
    for (int i = 0; i < 12; i++) {
        if (vec[i] == 0 && vec[i + 4] != 0) {
            return false;
        } else if ((vec[i] == vec[i + 4])) {
            if ((vec[i] == 0 && vec[i + 4] == 0) || movedFlags[i] || movedFlags[i + 4]) {
                continue;
            } else return false;
        }
    }

    return true;
}