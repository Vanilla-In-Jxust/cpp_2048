#include <vector>

using namespace std;

vector<int> rotateRight(const vector<int> &before) {
    vector<int> after;

    // TODO: Simplify this!!!

    after.push_back(before[12]);
    after.push_back(before[8]);
    after.push_back(before[4]);
    after.push_back(before[0]);

    after.push_back(before[13]);
    after.push_back(before[9]);
    after.push_back(before[5]);
    after.push_back(before[1]);

    after.push_back(before[14]);
    after.push_back(before[10]);
    after.push_back(before[6]);
    after.push_back(before[2]);

    after.push_back(before[15]);
    after.push_back(before[11]);
    after.push_back(before[7]);
    after.push_back(before[3]);

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
