#include<stdio.h>
void main (){
    char name[]="Hii I am Vishal ";
    char* ptr = name;
    printf("%s\n",ptr);
    name[1]='I';
    printf("%s\n",ptr);

    
}