#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int l;
    int h;
    cin >> n >> l;
    int arr[100];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(int i = 0; i < 101; i++){
        int lpoint = 0;
        int hpoint = 0;
        for(int j = 0; j < n; j++){
            if(arr[j]==i-1 && lpoint<l){
                lpoint++;
            }else if(arr[j]>=i){
                hpoint++;
            }
        }
        //cout << lpoint << " " << hpoint << endl;
        hpoint += lpoint;
        if(hpoint>=i){
            h = i;
        }
    }
    cout << h;
    return 0;
}