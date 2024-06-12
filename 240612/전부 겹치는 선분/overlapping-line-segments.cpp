#include <iostream>
#include <utility>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,t1,t2;
    cin >> n;
    pair<int,int> dots[100];

    for(int i = 0; i < n; i++){
        cin >> t1 >> t2;
        dots[i] = make_pair(t1,t2);
    }

    bool flag = false;

    for(int i = 0; i < 100; i++){
        for(int j = 0; j < n; j++){
            if(dots[i].first <= i && i<=dots[i].second){
                flag =true;
            }else{
                flag =false;
                break;
            }
        }
        if(flag){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    return 0;
}