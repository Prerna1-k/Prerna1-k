The cod is basically to support  basic operations  and logging in calculator. This code will handle exceptions gracefully. 
In the code have tried to encorporate Factory design pattern as far as possible.

**Base class:**
IOperation
Method->Calculate 

**Derived Classes from IOperation:**
AddOperation,
DivideOperation,
MultiplyOperation,

**Base Class:**
IOPerationFactory-
Method->createoperation

**Dervived Class frrom c:**
AddOperationFactory,
DivideOperationFactory,
MultiplyOperationFcatory,

Logger class will have same hierarchy as discussed in class.
Main Class will have access to AbstractFcatory which will create objects for LoggerFactory and IOPerationFactory.
This code will allow user to perform basic operations and give error/info about the same. This code is not supporting UI related changes.

User will have to provide tyoe of operation to be  performed and the input numbers and then output is printed on success by logger class.

**Output for Addition:**
What operation is to be performed?Add
Input 1:23
Input 2:45
INFO : Output of operation Add is :68
Program ended with exit code: 0

In case of excetion logger class will print error mesage with the error thrown by OPeration class.
**Output for Exception:**
What operation is to be performed? Divide
Input 1:23
Input 2:0
ERROR : Math error: Attempted to divide by Zero

Program ended with exit code: 0

