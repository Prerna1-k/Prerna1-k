//
//  AbstractFactory.cpp
//  Calculator
//
//  Created by Prerna on 25/09/23.
//

#include "AbstractFactory.hpp"

#include "string"
 

using namespace std;
     IOperationFactory* Abstractfactory::createOperationfactory(std::string optype){
         try{
             if(optype == "Add"){
                 return new AddOperationFactory();
             }
             else if(optype == "Multiply"){
                 return new MultiplyOperationFactory();
             }
             else if(optype == "Divide"){
                 return new DivideOperationFactory();
             }
             else
             {
                 std::cout<<"Please enter correct Operation (Add/Multiply/Divide):";
             }
         }
         catch(exception e)
         {
             std::cout<<e.what();
         }
        return nullptr;
    }
    
     ILoggerFactory* Abstractfactory::createLoggerfactory(std::string type){
         try{
             if(type == "debug"){
                 return new ErrorLoggerFactory();
             }
             else if(type == "Info"){
                 return new InfoLoggerFactory();
             }
             else if(type == "Error"){
                 return new ErrorLoggerFactory();
             }
         }
         catch(exception e)
         {
             std::cout<<"Type not supported";
         }
        return nullptr;
    }

