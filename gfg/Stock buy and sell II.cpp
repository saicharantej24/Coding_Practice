//{ Driver Code Starts
// Program to find best buying and selling days
#include <bits/stdc++.h>

using namespace std;

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int *, int);

// Driver program to test above functions
int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, i;
        cin >> n;
        int price[n];
        for (i = 0; i < n; i++) cin >> price[i];
        // function call
        stockBuySell(price, n);
    }
    return 0;
}

// } Driver Code Ends


// User function template for C++

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int price[], int n) {
    bool temp=false;
    bool temp2=false;
    for(int i=1;i<n;i++){
        if(price[i]>price[i-1] && temp==false){
            cout<<"("<<i-1<<" ";
            temp=true;
            temp2=true;
        }
        if(price[i]<price[i-1] && temp==true){
            cout<<i-1<<")"<<" ";
            temp=false;
        }
        
    }
    if(temp==true){
        cout<<n-1<<")";
    }
    if(temp2==false){
        cout<<"No Profit";
    }
    cout<<endl;
}