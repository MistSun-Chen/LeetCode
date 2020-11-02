#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution{
    public:
        vector<int> twoSum(vector<int>& nums,int target){
            // vector <int>a,b;
            // for(auto num : nums){
            //     a.push_back(target - num);
            // }
            // for(decltype(a.size()) i = 0 ; i < a.size(); i++){
            //     int j = Index(a,nums[i]);
            //     if(j >= 0){
            //         b.push_back(i);
            //         b.push_back(j);
            //         return b;
            //     }else continue;
            // }

            //1、暴力破解法
            // decltype(nums.size()) n = nums.size();
            // for(int i = 0; i < n; ++i){
            //     for (int j = i + 1; j < n; ++j){
            //         if ( nums[i] + nums[j] == target){
            //             return {i,j};
            //         }
            //     }
            // }
            // return {0};
            //2、哈希表
            unordered_map <int,int>hashtable;
            for(int i = 0;i < nums.size();++i){
                auto it = hashtable.find(target - nums[i]);
                if(it != hashtable.end()){
                    return {it->second,i};
                }
                hashtable[nums[i]] = i;
            }
            return {};

        }
        // int Index(vector<int>& nums , int target){
        //     for (decltype(nums.size()) i = 0; i < nums.size(); i++){
        //         if(nums[i] == target){
        //             return i;
        //         }
        //     }
        //     return -1;
        // }
};
int main(){
    Solution *so = new Solution();
    vector <int>a{3,2,4};
    int target = 6;
    vector <int> b = so->twoSum(a,target);
    for (auto c : b){
        cout << c << " ";
    }
    cout <<endl;
}
