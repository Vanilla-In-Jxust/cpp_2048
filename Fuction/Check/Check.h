#include <vector>

using namespace std;

/**
* check every moved whether is the last time.
* @param vec is to be tested.
 * @param movedFlags used to remember special case.
* @return true if done or false if need next move.
 */
bool checkUp(const vector<int> &vec, const vector<bool> &movedFlags);

/**
 * check vector<int> 0's location.
 * @param check is vector<int> to be checked.
 * @return empty(0) location in vector<int>.
 */
vector<int> checkEmpty(vector<int> check);

/**
 * check all blocks whether can be continue moved.
 * if not, means game over.
 * @param check is all blocks ready to check.
 * @return true if is, and false if no.
 */
bool isDead(const vector<int> &check);
