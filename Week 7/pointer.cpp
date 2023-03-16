#include<iostream>
#include<cmath>
using namespace std;
struct Point{
    double x;
    double y;
};
void print(Point v){
    cout << "(" << v.x << ", " << v.y << ")";
}
Point mid_point(Point& m, Point& n){
    Point mid;
    mid.x = (m.x + n.x) / 2;
    mid.y = (m.y + n.y) / 2;
    return mid;
}
int main(){
    Point v;
    v.x =3;
    v.y =4;
    Point m;
    m.x = 5;
    m.y = 2;
    print(mid_point(v,m));
    return 0;
}