#ifndef LAB2_SUBTRACT_H
#define LAB2_SUBTRACT_H

#pragma once
#include "../IOperation.h"

class Subtract : public IOperation {
public:
    void execute(std::list<std::string>& args, Context & ctx) const override;
};

#endif //LAB2_SUBTRACT_H
