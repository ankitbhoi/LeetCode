class Solution {
public:
    vector<string>ans;
    void combo(int ind,string ds,map<char,string>mp,string digits){
        if(ind==digits.size()){
            ans.push_back(ds);
            return;
        }
        
        string s1= mp[digits[ind]]; //digits[0]=2 and 2 is mapped to abc;
        for(int i=0;i<s1.length();i++){
            ds.push_back(s1[i]);
            combo(ind+1,ds,mp,digits);
            ds.pop_back();
        }
        
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0){
            return ans;
        }
        map<char,string>mp;
        mp.insert({'2',"abc"});
        mp.insert({'3',"def"});
        mp.insert({'4',"ghi"});
        mp.insert({'5',"jkl"});
        mp.insert({'6',"mno"});
        mp.insert({'7',"pqrs"});
        mp.insert({'8',"tuv"});
        mp.insert({'9',"wxyz"});
        
        combo(0,"",mp,digits);
        
        return ans;
    }
};