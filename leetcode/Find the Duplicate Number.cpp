class Solution {
public:
    int findDuplicate(vector<int>& a) {
        int n=a.size();
        int* freq=new int[n+1];
        for (int i = 0; i < n; i++)
    {
       freq[i] = 0;
    }
        for(int i=0;i<n;i++)
        {
            if(freq[a[i]]==0)
            {
                freq[a[i]]+=1;
            }
            else{
                return a[i];
            }
        }return 0;
    }
};