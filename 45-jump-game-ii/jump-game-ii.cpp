class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int jump=0;
        int end=0;
        int mxr=0;
        for(int i=0;i<n-1;i++){
            if(i+nums[i]>mxr){
                mxr=i+nums[i];
            }
            if(i==end){
                jump++;
            end=mxr;
            }
        }



        return jump;






        
    }
};