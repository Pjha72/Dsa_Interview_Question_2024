# String Introduction

1. A string is a sequence of characters.
2. Strings are made up of a small set of characters.
3. In programming, strings often consist of contiguous integer values representing characters from 'a' to 'z' and 'A' to 'Z'. These values are typically based on the ASCII or UTF-16 encoding.
4. In C/C++, a `char` data type uses 8 bits to represent a character.
5. For example, the character 'a' has an ASCII value of 97, 'b' has a value of 98, 'A' has a value of 65, and 'B' has a value of 66.

6. To find the ASCII value of a character in C++, you can use the following code snippet:
    ```cpp
        char x = 'b';
        cout << (int)x;
    ```
   This will output the ASCII value of the character 'b', which is 98.

7. Print Frequencies of Characters (in a Sorted order) in a string of lower case letters.
input : 'geeksforgeeks'
output : 'e4f1g2k2o1r1s2'
