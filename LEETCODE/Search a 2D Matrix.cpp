class Solution {
public:
    int b_s_row(vector<vector<int>>& matrix,int key)
{
    int row=matrix.size();
    int col=matrix[0].size();
    int low=0,high=row-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(matrix[mid][0]<=key && key<=matrix[mid][col-1])
            return mid;
        else if(matrix[mid][col-1]<key)
        {
            low=mid+1;
        }    
        else
        {
            high=mid-1;
        }
    }
    return -1;
}

int b_s_col(vector<vector<int>>& matrix,int row,int key)
{
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
    return 0;
}

bool searchMatrix(vector<vector<int> >& matrix,int key)
{
    int rows=matrix.size();
    int cols=0;
    if(rows>0)
        cols=matrix[0].size();
    if(rows==0 || cols==0)
        return 0;
    int possible_row=b_s_row(matrix,key);
    if(possible_row==-1)
        return 0;
    int possible_col=b_s_col(matrix,possible_row,key);
    return possible_col;
    
}

};
