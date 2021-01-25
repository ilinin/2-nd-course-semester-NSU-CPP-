#ifndef LAB2_DIVIDE_H
#define LAB2_DIVIDE_H

#pragma once
#include "../IOperation.h"

class Divide : public IOperation {
public:
    void execute(std::list<std::string>& args, Context & ctx) const override;
};

#endif //LAB2_DIVIDE_H
