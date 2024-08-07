class Solution {
public:
    int beautySum(string s) {
        int sum=0;
        vector<int>cnt(26,0);
        for(int i=0;i<s.length();i++)
        {     
            for(int j=i;j<s.length();j++)
            {   
                int ind=s[j]-'a';
                cnt[ind]++;
                int maxi=INT_MIN;
                int mini=INT_MAX;
                for(int i=0;i<26;i++)
                {
                    maxi=max(cnt[i],maxi);
                    if(cnt[i]!=0 && cnt[i]<mini)
                    mini=cnt[i];
                }                
                sum +=(maxi-mini);
            }
            for(int i=0;i<26;i++)
            {
                cnt[i]=0;
            }
        }
      return sum;
    }
};