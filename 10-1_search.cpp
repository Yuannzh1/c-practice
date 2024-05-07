/*10_1.搜尋-循序搜尋法(25.0)*/
#include <bits/stdc++.h>
//#include <iostream>
using namespace std;
int main() {
    vector<int> a;
    vector<int> b;
    int i=0;
    while(i!=-1){
        cin>>i;
        a.push_back(i);
    }
   
    while(scanf("%d", &i)!=EOF){
        bool c=0;
        for(int j=0; j<a.size();j++){
            if(i==a[j]){
                b.push_back(j);
                c=1;
            }
        }
        if(c==0){
            b.push_back(-1);
        }
        
    }
    for(int j=0; j<b.size();j++){
        cout<<b[j]<<endl;    
    }
    return 0;
}


