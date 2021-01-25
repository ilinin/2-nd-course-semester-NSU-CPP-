#ifndef LAB2_ADD_H
#define LAB2_ADD_H

#pragma once
#include "../IOperation.h"

class Add : public IOperation {
public:
    void execute(std::list<std::string>& args, Context & ctx) const override;
};

#endif //LAB2_ADD_H
