#include<iostream>

using namespace std;

class Time
{
    public:

    // private:
    int hour, min;

    int input(){
        cout << "Enter the hour value" << endl;
        cin >> hour;

        cout << "Enter the minute value" << endl;
        cin >> min;

        return 0;
    }

    void setTime(int h, int m){
        
        // h = 36, m = 26;
        hour = h;
        min = m;

    }

    void showTime(){

        cout << hour << "h    " << min << "m" << endl;;
    }
};

Time add(Time x, Time y){

    Time tm;
    tm.min = x.min + y.min;
    tm.hour = x.hour + y.hour;

    if (tm.min >= 60)
    {
        int x = tm.min % 60;
        int y = tm.min / 60;
        tm.hour = tm.hour + y;
        tm.min = x;
    }
    
    return tm;
}

int main(){

    Time t1, t2, t3;
    t1.input();
    t1.showTime();
    
    // t2.input();
    t2.setTime(22, 15);
    t2.showTime();

    cout << "The summation of two time is" << endl;

    t3 = add(t1, t2);
    t3.showTime();

    return 0;
}