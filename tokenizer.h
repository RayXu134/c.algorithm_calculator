// tokenizer.h
// Defines types about token.

#ifndef _ALGORITHM_CALCULATOR_TOKENIZER_H_
#define _ALGORITHM_CALCULATOR_TOKENIZER_H_

// Token types.
enum TokenType {
  TYPE_NUMBER,
  TYPE_OPERATOR,
  UNSET,
  END
};

// Token data.
union TokenData {
  double number;
  char op;  // Operator.
};

// Token structure.
struct Token {
  // Type of this token.
  enum TokenType type;
  // Data.
  union TokenData data;
};

// @brief Init a Token type.
//
// @param token Token to init.
void TokenInit(struct Token *token);

// @brief Set the numeric data to the token's data.
//
// @param token The token whose data will be set.
// @param number The numeric data to assign to the token.
void TokenSetDataNumber(struct Token *token, double number);

// @brief Assign an operator character to the token's data.
//
// @param token The token whose data will be set.
// @param op The operator character to assign (e.g. '+','-','*','/').
void TokenSetDataOperator(struct Token *token, char op);

// @brief Get the data type stored in the token.
//
// @param token Pointer to the token whose data type is to be retrieved.
// @return The data type of the token.
enum TokenType TokenGetDataType(struct Token *token);

#endif  // _ALGORITHM_CALCULATOR_TOKENIZER_H_
