#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.

    //1-2 1-3 2-3

    int n;
    pair<int,int> asd[100];
    int t1,t2;
    cin >> n ;
    for(int i = 0; i < n; i++){
        cin >> t1 >> t2;
        asd[i] = make_pair(t1,t2);
    }
    int max = 0;
    
        int si = 1;
        int rock = 2;
        int paper = 3;
        int cnt = 0;
        for(int i = 0; i < n; i++){//1 2 3 가위바위보
            if(asd[i].first ==rock && asd[i].second == si){
                cnt ++;
            }else if(asd[i].first ==si && asd[i].second == paper){
                cnt++;
            }else if(asd[i].first ==paper && asd[i].second == rock){
                cnt++;
            }
        }
        if(max < cnt){
            max = cnt;
        }
     si = 1;
         rock = 3;
         paper = 2;
         cnt = 0;
        for(int i = 0; i < n; i++){//1 2 3 가위바위보 2
            if(asd[i].first ==rock && asd[i].second == si){
                cnt ++;
            }else if(asd[i].first ==si && asd[i].second == paper){
                cnt++;
            }else if(asd[i].first ==paper && asd[i].second == rock){
                cnt++;
            }
        }
        if(max < cnt){
            max = cnt;
        } si = 2;
         rock = 1;
         paper = 3;
         cnt = 0;
        for(int i = 0; i < n; i++){//1 2 3 가위바위보 3
            if(asd[i].first ==rock && asd[i].second == si){
                cnt ++;
            }else if(asd[i].first ==si && asd[i].second == paper){
                cnt++;
            }else if(asd[i].first ==paper && asd[i].second == rock){
                cnt++;
            }
        }
        if(max < cnt){
            max = cnt;
        } si = 2;
         rock = 3;
         paper = 1;
         cnt = 0;
        for(int i = 0; i < n; i++){//1 2 3 가위바위보 4
            if(asd[i].first ==rock && asd[i].second == si){
                cnt ++;
            }else if(asd[i].first ==si && asd[i].second == paper){
                cnt++;
            }else if(asd[i].first ==paper && asd[i].second == rock){
                cnt++;
            }
        }
        if(max < cnt){
            max = cnt;
        } si = 3;
         rock = 1;
         paper = 2;
         cnt = 0;
        for(int i = 0; i < n; i++){//1 2 3 가위바위보 5
            if(asd[i].first ==rock && asd[i].second == si){
                cnt ++;
            }else if(asd[i].first ==si && asd[i].second == paper){
                cnt++;
            }else if(asd[i].first ==paper && asd[i].second == rock){
                cnt++;
            }
        }
        if(max < cnt){
            max = cnt;
        } si = 3;
         rock = 2;
         paper = 1;
         cnt = 0;
        for(int i = 0; i < n; i++){//1 2 3 가위바위보 6
            if(asd[i].first ==rock && asd[i].second == si){
                cnt ++;
            }else if(asd[i].first ==si && asd[i].second == paper){
                cnt++;
            }else if(asd[i].first ==paper && asd[i].second == rock){
                cnt++;
            }
        }
        if(max < cnt){
            max = cnt;
        }
        

    cout << max ;
    return 0;
}