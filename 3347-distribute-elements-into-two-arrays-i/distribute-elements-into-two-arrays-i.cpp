class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans1;
        ans1.push_back(nums[0]);
        vector<int>ans2;
        ans2.push_back(nums[1]);
        for(int i=2;i<n;i++){
            if(ans1.back()>ans2.back()){
                ans1.push_back(nums[i]);
            }
            else{
                ans2.push_back(nums[i]);
            }

        }
        vector<int>ans;
        for(int x:ans1){
            ans.push_back(x);
        }
        for(int x:ans2){
            ans.push_back(x);
        }

        return ans;
        
        
    }
};