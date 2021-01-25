#ifndef LAB2_CONTEXT_H
#define LAB2_CONTEXT_H

#pragma once
#include <stack>
#include <map>

struct Context {
    std::stack <double> operands;
    std::map <std::string, double> defines;
};

#endif //LAB2_CONTEXT_H
