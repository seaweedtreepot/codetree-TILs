#include <iostream>
#include <tuple>
#include <utility>
#include <climits>
#include <cstdlib>
#include <algorithm>
using namespace std;

bool cmp(tuple<int,int,int> v1){
    return 0;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m,d,s,max=0,cnt=0;
    int cheese[4];
    int input1,input2,input3;
    tuple<int,int,int> time_table_eat[101];
    pair<int,int> time_table_sick[101];
    cin >> n >> m >> d >> s;

    for(int i = 0; i < d; i++){
        cin >> input1 >> input2 >> input3;
        time_table_eat[i] = make_tuple(input1,input2,input3);
    }
    sort(time_table_eat,time_table_eat+d);
    for(int i = 0; i < s; i++){
        cin >> input1 >> input2;
        time_table_sick[i] = make_pair(input1,input2);
    }
    sort(time_table_sick,time_table_sick+s);

    /*for(int i= 0; i < d; i++){
        cout << get<0>(time_table_eat[i]) << " "<< get<1>(time_table_eat[i])<<" "<<
        get<2>(time_table_eat[i])<<endl;
    }*/   

    /*for(int i = 0; i < s; i++){
        cout << time_table_sick[i].first << " "<< time_table_sick[i].second<<" "
        <<endl;
    }*/

    for(int i = 0; i < s; i++){
        for(int j = 0;j<d; j++){
            if(get<0>(time_table_eat[j])==time_table_sick[i].first){
                if(get<2>(time_table_eat[j]) < time_table_sick[i].second){
                    cheese[get<1>(time_table_eat[j])-1]++;
                }
            }
        }
    }

    for(int i = 0; i < 4; i++){
        cnt=0;
        if(cheese[i]==s){
            for(int j = 0; j < d; j++){
                if(get<1>(time_table_eat[j])==i+1){
                    cnt++;
                }
            }
        }
        if(max < cnt){
            max = cnt;
        }
    }
    cout << max;
    return 0;
}