#include <iostream>
#include <utility>
#include <cstdlib>
#include <climits>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,input1,input2,cnt=0;
    pair<int,int> lines[100];

    cin >> n;
    for(int i =0 ; i < n; i++){
        cin >> input1 >> input2;
        lines[i] = make_pair(input1,input2);
    }

    for(int i =0 ; i < n; i++){
        bool flag = true;
        for(int j = 0; j < n ; j++){
            if(i==j)
                continue;

            if(lines[i].first > lines[j].first 
            && lines[i].second < lines[j].second){
                flag = false;
                break;
            }else if(lines[i].first < lines[j].first 
            && lines[i].second > lines[j].second){
                flag = false;
                break;
            }
        }
        if(flag){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}