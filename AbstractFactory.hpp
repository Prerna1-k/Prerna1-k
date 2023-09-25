//
//  AbstractFactory.hpp
//  Calculator
//
//  Created by Prerna on 25/09/23.
//

#ifndef AbstractFactory_hpp
#define AbstractFactory_hpp

#include "IOperationFactory.h"
#include "string"
#include "AddOperationFactory.hpp"
#include "MultiplyOperationFactory.hpp"
#include "DivideOperationFactory.hpp"
#include "error_logger_factory.hpp"
#include "info_logger_factory.hpp"

using namespace std;
class Abstractfactory{
  public:
    static IOperationFactory* createOperationfactory(string optype);
    
    static ILoggerFactory* createLoggerfactory(string type);
};
#endif /* AbstractFactory_hpp */
