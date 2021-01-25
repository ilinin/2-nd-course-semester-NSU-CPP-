#ifndef LAB2_DEFINE_H
#define LAB2_DEFINE_H

#pragma once
#include "../IOperation.h"

class Define : public IOperation {
public:
    void execute(std::list<std::string>& args, Context & ctx) const override;
};

#endif //LAB2_DEFINE_H
