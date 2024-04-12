#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    int q;

    cin >> s >> q;
    int a; 
    for(int i = 0; i < q; i++){
        cin >> a;

        if(a == 1){
            int b , c;
            cin >> b >> c;
            int temp = s[b-1];
            s[b-1] = s[c-1];
            s[c-1]= temp;
            cout << s << endl;

        }else if (a==2){
            char b, c;
            cin >> b >> c;

            for(int i = 0; i < s.length(); i++){
                if(s[i]==b){
                    s[i]=c;
                }
            }
            cout << s << endl;
        }

    }
    return 0;
}