#include <iostream>
using namespace std;

bool isUp(int speed,int distance, int x){
    int rest_dis = x - distance;
    speed++;
    int sum = 0;
    while(speed>=1){
        sum += speed--;
    }
    return sum <= rest_dis;
}

bool isMain(int speed,int distance, int x){
    int rest_dis = x - distance;
    int sum = 0;
    while(speed>=1){
        sum += speed--;
    }
    return (sum <= rest_dis || speed == 1);
}


int main() {
    // 여기에 코드를 작성해주세요.
    int x;
    cin >> x;

    int speed = 1;
    int distance = 1;
    int time = 1;
   //cout << time << " " << distance << " " << speed << endl;
    while(distance < x){
        if(isUp(speed,distance,x)){
            speed++;
        }else if(isMain(speed,distance,x)){
            
        }else {
            speed--; 
        }
        distance += speed;
        time++;
        //cout << time << " " << distance << " "<< speed << endl;
    }   

    cout << time;
    return 0;
}