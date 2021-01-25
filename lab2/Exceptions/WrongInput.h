#ifndef LAB2_WRONGINPUT_H
#define LAB2_WRONGINPUT_H

#pragma once
#include "EvaluatorException.h"

class WrongInput : public EvaluatorException {
public:
    WrongInput() : EvaluatorException("Wrong input!"){};
};

#endif //LAB2_WRONGINPUT_H
