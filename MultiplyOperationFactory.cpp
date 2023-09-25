//
//  MultiplyOperationFactory.cpp
//  Calculator
//
//  Created by Prerna on 25/09/23.
//

#include "MultiplyOperationFactory.hpp"

        IOperation* MultiplyOperationFactory::createoperation()
        {
            return new MultiplyOperation();
        }

