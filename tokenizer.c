// tokenizer.c
// Can tokenize expressions.
// Defines token type.

// Token types.
enum TokenType {
  TYPE_NUMBER,
  TYPE_OPERATOR,
  END
};

// Token data.
union TokenData {
  double number;
  char operator;
};

// Token structure.
struct Token {
  // Type of this token.
  enum TokenType type;
  // Data.
  union TokenData data;
};
