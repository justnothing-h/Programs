#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int findDuplicate(vector<int>& nums) {

    unordered_map<int,int> mp;

    for(int i=0;i<nums.size();i++) {

        if(mp.find(nums[i]) != mp.end())
            return nums[i];

        mp[nums[i]] = i;
    }

    return -1;
}


int main() {

    vector<int> nums = {1,3,4,2,2};

    cout << findDuplicate(nums);
}