// tokenizer.h
// Defines types about token.

#ifndef _ALGORITHM_CALCULATOR_TOKENIZER_H_
#define _ALGORITHM_CALCULATOR_TOKENIZER_H_

// Token types.
enum TokenType {
  TYPE_NUMBER,
  TYPE_OPERATOR,
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

#endif  // _ALGORITHM_CALCULATOR_TOKENIZER_H_
