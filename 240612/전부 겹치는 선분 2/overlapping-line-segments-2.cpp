#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,i1,i2;
    cin >> n;
    pair<int,int> lines[100];
    for(int i = 0; i < n; i++){
        cin >> i1 >> i2;
        lines[i] = make_pair(i1,i2);
    }

    for(int i = 0; i < n; i++){//i번째 선분 제거
        int min_end = 100;
        int max_stt = 0;
        for(int j = 0; j < n; j++){
            if(i==j) continue;

            min_end = min(lines[j].second,min_end);
            max_stt = max(lines[j].first,max_stt);
        }
        if(min_end >= max_stt){
            cout << "Yes" ;
            return 0;
        }else{
            //cout << max_stt << " " << min_end << endl;
        }
    }
    cout << "No";
    return 0;
}