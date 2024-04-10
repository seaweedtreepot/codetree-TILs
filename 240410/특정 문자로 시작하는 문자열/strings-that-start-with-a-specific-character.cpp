#include <iostream>
#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string arr[20];
    char a;
    int n;
    int sum=0;
    int cnt = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> a;
    for(int i = 0; i < n; i++){
        if(arr[i][0]==a){
            sum += arr[i].length();
            cnt++;
        }
    }
    cout.precision(2);
    cout << cnt << " " <<fixed << (double)sum/cnt;

    return 0;
}