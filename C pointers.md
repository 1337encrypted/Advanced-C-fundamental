# $$\mathit{Pointers}$$

**A pointer is a variable that holds the address of another variable**

```
#include <stdio.h>
int main() {
    int n = 10;
    int *p = &n;//stores the address of 'n'   
    printf("%p" , p);                           // p contains the address of the number n in hexadecimal format
    return 0;
}
```

**Output**

`0x7ffc4187c0ac`

## $$\mathit{Types-of-Pointers-in-C}$$

1. Null Pointer   
`int *p = NULL;         //printf("%d",p); results 0`
1. Void Pointer   
`void *p = NULL;        //Generic pointer, it can be typecasted into any type`
1. Wild Pointer   
`int *p;                //uninitialized pointers that points to arbitrary memory location` 
1. Dangling Pointer
```
int *ptr = (int *)malloc(sizeof(int));                      //memory created for ptr    
free(ptr);                                                  // memory released    

// ptr is pointing to a deleted memory location now.     
ptr = NULL; // No more a dangling pointer.   
```
5. Complex Pointer 
Complex pointers contains of () , [] , * , Identifier , Data type with different associativity and precedence. () & [] have the highest precedence & associativity from left to right followed by * & Identifier having precedence 2 & associativity from right to left and Data Type having the least precedence of all.    
`int (*p)(int (*)[3], int (*)void)) `
    - Here '()' is used to declare and define the function.
    - '[]' is used as an array subscript operator.
    - '*' is the pointer operator.
    - 'Identifier' is the name of a pointer.
    - 'Data type' is the type of variable.
6. Near Pointer
Near Pointer is a pointer that can access small size of data(usually 64kb)
7. Far Pointer
A far pointer is a pointer (generally 32 bit) that basically uses two registers for storing segment & offset addresses and can be used to access memory outside current segment where a register is able to hold 4 bytes(1 byte being equal to 8 bits).   
8. Huge Pointer
Both Huge and Far pointers are typically 32 bit and both of them can access memory outside current segment. The only difference is that for far pointer the segment part cannot be modified


