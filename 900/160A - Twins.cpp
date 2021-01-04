#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    int total=0,sum=0;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        total+=a[i];
    }
        
    
    sort(a,a+n);
    for(int i=n-1;i>=0;i--){
        sum +=a[i];
        if(sum>total - sum){
            cout<<n-i;
            break;
        }
    }
        
    
    
	return 0;
}
