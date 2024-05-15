https://zerojudge.tw/ShowProblem?problemid=b589
#include <iostream>
using namespace std;
 
int main() {
    int num, ans;
    while (cin >> num){
        if (num == 0) break;
        int a[num][4];
        for (int i = 0; i < num; i++){
            cin >> a[i][0];
        }
        a[0][1] = 0;
        a[0][2] = a[0][0];
        a[0][3] = a[0][0] * 2;
        for (int i = 1; i < num; i++){
            a[i][1] = max(a[i-1][1], max(a[i-1][2], a[i-1][3]));
            a[i][2] = max(a[i-1][1], a[i-1][2]) + a[i][0];
            a[i][3] = max(a[i-1][1], a[i-1][2]) + a[i][0] * 2;
        }
        ans = max(a[num-1][1], max(a[num-1][2], a[num-1][3]));
        cout << ans << "\n";
    }
}
