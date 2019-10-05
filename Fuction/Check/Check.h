#include <vector>

using namespace std;

/**
* check every moved whether is the last time.
* @param vec is to be tested.
 * @param movedFlags used to remember special case.
* @return true if done or false if need next move.
 */
bool checkUp(const vector<int> &vec, const vector<bool> &movedFlags);
