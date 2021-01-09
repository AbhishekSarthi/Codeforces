#include <iostream>
#include<bits/stdc++.h> 
using namespace std;

int main() {

    int m,n,a;
    long long x,y;
    cin>>m>>n>>a;
    
    x = n/a;
    y = m/a;
    
    if(n%a != 0)
        x++;
    if(m%a != 0)
        y++;
    
    cout<<x*y;    
   
	return 0;
}
