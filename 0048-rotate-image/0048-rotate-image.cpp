class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> arr(m,vector<int>(n));
        int a=0,b=0;
        for(int i=n-1;i>=0;i--)
        {
            b=0;
            for(int j=0;j<m;j++)
            {
                arr[b][a]=matrix[i][j];
                b+=1;
            }
             a+=1;
        }
        matrix=arr;
        
    }
};