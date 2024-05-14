#include <iostream>
#include <cstdlib>
#include <climits>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int s,n;
    int arr[100];
    cin >> n >> s;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int min = INT_MAX;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            int cur = 0;
            for(int h = 0; h < n; h++){
                if(h==i || h == j){
                continue;
                }else{
                    cur+= arr[h];
                    //cout << arr[h] << " ";
                }
            }
            //cout << cur <<  endl;
            if(abs(s-cur)<min){
                min = abs(s-cur);
            }
        }
    }
    cout << min;
    return 0;
}