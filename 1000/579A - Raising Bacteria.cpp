#include <iostream>
#include<bits/stdc++.h> 
using namespace std;

int main() {

   int x,a=0;
   cin>>x;
   
   while(x){
       if(x&1)
            a++;
        x>>=1;    
   }
   
   cout<<a;
   
	return 0;
}
