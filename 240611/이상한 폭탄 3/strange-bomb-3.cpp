#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,k;
    int arr[100];
    pair<int,int> grid[100];
    int max = 0;
    int ans = 0;
    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        grid[i] = make_pair(arr[i],i);
    }

    sort(grid,grid+n);
    int cnt = 1;
    for(int i = 0;i<n-1;i++){
        if(grid[i].first == grid[i+1].first &&
        k>=abs(grid[i].second-grid[i+1].second)){
            cnt++;
            if(cnt >= max){
                max = cnt;
                ans = grid[i].first;
                //cout << ans << " " << cnt << endl;
            }
        }else{
            cnt = 1;
        }
    }

    cout << ans;
    return 0;
}