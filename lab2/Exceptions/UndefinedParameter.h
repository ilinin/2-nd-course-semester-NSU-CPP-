#ifndef LAB2_UNDEFINEDPARAMETER_H
#define LAB2_UNDEFINEDPARAMETER_H

#pragma once
#include "EvaluatorException.h"

class UndefinedParameter : public EvaluatorException {
public:
    UndefinedParameter() : EvaluatorException("Undefined parameter!"){};
};

#endif //LAB2_UNDEFINEDPARAMETER_H
