//
//  DivideOperationFactory.hpp
//  Calculator
//
//  Created by Prerna on 25/09/23.
//

#ifndef DivideOperationFactory_hpp
#define DivideOperationFactory_hpp

#include "IOperationFactory.h"
class DivideOperationFactory: public IOperationFactory{
    public :
    IOperation* createoperation();
};

#endif /* DivideOperationFactory_hpp */
