#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    string str;
    int arr[1000];
    cin >> n;
    cin >> str;
    for(int i = 0; i < n; i++)
        arr[i] = str[i]-48;

    int max = 0;
    int min = 1000;
    for(int q = 0; q < n; q++){
        if(arr[q]==1) continue;
        min = 1000;
        int cnt = 0;
        arr[q] = 1;
        for(int i = 1; i < n; i++){
            cnt++;
            if(arr[i]==1){
                if(min > cnt){
                    min = cnt;
                    
                }
                cnt = 0;
            }
        }
        if(min > max){
            max = min;
        }
        //cout << min << endl;
        arr[q]=0;
    }

    cout << max << endl;
    return 0;
}