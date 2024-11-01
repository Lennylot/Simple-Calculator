#include <stdio.h>
#include <float.h>

char choose_operation;
int run_program = 0;
float a, b, c; 



void calc_function(){
    while (run_program != 1) {
  
    
    printf("Enter a (Add(A), Subtract(S), Times(T), Divide(D), Quit(Q)) to start the calculator: ");
    //adding a space before the "%c" to skip any whitespace leftover in the input buffer
    scanf(" %c", &choose_operation);
    
    //this just exits out of the loop 
    if (choose_operation == 'Q' || choose_operation == 'q'){
        printf("calculator OFF");
        break;
        
    }
    
    printf("Enter a number of a ");
    scanf("%f", &a);

    printf("Enter a number of b ");
    scanf("%f", &b);
    

        
    

    switch (choose_operation) {
    case 'A':
    case 'a':
        c = a+b;
        printf("%f\n", c);
        break;
        
        
    case 'S':
    case 's':
        c = a-b;
        printf("%f\n", c);
        break;
        
   
    case 'T':
    case 't':
        c = a*b;
        printf("%f\n", c);
        break;
        
    
    case 'D':
    case 'd':
        c = a/b;
        printf("%f\n", c);
        break;
        

    default:
        break;
    
    }
    }
  
}
        


int main(){
    printf("Starting calculator\n");
    calc_function();
    return 0;
}
