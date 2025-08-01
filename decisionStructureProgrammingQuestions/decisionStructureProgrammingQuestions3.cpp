#include "decisionStructureProgrammingQuestions3.h"
#include <iostream>
#include <limits>
#include <string>
#include <iomanip>

/*******************************************
----- DECISION_STRUCTURE_QUESTION_3--------
********************************************/
// Mass and Weight Calculator – Cyber Console Mode
// Prompts for mass in kilograms and calculates weight in Newtons.
// Warns if object is too heavy (>1000 N) or too light (<10 N).
// Includes secure input, padding UI, and rerun logic.

namespace ds3
{

    std::string getHeader()
    {
        return "⚖️ MASS & WEIGHT CHECKER 🌐";
    }
    std::string getMenuLabel()
    {
        return "MASS & WEIGHT CHECKER";
    }

    // Helper: Validate numeric input
    double getValidatedInput(const std::string &prompt)
    {
        double value;
        while (true)
        {
            std::cout << prompt;
            std::cin >> value;

            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "⚠️  Invalid input! Please enter a numeric value.\n\n";
            }
            else
            {
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                return value;
            }
        }
    }

    // Helper: Padded display
    int totalWidth = 58;
    void insertMassPadding(double value, const std::string &label, const std::string &unit, int totalWidth)
    {
        std::string content = "║ " + label + ": " + std::to_string(value) + " " + unit;
        int pad = totalWidth - static_cast<int>(content.length());
        std::cout << content;
        for (int i = 0; i < pad; ++i)
            std::cout << " ";
        std::cout << "║\n";
    }

    void run()
    {
        const double gravity = 9.8;
        const int heavyThreshold = 1000;
        const int lightThreshold = 10;
        char rerun;

        do
        {
            std::cout << "\n╔═════════════════════════════════════════════════════╗\n";
            std::cout << "║   ⚖️ MASS & WEIGHT CHECKER – CYBER CONSOLE MODE 🧠   ║\n";
            std::cout << "╠═════════════════════════════════════════════════════╣\n";
            std::cout << "║ [INPUT] Enter object’s mass to calculate weight     ║\n";
            std::cout << "╚═════════════════════════════════════════════════════╝\n";

            double mass = getValidatedInput("\nEnter object’s mass in kilograms (kg): ");
            double weight = mass * gravity;

            std::cout << "\n╔═════════════════════════════════════════════════════╗\n";
            std::cout << "║              🔎 MASS-WEIGHT RESULTS                 ║\n";
            std::cout << "╠═════════════════════════════════════════════════════╣\n";
            insertMassPadding(mass, "➤ Mass Entered", "kg", totalWidth);
            insertMassPadding(weight, "➤ Weight Result", "N", totalWidth);
            std::cout << "╠═════════════════════════════════════════════════════╣\n";
            std::cout << "║ ➤ Evaluation:                                       ║\n";
            std::cout << "╠═════════════════════════════════════════════════════╣\n";

            if (weight > heavyThreshold)
                std::cout << "║ ⚠️  The object is too heavy (over 1000 N).           ║\n";
            else if (weight < lightThreshold)
                std::cout << "║ ⚠️  The object is too light (under 10 N).            ║\n";
            else
                std::cout << "║ ✅ Weight is within the acceptable range.           ║\n";

            std::cout << "╚═════════════════════════════════════════════════════╝\n";

            std::cout << "\n🔁 Would you like to check another object? (Y/N): ";
            std::cin >> rerun;

        } while (rerun == 'Y' || rerun == 'y');
    }
}
