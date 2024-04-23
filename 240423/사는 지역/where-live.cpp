#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;

class person{
    public:
    string name;
    string post;
    string local;

    person(string name, string post, string local){
        this->name = name;
        this->post = post;
        this->local = local;
    }
    person(){};
};

int findidx(string arr[],int n){
    int idx =0;
    for(int i = 0; i < n-1; i++){
        if(arr[idx] < arr[i+1]){
            idx = i+1;
        }
    }
    return idx;
}
int main() {
    // 여기에 코드를 작성해주세요.
    person p[10];
    int n;
    cin >> n;
    string a[10], b[10] ,c[10];

    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i] >> c[i];
        p[i].name = a[i];
        p[i].post = b[i];
        p[i].local = c[i];
    }

    int idx = findidx(a,n);

    cout <<"name "<<p[idx].name << endl <<  "addr "<< p[idx].post << endl
    << "city " << p[idx].local; 
    return 0;
}