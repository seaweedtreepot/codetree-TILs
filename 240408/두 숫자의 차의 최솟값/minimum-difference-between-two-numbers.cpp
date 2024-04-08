#include <iostream>
#include <climits>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n, arr[10];
    cin >> n;
    int min = INT_MAX;
    for(int i = 0; i < n ; i++){
        for(int j = i+1; j < n;i++){
            int compare ;
            if(arr[i]- arr[j] < 0){
                compare = -(arr[i]-arr[j]);
            }else{
                compare = arr[i]-arr[j];
            }

            if(compare < min){
                min = compare;
            }
        }
    }
    cout << min;
    return 0;
}