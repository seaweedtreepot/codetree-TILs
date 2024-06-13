#include <iostream>
#include <utility>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m,p;
    bool alphabet[26] ={};
    pair<int,int> log[100];

    cin >> n >> m >> p;
    p--;
    
    char t1;
    int t2;
    
    for(int i = 0; i < m; i++){
        cin >> t1 >> t2;
        log[i] = make_pair(t1-'A',t2);
    }

   
    if(log[p].second == 0){
        cout << "stop";
        return 0;
    }

    for(int i = p; i < n; i++){
        alphabet[log[i].first] = true;
    }
    for(int i = p ; i >= 0; i--){
        if(log[p].second == log[i].second){
            alphabet[log[i].first] = true;
        }else{
            break;
        }
    }
    for(int i = 0; i < n; i++){
        if(!alphabet[i]){
            cout << (char)(i+'A') << " ";
        }
    }
    return 0;
}