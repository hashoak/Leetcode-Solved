class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(),products.end());
        int n=searchWord.length();
        vector<vector<string>> ans(n,vector<string>());
        for(int i=0;i<n;i++) {
            for(int j=0;j<products.size();j++)
                if(products[j][i]!=searchWord[i])
                    products.erase(products.begin()+j--);
            for(int j=0;j<min(3,int(products.size()));j++)
                ans[i].push_back(products[j]);
        }
        return ans;
    }
};