#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int num1,num2,result;
    char symbol;
    printf("Enter your first number : ");
    scanf("%d",&num1);
    printf("Enter your second number : ");
    scanf("%d",&num2);
    printf("Enter a arithmetic symbol : ");
    scanf("%c",symbol);
    
    if(symbol == '+'){
       result = num1+num2;
    }else if(symbol == '-'){
        result = num1-num2;
    }else if(symbol == '*'){
        result = num1*num2;
    }else if(symbol == '/'){
        result = num1/num2;
    }else{
        result = num1+num2;
    }
    
    printf("%d",result);
    
    return (EXIT_SUCCESS);
}

