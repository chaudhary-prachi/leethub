class Solution {
public:
    int minimumPushes(string word) {
        vector<int>ans(26,0);
        for(char ch:word){
            ans[ch-'a']++;
        }
        sort(ans.begin(),ans.end(),greater<int>());
        int a=0;
        for(int i=0;i<26;i++){
            if(ans[i]==0) break;
            int cost=i/8+1;
            a+=ans[i]*cost;
        }


        return a;
        
    }
};