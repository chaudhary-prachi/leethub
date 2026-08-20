class Solution {
public:
    int maxProduct(int n) {
        vector<int>ans;
        while(n>0){
            int r=n%10;
            ans.push_back(r);
            n/=10;
        }

        int largest=0;
        int second=0;
        for(int x:ans){
            if(x>largest){
                second=largest;
                largest=x;
            }
            else if(x>second){
                second=x;
            }
        }

        return second*largest;

        
    }
};