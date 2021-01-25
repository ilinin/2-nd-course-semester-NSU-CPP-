#ifndef LAB2_PUSH_H
#define LAB2_PUSH_H

#pragma once
#include "../IOperation.h"

class Push : public IOperation {
public:
    void execute(std::list<std::string>& args, Context & ctx) const override;
};

#endif //LAB2_PUSH_H
