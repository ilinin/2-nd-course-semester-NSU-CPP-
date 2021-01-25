#ifndef LAB2_IOPERATION_H
#define LAB2_IOPERATION_H

#pragma once

#include "Context.h"
#include "../Exceptions/Exceptions.h"
#include <list>

#define REGISTER_OPERATION(T, NAME) static OperationMaker<T> maker(#NAME)

class IOperation {
public:
    virtual void execute(std::list<std::string> &arg, Context & ctx) const = 0;

    virtual ~IOperation() = default;
};

#endif //LAB2_IOPERATION_H
