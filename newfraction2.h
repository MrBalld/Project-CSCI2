//create header for newfraction2 class
//Devan Ballantine
//kd1958lj
//09/04/2025
//Dr. Jie Hu Meichsner
#include <iostream>
#ifndef FRACTION_H
#define FRACTION_H

using namespace std;

class fraction {
    
    public:
    // constructor
    fraction(double init_top = 0.0, double init_bot = 1.0);
    //sets top/numerator of fraction
    void set_top(double ntop){
        top = ntop;
    }
    //sets bot/denominator of fraction
    void set_bot(double nbot){
        bot = nbot;
    }
    //returns the top/numerator of fraction 
    double get_top(){
        return top;
    }
    //returns the bot/denominator of fraction 
    double get_bot(){
        return bot;
    }
    //posts the fraction
    void post(){
        std::cout<< "" <<top << " / " << bot << std::endl;
    }
    //gets the sum of two fractions
    fraction get_sum( fraction f1,  fraction f2);
    //gets the difference of two fractions
    fraction get_difference( fraction f1,  fraction f2);
    //inputs new values to fraction
    friend istream& operator >>(istream& ins, fraction& target);

    private:
    //private variable area
    double top;

    double bot;
};
//gets the product of two fractions
fraction get_product( fraction f1,  fraction f2);
//gets the quotient of two fractions
fraction get_quotient( fraction f1,  fraction f2);
//outputs the fraction
void new_output(fraction f1);


#endif