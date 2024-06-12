#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int x[4];

    for(int i = 0;i < 4; i++){
        cin >> x[i];
        //cout << 1;
    }

    if(x[0] <= x[2] && x[2] <= x[1] ){
        cout << "intersecting" ;    
        return 0;
    }

    if(x[0] <= x[3] && x[3] <= x[1] ){
         cout << "intersecting" ;    
        return 0;
    }

    if(x[2] <= x[0] && x[0] <= x[3] ){
        cout << "intersecting" ;    
        return 0;
    }

    if(x[2] <= x[1] && x[1] <= x[3] ){
        cout << "intersecting" ;    
        return 0;
    }

    cout << "nonintersecting" ;
    return 0;
}