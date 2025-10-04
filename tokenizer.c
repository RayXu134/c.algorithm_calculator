// tokenizer.c
// Can tokenize expressions.
// Defines token type.

#include "tokenizer.h"

void TokenInit(struct Token *token) {
  token->type = UNSET;
}

void TokenSetDataNumber(struct Token *token, double number) {
  token->type = TYPE_NUMBER;
  token->data.number = number;
}

void TokenSetDataOperator(struct Token *token, char op) {
  token->type = TYPE_OPERATOR;
  token->data.op = op;
}

enum TokenType TokenGetDataType(struct Token *token) {
  return token->type;
}
