#include "Subtract.h"
#include "../OperationCreator.h"

REGISTER_OPERATION(Subtract, SUBTRACT);

void Subtract::execute(std::list<std::string>& args, Context & ctx) const {
    if (ctx.operands.size() < 2) {
        throw OutOfParameters();
    }

    int first = ctx.operands.top();
    ctx.operands.pop();
    int second = ctx.operands.top();
    ctx.operands.pop();

    ctx.operands.push(first - second);
}