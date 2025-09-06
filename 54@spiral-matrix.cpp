class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int i,j,li=0,lj=0,hi=matrix.size()-1,hj=matrix[0].size()-1;
        vector<int> ans;
        while(li<hi && lj<hj)
        {
            i=li,j=lj;
            while(j<hj) ans.push_back(matrix[i][j]),j++;
            while(i<hi) ans.push_back(matrix[i][j]),i++;
            while(j>lj) ans.push_back(matrix[i][j]),j--;
            while(i>li) ans.push_back(matrix[i][j]),i--;
            li++,hi--,lj++,hj--;
        }
        if(li==hi) while(lj<=hj) ans.push_back(matrix[li][lj]),lj++;
        if(lj==hj) while(li<=hi) ans.push_back(matrix[li][lj]),li++;
        return ans;
    }
};