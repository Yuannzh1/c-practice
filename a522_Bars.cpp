#include <bits/stdc++.h>

using namespace std;


int main() {
	//typedef long long LL;
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t>0){
		int n, p;//n 長度, p 個數
		cin>>n>>p;
		int lon[p]={0};
		for(int i=0; i<p; i++){
			cin>>lon[i];
		}
		
		int dp[n+1]={0};
		for(int j=0; j<p; j++){
			for(int i=n; i>0; i--){
				if(i>=lon[j]){
					dp[i] = max(dp[i], dp[i - lon[j]] + lon[j]);
				}
			}
		}
		
		if(dp[n]==n) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		t--;
	}
	
    return 0;
}
