#include<stdio.h>
#include<math.h>
//#include<calculator_operations.h>
int add(int operand1, int operand2){
    return operand1+operand2;
}
int subtract(int operand1, int operand2){
    return operand1-operand2;
}
int multiply(int operand1, int operand2){
    return operand1*operand2;
}
int divide(int operand1, int operand2){
    return operand1/operand2;
}
int modulus(int operand1, int operand2){
    return operand1%operand2;
}
/*int sqrt(int operand1){
    return 1;
}*/
int factorial(int operand1){
    if(operand1==1) return 1;
    else{
        return operand1*factorial(operand1-1);
    }
}
int permutation(int operand1, int operand2){
    return factorial(operand1)/factorial(operand1-operand2);
}
int combination(int operand1, int operand2){
    return factorial(operand1)/multiply(factorial(operand1-operand2),factorial(operand2));
}
void main(){
    int menu=1,operand1=0,operand2=0,result=0;
    while(menu){
        printf("Choose an operation:\n1=Addition\n2=Subtraction\n3=Multiplication\n4=Division\n5=Modulus\n6=Square root\n7=Permutation\n8=Combination\n9=clear\n0=Exit\n");
        scanf("%d",&menu);
        if(menu==6){
            if(operand1==0){
            printf("Enter the number : ");
            scanf("%d",&operand1);
            }
            if(operand1>0)
                result=sqrt(operand1);
            else printf("Invalid input");
            printf("%d\n",result);
        }
        else{
            if(operand1==0){
                printf("Enter the two operands : ");
                scanf("%d %d",&operand1,&operand2);
            }
            else if(menu!=0){
                printf("Enter the second operand : ");
                scanf("%d",&operand2);
            }
            switch(menu){
                case 1: result=add(operand1,operand2);
                        break;
                case 2: result=subtract(operand1,operand2);
                        break;
                case 3: result=multiply(operand1,operand2);
                        break;
                case 4: result=divide(operand1,operand2);
                        break;
                case 5: result=modulus(operand1,operand2);
                        break;
                case 7: if(operand1<operand2){
                            printf("Invalid input");
                        }
                        else{
                            result=permutation(operand1,operand2);
                        }
                        break;
                case 8: if(operand1<operand2){
                            printf("Invalid input");
                        }
                        else{
                            result=combination(operand1,operand2);
                        }
                        break;
            }
            printf("%d\n",result);
            operand1=result;
        }
    }
}