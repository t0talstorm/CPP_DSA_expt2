# EXPERIMENT – 2
# Aim: To study and implement the basic structure of a C++ program with different data types.

## Apparatus: Programiz online compiler or VS Code (any C++ IDE works fine)

## Theory:
In this experiment, we explored the use of common built-in data types in C++—namely int, float, double, char, string, and bool. The idea was to take user input for each type, print the entered value, and also display how much memory each type occupies using the sizeof() function.
Here’s a quick rundown of each type we used:

### int: 
    Used to store whole numbers (like 10 or -4). Typically takes up 4 bytes.
### float:
    For decimal numbers with single precision. Also takes about 4 bytes.
### double:
    Similar to float but stores with higher precision. Uses 8 bytes.
### char:
    Stores a single character like 'A' or 'z'. Just 1 byte.
### string:
    Holds a sequence of characters—basically text. Its size varies based on the content.
### bool:
    Represents logical values, true or false (or 1 and 0). Usually takes 1 byte.
## Here’s what the program did step-by-step:
- First, it asked for an integer input and then displayed both the value and the memory it takes.
- Then, it took a float number and printed its value along with its size.
- After that, the program asked for a character input and showed its output and size.
- Then came a double value—higher precision than float—and the program printed that too.
- Next was a string input. It displayed the entered text and its size (though sizeof gives the object size, not the actual length of the string content).
- Lastly, we entered a boolean value (like 1 for true, 0 for false), and the program showed its stored value and how much memory it occupies.

## Conclusion:
So, through this experiment, we got a clear idea of the basic data types used in C++ and how much space they take up in memory. It’s a good foundational step for understanding how data is stored and processed in a program.
