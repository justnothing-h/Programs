#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {

    vector<int> nums = {1,1,2,3,2,1,4};

    unordered_map<int,int> freq;// to store the frequency of each element

    for(int i=0;i<nums.size();i++) {
        freq[nums[i]]++;
    }



    for(auto x : freq) {
        cout << x.first << " occurs " << x.second << " times\n";
    }

}