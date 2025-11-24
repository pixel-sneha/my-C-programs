#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 1000

// Stack for characters (operators and parentheses)
typedef struct {
    char items[MAX];
    int top;
} Stack;

void initStack(Stack *s) {
    s->top = -1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

int isFull(Stack *s) {
    return s->top == MAX - 1;
}

void push(Stack *s, char c) {
    if (!isFull(s)) s->items[++(s->top)] = c;
}

char pop(Stack *s) {
    if (!isEmpty(s)) return s->items[(s->top)--];
    return '\0';
}

char peek(Stack *s) {
    if (!isEmpty(s)) return s->items[s->top];
    return '\0';
}

// Return precedence: higher value -> higher precedence
int precedence(char op) {
    switch (op) {
        case '^': return 3;
        case '*':
        case '/': return 2;
        case '+':
        case '-': return 1;
        default:  return 0;
    }
}

// Return 1 if op is right-associative
int isRightAssociative(char op) {
    if (op == '^') return 1;
    return 0;
}

// Return 1 if character is an operator
int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

// Convert infix (null-terminated) to postfix; result stored in output (caller must provide enough space)
void infixToPostfix(const char *infix, char *output) {
    Stack s;
    initStack(&s);

    int i = 0, k = 0;
    char c;

    while ((c = infix[i++]) != '\0') {
        if (isalnum((unsigned char)c)) {
            // Operand: append to output
            output[k++] = c;
        } else if (c == '(') {
            push(&s, c);
        } else if (c == ')') {
            // Pop until '(' or stack empty
            while (!isEmpty(&s) && peek(&s) != '(') {
                output[k++] = pop(&s);
            }
            if (!isEmpty(&s) && peek(&s) == '(') pop(&s); // remove '('
        } else if (isOperator(c)) {
            // While top of stack is operator with greater precedence
            while (!isEmpty(&s) && isOperator(peek(&s))) {
                char topOp = peek(&s);
                int topPrec = precedence(topOp);
                int curPrec = precedence(c);

                if (topPrec > curPrec || (topPrec == curPrec && !isRightAssociative(c))) {
                    output[k++] = pop(&s);
                } else {
                    break;
                }
            }
            push(&s, c);
        } else {
            // ignore any other characters (like spaces). You may handle errors here.
        }
    }

    // Pop remaining operators
    while (!isEmpty(&s)) {
        char t = pop(&s);
        if (t != '(' && t != ')') output[k++] = t;
    }

    output[k] = '\0';
}

int main(void) {
    char infix[MAX];
    char postfix[MAX];

    printf("Enter infix expression (no spaces): ");
    if (fgets(infix, sizeof(infix), stdin) == NULL) return 0;

    // Remove trailing newline
    size_t len = strlen(infix);
    if (len > 0 && infix[len - 1] == '\n') infix[len - 1] = '\0';

    infixToPostfix(infix, postfix);

    printf("Postfix: %s\n", postfix);
    return 0;
}