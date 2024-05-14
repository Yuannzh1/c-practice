#include <iostream>
using namespace std;
 
int c = 0, n, m, a[1005][1005];
 
int main() {
    while (cin >> n >> m){
        c++;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        for (int i = 1; i < n; i++){
            a[i][0] += a[i-1][0];
        }
        for (int j = 1; j < m; j++){
            a[0][j] += a[0][j-1];
        }
        for (int i = 1; i < n; i++){
            for (int j = 1; j < m; j++){
                a[i][j] += min(a[i-1][j], a[i][j-1]);
            }
        }
        cout << "Case #" << c << " :\n" << a[n-1][m-1]<< "\n";
    }
}
