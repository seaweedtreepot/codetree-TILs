#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n; cin >> n;
    int x=0;
    int current=0;
    char cur;
    int arr[2001]={};
    arr[1000]= 1;

    for(int i =0; i < n; i++){
        cin >> x >> cur;
        arr[current+1000]++;
        if(cur == 'R'){
            while(x!=0){
                current++;
                arr[current+1000]++;
                x--;
            }
            
        }else if (cur=='L'){
            while(x!=0){
                current--;
                arr[current+1000]++;
                x--;
            }
        }
        //cout << current << endl;
    }
    cout << endl;
    int cnt =0;
    for(int i = 0; i < 2000;i++){
        if(arr[i]>=2 && arr[i+1]>=2){
            cnt++;
         //   cout << i-1000 << " " << i-999 << endl;
        }
    }
    cout << cnt;
    return 0;
}