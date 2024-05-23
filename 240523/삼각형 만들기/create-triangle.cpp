#include <iostream>
#include <utility>
#include <climits>
#include <cstdlib>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,input1,input2;
    pair<int,int> grid[100];
    int max = 0;


    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> input1 >> input2;
        grid[i] = make_pair(input1,input2);
    }
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(grid[i].second == grid[j].second){
                int x_axis = abs(grid[i].first-grid[j].first);
                int y_axis=0;
                for(int k = 0; k < n; k++){
                    if(i==k || j==k){
                        continue;
                    }

                    if(grid[i].first==grid[k].first){
                        y_axis = abs(grid[i].second - grid[k].second);
                    }
                    else if(grid[j].first==grid[k].first){
                        y_axis = abs(grid[j].second - grid[k].second);
                    }
                    if(max < x_axis * y_axis){
                        max = x_axis*y_axis;
                    }
                }
            }
        }
    }
    cout << max;
    return 0;
}