//
//  MultiplyOperationFactory.hpp
//  Calculator
//
//  Created by Prerna on 25/09/23.
//

#ifndef MultiplyOperationFactory_hpp
#define MultiplyOperationFactory_hpp

#include "IOperationFactory.h"
#include "MultiplyOperation.hpp"

class MultiplyOperationFactory: public IOperationFactory{
    public :
    IOperation* createoperation();
};
#endif /* MultiplyOperationFactory_hpp */
