class Solution {
public:
int add(int d){
        int count=0;
        while(d!=0){
        int ld=d%10;
        count+=ld;
        d=d/10;
        }
        return count;
      }
    int differenceOfSum(vector<int>& nums) {
      int sum=0;
      int plus=0;
      for(int i=0;i<nums.size();i++){
        plus+=nums[i];
        if(nums[i]>=10){
            sum+=add(nums[i]);
        }
        else{
            sum+=nums[i];
        }
      }
       int y=plus-sum;
       if(y<0){
        return (-y);
       }
       return y;
    }
};