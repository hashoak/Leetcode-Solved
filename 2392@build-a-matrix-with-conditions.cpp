class Solution {

    int topoSort(int i,vector<vector<int>> &adj,vector<bool> &v,vector<int> &st,vector<bool> &pt) {
        if(pt[i]) return 0;
        if(v[i]) return 1;
        pt[i]=1;
        v[i]=1;
        for(int j:adj[i]) if(!topoSort(j,adj,v,st,pt)) return 0;
        pt[i]=0;
        st.push_back(i);
        return 1;
    }

public:
    vector<vector<int>> buildMatrix(int k, vector<vector<int>>& rc, vector<vector<int>>& cc) {
        vector<int> st,rp(k),cp(k);
        vector<vector<int>> adj(k,vector<int>());
        vector<bool> v(k,0),pt(k,0);

        for(auto i:rc) adj[i[0]-1].push_back(i[1]-1);
        for(int i=0;i<k;i++)
            if(!v[i] && !topoSort(i,adj,v,st,pt))
                return vector<vector<int>>();
        for(int i=0;i<k;i++) rp[st[i]]=k-i-1;
        // for(int i=0;i<k;i++) cout<<rp[i]<<" ";
        // cout<<"\n";

        adj.clear(),v.clear(),st.clear(),pt.clear();
        adj.resize(k,vector<int>());
        v.resize(k,0);
        pt.resize(k,0);

        for(auto i:cc) adj[i[0]-1].push_back(i[1]-1);
        for(int i=0;i<k;i++)
            if(!v[i] && !topoSort(i,adj,v,st,pt))
                return vector<vector<int>>();
        for(int i=0;i<k;i++) cp[st[i]]=k-i-1;
        // for(int i=0;i<k;i++) cout<<cp[i]<<" ";
        // cout<<"\n";

        vector<vector<int>> ans(k,vector<int>(k,0));
        for(int i=0;i<k;i++) ans[rp[i]][cp[i]]=i+1;
        return ans;
    }
};