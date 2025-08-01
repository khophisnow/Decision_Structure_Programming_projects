#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
#include "decisionStructureProgrammingQuestions/decisionStructureProgrammingQuestions1.h"
#include "decisionStructureProgrammingQuestions/decisionStructureProgrammingQuestions2.h"
#include "decisionStructureProgrammingQuestions/decisionStructureProgrammingQuestions3.h"
#include "decisionStructureProgrammingQuestions/decisionStructureProgrammingQuestions4.h"
#include "decisionStructureProgrammingQuestions/decisionStructureProgrammingQuestions5.h"
#include "decisionStructureProgrammingQuestions/decisionStructureProgrammingQuestions6.h"
#include "decisionStructureProgrammingQuestions/decisionStructureProgrammingQuestions7.h"
#include "decisionStructureProgrammingQuestions/decisionStructureProgrammingQuestions8.h"
#include "decisionStructureProgrammingQuestions/decisionStructureProgrammingQuestions9.h"
#include "decisionStructureProgrammingQuestions/decisionStructureProgrammingQuestions10.h"
#include "decisionStructureProgrammingQuestions/decisionStructureProgrammingQuestions11.h"

void insertMenuPadding(const std::string &label, int optionNumber, int totalWidth = 53)
{
    std::string prefix = std::to_string(optionNumber) + ". ";
    int pad = totalWidth - static_cast<int>(prefix.length() + label.length());
    std::cout << prefix << label;
    for (int i = 0; i < pad; ++i)
        std::cout << " ";
    std::cout << "║\n";
}

void displayCyberMenu()
{
    std::cout << "\n╔══════════════════════════════════════════════════════╗\n";
    std::cout << "║  🛡️  DECISION STRUCTURE LAB CONSOLE - CYBER MODE 🧠   ║\n";
    std::cout << "╠══════════════════════════════════════════════════════╣\n";

    // Use aligned menu labels
    std::cout << "║ ";
    insertMenuPadding(ds1::getMenuLabel(), 1);

    std::cout << "║ ";
    insertMenuPadding(ds2::getMenuLabel(), 2);

    std::cout << "║ ";
    insertMenuPadding(ds3::getMenuLabel(), 3);

    std::cout << "║ ";
    insertMenuPadding("Decision 4", 4);
    std::cout << "║ ";
    insertMenuPadding("Decision 5", 5);
    std::cout << "║ ";
    insertMenuPadding("Decision 6", 6);
    std::cout << "║ ";
    insertMenuPadding("Decision 7", 7);
    std::cout << "║ ";
    insertMenuPadding("Decision 8", 8);
    std::cout << "║ ";
    insertMenuPadding("Decision 9", 9);
    std::cout << "║ ";
    insertMenuPadding("Decision 10", 10);
    std::cout << "║ ";
    insertMenuPadding("Decision 11", 11);
    std::cout << "║ ";
    insertMenuPadding("Exit", 0);

    std::cout << "╚══════════════════════════════════════════════════════╝\n";
}

void pressEnterToContinue(const std::string &fromModule = "")
{
    if (!fromModule.empty())
    {
        std::cout << "\nPress Enter to return from " << fromModule << " to Cyber Console menu...";
    }
    else
    {
        std::cout << "\nPress Enter to return to the Cyber Console menu...";
    }

    // Clear *any* leftover newline in the buffer
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get(); // Now this will wait properly
}
#include <string>

int main()
{

    int choice;
    std::cout << std::fixed << std::setprecision(2);

    do
    {
        displayCyberMenu();
        std::cout << "\nSelect an option: ";
        std::cin >> choice;

        if (std::cin.fail() || choice < 0)
        {
            std::cin.clear(); // reset fail state

            std::cout << "\n  ╔══════════════════════════════════════════════╗\n";
            std::cout << "  ║  ⚠️  Input must be a number                   ║\n";
            std::cout << "  ║  ✅  Please try again with a valid number.   ║\n";
            std::cout << "  ║  🛡️  Cyber Decision Console - Input Error     ║\n";
            std::cout << "  ╚══════════════════════════════════════════════╝\n";
            std::cout << "  ╔══════════════════════════════════════════════╗\n";
            std::cout << "  ║  ⚠️  Exiting Cyber Decision Console           ║\n";
            std::cout << "  ╚══════════════════════════════════════════════╝\n\n";
            return 1; // Exit the program if input is invalid
        }

        // std::cin.ignore(); // Clear newline from input buffer
        std::cout << "\n";

        switch (choice)
        {
        case 1:
            std::cout << "[+] Running: ds1::run()\n";
            ds1::run();
            pressEnterToContinue(ds1::getHeader());
            break;
        case 2:
            std::cout << "[+] Running: ds2::run()\n";
            ds2::run();
            pressEnterToContinue(ds2::getHeader());

            break;
        case 3:
            std::cout << "[+] Running: ds3::run()\n";
            ds3::run();
            pressEnterToContinue(ds3::getHeader());
            break;
        case 4:
            std::cout << "[+] Running: ds4::run()\n";
            ds4::run();
            pressEnterToContinue();
            break;
        case 5:
            std::cout << "[+] Running: ds5::run()\n";
            ds5::run();
            pressEnterToContinue();
            break;
        case 6:
            std::cout << "[+] Running: ds6::run()\n";
            ds6::run();
            pressEnterToContinue();
            break;
        case 7:
            std::cout << "[+] Running: ds7::run()\n";
            ds7::run();
            pressEnterToContinue();
            break;
        case 8:
            std::cout << "[+] Running: ds8::run()\n";
            ds8::run();
            pressEnterToContinue();
            break;
        case 9:
            std::cout << "[+] Running: ds9::run()\n";
            ds9::run();
            pressEnterToContinue();
            break;
        case 10:
            std::cout << "[+] Running: ds10::run()\n";
            ds10::run();
            pressEnterToContinue();
            break;
        case 11:
            std::cout << "[+] Running: ds11::run()\n";
            ds11::run();
            pressEnterToContinue();
            break;
        case 0:
            std::cout << "\n[*] Exiting Cyber Decision Console. Stay secure!\n\n";
            break;
        default:
            std::cout << "\n[!] Invalid selection. Try again.\n";
            break;
        }

    } while (choice != 0);

    return 0;
}
