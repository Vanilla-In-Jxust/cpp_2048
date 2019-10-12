#include <easyx.h>

#include <vector>

#include "Check/Check.h"
#include "Move/Moves.h"
#include "Random/Random.h"
#include "Rotate/Rotate.h"

using namespace std;

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
 * draw blocks by vector<int> with length 16.
 * @param vectorInts is Ints with length 16 to show.
 */
void showBlocks(const vector<int> &vectorInts);
