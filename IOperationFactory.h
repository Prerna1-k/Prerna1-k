//
//  IOperationFactory.h
//  Calculator
//
//  Created by Prerna on 25/09/23.
//

#ifndef IOperationFactory_h
#define IOperationFactory_h

#include "IOperation.h"
class IOperationFactory{
    public :
        virtual IOperation* createoperation() = 0;
};

#endif /* IOperationFactory_h */
