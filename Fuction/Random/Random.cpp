#include <random>
#include <ctime>

#include "../Check/Check.h"
#include "Random.h"

using namespace std;

// Suppress warning because seed is time.
#pragma clang diagnostic push
#pragma ide diagnostic ignored "cert-msc51-cpp"

vector<int> randomAdd(const vector<int> &before) {
    vector<int> emptyLocation = checkEmpty(before);
    vector<int> after = before;

    if (emptyLocation.empty()) {
        return before;
    }

    int length = emptyLocation.size();
    int rd = random(length - 1);
    int location = emptyLocation[rd];

    after[location] = 2;
    return after;
}

int random(int max) {
    if (max == 0) {
        return 0;
    }

    time_t now = time(nullptr);

    uniform_int_distribution<int> uniform(0, max);
    default_random_engine engine(now); // NOLINT(cert-msc32-c)

    int random = uniform(engine);

    return random;
}

vector<int> initBlocks() {
    vector<int> init;
    init.reserve(16);

    for (int i = 0; i < 16; i++) {
        init.push_back(0);
    }

    int rd = random(15);
    init[rd] = 2;

    return init;
}

#pragma clang diagnostic pop
