#ifndef LAB2_INVALIDOPERATION_H
#define LAB2_INVALIDOPERATION_H

#pragma once
#include "EvaluatorException.h"

class NoSuchOperation : public EvaluatorException {
public:
    NoSuchOperation() : EvaluatorException("No such operation!"){};
};

#endif //LAB2_INVALIDOPERATION_H
