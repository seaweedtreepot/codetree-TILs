#include <iostream>
#include <algorithm>
using namespace std;

class Point{
    public :
    int x;
    int y;
    int num;
    Point(){
    }
};

int Distance(Point x){
    return x.x + x.y;
}

bool cmp(Point x, Point y){
    if(Distance(x)==Distance(y)){
        return x.num < y.num;
    }
    return Distance(x) < Distance(y);
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    Point p[1000];
    int a,b;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        p[i].x = a;
        p[i].y = b;
        p[i].num = i+1;
    }
    if(n==1){
        cout << p[0].num;
        return 0;
    }
    sort(p, p+n,cmp);

    for(int i = 0; i < n; i++){
        cout << p[i].num << endl;
    }


    return 0;
}