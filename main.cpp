//
//  main.cpp
//  Calculator
//
//  Created by Prerna on 25/09/23.
//
#include <string>
#include "IOperation.h"
#include "Abstractfactory.hpp"
#include <iostream>
#include <string>
using namespace std;


int main(){
    string optype;
    std::cout<<"What operation is to be performed?";
    std::cin>> optype;
    IOperationFactory* fact = Abstractfactory::createOperationfactory(optype);
    
    
    int inp1;
    int inp2;
    std::cout<<"Input 1:";
    std::cin>> inp1;
    std::cout<<"Input 2:";
    std::cin>> inp2;
    int result=0;   
    
    try {
        IOperation* operatn = fact->createoperation();
        result = operatn->calculate( inp1, inp2);
    } 
    catch (exception& e) {
        ILoggerFactory* loggerFact = Abstractfactory::createLoggerfactory("Error");
        ILogger* logger = loggerFact->createLogger();
        
        logger->log(e.what());
        return 0;
    }
    
    ILoggerFactory* loggerFact = Abstractfactory::createLoggerfactory("Info");
    ILogger* logger = loggerFact->createLogger();
    
    logger->log("Output of operation "+ optype + " is :"+std::to_string( result ));
   
    return 0;
}

