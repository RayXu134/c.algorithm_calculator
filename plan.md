# plan.md

Calculate expressions flow:
1. Tokenize.
2. Infix to postfix.
3. Calculate.

## Tokenize
**Split an expression to tokens.**

### Example:
Expression: 1 + 5 * (7 - 3)

Tokens: [1],[+],[5],[*],[(],[7],[-],[3],[)]


## Infix to postfix
**Use an algorithm call "shunting yard"**

Tokens: [1],[+],[5],[*],[(],[7],[-],[3],[)]

Postfix: [1],[5],[7],[3],[-],[*],[+]


## Calculate
**You can use a stack to calculate a postfix expression**


