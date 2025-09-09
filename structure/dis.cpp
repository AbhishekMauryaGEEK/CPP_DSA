#include <iostream>
using namespace std;
struct time{
    int hrs;
    int min;
    int sec;
};
int main(){
    struct time t1,t2,t3;
    cout << "Enter first time in hrs,minutes,seconds format: ";
    cin >> t1.hrs >> t1.min >> t1.sec;
    cout << "Enter second time in hrs,minutes,seconds format: ";
    cin >> t2.hrs >> t2.min >> t2.sec;
    t3.sec=t1.sec+t2.sec;
    t3.min=t1.min+t2.min+(t3.sec)/60;
    t3.hrs=t1.hrs+t2.hrs+(t3.min)/60+(t3.sec)/3600;
    t3.min=(t3.min)%60;
    t3.sec=(t3.sec)%60;
    cout << "Total time: " << t3.hrs  << " hours "<< t3.min << " minutes & " << t3.sec << " seconds";
    return 0;
}