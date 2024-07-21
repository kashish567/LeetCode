class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int x = g.size();
        int y= s.size();
        sort(g.begin(),g.end());
        sort(s.begin(), s.end());
        int l=0,r=0;
        while(l<x && r<y){
                if(g[l]<=s[r]){
                    l=l+1;
                }
                r=r+1;
        }
        return l;
    }
};