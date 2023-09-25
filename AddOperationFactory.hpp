//
//  AddOperationFactory.hpp
//  Calculator
//
//  Created by Prerna on 25/09/23.
//

#ifndef AddOperationFactory_hpp
#define AddOperationFactory_hpp

#include "IOperationFactory.h"
class AddOperationFactory: public IOperationFactory{
    public :
    IOperation* createoperation();
};
#endif /* AddOperationFactory_hpp */
