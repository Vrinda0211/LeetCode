class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int sp=0,gp=0;
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        while(sp<s.size() && gp<g.size() )
        {
            if(s[sp]>=g[gp])
                gp+=1;
            sp+=1;
        }
        return gp;
    }
};