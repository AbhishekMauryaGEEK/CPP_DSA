#include<iostream>
using namespace std;
struct height{
    int feet;
    int inch;
};
int main()
{
    struct height t1={10,5};
    struct height t2={12,9};
    height t3;
    t3.inch= t1.inch + t2.inch;
    t3.feet= t1.feet + t2.feet +(t3.inch/12);
    t3.inch= t3.inch%12;
    cout<< t3.feet << "," << t3.inch ;
    return 0;
}
