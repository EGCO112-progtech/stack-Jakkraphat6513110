#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "node.h"
#include "stack.h"

int main(int argc, char **argv){
  
  int i,j;
  Stack s;
  s.top = NULL;
  s.size = 0 ;
  for(i = 1 ;i < argc;i++){
      pushs(&s,atoi(argv[i]));
  }
  pop_all(&s);


  

 
 /*Stack s;
 printf("Checking the parentheses in argv arguments\n");
  for(i=1;i<argc;i++){
   
     for(j=0;j<strlen(argv[i]);j++){
        Use stack to help with the parentheses


     }


  }

*/


   return 0;
}
