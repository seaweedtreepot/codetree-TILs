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
    for(int i = 0; i < n; i++){
        arr[i] = str[i]-48;
    }

    int ans = 0;
    for(int i = 0; i < n ;i++){
        if(arr[i]==1){
            continue;
        }
        arr[i] = 1;

        int min_dis = n;
        for(int j = 0; j < n; j++){
            if(arr[j]==1){
                //cout << "111111" << endl;
                for(int k = j+1; k < n; k++){
                    if(arr[k]==1){
                        //cout << "min_dis" << endl;
                        if(min_dis > k-j){
                            min_dis = k-j;
                        }
                    }
                }
            }
        }

        if(min_dis > ans){
            ans = min_dis;
        }
        arr[i]= 0;
    }

    cout << ans;
    return 0;
}