#ifndef LAB2_IDENTIFYERFORMAT_H
#define LAB2_IDENTIFYERFORMAT_H

#pragma once
#include "EvaluatorException.h"

class IdentifyerFormat : public EvaluatorException {
public:
    IdentifyerFormat() : EvaluatorException("Wrong identifyer format!"){};
};

#endif //LAB2_IDENTIFYERFORMAT_H
