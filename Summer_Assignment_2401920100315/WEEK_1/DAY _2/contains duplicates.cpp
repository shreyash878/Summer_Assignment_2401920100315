class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int , int> um;
        for(int x : nums){
            um[x]++;
        }
        for(auto it : um){
            if(it.second>=2){
                 return true;
            }    
        }
         return false;
    }
};
