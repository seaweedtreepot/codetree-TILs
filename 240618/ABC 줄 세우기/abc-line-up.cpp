#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    char arr[26];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int cnt =0;
    for(int i = 0; i < n; i++){
        if(arr[i]!=i+'A'){
            for(int j = 0; j < n; j++){
                if(arr[j]==i+'A'){
                    if(i > j){
                        for(int k = j; j < i; k++){
                            char temp = arr[k];
                            arr[k] = arr[k+1];
                            arr[k+1] = temp;
                            cnt++;
                        }
                    }else{
                        for(int k = j; k > i; k--){
                            char temp = arr[k];
                            arr[k] = arr[k-1];
                            arr[k-1] = temp;
                            cnt++;
                        }
                    }
                }
            }
            
        }
    }

    cout << cnt;
    return 0;
}