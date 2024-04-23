#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Agent{
    public:
    string CodeName;
    int Score;

    Agent(string CodeName="0", int Score=0){
        this->CodeName = CodeName;
        this->Score = Score;
    }
};

int Back(int b[]){
    int small = 100;
    int smidx = 0;
    for(int i = 0; i < 5; i++){
        if(small > b[i]){
            small = b[i];
            smidx = i;
        }
    }
    return smidx;
}
int main() {
    // 여기에 코드를 작성해주세요.
    Agent agent[5];
    string a[5]; int b[5];
    for(int i = 0; i < 5; i++){
        cin >> a[i] >> b[i];
        agent[i].CodeName = a[i];
        agent[i].Score = b[i];
    }

    cout << agent[Back(b)].CodeName << " " << agent[Back(b)].Score;

    return 0;
}