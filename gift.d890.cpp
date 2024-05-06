#include <bits/stdc++.h>

using namespace std;


int main() {
	//typedef long long LL;
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin>>n>>k;
	int a[n];
	int totalcount = 0;
	for(int i=0; i<n; i++){
		cin>>a[i];  
		totalcount+=a[i];
	}
	int mid = totalcount/2;
	int count[mid+1] = {0};
	for(int i=0; i<n; i++){
		for(int j=mid; j>0; j--){
			if(j-a[i]>=0)
			count[j]=max(count[j],count[j-a[i]]+a[i]);
		}
	}
	cout<<count[mid]<<" "<<totalcount-count[mid];
    return 0;
}