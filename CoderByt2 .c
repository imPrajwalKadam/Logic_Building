#include <stdio.h> 
#include <string.h>

void CodelandUsernameValidation(char * str) {
  int i = 0;
  // code goes here  
  
  i = strlen(str);

  if((i >= 4 )&&(i <= 25)&&(str[0] >= 'A')&&(str[0]<='z')&&(str[i-1]!='_')&&(str[0]!='_'))
  {
    printf("true\n");  
  }
  else {
    printf("false\n");
  }
 // printf("%d\n",i);
  
}

int main(void) { 
   
  // keep this function call here
  CodelandUsernameValidation(coderbyteInternalStdinFunction(stdin));
  return 0;
}
