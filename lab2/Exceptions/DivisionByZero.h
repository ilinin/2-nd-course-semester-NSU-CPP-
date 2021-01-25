#ifndef LAB2_DIVISIONBYZERO_H
#define LAB2_DIVISIONBYZERO_H

#pragma once
#include "EvaluatorException.h"

class DivisionByZero : public EvaluatorException {
public:
    DivisionByZero() : EvaluatorException("Division by zero!"){};
};

#endif //LAB2_DIVISIONBYZERO_H
