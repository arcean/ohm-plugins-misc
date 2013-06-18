
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TKN_EOL = 258,
     TKN_FUNCTION = 259,
     TKN_SEQUENCE = 260,
     TKN_RESOLVER = 261,
     TKN_NAME = 262,
     TKN_STEP_UNTIL = 263,
     TKN_STEP = 264,
     TKN_FIRST_SUCCESS = 265,
     TKN_FIRST_FAILURE = 266,
     TKN_END = 267,
     TKN_DEVICE = 268,
     TKN_OUT_SIGNAL = 269,
     TKN_OUT_RATIO = 270,
     TKN_TYPE = 271,
     TKN_SCREEN = 272,
     TKN_CRTC = 273,
     TKN_ROOT_WINDOW = 274,
     TKN_ROOT_WINDOW_ID = 275,
     TKN_ROOT_PROPERTY = 276,
     TKN_NEW_WINDOW = 277,
     TKN_APP_WINDOW = 278,
     TKN_APP_WINDOW_ID = 279,
     TKN_APP_PROPERTY = 280,
     TKN_WIN_PROPERTY = 281,
     TKN_OUT_PROPERTY = 282,
     TKN_XV_PROPERTY = 283,
     TKN_WIN_ID = 284,
     TKN_VARIABLE = 285,
     TKN_ATOM = 286,
     TKN_PROPERTY = 287,
     TKN_WINDOW = 288,
     TKN_OUTPUT = 289,
     TKN_INPUT = 290,
     TKN_VIDEO = 291,
     TKN_TARGET = 292,
     TKN_MODE = 293,
     TKN_POSITION = 294,
     TKN_DONTCARE = 295,
     TKN_APPEND = 296,
     TKN_HSYNC_POSITIVE = 297,
     TKN_HSYNC_NEGATIVE = 298,
     TKN_VSYNC_POSITIVE = 299,
     TKN_VSYNC_NEGATIVE = 300,
     TKN_INTERLACE = 301,
     TKN_DOUBLE_SCAN = 302,
     TKN_CSYNC = 303,
     TKN_CSYNC_POSITIVE = 304,
     TKN_CSYNC_NEGATIVE = 305,
     TKN_PIXEL_MULTIPLEX = 306,
     TKN_DOUBLE_CLOCK = 307,
     TKN_HALVE_CLOCK = 308,
     TKN_CARDINAL = 309,
     TKN_STRING = 310,
     TKN_INTEGER = 311,
     TKN_UNSIGNED = 312,
     TKN_IF = 313,
     TKN_THEN = 314,
     TKN_ELSE = 315,
     TKN_ENDIF = 316,
     TKN_ASSIGN = 317,
     TKN_COMMA = 318,
     TKN_COLON = 319,
     TKN_IMPLICATION = 320,
     TKN_OPEN_PARENTHESIS = 321,
     TKN_CLOSE_PARENTHESIS = 322,
     TKN_OPEN_BRACKET = 323,
     TKN_CLOSE_BRACKET = 324,
     TKN_LESS = 325,
     TKN_LESS_OR_EQUAL = 326,
     TKN_EQUAL = 327,
     TKN_GREATER_OR_EQUAL = 328,
     TKN_GREATER = 329,
     TKN_PLUS = 330,
     TKN_MINUS = 331,
     TKN_ASTERISK = 332,
     TKN_SLASH = 333,
     TKN_LOGICAL_OR = 334,
     TKN_LOGICAL_AND = 335,
     TKN_UNSIGNED_NUMBER = 336,
     TKN_POSITIVE_NUMBER = 337,
     TKN_NEGATIVE_NUMBER = 338,
     TKN_IDENTIFIER = 339,
     TKN_TEXT = 340
   };
#endif
/* Tokens.  */
#define TKN_EOL 258
#define TKN_FUNCTION 259
#define TKN_SEQUENCE 260
#define TKN_RESOLVER 261
#define TKN_NAME 262
#define TKN_STEP_UNTIL 263
#define TKN_STEP 264
#define TKN_FIRST_SUCCESS 265
#define TKN_FIRST_FAILURE 266
#define TKN_END 267
#define TKN_DEVICE 268
#define TKN_OUT_SIGNAL 269
#define TKN_OUT_RATIO 270
#define TKN_TYPE 271
#define TKN_SCREEN 272
#define TKN_CRTC 273
#define TKN_ROOT_WINDOW 274
#define TKN_ROOT_WINDOW_ID 275
#define TKN_ROOT_PROPERTY 276
#define TKN_NEW_WINDOW 277
#define TKN_APP_WINDOW 278
#define TKN_APP_WINDOW_ID 279
#define TKN_APP_PROPERTY 280
#define TKN_WIN_PROPERTY 281
#define TKN_OUT_PROPERTY 282
#define TKN_XV_PROPERTY 283
#define TKN_WIN_ID 284
#define TKN_VARIABLE 285
#define TKN_ATOM 286
#define TKN_PROPERTY 287
#define TKN_WINDOW 288
#define TKN_OUTPUT 289
#define TKN_INPUT 290
#define TKN_VIDEO 291
#define TKN_TARGET 292
#define TKN_MODE 293
#define TKN_POSITION 294
#define TKN_DONTCARE 295
#define TKN_APPEND 296
#define TKN_HSYNC_POSITIVE 297
#define TKN_HSYNC_NEGATIVE 298
#define TKN_VSYNC_POSITIVE 299
#define TKN_VSYNC_NEGATIVE 300
#define TKN_INTERLACE 301
#define TKN_DOUBLE_SCAN 302
#define TKN_CSYNC 303
#define TKN_CSYNC_POSITIVE 304
#define TKN_CSYNC_NEGATIVE 305
#define TKN_PIXEL_MULTIPLEX 306
#define TKN_DOUBLE_CLOCK 307
#define TKN_HALVE_CLOCK 308
#define TKN_CARDINAL 309
#define TKN_STRING 310
#define TKN_INTEGER 311
#define TKN_UNSIGNED 312
#define TKN_IF 313
#define TKN_THEN 314
#define TKN_ELSE 315
#define TKN_ENDIF 316
#define TKN_ASSIGN 317
#define TKN_COMMA 318
#define TKN_COLON 319
#define TKN_IMPLICATION 320
#define TKN_OPEN_PARENTHESIS 321
#define TKN_CLOSE_PARENTHESIS 322
#define TKN_OPEN_BRACKET 323
#define TKN_CLOSE_BRACKET 324
#define TKN_LESS 325
#define TKN_LESS_OR_EQUAL 326
#define TKN_EQUAL 327
#define TKN_GREATER_OR_EQUAL 328
#define TKN_GREATER 329
#define TKN_PLUS 330
#define TKN_MINUS 331
#define TKN_ASTERISK 332
#define TKN_SLASH 333
#define TKN_LOGICAL_OR 334
#define TKN_LOGICAL_AND 335
#define TKN_UNSIGNED_NUMBER 336
#define TKN_POSITIVE_NUMBER 337
#define TKN_NEGATIVE_NUMBER 338
#define TKN_IDENTIFIER 339
#define TKN_TEXT 340




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 70 "config-parser.y"

    char                 *string;
    int32_t               integer;
    uint32_t              unsignd;
    videoep_value_type_t  valtyp;
    config_windef_t      *windef;
    exec_def_t           *execdef;
    argument_def_t       *argdef;
    int                   index;
    sequence_type_t       seqtype;



/* Line 1676 of yacc.c  */
#line 236 "config-parser.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yy_videoep_lval;


