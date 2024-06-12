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
            //cout << j << endl;
            if(dots[j].first <= i && i<=dots[j].second){
                flag =true;
            }else{
                //cout << "포함 안됨 " << endl;
                flag =false;
                break;
            }
        }
        if(flag){
            cout << "Yes";
            //cout << i << endl;
            return 0;
        }
    }
    cout << "No";
    return 0;
}