#include <iostream>
#include <climits>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    int arr[100];
    int max = INT_MIN;

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    
    for(int i = 0; i < n; i++){
        int cur = i;
        int point = 0;
        for(int j = 0; j < m; j++){
            point += arr[cur];
            cur = arr[cur]-1;
        }
        
        //cout <<point <<  endl;
        if(point > max){
            max = point;
        }
    }

    cout << max;
    return 0;
}