#ifndef DECISION_STRUCTURE_QUESTION_2_H
#define DECISION_STRUCTURE_QUESTION_2_H

#include <string>

namespace ds2 {
    void run();
    std::string getHeader();
    std::string getMenuLabel();
    double getValidatedInput(const std::string &prompt);
    void insertAreaPadding(double value, int totalWidth = 51);
}


#endif