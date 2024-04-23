#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Students{
    public:
    int weight;
    int height;
    int number;

    Students(){};
};

bool cmp(Students a, Students b){
    if(a.height == b.height){
        if(a.weight == b.weight){
            return a.number < b.number;
        }
        return a.weight > b.weight;
    }
    return a.height > b.height;
}
int main() {
    // 여기에 코드를 작성해주세요.
    Students st[1000];
    int n;
    cin >> n;
    int a,b;
    for(int i = 0; i< n; i++){
        cin >> a >> b;
        st[i].weight =b;
        st[i].height =a;
        st[i].number =i+1;
    }

    sort(st,st+n,cmp);
    for(int i =0; i < n; i++){
        cout << st[i].height
        << " "<< st[i].weight << " " << st[i].number <<endl;
    }
    return 0;
}