class Solution {
public:
    int countDigits(int num) {
        int d=num;
        int count=0;
        int ld;
        while(d!=0){
           ld=d%10;
           if(num%ld==0){
            count++;
           }
           d=d/10;

        }
        return count;
    }
};