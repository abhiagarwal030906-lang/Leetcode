class Solution {
public:
    int countKeyChanges(string s) {
      int count=0;
      for(int i=0;i<s.length()-1;i++){
        if((int)s[i]-(int)s[i+1]!=32 && (int)s[i]-(int)s[i+1]!=-32 && (int)s[i]-(int)s[i+1]!=0){
            count++;
        }
       
      }
      return count;
    }
};