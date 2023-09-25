//
//  AddOperationFactory.cpp
//  Calculator
//
//  Created by Prerna on 25/09/23.
//

#include "AddOperationFactory.hpp"
#include "AddOperation.h"

IOperation* AddOperationFactory::createoperation()
{
    return new AddOperation();
}

