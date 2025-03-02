#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> myMap;
        int size = nums.size();

        for (int i = 0; i < size; i++) {
            int complement = target - nums[i];
            if (myMap.find(complement) != myMap.end()) {
                return {myMap[complement], i};
            }
            myMap[nums[i]] = i;
        }

        return {};
    }
};
