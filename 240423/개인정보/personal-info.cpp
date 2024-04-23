#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Students{
    public:
    double weight;
    int height;
    string name;
    Students(){};
};

bool cmp1(Students a, Students b){
    return a.name < b.name;
}
bool cmp2(Students a, Students b){
    return a.height > b.height;
}
int main() {
    // 여기에 코드를 작성해주세요.
    Students st[5];
    int n;
    n=5;
    int a;
    double b;
    string z;

    cout.precision(1);
    cout << fixed;
    for(int i = 0; i< n; i++){
        cin >>z >> a >> b;
        st[i].weight =b;
        st[i].height =a;
        st[i].name =z;
    }

    sort(st,st+n,cmp1);
    cout << "name"<< endl;
    for(int i =0; i < n; i++){
        cout << st[i].name
        << " "<< st[i].height << " " << st[i].weight <<endl;
    }
    cout << "\nheight" << endl;
    sort(st,st+n,cmp2);
    for(int i =0; i < n; i++){
        cout << st[i].name
        << " "<< st[i].height << " " << st[i].weight <<endl;
    }
    return 0;
}