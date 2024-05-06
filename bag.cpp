#include <bits/stdc++.h>

using namespace std;
/*int max(int n, int m){
	if(n>m){
		return n;
	}
    if(m>n){
		return m;
	}
}*/

int main() {
	typedef long long LL;
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	vector<int> w;
    vector<int> v;
    int enter = 0;
    LL L;
    char input;
    
    while(enter != 1){
        LL num;
        cin >> num;
        w.push_back(num);
        input = cin.get();
        if(input == '\n'){
        	enter++; 
        }
    } 
    while(enter != 2){
        LL num1;
        cin >> num1;
        v.push_back(num1);
        input = cin.get();
        if(input == '\n'){
            enter++;
        }
    }
    cin >> L;
    /*
    for(auto& value : v) {
    	cout<<value<<" ";
	}
    cout<<endl;
    for(auto& weight : w) {
    	cout<<weight<<" ";
	}
    cout<<endl<<L;
    
    
    //LL map[a][L+1];
    //vector<vector<LL>> map(a, vector<LL>(L + 1, 0));
	
    for(int i=0; i<a; i++){
    	for(LL j=0; j<L+1; j++){
    		map[i][j] = 0;
    	}
    }
    for(LL j=0; j<L+1; j++){
    	if(w[0] > j) map[0][j] = 0;
    	else map[0][j] = v[0];
    }
    for(int i=0; i<a-1; i++){
    	for(LL j=0; j<L+1; j++){
    		if(w[i+1] > j){
    			map[i+1][j] = map[i][j];
    		}
    		else{
    			map[i+1][j] = max(map[i][j], map[i][j-w[i+1]]+v[i+1]);
    		}
    	}
    }
    */

    int a = v.size();
    vector<LL> dp(L + 1, 0);

    for (LL i = 0; i < a; i++) {
        for (LL j = L; j >= w[i]; j--) {
            dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
        }
    }

    cout << dp[L];
    return 0;
}
