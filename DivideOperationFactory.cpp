//
//  DivideOperationFactory.cpp
//  Calculator
//
//  Created by Prerna on 25/09/23.
//

#include "DivideOperationFactory.hpp"
#include "DivideOperation.hpp"

IOperation* DivideOperationFactory::createoperation()
{
    return new DivideOperation();
}
