#include<stdio.h>
#include<string.h>
int prece(char c){
    if(c=='^')
    return 3;
    else if(c=='/'||c=='*')
    return 2;
    else if(c=='+'||c=='-')
    return 1;
    else
    return -1;
}
// Asocitivity of operators
char associativity(char c){
    if(c=='^')
    return 'R';
    return 'L';//default to left associativity
}
// convert infix to postfix
void infixToPostfix(char s[]){
    char result[100];
    int ri=0;
    int len=strlen(s);
    char stack[100];
    int si=-1;

    for (int i=0;i<len;i++){
        char c=s[i];
        // if the scanned character is an operand , add it to output string.
        if((c>='a'&& c<='z')||(c>='A'&& c<='Z')||(c>='0'&&c<='9')){
            result [ri++]=c;
        }
        // if the scanned is character is an '(', push it to stack
        else if(c=='('){
            stack[++si]=c;
        }
        // if the scanned is character is an ')', pop and add it to the output string from the stackuntil an'(' is encountered
        else if(c==')'){
            while(si>=0 && stack[si]!='('){
                result[ri++]=stack[si--];
            }
            si--;//pop'('
        }
        // if an operator is scanned
        else{
            while(si>=0 && (prece(s[i])<prece(stack[si])||prece(s[i])==prece(stack[si]) && associativity(s[i])=='L')){
                result[ri++]=stack[si--];
            }
            stack[++si]=c;
        }
    }
    // pop all the remaining elements from the stack
    while(si>=0){
        result[ri++]=stack[si--];

    }
    result[ri]='\0';
    printf("%s\n",result);
}
int main(){
    char exp[]="a+(b*c)";
    infixToPostfix(exp);
}