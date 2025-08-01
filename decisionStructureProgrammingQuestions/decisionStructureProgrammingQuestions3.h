#ifndef DECISION_STRUCTURE_QUESTION_3_H
#define DECISION_STRUCTURE_QUESTION_3_H
#include <string>
namespace ds3
{
    void run();
    std::string getHeader();
    std::string getMenuLabel();
    double getValidatedInput(const std::string &prompt);
    void insertMassPadding(double value, const std::string &label, const std::string &unit, int totalWidth);

}

#endif