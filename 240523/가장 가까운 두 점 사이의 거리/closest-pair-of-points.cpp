#include <iostream>
#include <utility>
#include <climits>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    pair<int,int> grid[100];
    int n;
    int min = INT_MAX;
    int input1,input2;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> input1 >> input2;
        grid[i] = make_pair(input1, input2);
    }

    for(int i = 0; i < n; i++){
        for(int j = i+1; j< n; j++){
            int distance = abs(grid[i].first-grid[j].first)*abs(grid[i].first-grid[j].first);
            distance += abs(grid[i].second-grid[j].second)*abs(grid[i].second-grid[j].second);
        
            if(min > distance){
                min = distance;
            }
        }
    }

    cout << min;
    return 0;
}