#include <easyx.h>

#include <vector>

using namespace std;

/**
 * show Demo arrangement of 2048 game.
 */
void showDemo();

/**
 * convent vector<int> to vector<IMAGE> length 16 with gamerule.
 * @param intsVector is number vector in 2048 game.
 * @return vector<IMAGE> with length 16.
 */
vector<IMAGE> c_IMAGEs(const vector<int> &intsVector);

/**
 * get IMAGE object by number with gamerule(2, 4, 8, etc).
 * @param w is a number in 2048 game.
 * @return correspond IMAGE object.
 */
IMAGE getImage(int w);

/**
 * draw blocks by vector<IMAGE> with length 16.
 * @param vectorIMAGEs is IMAGEs with length 16 to show.
 */
void showBlocks(const vector<IMAGE> &vectorIMAGEs);
