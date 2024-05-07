#include <iostream>
using namespace std;
struct point {//結構標籤
int point; //結構內成員
};
typedef struct point t_point;
int main()
{
int point; //結構外名稱
t_point p;
cin >> point;
p.point = point;
cout<<"p.point: "<<p.point<<endl;
return 0;
}
//總結：結構內的成員變數名稱與外部的變數名稱是可以相同的。
//總結：結構標籤與結構成員的名稱是可以相同的
