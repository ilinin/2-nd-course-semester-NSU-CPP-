#include "Define.h"
#include "../OperationCreator.h"

REGISTER_OPERATION(Define, DEFINE);

void Define::execute(std::list<std::string> &args, Context &ctx) const {
    if (args.size() < 2) {
        throw WrongInput();
    }

    std::string id = args.front();
    std::string numberToDefine = args.back();
    auto wrongId = [id]() -> bool {
        for (char i : id) {
            if (!isalpha(i)) {
                return false;
            }
        }

        return true;
    }();

    if (wrongId) {
        throw IdentifyerFormat();
    }

    try{
        size_t size = 0;
        ctx.defines[id] = std::stod(numberToDefine.c_str(), &size);
        if (size != args.front().size()) {
            throw std::exception();
        }
    }
    catch(std::exception){
        throw NumberFormat();
    }
}