class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        int n = nums.size()/2;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        int ans;
        for(auto i:mp){
            if(i.second>n){
                ans = i.first;
                break;
            }
        }
        return ans;
    }
};
