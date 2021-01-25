cmake_minimum_required(VERSION 3.15)
project(lab2)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab2 main.cpp Calculator.h Calculator.cpp InputReader.h Context.h Exceptions/Exceptions.h Exceptions/DivisionByZero.h Exceptions/EvaluatorException.h Exceptions/NotFound.h Exceptions/IdentifyerFormat.h Exceptions/InvalidRegistration.h Exceptions/NegativeParameter.h Exceptions/InvalidOperation.h Exceptions/InvalidNumberFormat.h Exceptions/OutOfParameters.h Exceptions/UndefinedParameter.h Exceptions/WrongInput.h OperationCreator.h OperationFactory.h OperationFactory.cpp IOperation.h IOperationCreator.h Operations/Add.cpp Operations/Add.h Operations/Operations.h Operations/Define.cpp Operations/Define.h Operations/Divide.cpp Operations/Divide.h Operations/Multiply.cpp Operations/Multiply.h Operations/Pop.cpp Operations/Pop.h Operations/Print.cpp Operations/Print.h Operations/Push.cpp Operations/Push.h Operations/Sqrt.cpp Operations/Sqrt.h Operations/Subtract.cpp Operations/Subtract.h)