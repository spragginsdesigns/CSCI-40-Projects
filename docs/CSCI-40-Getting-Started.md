# CSCI-40: Getting Started with C++ and CLion on Windows

## Introduction

Welcome to CSCI-40! This guide will help you get started with C++ programming using CLion on Windows. We'll cover setting up your environment, creating your first program, and understanding basic C++ concepts. Also, you want to create a GitHub account and start a repository for this class, I highly suggest it. I made a guide on that as well. 

## Setting Up Your Environment

### Installing CLion

1. Go to the JetBrains website (https://www.jetbrains.com/clion/download/)
2. Download and install the Windows version of CLion
3. Follow the installation prompts
4. Create a desktop shortcut for easy access

### Installing MinGW (C++ Compiler for Windows)

1. Download MinGW from http://mingw-w64.org/doku.php/download
2. Run the installer, choosing:
   - Version: Latest (e.g., 8.1.0)
   - Architecture: x86_64
   - Threads: posix
   - Exception: seh
3. Add MinGW's bin directory to your system PATH

## Your First C++ Program: "Hello World!"

### Creating a New Project in CLion

1. Open CLion
2. Click "New Project" on the welcome screen
3. Choose "C++ Executable"
4. Name your project (e.g., "Week1_HelloWorld")
5. Choose a save location
6. Ensure MinGW is selected in "Toolchains"
7. Click "Create"

### Writing Your First Program

Replace the contents of `main.cpp` with:

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World!" << endl;
    return 0;
}
```

### Understanding the Code

1. **Preprocessor Directive**: 

   ```cpp
   #include <iostream>
   ```

   This includes the input/output stream library.

2. **Namespace Declaration**: 

   ```cpp
   using namespace std;
   ```

   This allows us to use elements of the standard library without prefixing them with `std::`.

3. **Main Function**: 

   ```cpp
   int main() {
       // Function body
   }
   ```

   This is the entry point of your program.

4. **Output Statement**: 

   ```cpp
   cout << "Hello World!" << endl;
   ```

   This displays "Hello World!" on the screen.

5. **Return Statement**: 

   ```cpp
   return 0;
   ```

   This indicates the program has executed successfully.

### Building and Running Your Program

1. Build: Click "Build" in the top menu, then "Build Project" (or use Ctrl+F9)
2. Run: Click the green play button in the top right corner (or use Shift+F10)

## Important C++ Concepts for Beginners

### Namespaces

Namespaces help avoid naming conflicts in large projects. The `std` namespace contains all standard library elements.

Alternative ways to use namespaces:

1. Specific using declarations:

   ```cpp
   using std::cout;
   using std::endl;
   ```

2. Fully qualified names:

   ```cpp
   std::cout << "Hello World!" << std::endl;
   ```

### Functions

Functions are blocks of code that perform specific tasks. The `main()` function is special - it's where program execution begins.

Function components:

- Return type (e.g., `int`)
- Function name (e.g., `main`)
- Parameters (empty for `main()`)
- Function body (code between `{ }`)

### Statements and Semicolons

Each instruction in C++ is a statement, ending with a semicolon (`;`).

### Output and the `cout` Object

`cout` is used for output. The `<<` operator sends data to `cout` for display.

### Strings

Text enclosed in double quotes (`"Hello World!"`) is a string.

### Special Characters and Escape Sequences

- `\n`: New line
- `\t`: Tab
- `\"`: Quotation mark
- `\\`: Backslash

### Comments

Use comments to explain your code:

- Single-line comments: `// Comment text`
- Multi-line comments: `/* Comment text */`

## Best Practices

1. Use meaningful names for variables and functions
2. Indent your code properly
3. Use whitespace to improve readability
4. Comment your code thoughtfully
5. Write clean, organized code

## Troubleshooting

- If your code doesn't compile, check the "Messages" window for error details
- Ensure MinGW is properly set up in CLion
- Don't forget semicolons at the end of statements

## Getting Help

- Use CLion's built-in help (F1 on any keyword)
- Refer to your course materials
- Ask your instructor or TAs for assistance

Remember, learning to code takes practice. Don't get discouraged if things don't work right away. Keep coding, and you'll improve quickly!
