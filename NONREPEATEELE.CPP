#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int firstUnique(vector<int>& nums) {

    unordered_map<int,int> freq;

    for(int i=0;i<nums.size();i++)
        freq[nums[i]]++;

    for(int i=0;i<nums.size();i++)
        if(freq[nums[i]] == 1)
            return nums[i];

    return -1;
}

int main() {



    vector<int> nums = {4,5,1,2,0,4,1,0};//{1,2,3,4,5,6,7,8,9};

    cout << firstUnique(nums);
}