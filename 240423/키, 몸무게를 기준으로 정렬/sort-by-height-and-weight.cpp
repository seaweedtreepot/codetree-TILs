#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Person{
    public:
    string name;
    int height;
    int weight;
    Person(){};
};

bool cmp(Person a, Person b){
    if(a.height == b.height){
        return a.weight > b.weight;
    }
    return a.height < b.height;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n; cin >> n;
    Person arr[10];
    string name; int a ,b ;
    for(int i =0; i < n; i++){
        cin >> name >> a >> b;
        arr[i].name = name;
        arr[i].height = a;
        arr[i].weight = b;
    }

    sort(arr,arr+n,cmp);

    for(int i =0; i < n; i++){
        cout << arr[i].name << " " << arr[i].height 
        << " "<< arr[i].weight << endl;
    }

    return 0;
}