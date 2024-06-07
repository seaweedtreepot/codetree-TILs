#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    string str;
    int carr[20]={};
    //int arr[20];
    cin >> n >> str;
    int key = 0;
    
    for(int i = 0; i < n; i++){
        if(str[i]-48==1) continue;

        int copy[20];
        for(int i = 0; i < n; i++){
            copy[i] = str[i]-48;
        }
        copy[i] = 1;


        int cnt = 0;
        int min = 100;

        for(int j = 0; j < n; j++){
            if(copy[j]==0){
                cnt++;
            }else{
                if(min > cnt && cnt!=0){
                    min = cnt;
                    //cout << min << endl;
                }
                cnt = 0;
            }
        }
        //cout << min << endl;
        carr[key++] = min;
    }
    
    int ans=0;
    for(int i = 0; i < n; i++){
        //cout << carr[i] << " ";
        if(ans < carr[i]){
            ans = carr[i];
        }
    }

    cout << ans;
    return 0;
}