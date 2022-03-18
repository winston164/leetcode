#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int, int> match = {};
      for(int index = 0; 
          index < nums.size();
          index++){
        int value = nums.at(index);
        if(match.find(value) != match.end()){
          nums.clear();
          nums.push_back(match.at(value));
          nums.push_back(index);
          return nums;
          //int result[] = {match.at(value), index};
          //return vector<int>(result, result+2);
        }else{
          match[target - value] = index;
        }
      }
      return nums;
    }
};
