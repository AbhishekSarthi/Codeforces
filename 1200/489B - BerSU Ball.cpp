#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int boys[n];
	for(int i=0;i<n;i++)
	    cin>>boys[i];
	int m;
	cin>>m;
	int girls[m];
	for(int i=0;i<m;i++)
	    cin>>girls[i];
	int res=0;
	sort(boys, boys+n);
    sort(girls, girls+m);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (abs(boys[i] - girls[j]) <= 1)
            {
                girls[j] = 1000;
                res++;
                break;
            }
	 cout<<res;   
	return 0;
}
