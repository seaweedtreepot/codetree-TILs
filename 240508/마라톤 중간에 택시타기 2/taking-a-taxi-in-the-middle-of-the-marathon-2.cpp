#include <iostream>
#include <utility>
#include <cstdlib>
#include <climits>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,x,y;
    pair<int,int> checks[100];
    cin >> n;
    for(int i =0; i < n; i++){
        cin >> x >> y;
        checks[i] = make_pair(x,y);
    }
    int min =INT_MAX;
    for(int i = 1; i < n-1; i++){
        int o_distance = 0;
        for(int j = 1; j < n; j++){
            if(j==i){
            }else if(j==i+1){
                int dx=checks[j].first-checks[j-2].first;
                int dy=checks[j].second-checks[j-2].second;
                o_distance += abs(dx) + abs(dy);
                //cout << "건너뛰기: "<<dx << " " << dy <<" " << o_distance<< endl;
            }else{
                int dx=checks[j].first-checks[j-1].first;
                int dy=checks[j].second-checks[j-1].second;
                o_distance += abs(dx) + abs(dy);
                //cout << dx << " " << dy <<" "<< o_distance <<  endl;
            }
            
        }
        //cout << "총거리: " << o_distance << endl;
        if(min > o_distance){
            min = o_distance;
        }
    }
    cout << min ;
    return 0;
}