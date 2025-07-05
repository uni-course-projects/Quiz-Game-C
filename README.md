# 🎮 C Quiz Game

A simple **console-based multiple-choice quiz game** written in **C** as part of my university courses' assignment.

Originally developed in **Code::Blocks**, this project was later migrated to **Visual Studio Code** using the **MinGW-w64** toolchain and configured with one-click build-and-run functionality using `tasks.json`.

Course: *Introduction to Computer Science (ITC)*

---

## 👨‍💻 Created By

- **Umer**  
- **Mashood**

---

## Features

- ✅ 4-option multiple choice questions  
- ✅ Case-insensitive answer comparison  
- ✅ Score displayed after all questions  
- ⌨️ Terminal-based interaction  
- ❌ Handles invalid input gracefully  
- 🔁 Option to expand with more questions  

---

## Tools & Configuration

- **Language**: C  
- **Original IDE**: Code::Blocks  
- **Current IDE**: Visual Studio Code  
- **Compiler**: MinGW-w64 GCC 15.1.0  
- **Task Runner**: VS Code `tasks.json`  

---

## 🛠️ How to Compile & Run

### 🔹 Using VS Code (Recommended)

1. Open the project folder in VS Code  
2. Press `Ctrl + Shift + B` to compile & run automatically  
   *(configured via `.vscode/tasks.json`)*

---

### 🔹 Manually via Terminal

gcc quiz-game.c -o quiz-game

./quiz-game

---

##  What I Learned

- Writing simple C programs using functions and structs
- Handling input/output via stdio.h
- Compiling C code using GCC
- Automating workflow in VS Code with tasks.json