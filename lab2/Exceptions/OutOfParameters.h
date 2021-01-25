#ifndef LAB2_OUTOFPARAMETERS_H
#define LAB2_OUTOFPARAMETERS_H

#pragma once
#include "EvaluatorException.h"

class OutOfParameters : public EvaluatorException {
public:
    OutOfParameters() : EvaluatorException("Out of parameters!"){};
};

#endif //LAB2_OUTOFPARAMETERS_H
