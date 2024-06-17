#include <iostream>
using namespace std;

int move(int a,int b, char (&arr)[26],int n){
    int cnt = 0;
    for(int i = a; i < b; i++){
        char temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        cnt++;
    }
    return cnt;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    char arr[26];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i]!='A'+i){
            cnt += move(i,(int)(arr[i]-'A'),arr,n);
        }
    }

    cout << cnt ;
    return 0;
}