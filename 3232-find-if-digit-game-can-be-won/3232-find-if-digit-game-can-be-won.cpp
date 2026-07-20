class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int count=0;
        int sum=0;
        for(int i:nums){
            if(i<10){
                count+=i;
            }
            else if(i>=10){
                sum+=i;
            }
        }
        if(count==sum){
            return false;
        }
        else{
            return true;
        }
    }
};