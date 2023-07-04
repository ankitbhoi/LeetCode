//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
    int largest = 0;
    int secondLargest = -1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[largest]) {
            secondLargest = largest;
            largest = i;
        } else if (arr[i] != arr[largest]) {
            if (secondLargest == -1 || arr[i] > arr[secondLargest])
                secondLargest = i;
        }
    }

    if (secondLargest == -1)
        return -1; // No second-largest element found
    else
        return arr[secondLargest];
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
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends