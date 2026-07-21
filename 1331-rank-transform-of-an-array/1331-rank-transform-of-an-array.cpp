class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>vec;
        int count=0;
        vector<int>arr1;
        arr1=arr;
        sort(arr1.begin(),arr1.end());
        unordered_map<int,int>m;
        for(int i=0;i<arr.size();i++){
            count++;
            if(i>0){
            if(arr1[i-1]==arr1[i]){
                count--;
            }
            }
            m[arr1[i]]=count;
        }
        for(int i=0;i<arr.size();i++){
            vec.push_back(m[arr[i]]);
        }
        return vec;

    }
};