#include "Print.h"
#include "../OperationCreator.h"

#include <iostream>

REGISTER_OPERATION(Print, PRINT);

void Print::execute(std::list<std::string> &args, Context &ctx) const {
    if (ctx.operands.empty()) {
        throw OutOfParameters();
    }

    std::cout << ctx.operands.top();
}