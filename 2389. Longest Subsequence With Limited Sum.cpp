class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        vector<int> sum,ans;
        int s=0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
            sum.push_back(s);
        }
        for(int i=0;i<queries.size();i++){
            int l=0,r=nums.size()-1;
            while(r>=l){
                int mid=l+(r-l)/2;
                // int mid=(l+r)/2;
                if(sum[mid]<=queries[i]){
                    l=mid+1;
                }else if(sum[mid]>queries[i]){
                    r=mid-1;
                }
            }
            ans.push_back(l);
            
        }
        return ans;
    }
};
// 1 2 4 5
// 1 3 7 12
/*
        sort(nums.begin(),nums.end());
        vector<int> ans;
        for(int i=0;i<queries.size();i++){
            int count=0;
            int j=0;
            for(j=0;j<nums.size() && count+nums[j]<=queries[i];j++){
                count+=nums[j];
            }
            ans.push_back(j);
        }
        return ans;
*/
