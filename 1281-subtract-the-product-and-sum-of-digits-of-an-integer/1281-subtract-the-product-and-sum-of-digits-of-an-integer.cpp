class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int product=1;
        while(n){
            int ld=n%10;
            sum+=ld;
            product*=ld;
            n=n/10;
        }   
        return product-sum;
    }
};