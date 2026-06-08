class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> ransomNote2;
        unordered_map<char , int > magazine2;
        for(char ch : ransomNote){
            ransomNote2[ch]++;
        }
        for(char ch : magazine){
            magazine2[ch]++;
        }
         bool present = true;

        for(auto &[ch, freq] : ransomNote2) {
           if(magazine2[ch] < freq) {
           present = false;
           break;
           
            }
        }
        return present;
    }
};
//approach
// create two map to store the freq of element of two string
// then check whether the freq and element of ransomNote is present in magazine or not 
// if present return true;
// else false
