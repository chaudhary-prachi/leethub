class Solution {
public:




    void merge(vector<int> &nums,int low,int mid,int high){

         vector<int>temp;
         int i=low;
         int j=mid+1;
        //  int k=0;
         while(i<=mid && j<=high){
            if(nums[i]<=nums[j]){
                // temp[k]=nums[i];
                temp.push_back(nums[i]);
                i++;
            }
            else{
                // temp[k]=nums[j];
                temp.push_back(nums[j]);
                j++;
            }
            // k++;
         }

         while(i<=mid){
            // temp[k]=nums[i];
            temp.push_back(nums[i]);
            i++;
            
         }
         while(j<=high){
            // temp[k]=nums[j];
            temp.push_back(nums[j]);
            j++;
            
         }


           for(int i = low, k = 0; i <= high; i++, k++) {
        nums[i] = temp[k];
}


        }

     void mergesort(vector<int>&nums,int low,int high){




        if(low>=high){
            return ;
        }
        int mid=(low+high)/2;
        mergesort(nums,low,mid);
        mergesort(nums,mid+1,high);

        merge(nums,low,mid,high);


       
  


        }

       
        



        
     
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);


        return nums;


    }
      
        
    
};