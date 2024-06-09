class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         unordered_map<int,int>m;
         int n=nums.size();
         for(int i=0;i<n;i++)
         {
             int num=nums[i];
             int bal=target-num;
             if(m.find(bal)!=m.end())
             {
                 return {m[bal],i};
             }
             m[num]=i;
         }return {-1,-1};
    }
};