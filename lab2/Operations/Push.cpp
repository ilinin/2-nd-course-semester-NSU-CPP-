#include "Push.h"
#include "../OperationCreator.h"

REGISTER_OPERATION(Push, PUSH);

void Push::execute(std::list<std::string> &args, Context &ctx) const {
    if (args.empty()) {
        throw WrongInput();
    }

    std::string id = args.front();
    try{
        size_t size = 0;
        double number  = std::stod(id.c_str(), &size);
        if (size != args.front().size()) {
            throw std::exception();
        }
        ctx.operands.push(number);
        return;
    }
    catch(std::exception){
        if (ctx.defines.find(id) != ctx.defines.end()) {
            ctx.operands.push(ctx.defines[id]);
            return;
        }
        else throw WrongInput();
    }
}