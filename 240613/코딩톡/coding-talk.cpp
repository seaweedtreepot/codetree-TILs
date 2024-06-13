#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m,p;
    bool alphabet[26] ={};
    cin >> n >> m >> p;
    
    p--;
    char t1;
    int t2;
    for(int i = 0; i < m; i++){
        cin >> t1 >> t2;
        if(i==p && t2==0){
            return 0;
        }
        if(i >= p){
            
            alphabet[t1-'A']=true;;
        }
    }    

    for(int i = 0; i < n; i++){
        if(!alphabet[i]){
            cout << static_cast<char>(i+'A') << " ";
        }
    }
    return 0;
}