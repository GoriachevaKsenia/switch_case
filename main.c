# include <stdio.h>

//switch (<vaiue>){
 //case <const_1; <code_1>; break;
 //case <const_2; <code_2>; break;

 //case <const_n; <code_n>; break;
 //[defaut: <default_code>;break;]
//}
int main(){
    int a, b, c;
    char oper;
    printf("Numbers:\n");
    printf("a= ");
    scanf("%d", &a);
    printf("b= ");
    scanf("%d", &b);
    printf("Enter operation: +, -, *, /\n");
    scanf(" %c", &oper);
    printf("\n");
    switch (oper)
    {
    case '+':
        c = a + b;
        printf("c=%d", c); break;
    case '-':
        c = a - b;
        printf("c=%d", c); break;
    case '*':
        c = a * b;
        printf("c=%d", c); break;
    
    case '/':
        c = a / b;
        printf("c=%d", c); break;
    default: printf("Error value");
    }
    printf("\n");
    return 0;
}