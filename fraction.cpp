//create test for fraction class
//Devan Ballantine
//kd1958lj
//09/04/2025
//Dr. Jie Hu Meichsner
#include "fraction.h"
#include <iostream>
//sets intial numerator and denominator
fraction::fraction(double init_top, double init_bot) {
    top = init_top;
    bot = init_bot;
}
//sets the new fraction top
void fraction::set_top(double ntop){
    top = ntop;
}
//sets the new fraction bot
void fraction::set_bot(double nbot){
    bot = nbot;
}
// posts the fraction
void fraction::post(){
    std::cout<< "" <<top << " / " << bot << std::endl;
}