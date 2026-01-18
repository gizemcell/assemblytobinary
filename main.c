#include <stdlib.h>
#include <stdio.h>



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



return 0;
}