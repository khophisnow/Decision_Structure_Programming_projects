# 🛡️ Decision Structure Programming Projects – Cyber Console Mode 🧠

Hands-on solutions to decision structure exercises from the Gaddis C++ Programming textbook. Implemented using modular design principles and wrapped in a themed "Cyber Mode" console interface for an engaging software-dev meets cybersecurity learning experience.

This C++ project is a collection of decision structure exercises (control flow, branching, logic-based problems) built with a clean, modular, and security-themed interface.

## 🚀 About the Project

After completing Modular Programming exercises, this series explores decision structures using:

- 📦 **Namespace modules** like `ds1::run()` for each task
- 🖥️ **Cyber-themed UI** with box-drawn menus and emojis
- 🧪 **Clean Makefile builds**
- 🧠 **Control logic** using `switch`, `if`, validation, and looping
- 🧰 **Scalable design** for adding new exercises easily

## 📂 Folder Structure

```bash
Decision_Structure_Programming_projects/
├── decisionStructureProgrammingMain.cpp
├── decisionStructureProgrammingQuestions/
│   ├── decisionStructureProgrammingQuestions1.cpp
│   ├── decisionStructureProgrammingQuestions1.h
│   ├── decisionStructureProgrammingQuestions2.cpp
│   ├── decisionStructureProgrammingQuestions2.h
│   ├── decisionStructureProgrammingQuestions3.cpp
│   ├── decisionStructureProgrammingQuestions3.h
│   └── ...
├── Makefile
└── README.md
````

## ✅ Completed Exercises

| Exercise | Description               | Module     |
| -------- | ------------------------- | ---------- |
| 1        | Roman Numerals Converter  | `ds1`      |
| 2        | Rectangle Area Comparator | `ds2`      |
| 3        | Mass & Weight Checker     | `ds3`      |
| 4–11     | *(To be completed)*       | `ds4–ds11` |

## 🧠 Sample: Roman Numerals Converter (ds1)

```bash
╔═══════════════════════════════════════════════════════════╗
║  🛡️  ROMAN NUMERALS CONVERTER 🧠                          ║
╚═══════════════════════════════════════════════════════════╝
[SECURE_INPUT] Enter a number (1–10) or 0 to exit:
➤ Roman Numeral: VIII
```

> 💬 Uses `switch-case`, input validation, and cyber-style UI boxes.

## 🧠 Sample: Rectangle Area Comparator (ds2)

```bash
╔════════════════════════════════════════════════════╗
║           🧾 COMPARING RECTANGLE AREAS             ║
╠════════════════════════════════════════════════════╣
║ Area of Rectangle I  : 12.5                        ║
║ Area of Rectangle II : 20                          ║
╠════════════════════════════════════════════════════╣
║ ➤ Comparison Result:                               ║
║ ➤ Rectangle II has the greater area 🔺             ║
╚════════════════════════════════════════════════════╝
```

> 💬 Uses input validation, reusable helpers, and rerun prompt loop.

## 🧠 Sample: Mass & Weight Checker (ds3)

```bash
╔════════════════════════════════════════════════════╗
║         ⚖️ MASS & WEIGHT CHECKER - CYBER MODE      ║
╚════════════════════════════════════════════════════╝
[SECURE_INPUT] Enter an object’s mass in kilograms:
➤ Weight: 42.5 N

⚠️ Too light OR ✅ Within safe limits OR ❌ Too heavy
```

> 💬 Demonstrates physics logic with input validation and feedback based on Newtons. Supports reruns and auto-aligned output.

## 🛠️ Build & Run

```bash
# Compile the project
make

# Run the Cyber Console
./decisionStructureProgram
```

## 🧪 Technologies Used

* C++11/14
* Standard IO & Limits
* Modular headers
* Makefile (manual builds)

## 🤖 Author

**Julius Mcbraham Paapa-Boateng Somuah**
GitHub: [khophisnow](https://github.com/khophisnow)
Cyber | Software | STEM

## 📜 License

MIT License (you are free to use/modify this for education or open-source)

---

**Keep checking back** as I complete all 11 exercises. Each module will reflect better logic, cleaner structure, and hacker-grade clarity.
