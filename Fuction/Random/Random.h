#include <vector>

using namespace std;

/**
 * After move blocks, meed random new a block.
 * @param before is blocks need to new.
 * @return after blocks.
 */
vector<int> randomAdd(const vector<int> &before);

/**
 * Generate a int in [0, max].
 * @param max max int to generate.
 * @return a random int in [0, max].
 */
int random(int max);


vector<int> initBlocks();