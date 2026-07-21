class Solution {
public:
int gcd(int a,int b){
    for(int i=a;i>=1;i--){
        if(a%i==0 && b%i==0){
            return i;
        }
    }
    return 1;
}
    int findGCD(vector<int>& nums) {
        int d=gcd(*min_element(nums.begin(),nums.end()),*max_element(nums.begin(),nums.end()));
        return d;
    }
};