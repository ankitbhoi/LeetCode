//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int  xorr=0;
        for(auto it:nums){
            xorr^=it;
        }
        
        int count =0;
        while(xorr){
            if(xorr & 1){
                break;
            }
            count++;
            xorr=xorr>>1;
        }
        
        int setNum=0,unsetNum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] & (1<<count)){
                setNum=setNum ^ nums[i];
            }
            else{
                unsetNum=unsetNum ^ nums[i];
            }
        }
        vector<int>ans;
        ans.push_back(setNum);
        ans.push_back(unsetNum);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends