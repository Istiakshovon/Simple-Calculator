#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int num1,num2,result;
    char operator;
    printf("Enter your first number : ");
    scanf("%d",&num1);
    printf("Enter your second number : ");
    scanf("%d",&num2);
    printf("Enter a operator : ");
    scanf("%c",operator);
    
    if(operator == '+'){
       result = num1+num2;
    }else if(operator == '-'){
        result = num1-num2;
    }else if(operator == '*'){
        result = num1*num2;
    }else if(operator == '/'){
        result = num1/num2;
    }else{
        result = num1+num2;
    }
    
    printf("%d",result);
    
    return (EXIT_SUCCESS);
}

