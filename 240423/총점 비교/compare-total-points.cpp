#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Students{
    public:
    string name;
    int kor;
    int ma;
    int eng;

    Students(){};
};

bool cmp(Students a, Students b){
    return a.kor+a.eng + a.ma < b.kor+b.eng + b.ma;
}
int main() {
    // 여기에 코드를 작성해주세요.
    Students st[10];
    int n;
    cin >> n;
    string z;
    int a,b,c;
    for(int i = 0; i< n; i++){
        cin >> z>> a >> b >> c;
        st[i].kor =a;
        st[i].eng =b;
        st[i].ma =c;
        st[i].name=z;
    }

    sort(st,st+n,cmp);
    for(int i =0; i < n; i++){
        cout << st[i].name 
        << " "<< st[i].kor << " " << st[i].eng << " "<<st[i].ma << endl;
    }
    return 0;
}