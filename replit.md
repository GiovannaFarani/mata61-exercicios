# MATA61 - Exercícios de Compiladores

## Project Overview

This is a compilers course (MATA61) project containing lexical analysis and compiler construction exercises using **Flex** and **C**. The exercises are structured progressively:

- **E1**: Lexical analysis with Flex — arithmetic expression tokenizer
- **E2**: Flex + Bison integration
- **E3**: Evaluation
- **E4**: Interpretation
- **E5**: AST generation
- **E6**: Type checking
- **E7**: Code generation

## Architecture

- **Language**: C + Flex (lexer generator)
- **Build System**: GNU Make
- **No frontend** — purely command-line tools

## Build & Run

```bash
# Build E1
cd E1 && make compile

# Run the lexer (interactive, reads from stdin)
./E1/e1
```

## System Dependencies

- `flex` — lexer generator (2.6.4)
- `gcc` — C compiler (14.2.1)

## Workflow

The **Build E1** console workflow compiles the E1 exercise automatically.

## E1 Structure

- `E1/e1.l` — Flex lexer specification
- `E1/token.h` — Token type definitions (EOL, NUM, PLUS, MINUS, TIMES, DIV, ERROR)
- `E1/main.c` — Entry point that calls `yylex()`
- `E1/makefile` — Build rules: `flex e1.l && cc -o e1 lex.yy.c main.c`
