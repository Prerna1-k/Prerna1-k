//
//  AddOperation.h
//  Calculator
//
//  Created by Prerna on 25/09/23.
//

#ifndef AddOperation_h
#define AddOperation_h

#include "IOperation.h"

class AddOperation : public IOperation{
    public :
    int calculate(int inp1,int inp2);
};

#endif /* AddOperation_h */
