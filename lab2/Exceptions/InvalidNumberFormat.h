#ifndef LAB2_INVALIDNUMBERFORMAT_H
#define LAB2_INVALIDNUMBERFORMAT_H

#pragma once
#include "EvaluatorException.h"

class NumberFormat : public EvaluatorException {
public:
    NumberFormat() : EvaluatorException("Wrong number format!"){};
};

#endif //LAB2_INVALIDNUMBERFORMAT_H
