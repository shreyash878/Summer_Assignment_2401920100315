class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans; // create a new vector 
        for(int x : nums){
            ans.push_back(x*x); // push square value in ans
        }
        sort(ans.begin(),ans.end()); // sort array in ascending order
        return ans;

    }
};
