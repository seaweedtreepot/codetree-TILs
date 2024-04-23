#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Person{
    public:
    string name;
    int tall;
    int weight;
    Person(){};
};

bool CmpByTall(Person a,Person b){
    return a.tall<b.tall;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string name;
    int tall;
    int weight;
    Person p[10];
    for(int i = 0; i < n; i++){
        cin >> name >> tall >> weight;
        p[i].name = name;
        p[i].tall = tall;
        p[i].weight = weight;
    }
    sort(p,p+n,CmpByTall);
    for(int i  =0; i  <n; i++){
        cout << p[i].name << " " << p[i].tall << " " << p[i].weight<<endl;
    }
    return 0;
}