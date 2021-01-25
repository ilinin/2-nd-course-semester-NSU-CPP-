#ifndef LAB2_EVALUATOREXCEPTION_H
#define LAB2_EVALUATOREXCEPTION_H

#pragma once
#include <exception>
#include <string>

class EvaluatorException : public std::exception {
protected:
    const char* msg = "Smth gone wrong!";
public:
    explicit EvaluatorException(const char* _msg) {
        msg = _msg;
    }

    const char* what() const noexcept override {
        return msg;
    }
};

#endif //LAB2_EVALUATOREXCEPTION_H
