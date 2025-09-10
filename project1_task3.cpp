//create test for newfraction2 class
//Devan Ballantine
//kd1958lj
//09/04/2025
//Dr. Jie Hu Meichsner
#include<iostream>
#include "newfraction2.h"

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

    fraction f2(1, 2);
    fraction f3(1,1);
    f3 = f3.get_sum(f1,f2);
    f3.post();
    f3 = f3.get_difference(f1,f2);
    f3.post();
    f3 = get_product(f1,f2);
    f3.post();
    f3 = get_quotient(f1,f2);
    f3.post();
    return 0;
}