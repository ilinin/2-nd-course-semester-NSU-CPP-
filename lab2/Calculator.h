#ifndef LAB2_CALCULATOR_H
#define LAB2_CALCULATOR_H
#pragma once

#include "Exceptions/Exceptions.h"
#include "Context.h"

#include "OperationFactory.h"
#include "OperationCreator.h"

#include "IOperationCreator.h"
#include "IOperation.h"

#include <fstream>
#include <iostream>
#include <list>

class StackCalculator {
public:
    static double evaluate(std::istream& is);
};

#endif //LAB2_CALCULATOR_H