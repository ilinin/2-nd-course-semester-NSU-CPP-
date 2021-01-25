#include "Pop.h"
#include "../OperationCreator.h"

REGISTER_OPERATION(Pop, POP);

void Pop::execute(std::list<std::string> &args, Context &ctx) const {
    if (ctx.operands.empty()) {
        throw OutOfParameters();
    }

    ctx.operands.pop();
}