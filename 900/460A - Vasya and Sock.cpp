#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    
    int s = 0;
    s = n + n/(m-1);
    if(n%(m-1) == 0)
        s -=1;
    
    cout<<s;
        
	return 0;
}
