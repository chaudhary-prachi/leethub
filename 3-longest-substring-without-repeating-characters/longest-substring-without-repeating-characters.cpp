class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,maxlength=0;
        map<char,int>mp;
        int n=s.size();
        for(int r=0;r<n;r++){
            if(mp.find(s[r])!=mp.end() && mp[s[r]]>=l){
                l=mp[s[r]]+1;
            }

            mp[s[r]]=r;
            maxlength=max(maxlength,r-l+1);

        }


        return maxlength;

        
    }
};