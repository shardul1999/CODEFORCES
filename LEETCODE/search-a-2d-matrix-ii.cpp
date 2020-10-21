class Solution {
public:
   int b_s_col(vector<vector<int>>& matrix,int row,int key)
{
        if(matrix.empty())
        return false;
    int cols=matrix[0].size();
    int low=0;
    int high=cols-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(matrix[row][mid]==key)
            return true;
        else if(matrix[row][mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}

bool searchMatrix(vector<vector<int> >& matrix,int key)
{
    int rows=matrix.size();
    int cols=0;
    if(rows>0)
        cols=matrix[0].size();
    if(rows==0 || cols==0)
        return 0;
    for(int i=0;i<rows;i++)
    {
        int possible_col=b_s_col(matrix,i,key);
        if(possible_col==1)
        {
            return true;
        }
    }
    return false;
    
}
};
