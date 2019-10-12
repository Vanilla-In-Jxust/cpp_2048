#include <vector>

#include "../Move/Moves.h"

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

vector<int> checkEmpty(vector<int> check) {
    vector<int> result = {};

    for (int i = 0; i < 16; i++) {
        if (check[i] == 0) {
            result.push_back(i);
        }
    }

    return result;
}

bool isDead(const vector<int> &check) {
    bool flag = false;

    vector<int> up, down, left, right;
    up = moveUp(check);
    down = moveDown(check);
    left = moveLeft(check);
    right = moveRight(check);

    if (check == up && check == down && check == left && check == right) {
        flag = true;
    }

    return flag;
}
