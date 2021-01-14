#include <bits/stdc++.h>
using namespace std;

int main() {
	
    string k;
    cin >> k;
    int n = k.size();
     
    vector<int> s(n);
     
    for (int i = 0; i < n - 1; i++) {
      if (k[i] == k[i + 1]) s[i] = 1;
    }
     
    for (int i = 1; i < n; i++) {
      s[i] += s[i - 1];
    }
     
    int m;
    cin >> m;
     
    for (int i = 0; i < m; i++) {
      int l, r;
      cin >> l >> r;
      if (l > 1) cout << s[r - 2] - s[l - 2];
      else cout << s[r - 2];
      cout << endl;
    }
	return 0;
}
