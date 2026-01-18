#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H

typedef struct{
    char *key;//
    char *opcode;//for R type opcode=funct
    char type; // R=register operands,I=immediate operand,J=for jumping
}Item;




char *found(Item *arr,char* key,int len);




















#endif