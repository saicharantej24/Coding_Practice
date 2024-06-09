class Solution {
public:
    int maxProfit(vector<int>& a) {
        int minv=INT_MAX;
        int maxp=0;
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            if(a[i]<minv)
            minv=a[i];
            maxp=max(maxp,a[i]-minv);
        }
        return maxp;
    }
};