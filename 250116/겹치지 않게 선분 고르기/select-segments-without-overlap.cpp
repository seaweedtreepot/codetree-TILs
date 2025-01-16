#include <iostream>
using namespace std;

int n;
int largest = 0;
int x1[15], x2[15];
int grid[1001];

void draw(int num){
    for(int i = x1[num]; i <= x2[num];i++){
        grid[i]++;
    }
}

void erase(int num){
    for(int i = x1[num]; i <= x2[num];i++){
        grid[i]--;
    }
}

bool flag(){
    for(int i = 0; i < 1001;i++){
        if(grid[i]>1){
            return false;
        }
    }
    return true;
}
void checker(int num, int cnt){
    if(num==n){
        //cout << cnt << endl;
        if(flag()){
            //cout << "통과" << endl;
            if(largest < cnt){
                largest = cnt;
            }
            return;
        }
        else{
            return;
        }
    }
    draw(num);
    checker(num+1, cnt+1); //num번째 직선 추가 and 비추가
    erase(num);
    checker(num+1,cnt);
}

int main() {
    for(int i = 0; i < 1001;i++){
        grid[i] = 0;
    }
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }
    
    checker(0,0);
    cout << largest;
    return 0;
}

