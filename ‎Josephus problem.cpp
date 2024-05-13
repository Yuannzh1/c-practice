//線性演算法
int josephus(int n, int k) {
  int res = 0;
  for (int i = 1; i <= n; ++i) res = (res + k) % i;
  return res;
}
//對數演算法
int josephus(int n, int k) {
  if (n == 1) return 0;
  if (k == 1) return n - 1;
  if (k > n) return (josephus(n - 1, k) + k) % n;  // 線性算法
  int res = josephus(n - n / k, k);
  res -= n % k;
  if (res < 0)
    res += n;  // mod n
  else
    res += res / (k - 1);  // 還原位置
  return res;
}
//公式推導
https://blog.csdn.net/u011500062/article/details/72855826

//c296
#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define R 1000000

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    LL n, m ,k;
    //n 個人
    //m 爆炸
    //k 次
    cin>>n>>m>>k;
    LL bomb=0;
    vector<bool> v(n+1, true);
     //alive
    for(LL i=0; i<k; i++){
    	LL count=0;
    	LL countstep=0;
    	while(countstep!=m){
    		count++;
    		LL pos = (bomb+count) % n;
    		if(pos==0) pos=n;
    		if(v[pos]){
    			countstep++;
    			if(countstep==m){
    				bomb = pos;
    				v[pos] = false;
    				break;
    			} 
    		}
    		else{
    			continue;
    		}
    	}
    }
    for(LL i=1; i<=n; i++){
    	LL pos = (bomb+i) % n;
    	if(pos==0) pos=n;
		if(v[pos]){
			cout<<pos<<endl;
			break;
		} 
	}
	
	return 0;

}
