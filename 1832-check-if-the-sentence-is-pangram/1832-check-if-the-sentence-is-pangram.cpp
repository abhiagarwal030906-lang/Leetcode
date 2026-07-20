class Solution {
public:
    bool checkIfPangram(string sentence) {
        int count=0;
          map<char,int>m;
          for(int i=0;i<sentence.length();i++){
            m[sentence[i]]++;
          } 
          for(auto i:m){
            count++;
          }
          if(count==26){
            return true;
          }
          return false;

    }
};