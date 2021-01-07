#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin>>n;
    
    if(stoi(n)>= 0)
        cout<<n;
    
    else{
        int x = n.length();
        
        if(n[x- 1]>n[x- 2]){
            n.erase(n.begin() + (x-1));
        }
        else{
            n.erase(n.begin() + (x-2));
        }
  
        cout<<stoi(n);
    }    

        
	return 0;
}
