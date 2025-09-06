class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n,vector<int> (n,0));
        int i=0,j=0,x=1;
        while(x<n*n)
        {
            while(j<n-1 && !matrix[i][j+1]) matrix[i][j]=x++,j++;
            while(i<n-1 && !matrix[i+1][j]) matrix[i][j]=x++,i++;
            while(j>0 && !matrix[i][j-1]) matrix[i][j]=x++,j--;
            while(i>0 && !matrix[i-1][j]) matrix[i][j]=x++,i--;
        }
        matrix[i][j]=x;
        return matrix;
    }
};