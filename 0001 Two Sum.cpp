class Solution {
    public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int ,int> mymap;
        vector<int> ans;

        for(int i=0;i<nums.size();i++){
            if(mymap.find(target - nums[i]) != mymap.end()){

                ans.push_back(i);
                ans.push_back(mymap[target - nums[i]]);
                return ans;
            }
            mymap[nums[i]]=i;

        }
        return ans;
    }
};
