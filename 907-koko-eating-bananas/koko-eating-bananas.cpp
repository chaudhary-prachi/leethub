class Solution {
public:
// int maxspeed(vector<int>& piles){
//       int maxspeed=INT_MIN;
//         for(int i=0;i<piles.size();i++){
//             if(piles[i]>maxspeed){
//                 maxspeed=piles[i];
//             }
//         }
//         return maxspeed;
// }
// long long  calculateTime(vector<int>& piles, int  speed){
//     long time=0;
//     for(int i=0;i<piles.size();i++){
//         time+=ceil(double(piles[i])/double(speed));

//     }
//     return time;
// }
//     int minEatingSpeed(vector<int>& piles, int h) {
//        int left=1;
//     //    int ans=0;
//        int right=maxspeed(piles);
//        while(left<=right){
//         long long mid=left+(right-left)/2;
//         long long time=calculateTime(piles,mid);
//         if(time<=h){
//             // ans=mid;
//              right=mid-1;
//         }
//         else{
//             left=mid+1;
//         }
//        }

//        return left;

int maxspeed(vector<int>& piles){
    int maxspeed=INT_MIN;

    for(int i=0;i<piles.size();i++){
        if(piles[i]>maxspeed){
            maxspeed=piles[i];
        }

    }
    return maxspeed;
}

long long calculateTime(vector<int>& piles, int speed){
    long long time=0;
    for(int i=0;i<piles.size();i++){
        time+=ceil(double(piles[i])/double(speed));
    }
    return time;
}

 int minEatingSpeed(vector<int>& piles, int h) {
    int low=1;
    int right=maxspeed(piles);
    while(low<=right){
        int mid=low+(right-low)/2;
        long long time=calculateTime(piles,mid);
        if(time<=h){
            right=mid-1;
        }
        else{
            low=mid+1;
        }
    }

    return low;




        
    }
};