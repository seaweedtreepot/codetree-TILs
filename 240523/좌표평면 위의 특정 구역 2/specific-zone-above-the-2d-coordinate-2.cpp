#include <iostream>
#include <climits>
#include <cstdlib>
#include <utility>
using namespace std; 
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    pair<int,int> grid[100];
    int min = INT_MAX;
    int a,b;
    for(int i =0; i < 100; i++){
        grid[i] = make_pair(0,0);
    }
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        grid[i] = make_pair(a,b);

    }

    for(int i = 0; i < n; i++){//넘어갈 점의 번호
        //동서남북 4방향 각각 가장 거리가 먼 곳을 구함
        int up = INT_MAX, down=0,left=INT_MAX,right=0;

        for(int j = 0; j < n; j++){//up
            if(i==j)
            continue;

            if(grid[j].second !=0 && grid[j].second < up ){
                up = grid[j].second;
            }
        }

        for(int j = 0; j < n; j++){//down
            if(i==j)
            continue;

            if(grid[j].second !=0 && grid[j].second > down ){
                down = grid[j].second;
            }
        }

        for(int j = 0; j < n; j++){//left
            if(i==j)
            continue;

            if(grid[j].first !=0 && grid[j].first  < left){
                left = grid[j].first;
            }
        }

        for(int j = 0; j < n; j++){//right
            if(i==j)
            continue;

            if(grid[j].first!=0 && grid[j].first > right){
                right = grid[j].first;
            }
        }
        //cout << up << " " << down << " " << left << " " << right <<endl;
        int area = (abs(up - down)) * (abs(left - right));
        //cout << area << endl;
        if(min > area){
            min = area;
        }
    }
    cout << min;
    return 0;
}