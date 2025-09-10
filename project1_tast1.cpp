//create test for fraction class
//Devan Ballantine
//kd1958lj
//09/04/2025
//Dr. Jie Hu Meichsner
#include<iostream>
#include "fraction.h"

using namespace std;

int main() {
    fraction f1(1,2);
    cout<<"f1 represents the fraction one half" <<endl;
    f1.post();
    cout<<"its numerator is " << f1.get_top() <<" and its denominator is" << f1.get_bot() <<endl;
    cout<<"the new numerator is 6 and the new denominator is 10" <<endl;
    f1.set_top(6);
    f1.set_bot(10);
    f1.post();
    return 0;
}

