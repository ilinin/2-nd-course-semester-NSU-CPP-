#ifndef LAB2_OPERATIONFACTORY_H
#define LAB2_OPERATIONFACTORY_H

#pragma once

#include "IOperation.h"
#include "IOperationCreator.h"

class OperationFactory {
public:
    static OperationFactory &getInstance() noexcept;

    IOperation *createInstance(const std::string&) const;

    void RegisterMaker(const std::string &, IOperationMaker*);

private:
    OperationFactory() = default;

    std::map<std::string, IOperationMaker *> _makers;
};


#endif //LAB2_OPERATIONFACTORY_H
