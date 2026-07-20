class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int>vec;
        for(int i=0;i<accounts.size();i++){
            int count=0;
            for(int j=0;j<accounts[i].size();j++){
                 count+=accounts[i][j];
            }
            vec.push_back(count);
        }
        int d=*max_element(vec.begin(),vec.end());
        return d;
    }
};