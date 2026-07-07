class Solution {
public:
    long long sumAndMultiply(int n) {
        long sum=0;
        long place=1;
        long num=0;
        while(n>0){
            int d=n%10;
            sum+=d;
            if(d!=0){
                num+=d*place;
                place*=10;
            }
            n/=10;
        }


        return sum*num;
        
    }
};