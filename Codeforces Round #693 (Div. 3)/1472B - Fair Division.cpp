#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
      int n,c1=0,c2=0,sum=0;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i] == 1)
            c1++;
        else
            c2++;
      }
      
      sum = c1 + 2*c2;
      
      if(sum %2 != 0)
        cout<<"NO";
      else{
          sum /= 2;
          if(sum % 2 == 0 || (sum % 2 == 1 && c1 != 0) )
            cout<<"YES";
          else
          cout<<"NO";
      }    
        
      
        cout<<"\n";
            
    }
    
    
    return 0;
}
