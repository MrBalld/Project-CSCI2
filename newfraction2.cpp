//create implementation for newfraction2 class
//Devan Ballantine
//kd1958lj
//09/04/2025
//Dr. Jie Hu Meichsner
#include "newfraction2.h"
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
//gets the sum of two fractions
fraction get_sum(fraction f1, fraction f2){
    fraction f3(1,1);
    f3.set_bot( f1.get_bot() * f2.get_bot());
    f3.set_top((f1.get_top() * f2.get_bot()) + (f2.get_top() * f1.get_bot()));
    return f3;
}
//gets the difference of two fractions
fraction get_difference( fraction f1,  fraction f2){
    fraction f3(1,1);
    f3.set_bot( f1.get_bot() * f2.get_bot());
    f3.set_top((f1.get_top() * f2.get_bot()) - (f2.get_top() * f1.get_bot()));
    return f3;
}
//gets the product of two fractions
fraction get_product( fraction f1,  fraction f2){
    fraction f3(1,1);
    f3.set_bot( f1.get_bot() * f2.get_bot());
    f3.set_top(f1.get_top() * f2.get_top());
    return f3;
}
//gets the quotient of two fractions
fraction get_quotient( fraction f1,  fraction f2){
    fraction f3(1,1);
    f3.set_top(f1.get_top() * f2.get_bot());
    f3.set_bot(f1.get_bot() * f2.get_top());
    return f3;
}
ostream& operator <<(ostream& outs, const fraction& source)
    {
		outs << "(" << source.get_top( ) <<", "<< source.get_bot( )<<") ";
		return outs;
    }
istream& operator >>(istream& ins, fraction& target)
    {
		ins >> target.top >> target.bot;
		return ins;
    }