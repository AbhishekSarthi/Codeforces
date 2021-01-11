#include <iostream>
#include<bits/stdc++.h> 
using namespace std;

int main() {

    int n,t;
    cin>>n>>t;
    int A[n];
    for(int i=1;i<n;i++)
        cin>>A[i];
   
   A[n]=1;
   for(int i=1;i<=n;i += A[i]){
       if(i==t){
        cout<<"YES";
        return 0;
       }
         
   }
    cout<<"NO";
   
	return 0;
}
