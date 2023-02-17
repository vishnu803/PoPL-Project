# VSA Compiler


## Basic idea

The basic idea here is to use LEX and YACC to design a compiler. 
The input to the LEX is a set of regular expressions in addition to actions. The output here is a table driven scanner called lex.yy.c
The input to the YACC is stream of tokens produced by the LEX file. It translates a given Context Free Grammar (CFG) specifications into a C implementation y.tab.c

## Building the VSA Compiler Using Lex and Yacc

### Features of the Compiler

- Symbol Table
- Parse Tree and AST
- Semantic Analysis
- Intermediate Code Generation

### What the Compiler accepts?

- Simple C programs - declaration and assignment, printf, scanf and arithmetic operations ( + , - , * , / )
- Simple for loops and if-else statements (no else if)
- Nested for loops and if-else statements

#### Assumptions

- All header files are of the format “^"#include"[ ]*<.+\.h>”.
- The main function does not take any input parameters.
- Numbers follow the format “[-]?{digit}+| [-]?{digit}+\.{digit}{1,6}”. Hence numbers of the type +123.45 are not permitted.
- The variables can be of int, float, or char type. No arrays are permitted. 
- The body of an if and else block is enclosed in parenthesis even if it is a single line.
- The body of a for loop is enclosed in parenthesis, even if it is a single line.
- For the sake of simplicity, the scope of all variables is considered the same. Hence, variables cannot be redeclared within loops or if-else blocks. 
- ```printf``` statements take a single string as a parameter. No type checking is performed.
- ```scanf``` statements take a string and &id as input. No type checking is performed.
- The condition statement of an if statement and for statement is of the form “value relop value” where value can be a number or id. 

 

## Using the Compiler

```
flex lexer.l 
bison -d -v parser.y
gcc -w parser.tab.c
type input1.vsa | .\a.exe

```

### Example of the Compiler in Action

```
#include<stdio.h>
#include<string.h>

int main() {
    int a;
    int x=1;
    int y=2;
    int z=3;
    x=3;
    y=10;
    z=5;
    if(x>5) {
        for(int k=0; k<10; k++) {
            y = x+3;
            printf("Hello!");
        }
    } else {
        int idx = 1;
    }
    for(int i=0; i<10; i++) {
        printf("Hello World!");
        scanf("%d", &x);
        if (x>5) {
            printf("Hi");
        }
        for(int j=0; j<z; j++) {
            a=1;
        }
    } 
    return 1;
}
```

### Symbol Table

![Symbol Table](/Images/table.png)

### Printing Parse Tree Inorder 

![Symbol Table](/Images/inorder.png)

### Visualising the Parse Tree 

![Symbol Table](/Images/tree.png)

### Semantic Phase

![Symbol Table](/Images/semantic.png)

### Intermediate Code Generation

![Symbol Table](/Images/icg.png)
