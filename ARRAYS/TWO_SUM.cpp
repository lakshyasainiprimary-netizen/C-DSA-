#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


vector<int> TWO_SUM(vector<int> &nums, int target) {
    unordered_map<int, int> m;

    for(int i = 0; i < nums.size(); i++){
     int x = target - nums[i];

     if(m.find(x) != m.end()) {
        return {m[x], i};

     }else{
        m[nums[i]] = i;

        }
    }

    return {};
}

int main(){

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = TWO_SUM(nums, target);

    cout <<ans[0] << " " << ans[1] << endl;

    return 0;
}
