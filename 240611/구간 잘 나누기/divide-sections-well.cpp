#include <iostream>
#include <climits>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m,arr[100];
    cin >> n >> m ;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int ans = INT_MAX;


    for(int i = 1; i < 10000; i++){//구간당 최대값
        int max=  0;
        int mcnt = 0;
        for(int j = 0; j < n; j++){
            max += arr[j];
            if(max > i){
                max = arr[j];
                mcnt++;
                //cout << i << " : " << max << " : " << mcnt<<" : "<< j << endl;
                
            }
            if(mcnt>m-1){
                break;
            }
        }
        if(mcnt == m-1){
            cout << i<<endl;
            return 0;
        }

    }
    return 0;
}