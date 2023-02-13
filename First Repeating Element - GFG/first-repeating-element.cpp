//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // code here
        int min=-1;
        set<int> s;
        for(int i=n-1;i>=0;i--){
            if(s.find(arr[i])!=s.end()){
                min=i;
            }
            else{
                s.insert(arr[i]);
            }
        }
        if(min!=-1){
            return min+1;
            // cout<< min+1<<" "<<arr[min]<<endl;
        }
        else{
            return -1;
            // cout<<"-1"<<endl;;
        }
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; ++i) cin >> arr[i];
        Solution ob;
        cout << ob.firstRepeated(arr, n) << "\n";
    }

    return 0;
}

// } Driver Code Ends