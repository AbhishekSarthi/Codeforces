#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int A[n];
    float sum = 0;
    for(int i=0;i<n;i++){
        cin>>A[i];
        sum += A[i];
    }
        
    cout<<sum/n;
    
    
    
	return 0;
}
