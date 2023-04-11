class Solution {
public:
    vector<string> a;
    vector<string> letterCombinations(string digits) {
    if(digits.size()==0)
        return a;
    map<int,string> m;
    string b="";
    m[2]="abc";
    m[3]="def";
    m[4]="ghi";
    m[5]="jkl";
    m[6]="mno";
    m[7]="pqrs";
    m[8]="tuv";
    m[9]="wxyz";
    solve(b,m,0,digits);
    return a;
  }
  void solve(string b,map<int,string>& m,int j,string digits)
  {
      if(j==digits.size())
      {
          a.push_back(b);
          return;
      }
      map<int,string>::iterator itr=m.find(digits[j]-'0');
      string str=itr->second;
      // cout<<itr->first<<endl;
      int k=j+1;
      // string str= m[digits[j]-'0'];
      for(int i=0;i<str.size();i++)
      {
          b.push_back(str[i]);
          solve(b,m,k,digits);
          b.pop_back();
      }
  }
};
