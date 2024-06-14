#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    //그냥 a에서 b로 걸어가기
    //a에서 x 다음 y 로 텔레포트 한다음 가기
    //a에서 y 다음 x 로 텔레포트 하기
    int a,b,x,y;
    cin >> a >> b >> x >> y ;
    int mi = abs(a-b);

    int temp = abs(a-x) + abs(y-b);
    mi = min(mi,temp);

    temp = abs(a-y) + abs(x-b);

    mi = min(mi,temp);

    cout << mi;
    
    return 0;
}