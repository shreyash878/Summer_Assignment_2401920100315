class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
          double sum =0; 
          for(int i=0;i<k;i++){ // creating first window of size k 
           sum += nums[i];
          }
          double maxaverage = sum/k; // compute average of first window
          for(int i = k;i<nums.size();i++){
            sum = sum - nums[i-k] + nums[i]; // slide window 
             maxaverage = max(sum/k,maxaverage); // compare prepare average to current average
          }
          return maxaverage;
    }
};
