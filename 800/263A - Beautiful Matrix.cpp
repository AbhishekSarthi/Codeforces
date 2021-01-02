#include <iostream>
#include<algorithm> 
using namespace std;

int main() {
  
  int A[5][5],res = 0;
  
  for(int i=0;i<5;i++)
    for(int j=0;j<5;j++)
        cin>>A[i][j];
    
  for(int i=0;i<5;i++)
    for(int j=0;j<5;j++)
        if(A[i][j] == 1){
            res = abs(2-i) + abs(2-j);
            break;
        }
    
   cout<<res; 
    
  
}
