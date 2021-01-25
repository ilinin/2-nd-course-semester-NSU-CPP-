#ifndef LAB2_IOPERATIONCREATOR_H
#define LAB2_IOPERATIONCREATOR_H

#pragma once
#include "IOperation.h"

class IOperationMaker {
public:
    virtual IOperation *create(const std::string &operationName) const = 0;
};

#endif //LAB2_IOPERATIONCREATOR_H
