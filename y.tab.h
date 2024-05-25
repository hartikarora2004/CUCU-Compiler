/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TYPE = 258,                    /* TYPE  */
    RETURN = 259,                  /* RETURN  */
    WHILE = 260,                   /* WHILE  */
    ELSE = 261,                    /* ELSE  */
    IF = 262,                      /* IF  */
    ASSIGN = 263,                  /* ASSIGN  */
    SEMI = 264,                    /* SEMI  */
    NUM = 265,                     /* NUM  */
    ID = 266,                      /* ID  */
    L_RB = 267,                    /* L_RB  */
    R_RB = 268,                    /* R_RB  */
    L_SB = 269,                    /* L_SB  */
    R_SB = 270,                    /* R_SB  */
    L_CB = 271,                    /* L_CB  */
    R_CB = 272,                    /* R_CB  */
    COMMA = 273,                   /* COMMA  */
    REL_OP = 274,                  /* REL_OP  */
    LOG_OP = 275,                  /* LOG_OP  */
    BIT_OP = 276,                  /* BIT_OP  */
    STRING = 277,                  /* STRING  */
    PLUS = 278,                    /* PLUS  */
    MINUS = 279,                   /* MINUS  */
    MULTIPLY = 280,                /* MULTIPLY  */
    DIVIDE = 281,                  /* DIVIDE  */
    BOOLEAN = 282                  /* BOOLEAN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define TYPE 258
#define RETURN 259
#define WHILE 260
#define ELSE 261
#define IF 262
#define ASSIGN 263
#define SEMI 264
#define NUM 265
#define ID 266
#define L_RB 267
#define R_RB 268
#define L_SB 269
#define R_SB 270
#define L_CB 271
#define R_CB 272
#define COMMA 273
#define REL_OP 274
#define LOG_OP 275
#define BIT_OP 276
#define STRING 277
#define PLUS 278
#define MINUS 279
#define MULTIPLY 280
#define DIVIDE 281
#define BOOLEAN 282

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
