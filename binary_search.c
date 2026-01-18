#include "binary_search.h"
#include <math.h>
#include <string.h>

char *found(Item *arr,char* key,int len){
    int size=len;
    int mid=size/2;
    int max_step_size=ceil(log2(size));
    int init=0;
    int last=size-1;
    while(max_step_size>=0){
        int comp=strcmp(arr[mid].key,key);
        if(comp==0){
            return arr[mid].value;
        }else if(comp<0){
            init=mid+1;
        }else{
            last=mid-1;
        }
        if(init<0 || last>=size){
            break;
        }
        mid=(last+init)/2;
        max_step_size--;
    }
    return "-1";
}
