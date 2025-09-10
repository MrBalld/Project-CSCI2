//create header for fraction class
//Devan Ballantine
//kd1958lj
//09/04/2025
//Dr. Jie Hu Meichsner
#include <iostream>
#ifndef FRACTION_H

#define FRACTION_H

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

    private:
    //private variable area
    double top;

    double bot;
};

#endif