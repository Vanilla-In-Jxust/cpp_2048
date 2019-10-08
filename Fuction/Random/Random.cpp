#include <random>
#include <ctime>

#include "../Check/Check.h"
#include "Random.h"

using namespace std;

vector<int> randomAdd(const vector<int> &before) {
    vector<int> emptyLocation = checkEmpty(before);
    vector<int> after = before;

    if (emptyLocation.empty()) {
        return before;
    }

    int length = emptyLocation.size();
    int rd = random(length - 1);
    int location = emptyLocation[rd];

    int which = random(1);
    // 0: 2
    // 1: 4

    if (which == 0) {
        after[location] = 2;
    } else if (which == 1) {
        after[location] = 4;
    }

    return after;
}

int random(int max) {
    if (max == 0) {
        return 0;
    }

    time_t now = time(nullptr);

    uniform_int_distribution<int> uniform(0, max);
    default_random_engine engine(now);

    int random = uniform(engine);

    return random;
}

vector<int> initBlocks() {
    vector<int> init;
    init.reserve(16);

    for (int i = 0; i < 16; i++) {
        init.push_back(0);
    }

    int i = 0;
    int j = 0;

    while (i == j) {
        i = random(15);
        j = random(15);
    }

    int type = random(1);
    // type 0: 2, 2.
    // type 1: 2., 4.

    if (type == 0) {
        init[i] = 2;
        init[j] = 2;
    } else if (type == 1) {
        init[i] = 2;
        init[j] = 4;
    }

    return init;
}
