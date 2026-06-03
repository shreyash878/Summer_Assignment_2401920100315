class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        for (int i=0;i<nums.size();i++){
            if(nums[i]!=0){ // if right not equal to zero;
                swap(nums[i],nums[j]); // swap 
                j++;
            }
        }
    }
};
