class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> arr=matrix;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    for(int a=0;a<matrix.size();a++)
                    {
                     arr[a][j]=0;
                    }
                    for(int a=0;a<matrix[0].size();a++)
                    {
                     arr[i][a]=0;
                    }
                }
            }
        }
        matrix=arr;
    }
};