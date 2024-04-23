#include <iostream>
using namespace std;

class weather{
    public:
    int year;
    int month;
    int date;
    string day;
    string sky;
    weather(int year, int month,int date, string day, string sky){
        this->year = year;
        this->month = month;
        this->date = date;
        this->day = day;
        this->sky = sky;
    }
    weather(){};
};

int findNear(weather w[],int n){
    int idx = 0;

    for(int i =1; i < n;i++){
        if(w[idx].year > w[i].year){
            idx = i;
            
        }else if(w[idx].year == w[i].year){
            if(w[idx].month > w[i].month){
                idx = i;
            }else if(w[idx].month == w[i].month){
                if(w[idx].date > w[i].date){
                    idx = i;
                }
            }
        
        }
    }
    return idx;
}
void print_month_date(weather arr[], int idx){
    if(arr[idx].month < 10){
        cout << 0 << arr[idx].month << "-";
    }else{
        cout << arr[idx].month << "-";
    }
    if(arr[idx].date < 10){
        cout << 0 << arr[idx].date << " ";
    }else{
        cout << arr[idx].date << " ";
    }
}
void print(weather arr[],int idx){
    cout << arr[idx].year << "-";
    print_month_date(arr,idx);
    cout << arr[idx].day << " ";
    cout << arr[idx].sky;
}
int main() {
    // 여기에 코드를 작성해주세요.
    weather w[100]; 
    int idx = 0;
    int n;
    cin >> n;

    int a1,a2,a3;
    char temp;
    string b,c;
    for(int i = 0; i < n; i++){
        cin >> a1 >> temp >> a2 >> temp >> a3  >> b >> c ;
        if(c=="Rain"){
           // cout << a1 << " " << a2 << " " << a3 << " " << b << " " << c << endl;
            w[idx++] = weather(a1,a2,a3,b,c);
        }
    }

    idx = findNear(w,idx);
  //  cout << idx;
    print(w,idx);
   
    return 0;
}