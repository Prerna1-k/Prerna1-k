//
//  DivideOperation.hpp
//  Calculator
//
//  Created by Prerna on 25/09/23.
//

#ifndef DivideOperation_hpp
#define DivideOperation_hpp

#include "IOperation.h"

class DivideOperation : public IOperation{
    public :
    int calculate(int inp1,int inp2);
};

#endif /* DivideOperation_hpp */
