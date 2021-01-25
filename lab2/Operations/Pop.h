#ifndef LAB2_POP_H
#define LAB2_POP_H

#pragma once
#include "../IOperation.h"

class Pop : public IOperation {
public:
    void execute(std::list<std::string>& args, Context & ctx) const override;
};

#endif //LAB2_POP_H
