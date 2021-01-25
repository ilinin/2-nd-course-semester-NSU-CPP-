#ifndef LAB2_NEGATIVEPARAMETER_H
#define LAB2_NEGATIVEPARAMETER_H

#pragma once
#include "EvaluatorException.h"

class NegativeParameter : public EvaluatorException {
public:
    NegativeParameter() : EvaluatorException("Negative parameter!"){};
};

#endif //LAB2_NEGATIVEPARAMETER_H
