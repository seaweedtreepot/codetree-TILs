#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    string str;
    int marr[20]={};
    cin >> n >> str;


    for(int i = 0; i < n; i++){
        if(str[i]=='1') {
            //cout << "skip" << endl;
            continue;
        }
        int arr[20];
        int min = 20;
        for(int j = 0; j < n; j++){
            arr[j] = str[j]-48;
        }
        arr[i] = 1;

        for(int q = 0; q < n; q++){
            //cout << arr[q] << " ";
        }
        //cout << endl;


        int cnt = 0;
        for(int j = 0; j < n-1; j++){
            if(arr[j]==1){
                for(int k = j+1; k < n; k++){
                    if(arr[k]==1){
                        cnt = k-j;
                        if(min > cnt){
                            min = cnt;
                        }
                    }
                }
            }
        }
        marr[i] = min;
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        //cout << marr[i] << " ";
        if(ans < marr[i]){
            ans = marr[i];
        }
    }
    //cout << endl;
    cout << ans;
    // 여기에 코드를 작성해주세요.
    return 0;
}