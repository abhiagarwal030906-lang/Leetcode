class Solution {
public:
    int calPoints(vector<string>& operations) {
        int count=0;
        int d;
        int e;
        int f;
        vector<int>vec;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C"){
                vec.pop_back();
            }
            else if(operations[i]=="D"){
                d=vec[vec.size()-1]*2;
                vec.push_back(d);
            }
            else if(operations[i]=="+"){
                e=vec[vec.size()-1]+vec[vec.size()-2];
                vec.push_back(e);
            }
            else{
                f=stoi(operations[i]);
                vec.push_back(f);
            }
        }
        for(int i:vec){
            count+=i;
        }
        return count;
    }
};