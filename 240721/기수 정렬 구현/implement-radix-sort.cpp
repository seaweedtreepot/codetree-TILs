#include <iostream>
#include <vector>
using namespace std;

int fun(int n,int a){
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans = a%10;
        a/=10;
    }
    return ans;
}
int main() {//해설의 17,19행을 참고하면 더 좋음
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[100000];
    int bigg =0 ;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i]>bigg){
            bigg = arr[i];
        }
    }
    int k = 0;
    while(bigg!=0){
        bigg/=10;
        k++;
    }

    for(int i = 1; i <= k; i++){
        vector<vector<int>> v(10);
        for(int j = 0; j < n; j++){
            v[fun(i,arr[j])].push_back(arr[j]);
        }
        int w = 0;
        for(int j= 0; j < 10; j++){
            for(int q = 0; q < v[j].size(); q++){
                arr[w++] = v[j][q];
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}