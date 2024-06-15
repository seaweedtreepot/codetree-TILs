#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    pair<int,int> grid[100];
    cin >> n;
    int i1,i2;
    int min = 10000;
    for(int i = 0; i < n; i++){
        cin >> i1 >> i2;
        grid[i] = make_pair(i1,i2);
    }

    for(int i = 0; i < n; i++){
        int left=10000,right=0;
        for(int j = 0; j < n; j++){
            if(i==j) continue;
            if(grid[j].first < left){
                left = grid[j].first;
            }else if(grid[j].second > right){
                right = grid[j].second;
            }
        }
        int temp = right - left;

        if(min > temp){
            min = temp;
        }
    }

    cout << min;
    return 0;
}