#ifndef LAB2_INVALIDREGISTRATION_H
#define LAB2_INVALIDREGISTRATION_H

#pragma once
#include "EvaluatorException.h"

class InvalidRegistration : public EvaluatorException {
public:
    InvalidRegistration() : EvaluatorException("Invalid registration!"){};
};

#endif //LAB2_INVALIDREGISTRATION_H
