#ifndef LAB2_MULTIPLY_H
#define LAB2_MULTIPLY_H

#pragma once
#include "../IOperation.h"

class Multiply : public IOperation {
public:
    void execute(std::list<std::string>& args, Context & ctx) const override;
};

#endif //LAB2_MULTIPLY_H
