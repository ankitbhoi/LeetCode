class Solution {
public:
    int minimumSum(int n, int k) {
        vector<int>ans;
        vector<int>store;
        int i = 1;
        while(ans.size()!=n){
            if(find(store.begin(),store.end(),i)==store.end()){
                ans.push_back(i);
            }
            store.push_back(k-i);
            i=i+1;
        }
        int sum=0;
        for(auto it : ans){
            sum+=it;
        }
        return sum;
    }
};