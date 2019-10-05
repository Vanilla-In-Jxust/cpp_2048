#include <vector>

using namespace std;

vector<int> rotateRight(const vector<int> &before) {
    vector<int> after;

    for (int i = 12; i < 16; i++) {
        for (int j = i; j > i - 13; j -= 4) {
            after.push_back(before[j]);
        }
    }

    return after;
}

vector<int> rotateLeft(const vector<int> &before) {
    vector<int> after;

    after = rotateRight(before);
    after = rotateRight(after);
    after = rotateRight(after);

    return after;
}

vector<int> rotateDown(const vector<int> &before) {
    vector<int> after;

    after = rotateRight(before);
    after = rotateRight(after);

    return after;
}
