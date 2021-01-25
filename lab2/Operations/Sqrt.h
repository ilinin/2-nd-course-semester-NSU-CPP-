#ifndef LAB2_SQRT_H
#define LAB2_SQRT_H

#pragma once
#include "../IOperation.h"
#include <cmath>

class Sqrt : public IOperation {
public:
    void execute(std::list<std::string>& args, Context & ctx) const override;
};

#endif //LAB2_SQRT_H
