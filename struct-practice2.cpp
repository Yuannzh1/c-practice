#include <iostream>
using namespace std;
struct point {
int point;
};
typedef struct point t_point;
int main()
{
int point;
t_point p;
cin >> point;
p.point = point;
cout<<"p.point: "<<p.point<<endl;
return 0;
}
