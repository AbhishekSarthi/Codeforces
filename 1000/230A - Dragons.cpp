#include <iostream>
#include<bits/stdc++.h> 
using namespace std;

int main() {

    int s,n;
    cin>>s>>n;
    int x[n],y[n];
    int flag = 1;
     vector< pair <int,int> > v;
    for(int i=0;i<n;i++)
        cin>>x[i]>>y[i];
   
   for (int i=0; i<n; i++) 
        v.push_back( make_pair( x[i] , y[i]) ); 
   
   sort(v.begin(), v.end());
   
   for(int i=0;i<n;i++){
       if(s > v[i].first){
            s += v[i].second;
        }
        else{
            cout<<"NO";
            flag = 0;
            break;
        }
   } 
   
   if(flag == 1){
       cout<<"YES";
   }
   
   
	return 0;
}
