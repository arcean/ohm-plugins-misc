
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
     START_FULL_PARSER = 258,
     START_ADDON_PARSER = 259,
     KEYWORD_GLOBAL = 260,
     KEYWORD_PARTITION = 261,
     KEYWORD_DESCRIPTION = 262,
     KEYWORD_PATH = 263,
     KEYWORD_CPU_SHARES = 264,
     KEYWORD_MEM_LIMIT = 265,
     KEYWORD_REALTIME_LIMIT = 266,
     KEYWORD_RULE = 267,
     KEYWORD_BINARY = 268,
     KEYWORD_CMDLINE = 269,
     KEYWORD_NAME = 270,
     KEYWORD_GROUP = 271,
     KEYWORD_RENICE = 272,
     KEYWORD_SCHEDULE = 273,
     KEYWORD_USER = 274,
     KEYWORD_PARENT = 275,
     KEYWORD_TYPE = 276,
     KEYWORD_IGNORE = 277,
     KEYWORD_LEADS = 278,
     KEYWORD_RECLASSIFY = 279,
     KEYWORD_RECLASS_AFTER = 280,
     KEYWORD_CLASSIFY = 281,
     KEYWORD_PRIORITY = 282,
     KEYWORD_OOM = 283,
     KEYWORD_RESPONSE_CURVE = 284,
     KEYWORD_NO_OP = 285,
     KEYWORD_EXPORT_GROUPS = 286,
     KEYWORD_EXPORT_PARTITIONS = 287,
     KEYWORD_EXPORT_FACT = 288,
     KEYWORD_CGROUPFS_OPTIONS = 289,
     KEYWORD_CGROUP_CONTROL = 290,
     KEYWORD_IOWAIT_NOTIFY = 291,
     KEYWORD_IOQLEN_NOTIFY = 292,
     KEYWORD_SWAP_PRESSURE = 293,
     KEYWORD_ADDON_RULES = 294,
     KEYWORD_ALWAYS_FALLBACK = 295,
     KEYWORD_PRESERVE_PRIO = 296,
     TOKEN_EOL = 297,
     TOKEN_ASTERISK = 298,
     TOKEN_HEADER_OPEN = 299,
     TOKEN_HEADER_CLOSE = 300,
     TOKEN_CURLY_OPEN = 301,
     TOKEN_CURLY_CLOSE = 302,
     TOKEN_AND = 303,
     TOKEN_OR = 304,
     TOKEN_NOT = 305,
     TOKEN_EQUAL = 306,
     TOKEN_NOTEQ = 307,
     TOKEN_LESS = 308,
     TOKEN_GREATER = 309,
     TOKEN_IMPLIES = 310,
     TOKEN_SEMICOLON = 311,
     TOKEN_COMMA = 312,
     TOKEN_COLON = 313,
     TOKEN_ARG = 314,
     KEYWORD_CLASSIFY_ARGVX = 315,
     TOKEN_IDENT = 316,
     TOKEN_PATH = 317,
     TOKEN_STRING = 318,
     TOKEN_UINT = 319,
     TOKEN_SINT = 320,
     TOKEN_DOUBLE = 321
   };
#endif
/* Tokens.  */
#define START_FULL_PARSER 258
#define START_ADDON_PARSER 259
#define KEYWORD_GLOBAL 260
#define KEYWORD_PARTITION 261
#define KEYWORD_DESCRIPTION 262
#define KEYWORD_PATH 263
#define KEYWORD_CPU_SHARES 264
#define KEYWORD_MEM_LIMIT 265
#define KEYWORD_REALTIME_LIMIT 266
#define KEYWORD_RULE 267
#define KEYWORD_BINARY 268
#define KEYWORD_CMDLINE 269
#define KEYWORD_NAME 270
#define KEYWORD_GROUP 271
#define KEYWORD_RENICE 272
#define KEYWORD_SCHEDULE 273
#define KEYWORD_USER 274
#define KEYWORD_PARENT 275
#define KEYWORD_TYPE 276
#define KEYWORD_IGNORE 277
#define KEYWORD_LEADS 278
#define KEYWORD_RECLASSIFY 279
#define KEYWORD_RECLASS_AFTER 280
#define KEYWORD_CLASSIFY 281
#define KEYWORD_PRIORITY 282
#define KEYWORD_OOM 283
#define KEYWORD_RESPONSE_CURVE 284
#define KEYWORD_NO_OP 285
#define KEYWORD_EXPORT_GROUPS 286
#define KEYWORD_EXPORT_PARTITIONS 287
#define KEYWORD_EXPORT_FACT 288
#define KEYWORD_CGROUPFS_OPTIONS 289
#define KEYWORD_CGROUP_CONTROL 290
#define KEYWORD_IOWAIT_NOTIFY 291
#define KEYWORD_IOQLEN_NOTIFY 292
#define KEYWORD_SWAP_PRESSURE 293
#define KEYWORD_ADDON_RULES 294
#define KEYWORD_ALWAYS_FALLBACK 295
#define KEYWORD_PRESERVE_PRIO 296
#define TOKEN_EOL 297
#define TOKEN_ASTERISK 298
#define TOKEN_HEADER_OPEN 299
#define TOKEN_HEADER_CLOSE 300
#define TOKEN_CURLY_OPEN 301
#define TOKEN_CURLY_CLOSE 302
#define TOKEN_AND 303
#define TOKEN_OR 304
#define TOKEN_NOT 305
#define TOKEN_EQUAL 306
#define TOKEN_NOTEQ 307
#define TOKEN_LESS 308
#define TOKEN_GREATER 309
#define TOKEN_IMPLIES 310
#define TOKEN_SEMICOLON 311
#define TOKEN_COMMA 312
#define TOKEN_COLON 313
#define TOKEN_ARG 314
#define KEYWORD_CLASSIFY_ARGVX 315
#define TOKEN_IDENT 316
#define TOKEN_PATH 317
#define TOKEN_STRING 318
#define TOKEN_UINT 319
#define TOKEN_SINT 320
#define TOKEN_DOUBLE 321




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 63 "cgrp-config.y"

    token_string_t    any;
    token_string_t    string;
    token_uint32_t    uint32;
    token_sint32_t    sint32;
    token_double_t    dbl;
    cgrp_partition_t  part;
    cgrp_partition_t *parts;
    cgrp_group_t      group;
    cgrp_group_t     *groups;
    cgrp_procdef_t    procdef;
    cgrp_procdef_t   *procdefs;
    cgrp_rule_t      *rules;
    cgrp_rule_t       rule;
    cgrp_follower_t  *follower;
    cgrp_stmt_t      *stmt;
    cgrp_expr_t      *expr;
    cgrp_action_t    *action;
    cgrp_prop_type_t  prop;
    cgrp_value_t      value;
    cgrp_context_t    ctx;
    s64_t             time;
    cgrp_ctrl_setting_t *ctrl_settings;
    cgrp_adjust_t     adjust;
    integer_range_t   int_range;
    double_range_t    dbl_range;



/* Line 1676 of yacc.c  */
#line 214 "cgrp-config.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE cgrpyylval;


