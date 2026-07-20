class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int>vec;
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        int d,e;
        while(nums.size()!=0){
            d=nums[nums.size()-1];
            nums.pop_back();
            e=nums[nums.size()-1];
            nums.pop_back();
            vec.push_back(e);
            vec.push_back(d);
        }
        return vec;
    }
};