class Solution {
public:
    int differenceOfSums(int n, int m) {
      int num1=0;
      int sum=0;
      int num2=0;
      for(int i=1;i<=n;i++){
        sum+=i;
        if(i%m==0){
            num2+=i;
        }
        num1=sum-num2;
      }
      return num1-num2;

    }
};