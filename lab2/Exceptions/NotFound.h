#ifndef LAB2_NOTFOUND_H
#define LAB2_NOTFOUND_H

#pragma once
#include "EvaluatorException.h"

class FileNotFound : public EvaluatorException {
public:
    FileNotFound() : EvaluatorException("File not found!"){};
};

#endif //LAB2_NOTFOUND_H
