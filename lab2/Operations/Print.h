#ifndef LAB2_PRINT_H
#define LAB2_PRINT_H

#pragma once
#include "../IOperation.h"

class Print : public IOperation {
public:
    void execute(std::list<std::string>& args, Context & ctx) const override;
};

#endif //LAB2_PRINT_H
