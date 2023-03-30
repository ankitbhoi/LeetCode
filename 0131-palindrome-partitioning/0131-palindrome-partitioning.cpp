class Solution {
public:
    vector<vector<string>>ans;
    bool palin(string s, int start, int end) {
    while (start <= end) {
        if (s[start++] != s[end--])
            return false;
        }
        return true;
    }
    void parti(int ind,vector<string>&ds,string s){
        if(ind==s.size()){
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<s.size();i++){
            if(palin(s,ind,i)){
                ds.push_back(s.substr(ind, i - ind + 1));
                parti(i+1,ds,s);
                ds.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>ds;
        parti(0,ds,s);
        return ans;
    }
};