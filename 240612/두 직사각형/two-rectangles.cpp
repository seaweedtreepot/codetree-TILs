#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int fs[4];
    int ss[4];

    for(int i = 0; i < 4; i++)
        cin >> fs[i];
    
    for(int j = 0; j < 4; j++){
        cin >> ss[j];
    }
    
    if(fs[2]<ss[0] || fs[3] < ss[1] || ss[2] < fs[0] || ss[3]< fs[1]){ 
        cout << "nonoverlapping";
        return 0;
    }

    
    cout << "overlapping";
    
    return 0;
}