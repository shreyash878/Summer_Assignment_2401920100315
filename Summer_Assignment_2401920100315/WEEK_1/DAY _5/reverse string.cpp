class Solution {
public:
    void reverseString(vector<char>& s) {
        int left =0;  // use two pointer method to solve
        int right = s.size()-1;
        while(left<right){
            swap(s[left],s[right]); // swap left and right values
            left++;
            right--;
        }
    }
};
