//
//  DivideOperation.cpp
//  Calculator
//
//  Created by Prerna on 25/09/23.
//

#include "DivideOperation.hpp"
#include <stdexcept>

using namespace std;
class Exception: public runtime_error {
public:
    // Defining constructor of class Exception
    // that passes a string message to the runtime_error class
    Exception()
        : runtime_error("Math error: Attempted to divide by Zero\n")
    {
    }
};
int DivideOperation ::calculate(int inp1,int inp2){
    if (inp2 == 0)
        throw Exception();
        return inp1/inp2;
    }
