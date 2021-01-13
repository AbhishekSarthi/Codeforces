#include <iostream>
#include<bits/stdc++.h> 
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        int n,m,x,y,c=0;
        int res=0;
        char a[n][m];
        
        cin>>n>>m>>x>>y;
        
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                cin>>a[i][j];
        
        if( y > 2 * x ){
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(a[i][j] == '.')
                        // c++;
                        res += x;
                }
            }
            // cout<<c<<"  ";
        }
        
        else{
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if( j+1 < m && a[i][j] == '.' && a[i][j+1] =='.'){
                        res += y;
                        j++;
                    }
                    else if(a[i][j] =='.')
                        res += x;
                
                }
            }
        
        }
    
      cout<<res<<"\n"; 
                
    }
    
    
//     while(t--){
//      int m,n,x,y;
// 		cin>>n>>m>>x>>y;
// 		for(i=0;i<n;i++)scanf("%s",map[i]);
// 		cnt1=cnt2=0;
// 		for(i=0;i<n;i++){
// 			j=0;
// 			while(j<m){
// 				if(map[i][j]=='.'&&map[i][j+1]=='.')cnt2++,j+=2;
// 				else if(map[i][j]=='.')cnt1++,j+=1;
// 				else j+=1;
// 			}
// 		}
// 		if(x<=y/2)ans=x*(cnt1+cnt2*2);
// 		else ans=x*cnt1+y*cnt2;
// 		printf("%d\n",ans);
// 	}

    
    
    
    
    
    
    
    
	return 0;
}
