#include "decisionStructureProgrammingQuestions1.h"
#include <iostream>
#include <limits>
#include <string>

/*******************************************
----- DECISION_STRUCTURE_QUESTION_1 --------
********************************************/
// Roman Numerals
// Prompt user to enter a number between 1–10 and output the Roman numeral.
// Demonstrates secure input handling and control flow logic.
// Part of the Cyber Console Decision Series.

namespace ds1
{
    std::string getHeader()
    {
        return "🛡️ ROMAN NUMERALS CONVERTER 🧠";
    }

    void run()
    {
        int number;

        do
        {
            std::cout << "\n╔════════════════════════════════════════════════════╗\n";
            std::cout << "║      🛡️  ROMAN NUMERALS CONVERTER - CYBER MODE      ║\n";
            std::cout << "╠════════════════════════════════════════════════════╣\n";
            std::cout << "║ [SECURE_INPUT] Enter a number (1–10) or 0 to exit: ║\n";
            std::cout << "╟────────────────────────────────────────────────────╢\n";
            std::cout << "║ 1. I    2. II   3. III  4. IV   5. V               ║\n";
            std::cout << "║ 6. VI   7. VII  8. VIII 9. IX  10. X               ║\n";
            std::cout << "║ 0. Exit                                            ║\n";
            std::cout << "╚════════════════════════════════════════════════════╝\n";
            std::cout << "\nEnter your choice: ";
            std::cout.flush();
            std::cin >> number;

            if (std::cin.fail())
            {
                std::cin.clear();
                std::cout << "\n  ╔══════════════════════════════════════════════╗\n";
                std::cout << "  ║⚠️  Invalid input type. Please enter a number. ║\n";
                std::cout << "  ╚══════════════════════════════════════════════╝\n";
                continue;
            }

            if (number == 0)
            {
                std::cout << "\n  ╔══════════════════════════════════════════════╗\n";
                std::cout << "  ║  🛑  Exiting Roman Numerals Converter.       ║\n";
                std::cout << "  ╚══════════════════════════════════════════════╝\n";
                break;
            }

            std::string numberStr = std::to_string(number);
            std::cout << "\n  ╔═══════════════════════════════════════════════════╗\n";
            std::cout << "  ║  🛡️  ROMAN NUMERALS CONVERTER - CYBER MODE         ║\n";
            std::cout << "  ╠═══════════════════════════════════════════════════╣\n";
            std::cout << "  ║  🛡️  Input received: " << numberStr;
            insertPadding(numberStr);
            std::cout << "  ║\n";
            std::cout << "  ╟───────────────────────────────────────────────────╢\n";
            std::cout << "  ║  🔍 Validating input...                           ║\n";
            std::cout << "  ╚═══════════════════════════════════════════════════╝\n";

            std::string roman;
            switch (number)
            {
            case 1:
                roman = "I";
                break;
            case 2:
                roman = "II";
                break;
            case 3:
                roman = "III";
                break;
            case 4:
                roman = "IV";
                break;
            case 5:
                roman = "V";
                break;
            case 6:
                roman = "VI";
                break;
            case 7:
                roman = "VII";
                break;
            case 8:
                roman = "VIII";
                break;
            case 9:
                roman = "IX";
                break;
            case 10:
                roman = "X";
                break;
            default:
                std::cout << "\n  ╔═══════════════════════════════════════════════════╗\n";
                std::cout << "  ║  ⚠️  Input out of accepted range (1–10).           ║\n";
                std::cout << "  ╚═══════════════════════════════════════════════════╝\n";
                roman.clear();
                break;
            }

            if (!roman.empty())
            {
                std::cout << "\n  ╔═══════════════════════════════════════════════════╗\n";
                std::cout << "  ║  🛡️  Roman Numeral Conversion Result:              ║\n";
                std::cout << "  ╠═══════════════════════════════════════════════════╣\n";
                std::cout << "  ║   ➤  Roman Numeral: " << roman;
                insertPadding(roman);
                std::cout << "  ║\n";
                std::cout << "  ╚═══════════════════════════════════════════════════╝\n";
                std::cout << "\n  ╔═══════════════════════════════════════════════════╗\n";
                std::cout << "  ║  ✅  Execution completed successfully.            ║\n";
                std::cout << "  ╚═══════════════════════════════════════════════════╝\n";
            }

        } while (number != 0);
    }
    void insertPadding(std::string &roman)
    {
        int pad = 28 - static_cast<int>(roman.length());
        for (int i = 0; i < pad; ++i)
            std::cout << " ";
    }

}
