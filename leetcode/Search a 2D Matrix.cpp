class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l=0;
        if(!matrix.size())return false;
        int high=(matrix.size()*matrix[0].size())-1;
        while(l<=high)
        {
           int mid=l+(high-l)/2;
           if(matrix[mid/matrix[0].size()][mid%matrix[0].size()]==target)
           return true;
           else if(matrix[mid/matrix[0].size()][mid%matrix[0].size()]<target)
           l=mid+1;
           else
           high=mid-1;
        }return false;
    }
};