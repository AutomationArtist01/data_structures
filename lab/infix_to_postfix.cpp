/******************************************************************************
infix_to_postfix here we have to give some rules to make it work that are 
1.if it is not a operators then add to the postfix expression 
2.if ")" close then pop all the operators from the stack till "("
3.if operator precedence is higher or equal then pop the operator below that 
4.if the infix equation is complete then we need to pop that all elements in stack 

steps to make it work
1. create a stack and string for postfix
2. read the infix expression 
3. now we need to find that is it operand or not if it is operand then we need to add to string 
4. if it is not then we need to add into stack and we need to check that all rules we given 

now to Evaluation we need to make this postfix data in to a stack 
then we need to pop that one by one if it is a operator then we need to do that operation on that operand 
*******************************************************************************/
#include <iostream>
#include <stack>
using namespace std;

int main() {
    string infix, postfix = "";
    stack<char> op;  
    stack<int> val;  
    cout << "enter infix: ";
    cin >> infix;
    for(int i=0;i<infix.length();i++) {
        char ch=infix[i];
        if(isdigit(ch)) {
            postfix+=ch;
        }
        else if(ch=='(') {
            op.push(ch);
        }
        else if(ch==')') {
            while (!op.empty()&&op.top()!='(') {
                postfix += op.top();
                op.pop();
            }
            op.pop(); 
        }
        else {
            while(!op.empty() && op.top() != '(') {
                int pTop, pCur;
                if (op.top() == '*' || op.top() == '/') {
                    pTop = 2;
                }
                else {
                    pTop = 1;
                }
                if (ch == '*' || ch == '/') {
                    pCur = 2;
                }
                else {
                    pCur = 1;
                }
                if (pTop >= pCur) {
                    postfix += op.top();
                    op.pop();
                } else {
                    break;
                }
            }
            op.push(ch);
        }
    }
    while (!op.empty()) {
        postfix += op.top();
        op.pop();
    }
    cout << "postfix: " << postfix << endl;
/**** i can't get how to Evaluation ****/
    return 0;
}
