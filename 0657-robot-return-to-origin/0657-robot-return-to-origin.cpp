class Solution {
public:
    bool judgeCircle(string moves) {
        map<char,int>m;
        for(int i=0;i<moves.length();i++){
            m[moves[i]]++;
        }
        if(m['U']==m['D'] && m['L']==m['R']){
            return true;
        }
        else{
            return false;
        }

    }
};