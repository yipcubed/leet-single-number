#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // int single = 0;
        set<int> seen;
        set<int>::iterator it;
        for (int i = 0; i < nums.size(); ++i) {
          if (seen.count(nums[i])) {
            seen.erase(nums[i]);
          } else {
            seen.insert(nums[i]);
          }
        }
        it = seen.begin();
        return *it;
    }
};


int main() {
  Solution S;

  vector<int> v1{2,2,1};
  cout << "1? " << S.singleNumber(v1) << endl;

  vector<int> v2{4,1,2,1,2};
  cout << "4? " << S.singleNumber(v2) << endl;

  cout << "Done!" << endl;

  return 0;
}