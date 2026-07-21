class Solution {
public:
string palindrome(string s){
    string r=s;
    for(int i=0;i<s.length()-1;i++){
        r[i]=s[s.length()-1-i];
    }
    return r;
}
    string firstPalindrome(vector<string>& words) {
        for(auto i:words){
            if(i==palindrome(i)){
                return i;
            }
        }
        return "";
    }
};