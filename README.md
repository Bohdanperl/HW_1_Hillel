# Person Builder Project(HW_1_Hillel)
## Task: Use cout to print a structured questionnaire with information about yourself (as you wish)
A C++ project demonstrating the Builder pattern for creating Person objects.

## Features
- Person class with various attributes
- PersonBuilder for step-by-step object creation
- Information display functionality

## Files
- `HW_1.h`: Class declarations
- `HW_1.cpp`: Class implementations
- `Main.cpp`: Usage example

## Usage Example
```cpp
Person bohdan = PersonBuilder().setName("Bohdan")
                               .setSurname("Perliei")
                               .setPosition("C++ Software Engineer")
                               // ... other setter calls ...
                               .build();
bohdan.printInfo();
```

## Compilation
Compile the project using:
```
g++ Main.cpp HW_1.cpp -o hw_1.exe
```

Run the compiled program:
```
./hw_1.exe
```
