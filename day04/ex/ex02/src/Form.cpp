#include "Form.hpp"

void Form::toSign(bool sign) {
    this->sign = sign;
}

bool Form::isSigned() {
    return sign;
}


std::string Form::getField1() const {
    return field1;
}

std::string Form::getField2() const {
    return field2;
}



