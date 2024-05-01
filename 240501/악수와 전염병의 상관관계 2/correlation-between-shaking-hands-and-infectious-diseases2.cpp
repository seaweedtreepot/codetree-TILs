#include <iostream>
#include <utility>
#include <vector>
using namespace std;

class Disease{
    public:
    bool healthy;//병에 걸린 유무
    int cnt;//몇회 퍼트릴수 있는지

    Disease(){
        healthy = false;
        cnt = 0;
    }
};

void handShake(int a, int b, Disease developer[]){
    if(developer[a].healthy && developer[b].healthy){//둘다 감염
        developer[a].cnt--;
        developer[b].cnt--;
    }else if(developer[a].healthy && !developer[b].healthy){//a만 감염
        if(developer[a].cnt!=0){
            developer[a].cnt--;
            
            developer[b].cnt = 2;
            developer[b].healthy = true;
        }
    }else if(!developer[a].healthy && developer[b].healthy){//b만 감염
        if(developer[b].cnt!=0){
            developer[b].cnt--;
            
            developer[a].cnt = 2;
            developer[a].healthy = true;
        }
    }



    return;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n,k,p,T,t,x,y;
    Disease developer[101];
    cin >> n >> k >> p >> T;

    developer[p].healthy = true;
    developer[p].cnt = 2;

    pair<int,int>timeline[251];
   for(int i = 0; i < T; i++){
    cin >> t >> x >> y;
        timeline[t]= make_pair(x,y);
   }

   for(int i = 1; i <= 250; i++){
    int a = timeline[i].first;//i초일때 악수한 a
    int b = timeline[i].second;//i초일때 악수한 b

    handShake(a,b,developer);
   }

    for(int i = 1; i <= n; i++){
        cout << (developer[i].healthy?1:0);
    }
    return 0;
}