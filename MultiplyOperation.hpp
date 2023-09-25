//
//  MultiplyOperation.hpp
//  Calculator
//
//  Created by Prerna on 25/09/23.
//

#ifndef MultiplyOperation_hpp
#define MultiplyOperation_hpp

#include "IOperation.h"

class MultiplyOperation : public IOperation{
    public :
    int calculate(int inp1,int inp2);
};

#endif /* MultiplyOperation_hpp */
