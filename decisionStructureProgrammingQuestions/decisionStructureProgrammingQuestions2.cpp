#include "decisionStructureProgrammingQuestions2.h"
#include <iostream>
#include <limits>
#include <string>

/*******************************************
----- DECISION_STRUCTURE_QUESTION_2 --------
********************************************/
// Greater Area of Two Rectangles
// Input dimensions for two rectangles and determine which has the greater area.
// Part of the Cyber Console Decision Series.

namespace ds2
{
    // 🔹 Provides the project header used in the main Cyber Console menu.
    std::string getHeader()
    {
        return "📐 RECTANGLE AREA COMPARATOR 🧠";
    }
    std::string getMenuLabel()
    {
        return "RECTANGLE AREA COMPARATOR";
    }

    // 🔹 Handles secure numeric input with error checking and retry loop.
    double getValidatedInput(const std::string &prompt)
    {
        double value;
        while (true)
        {
            std::cout << prompt;
            std::cin >> value;

            if (std::cin.fail())
            {
                std::cin.clear();                                                   // clear error flag
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard bad input
                std::cout << "⚠️  Invalid input! Please enter a numeric value.\n\n";
            }
            else
            {
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // clear remaining input
                return value;
            }
        }
    }

    void run()
    {
        char rerunChoice; // 🔹 Stores the user’s decision on whether to re-run the comparison.

        do
        {
            double length1, width1, length2, width2;
            const int totalWidth = 56; // Total width for area display

            std::cout << "\n╔═════════════════════════════════════════════════════╗\n";
            std::cout << "║    📐 RECTANGLE AREA COMPARATOR - CYBER MODE        ║\n";
            std::cout << "╠═════════════════════════════════════════════════════╣\n";
            std::cout << "║ [SECURE_INPUT] Provide dimensions of two rectangles ║\n";
            std::cout << "╚═════════════════════════════════════════════════════╝\n";

            // Input Rectangle I
            std::cout << "\n🔸 Rectangle I\n";
            length1 = getValidatedInput("Enter Length: ");
            width1 = getValidatedInput("Enter Width : ");

            // Input Rectangle II
            std::cout << "\n🔸 Rectangle II\n";
            length2 = getValidatedInput("Enter Length: ");
            width2 = getValidatedInput("Enter Width : ");

            double area1 = length1 * width1;
            double area2 = length2 * width2;

            std::cout << "\n╔════════════════════════════════════════════════════╗\n";
            std::cout << "║           🧾 COMPARING RECTANGLE AREAS             ║\n";
            std::cout << "╠════════════════════════════════════════════════════╣\n";
            std::cout << "║ Area of Rectangle I  : " << area1;
            insertAreaPadding(area1, totalWidth);
            std::cout << "║ Area of Rectangle II : " << area2;
            insertAreaPadding(area2, totalWidth);
            std::cout << "╠════════════════════════════════════════════════════╣\n";
            std::cout << "║ ➤ Comparison Result:                               ║\n";
            std::cout << "╠════════════════════════════════════════════════════╣\n";

            // Area Checks
            if (area1 < 0 || area2 < 0)
            {
                std::cout << "║ ⚠️  Error: Area cannot be negative! Check input.    ║\n";
            }
            else if (area1 == 0 && area2 == 0)
            {
                std::cout << "║ ➤ Both rectangles have zero area.                  ║\n";
            }
            else if (area1 > area2)
            {
                std::cout << "║ ➤ Rectangle I has the greater area 🔺              ║\n";
            }
            else if (area2 > area1)
            {
                std::cout << "║ ➤ Rectangle II has the greater area 🔺             ║\n";
            }
            else
            {
                std::cout << "║ ➤ Both rectangles have the same area ✅            ║\n";
            }

            std::cout << "╚════════════════════════════════════════════════════╝\n";
            std::cout << "\n✅ Execution completed. Geometry secured. 🔐\n";

            std::cout << "\n🔁 Would you like to compare another set of rectangles? (Y/N): ";
            std::cin >> rerunChoice;

        } while (rerunChoice == 'Y' || rerunChoice == 'y');
    }

    void insertAreaPadding(double value, int totalWidth)
    {
        std::string valueStr = std::to_string(value);
        int contentLength = 24 + static_cast<int>(valueStr.length()); // "Area of Rectangle I  : "
        int pad = totalWidth - contentLength;
        for (int i = 0; i < pad; ++i)
            std::cout << " ";
        std::cout << "║\n";
    }

}
