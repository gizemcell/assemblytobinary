#include <stdlib.h>
#include <stdio.h>
#include "binary_search.h"



int main(int argc,char *argv[]){
    /*
    1)input olarak dosya al
    2)her line i oku 
    3)parse et
    */
   if(argc!=3){
        printf("Wrong usage: <inputfile> <outputfile>");
        return 0;
   }
   FILE *fptr;
   fptr=fopen(argv[1],"r");
   //sort edilecek key e gore.
   Item opcode_map[50]={
     {"add","100000",'R'},
     {"addu","100001",'R'},
     {"addi","001000",'I'},
     {"addiu","001001",'I'},
     {"and","100100",'R'},
     {"andi","001100",'I'},
     {"div","011010",'R'},
     {"divu","011011",'R'},
     {"mult","011000",'R'},
     {"multu","011001",'R'},
     {"nor","100111",'R'},
     {"or","100101",'R'},
     {"ori","001101",'I'},
     {"sll","000000",'R'},
     {"sllv","000100",'R'},
     {"sra","000011",'R'},
     {"srav","000111",'R'},
     {"srl","000010",'R'},
     {"srlv","000110",'R'},
     {"sub","100010",'R'},
     {"subu","100011",'R'},
     {"xor","100110",'R'},
     {"xori","001110",'I'},
     {"lhi","011001",'I'},
     {"llo","011000",'I'},
     {"slt","101010",'R'},
     {"sltu","101001",'R'},
     {"slti","001010",'I'},
     {"sltiu","001001",'I'},
     {"beq","000100",'I'},
     {"bgtz","000111",'I'},
     {"blez","000110",'I'},
     {"bne","000101",'I'},
     {"j","000010",'J'},
     {"jal","000011",'J'},
     {"jalr","001001",'J'},
     {"jr","001000",'J'},
     {"lb","100000",'I'},
     {"lbu","100100",'I'},
     {"lh","100001",'I'},
     {"lhu","100101",'I'},
     {"lw","100011",'I'},
     {"sb","101000",'I'},
     {"sh","101001",'I'},
     {"sw","101011",'I'},
     {"mfhi","010000",'R'},
     {"mflo","010010",'R'},
     {"mthi","010001",'R'},
     {"mtlo","010011",'R'},
   };
   //bunlari sortlamak icin sorting algo yazilacak.
   //{"trap","011010",'R'} bu trap arastirilacak
   //dosya okumasi yapilip,parse edilecek



return 0;
}