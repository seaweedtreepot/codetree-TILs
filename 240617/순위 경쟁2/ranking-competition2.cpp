#include <iostream>
#include <utility>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    pair<int,int> ab= make_pair(0,0);
    int n,s;
    char c;
    cin >> n;
    int status = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cin >>c >> s;
        if(c=='A'){
            ab.first += s;
        }else{
            ab.second += s;
        }
        if(ab.first == ab.second && status!=0){
            cnt++;
            status = 0;
        }else if(ab.first>ab.second && status!=1){
            cnt++;
            status = 1;
        }else if(ab.first<ab.second && status!=2){
            cnt++;
            status = 2;
        }
    }

    cout << cnt;
    return 0;
}