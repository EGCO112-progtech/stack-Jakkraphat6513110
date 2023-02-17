#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "node.h"
#include "stack.h"

int main(int argc, char **argv){
  
  int i,j,temp;
  Stack s;
  s.top = NULL;
  s.size = 0 ;
  /*for(i = 1 ;i < argc;i++){
      pushs(&s,atoi(argv[i]));
  }
  pop_all(&s);
*/

  



 printf("Checking the parentheses in argv arguments\n");
  for(i=1;i<argc;i++){
   temp=0; 
   printf("%d", argc);
     for(j=0;j<strlen(argv[i]);j++){
        //Use stack to help with the parentheses
        switch(argv[i][j]){
          case '{':
          case '[':
            pushs(&s,argv[i][j]); 
            break;
          case ']':
            if(pops(&s)!='[') temp=1; 
            break; 
          case '}':
            if(pops(&s)!='{') temp=1; 
            break;
            
        }
        if(temp == 1) break;
     }
      // if(s.size>0){
      //   printf("argv %d: Incorrect too many open parenthesis\n",i);
      //   pop_all(&s);
      // }
      if(temp == 0){
        printf("argv %d: Correct\n",i);
      }else{
        printf("argv %d: Incorrect\n",i);
      }
  }


   return 0;
}
