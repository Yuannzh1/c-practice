#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<pair<int, int>> a(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i].first >> a[i].second;
	}
	sort(a.begin(), a.end()); //當你對 a 使用 sort 函式時，它會按照默認的比較規則進行排序，也就是先比較 pair 的 first，如果 first 相同，則再比較 second。
	int ans = 0;
	int L = -1, R = -1;
	for(auto [ll, rr] : a) {
		if(ll > R) {
			ans += R - L; //統計前一線端之長度 EX：前一線段為2-5，下一線段為6-7就需要先結算點長度
			L = ll, R = rr; //記錄新的左端點和右端點
		} else {
			R = max(R, rr); //若是有重疊，只要更新右端點就好 EX：前一線段為2-5。下一線段為4-7 更新右區段為7 最後可計算2-7
		}
	}
	ans += R - L;
	cout << ans << "\n";
	return 0;
}
