#include <iostream>
#include <algorithm>
using namespace std;
class Students{
    public:
    int height;
    int weight;
    int num;
    Students(){}
};

bool cmp(Students a, Students b){
    if(a.height == b.height){
        return a.weight > b.weight;
    }
    return a.height < b.height;
}
int main() {
    int n;
    cin >> n;
    Students s[1000];
    int a , b;
    for(int i =0;i < n; i++){
        cin >> a >> b;
        s[i].height = a;
        s[i].weight = b;
        s[i].num = i+1;
    }

    sort(s, s+n, cmp);

    for(int i =0; i < n; i++){
        cout << s[i].height << " " << s[i].weight << " " << s[i].num<<endl;
    }
    return 0;
}