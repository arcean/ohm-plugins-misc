
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse         cgrpyyparse
#define yylex           cgrpyylex
#define yyerror         cgrpyyerror
#define yylval          cgrpyylval
#define yychar          cgrpyychar
#define yydebug         cgrpyydebug
#define yynerrs         cgrpyynerrs


/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 20 "cgrp-config.y"


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <errno.h>
#include <dirent.h>
#include <regex.h>
#include <sched.h>
#include <pwd.h>
#include <grp.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/inotify.h>

#include "cgrp-plugin.h"
#include "cgrp-parser-types.h"
#include "mm.h"  

#define ALL_PRIO "all"
#define LOW_PRIO "lowered"
#define NO_PRIO  "none"

int        cgrpyylex  (void);
void       cgrpyyerror(cgrp_context_t *, const char *);
extern int lexer_start_token;

static int add_gid(cgrp_rule_t *, gid_t);
static int add_grp(cgrp_rule_t *, const char *);
static int lookup_gid(const char *, gid_t *);

static int add_uid(cgrp_rule_t *, uid_t);
static int add_usr(cgrp_rule_t *, const char *);
static int lookup_uid(const char *, uid_t *);

static cgrp_adjust_t parse_adjust(const char *);

static char rule_group[256];



/* Line 189 of yacc.c  */
#line 125 "cgrp-config.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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

/* Line 214 of yacc.c  */
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



/* Line 214 of yacc.c  */
#line 323 "cgrp-config.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 335 "cgrp-config.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   405

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  93
/* YYNRULES -- Number of rules.  */
#define YYNRULES  211
/* YYNRULES -- Number of states.  */
#define YYNSTATES  353

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   323

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     9,    12,    13,    17,    18,    20,    23,
      26,    29,    32,    36,    39,    42,    45,    48,    51,    54,
      57,    60,    62,    65,    67,    70,    74,    77,    80,    82,
      86,    88,    91,    95,    98,   101,   103,   106,   108,   111,
     115,   118,   121,   124,   126,   129,   133,   134,   136,   139,
     143,   145,   146,   148,   150,   153,   157,   159,   161,   163,
     165,   173,   181,   187,   193,   194,   196,   198,   200,   202,
     204,   206,   208,   211,   219,   222,   225,   228,   231,   235,
     239,   243,   247,   251,   254,   257,   259,   262,   266,   272,
     273,   275,   277,   280,   284,   288,   292,   296,   298,   301,
     308,   311,   314,   317,   320,   324,   328,   332,   336,   339,
     342,   345,   348,   350,   352,   355,   358,   367,   368,   371,
     373,   375,   377,   379,   384,   385,   387,   389,   399,   401,
     403,   407,   409,   412,   415,   417,   419,   422,   426,   429,
     433,   435,   437,   439,   443,   447,   451,   454,   458,   462,
     466,   468,   470,   472,   474,   476,   478,   480,   482,   484,
     486,   488,   490,   492,   494,   495,   503,   506,   510,   513,
     515,   517,   521,   523,   525,   527,   529,   531,   533,   535,
     537,   539,   542,   545,   547,   551,   554,   558,   562,   564,
     567,   569,   570,   572,   574,   576,   578,   580,   582,   584,
     586,   590,   592,   594,   596,   598,   600,   601,   603,   606,
     609,   610
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      70,     0,    -1,     3,    71,   101,   112,   119,    -1,     4,
     119,    -1,    -1,     5,    42,    72,    -1,    -1,    73,    -1,
      72,    73,    -1,    31,    42,    -1,    32,    42,    -1,    40,
      42,    -1,    41,    61,    42,    -1,    74,    42,    -1,    77,
      42,    -1,    80,    42,    -1,    83,    42,    -1,    85,    42,
      -1,    87,    42,    -1,    94,    42,    -1,    95,    42,    -1,
       1,    -1,    36,    75,    -1,    76,    -1,    75,    76,    -1,
      61,    64,    64,    -1,    61,    64,    -1,    61,   157,    -1,
       1,    -1,    37,   158,    78,    -1,    79,    -1,    78,    79,
      -1,    61,    64,    64,    -1,    61,    64,    -1,    61,   157,
      -1,     1,    -1,    38,    81,    -1,    82,    -1,    81,    82,
      -1,    61,    64,    64,    -1,    61,    64,    -1,    61,   157,
      -1,    34,    84,    -1,    61,    -1,    84,    61,    -1,    39,
      86,   158,    -1,    -1,    61,    -1,    35,    88,    -1,   157,
      89,    90,    -1,    63,    -1,    -1,    91,    -1,    92,    -1,
      91,    92,    -1,   157,    58,    93,    -1,    61,    -1,    63,
      -1,    65,    -1,    64,    -1,    29,    27,    96,    63,    97,
      98,   100,    -1,    29,    28,    96,    63,    97,    98,   100,
      -1,    44,    99,    57,    99,    45,    -1,    44,   100,    57,
     100,    45,    -1,    -1,    97,    -1,    66,    -1,    65,    -1,
      64,    -1,    65,    -1,    64,    -1,   102,    -1,   101,   102,
      -1,    44,     6,    61,    45,    42,   103,   109,    -1,   104,
      42,    -1,   105,    42,    -1,   106,    42,    -1,   107,    42,
      -1,   103,   104,    42,    -1,   103,   105,    42,    -1,   103,
     106,    42,    -1,   103,   107,    42,    -1,   103,   108,    42,
      -1,   103,     1,    -1,     8,   158,    -1,    33,    -1,     9,
      64,    -1,    10,    64,   159,    -1,    11,    61,   160,    61,
     160,    -1,    -1,   110,    -1,   111,    -1,   110,   111,    -1,
      61,    61,    42,    -1,    61,    63,    42,    -1,    61,    64,
      42,    -1,    61,    65,    42,    -1,   113,    -1,   112,   113,
      -1,    44,    16,    61,    45,    42,   114,    -1,   115,    42,
      -1,   116,    42,    -1,   117,    42,    -1,   118,    42,    -1,
     114,   115,    42,    -1,   114,   116,    42,    -1,   114,   117,
      42,    -1,   114,   118,    42,    -1,   114,     1,    -1,     7,
      63,    -1,     6,    61,    -1,    27,    65,    -1,    33,    -1,
     120,    -1,   119,   120,    -1,   119,     1,    -1,    44,    12,
     122,    45,    42,   121,   123,   124,    -1,    -1,    17,    65,
      -1,    62,    -1,    63,    -1,    43,    -1,   126,    -1,   123,
     124,   126,   124,    -1,    -1,   125,    -1,    42,    -1,    53,
     127,    54,   124,    46,   124,   130,   124,    47,    -1,   130,
      -1,   128,    -1,   127,    57,   128,    -1,    61,    -1,    61,
      64,    -1,    61,   129,    -1,   157,    -1,    43,    -1,   131,
      42,    -1,   130,   131,    42,    -1,   130,     1,    -1,   132,
      55,   140,    -1,   140,    -1,   133,    -1,   134,    -1,    67,
     132,    68,    -1,   132,    49,   132,    -1,   132,    48,   132,
      -1,    50,   132,    -1,   135,    51,   136,    -1,   135,    52,
     136,    -1,   135,    53,   136,    -1,    59,    -1,    13,    -1,
      14,    -1,    15,    -1,    21,    -1,    19,    -1,    16,    -1,
      20,    -1,    24,    -1,    63,    -1,    61,    -1,    62,    -1,
      64,    -1,    65,    -1,    -1,    44,    26,   157,    45,   137,
      42,   138,    -1,   139,    42,    -1,   138,   139,    42,    -1,
     138,     1,    -1,   158,    -1,   141,    -1,   140,    56,   141,
      -1,   142,    -1,   143,    -1,   144,    -1,   145,    -1,   146,
      -1,   147,    -1,   148,    -1,   149,    -1,   150,    -1,    16,
     157,    -1,    25,    64,    -1,    60,    -1,    18,    61,   151,
      -1,    17,   152,    -1,    27,   153,   154,    -1,    28,   153,
     154,    -1,    22,    -1,    23,   155,    -1,    30,    -1,    -1,
      64,    -1,    64,    -1,    65,    -1,    61,    -1,    63,    -1,
      65,    -1,    64,    -1,   156,    -1,   155,    57,   156,    -1,
     158,    -1,    61,    -1,    63,    -1,    62,    -1,    63,    -1,
      -1,    61,    -1,    64,   161,    -1,    65,   161,    -1,    -1,
      61,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   228,   228,   230,   238,   239,   242,   243,   244,   247,
     250,   253,   256,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   288,   291,   292,   295,   309,   319,   327,   335,
     340,   341,   344,   354,   362,   370,   376,   379,   380,   383,
     391,   399,   409,   412,   413,   416,   421,   424,   432,   435,
     454,   458,   459,   462,   465,   475,   489,   490,   491,   495,
     501,   523,   545,   552,   559,   564,   571,   572,   577,   584,
     585,   596,   597,   600,   614,   617,   620,   623,   626,   630,
     634,   638,   642,   647,   654,   657,   660,   663,   669,   689,
     690,   693,   696,   706,   718,   730,   742,   760,   761,   764,
     771,   772,   773,   774,   777,   781,   786,   791,   795,   802,
     808,   817,   824,   832,   833,   834,   841,   857,   858,   863,
     864,   865,   869,   872,   883,   884,   887,   890,   895,   910,
     935,   959,   975,   993,  1038,  1039,  1042,  1045,  1053,  1060,
    1072,  1086,  1087,  1088,  1091,  1092,  1093,  1096,  1097,  1098,
    1101,  1102,  1103,  1104,  1105,  1106,  1107,  1108,  1109,  1112,
    1116,  1120,  1124,  1128,  1136,  1135,  1140,  1141,  1142,  1149,
    1200,  1201,  1204,  1205,  1206,  1207,  1208,  1209,  1210,  1211,
    1212,  1215,  1234,  1248,  1262,  1275,  1288,  1301,  1314,  1327,
    1340,  1353,  1354,  1357,  1358,  1361,  1362,  1365,  1366,  1369,
    1372,  1382,  1399,  1400,  1404,  1405,  1409,  1410,  1426,  1431,
    1438,  1441
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "START_FULL_PARSER",
  "START_ADDON_PARSER", "KEYWORD_GLOBAL", "KEYWORD_PARTITION",
  "KEYWORD_DESCRIPTION", "KEYWORD_PATH", "KEYWORD_CPU_SHARES",
  "KEYWORD_MEM_LIMIT", "KEYWORD_REALTIME_LIMIT", "KEYWORD_RULE",
  "KEYWORD_BINARY", "KEYWORD_CMDLINE", "KEYWORD_NAME", "KEYWORD_GROUP",
  "KEYWORD_RENICE", "KEYWORD_SCHEDULE", "KEYWORD_USER", "KEYWORD_PARENT",
  "KEYWORD_TYPE", "KEYWORD_IGNORE", "KEYWORD_LEADS", "KEYWORD_RECLASSIFY",
  "KEYWORD_RECLASS_AFTER", "KEYWORD_CLASSIFY", "KEYWORD_PRIORITY",
  "KEYWORD_OOM", "KEYWORD_RESPONSE_CURVE", "KEYWORD_NO_OP",
  "KEYWORD_EXPORT_GROUPS", "KEYWORD_EXPORT_PARTITIONS",
  "KEYWORD_EXPORT_FACT", "KEYWORD_CGROUPFS_OPTIONS",
  "KEYWORD_CGROUP_CONTROL", "KEYWORD_IOWAIT_NOTIFY",
  "KEYWORD_IOQLEN_NOTIFY", "KEYWORD_SWAP_PRESSURE", "KEYWORD_ADDON_RULES",
  "KEYWORD_ALWAYS_FALLBACK", "KEYWORD_PRESERVE_PRIO", "\"\\n\"", "\"*\"",
  "\"[\"", "\"]\"", "\"{\"", "\"}\"", "\"&&\"", "\"||\"", "\"!\"",
  "\"==\"", "\"!=\"", "\"<\"", "\">\"", "\"=>\"", "\";\"", "\",\"",
  "\":\"", "TOKEN_ARG", "KEYWORD_CLASSIFY_ARGVX", "TOKEN_IDENT",
  "TOKEN_PATH", "TOKEN_STRING", "TOKEN_UINT", "TOKEN_SINT", "TOKEN_DOUBLE",
  "\"(\"", "\")\"", "$accept", "configuration", "global_section",
  "global_options", "global_option", "iowait_notify",
  "iowait_notify_options", "iowait_notify_option", "ioqlen_notify",
  "ioqlen_notify_options", "ioqlen_notify_option", "swap_pressure",
  "swap_pressure_options", "swap_pressure_option", "cgroupfs_options",
  "mount_options", "addon_rules", "optional_monitor", "cgroup_control",
  "cgroup_control_def", "cgroup_control_path",
  "optional_cgroup_control_settings", "cgroup_control_settings",
  "cgroup_control_setting", "control_value", "priority_response_curve",
  "oom_response_curve", "double_range", "integer_range",
  "optional_integer_range", "double_value", "integer_value",
  "partition_section", "partition", "partition_properties",
  "partition_path", "partition_export_fact", "partition_cpu_share",
  "partition_mem_limit", "partition_rt_limit",
  "optional_partition_controls", "partition_controls", "partition_control",
  "group_section", "group", "group_properties", "group_description",
  "group_partition", "group_priority", "group_fact", "procdef_section",
  "procdef", "optional_renice", "procdef_path", "rules",
  "optional_newline", "newline", "rule", "rule_events", "rule_event",
  "string_or_wildcard", "rule_statements", "rule_statement", "expr",
  "bool_expr", "prop_expr", "prop", "value", "$@1", "simple_rule_list",
  "simple_rule", "actions", "action", "action_group", "action_classify",
  "action_schedule", "action_renice", "action_priority", "action_oom",
  "action_ignore", "action_leads", "action_no_op", "schedule_priority",
  "renice_priority", "adjust_action", "adjust_value", "followers",
  "follower", "string", "path", "optional_unit", "time_usec", "time_unit", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    70,    71,    71,    72,    72,    72,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    74,    75,    75,    76,    76,    76,    76,    77,
      78,    78,    79,    79,    79,    79,    80,    81,    81,    82,
      82,    82,    83,    84,    84,    85,    86,    86,    87,    88,
      89,    90,    90,    91,    91,    92,    93,    93,    93,    93,
      94,    95,    96,    97,    98,    98,    99,    99,    99,   100,
     100,   101,   101,   102,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   104,   105,   106,   107,   108,   109,
     109,   110,   110,   111,   111,   111,   111,   112,   112,   113,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   115,
     116,   117,   118,   119,   119,   119,   120,   121,   121,   122,
     122,   122,   123,   123,   124,   124,   125,   126,   126,   127,
     127,   128,   128,   128,   129,   129,   130,   130,   130,   131,
     131,   132,   132,   132,   133,   133,   133,   134,   134,   134,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   136,
     136,   136,   136,   136,   137,   120,   138,   138,   138,   139,
     140,   140,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   142,   143,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   151,   152,   152,   153,   153,   154,   154,   155,
     155,   156,   157,   157,   158,   158,   159,   159,   160,   160,
     161,   161
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     2,     0,     3,     0,     1,     2,     2,
       2,     2,     3,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     2,     1,     2,     3,     2,     2,     1,     3,
       1,     2,     3,     2,     2,     1,     2,     1,     2,     3,
       2,     2,     2,     1,     2,     3,     0,     1,     2,     3,
       1,     0,     1,     1,     2,     3,     1,     1,     1,     1,
       7,     7,     5,     5,     0,     1,     1,     1,     1,     1,
       1,     1,     2,     7,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     2,     2,     1,     2,     3,     5,     0,
       1,     1,     2,     3,     3,     3,     3,     1,     2,     6,
       2,     2,     2,     2,     3,     3,     3,     3,     2,     2,
       2,     2,     1,     1,     2,     2,     8,     0,     2,     1,
       1,     1,     1,     4,     0,     1,     1,     9,     1,     1,
       3,     1,     2,     2,     1,     1,     2,     3,     2,     3,
       1,     1,     1,     3,     3,     3,     2,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     7,     2,     3,     2,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     3,     2,     3,     3,     1,     2,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     0,     1,     2,     2,
       0,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     0,     0,     0,     0,     0,     0,   113,     1,
       0,     0,     0,    71,     0,     0,   115,   114,    21,     0,
       0,     0,     0,     0,     0,     0,     0,    46,     0,     0,
       0,     7,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    72,     0,    97,   121,   119,   120,     0,   202,
     203,     0,     0,     0,     9,    10,    43,    42,    48,     0,
      28,     0,     0,    23,   204,   205,     0,     0,    36,    37,
      47,     0,    11,     0,     8,    13,    14,    15,    16,    17,
      18,    19,    20,     0,     0,     0,    98,     0,     0,   164,
       0,     0,     0,    44,    50,    51,    26,    27,    24,    35,
       0,     0,    30,    40,    41,    38,    45,    12,     0,     0,
     117,     0,    68,    67,    66,     0,     0,     0,    49,    52,
      53,     0,    25,    33,    34,    31,    39,     0,     0,     0,
       0,     0,     0,     0,    64,    64,    54,     0,    32,     0,
       0,     0,    85,     0,     0,     0,     0,     0,     0,   118,
     151,   152,   153,   156,     0,     0,   155,   157,   154,   188,
       0,   158,     0,     0,     0,   190,     0,     0,   150,   183,
       0,   124,   122,     0,     0,     0,   141,   142,     0,   140,
     170,   172,   173,   174,   175,   176,   177,   178,   179,   180,
       0,     0,   169,     0,    70,    69,     0,    65,     0,     0,
      56,    57,    59,    58,    55,    84,    86,   206,    83,     0,
       0,     0,     0,     0,     0,     0,    73,    90,    91,    74,
      75,    76,    77,     0,     0,     0,   112,     0,     0,     0,
       0,     0,   181,   193,   194,   185,   191,   189,   199,   201,
     182,   195,   196,     0,     0,   156,   146,   131,     0,   129,
       0,   126,   116,   125,   138,     0,   136,     0,     0,     0,
       0,     0,     0,     0,   168,     0,   166,    62,     0,    60,
      61,   207,    87,     0,     0,     0,     0,     0,    78,    79,
      80,    81,    82,    92,   110,   109,   111,   108,     0,     0,
       0,     0,   100,   101,   102,   103,   192,   184,     0,   198,
     197,   186,   187,   135,   132,   133,   134,   124,     0,   143,
     124,   137,   145,   144,     0,   139,   160,   161,   159,   162,
     163,   147,   148,   149,   171,   167,     0,   210,   210,     0,
      93,    94,    95,    96,   104,   105,   106,   107,   200,     0,
     130,   123,    63,   211,   208,   209,     0,   124,    88,     0,
       0,     0,   127
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     5,    30,    31,    32,    62,    63,    33,   101,
     102,    34,    68,    69,    35,    57,    36,    71,    37,    58,
      95,   118,   119,   120,   204,    38,    39,    91,   197,   198,
     115,   196,    12,    13,   143,   144,   145,   146,   147,   215,
     216,   217,   218,    43,    44,   227,   228,   229,   230,   231,
       7,     8,   130,    48,   171,   252,   253,   172,   248,   249,
     305,   173,   174,   175,   176,   177,   178,   321,   111,   190,
     191,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   297,   235,   243,   301,   237,   238,   121,   192,
     272,   329,   344
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -245
static const yytype_int16 yypact[] =
{
      46,    39,   -23,    54,    49,    52,    44,    13,  -245,  -245,
     246,    65,    58,  -245,     2,   153,  -245,  -245,  -245,    86,
     100,   122,   132,   153,    17,    96,   135,   150,   176,   170,
     266,  -245,   201,   204,   206,   215,   220,   224,   227,   230,
     212,    32,  -245,   235,  -245,  -245,  -245,  -245,   247,  -245,
    -245,   249,   252,   252,  -245,  -245,  -245,   248,  -245,   228,
    -245,    88,    16,  -245,  -245,  -245,    19,    93,   135,  -245,
    -245,    96,  -245,   269,  -245,  -245,  -245,  -245,  -245,  -245,
    -245,  -245,  -245,   263,   251,    85,  -245,    42,   271,  -245,
     172,   253,   254,  -245,  -245,   153,   250,  -245,  -245,  -245,
     110,    18,  -245,   255,  -245,  -245,  -245,  -245,   273,   275,
     301,   279,  -245,  -245,  -245,   265,   280,   280,  -245,   153,
    -245,   267,  -245,   259,  -245,  -245,  -245,    79,   284,   262,
     167,    96,   172,   112,   280,   280,  -245,    76,  -245,    96,
     264,   268,  -245,    99,   287,   288,   289,   291,    34,  -245,
    -245,  -245,  -245,   153,   175,   274,  -245,  -245,  -245,  -245,
      96,  -245,   270,   158,   158,  -245,   209,   276,  -245,  -245,
     209,   294,  -245,     9,   296,    50,  -245,  -245,    30,   283,
    -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
      11,   298,  -245,   297,  -245,  -245,   286,  -245,   112,   112,
    -245,  -245,  -245,  -245,  -245,  -245,  -245,   285,  -245,   290,
      83,   299,   302,   303,   305,   306,  -245,   292,  -245,  -245,
    -245,  -245,  -245,   293,   295,   300,  -245,   128,   307,   308,
     310,   313,  -245,  -245,  -245,  -245,   304,   309,  -245,  -245,
    -245,  -245,  -245,   177,   177,  -245,   205,    29,   121,  -245,
     -33,  -245,   167,  -245,  -245,   314,  -245,   209,   209,   233,
     104,   104,   104,   233,  -245,   315,  -245,  -245,   112,  -245,
    -245,  -245,  -245,   200,   317,   318,   319,   320,  -245,  -245,
    -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,   321,   322,
     325,   327,  -245,  -245,  -245,  -245,  -245,  -245,    96,  -245,
    -245,  -245,  -245,  -245,  -245,  -245,  -245,   294,   276,  -245,
     294,  -245,   205,   205,   153,   283,  -245,  -245,  -245,  -245,
    -245,  -245,  -245,  -245,  -245,  -245,   326,   311,   311,   312,
    -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,   324,
    -245,  -245,  -245,  -245,  -245,  -245,   200,   294,  -245,   185,
     103,   328,  -245
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -245,  -245,  -245,  -245,   344,  -245,  -245,   316,  -245,  -245,
     278,  -245,  -245,   323,  -245,  -245,  -245,  -245,  -245,  -245,
    -245,  -245,  -245,   257,  -245,  -245,  -245,   329,   154,   242,
     256,  -193,  -245,   368,  -245,   238,   240,   241,   243,  -245,
    -245,  -245,   168,  -245,   346,  -245,   160,   163,   165,   166,
     351,    -3,  -245,  -245,  -245,  -244,  -245,   143,  -245,    89,
    -245,    47,  -171,  -163,  -245,  -245,  -245,    27,  -245,  -245,
     208,   140,   137,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
    -245,  -245,  -245,  -245,   237,   159,  -245,   106,   -15,   -24,
    -245,    56,    77
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -166
static const yytype_int16 yytable[] =
{
      51,    66,   255,   246,    17,   269,   270,   250,    59,  -128,
     254,  -165,   264,    -3,    16,   257,   258,    60,    60,    99,
      99,     6,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   309,   163,   164,    40,   165,
     223,   224,    -2,    16,     4,    45,    97,   106,    84,     1,
       2,  -128,   104,  -128,     9,  -165,    14,     6,   -22,   166,
     -29,   225,  -128,   339,    46,    47,   341,   226,   168,   169,
      15,    40,   303,    64,    65,   326,   170,    61,    61,   100,
     100,   260,   261,   262,    17,   124,     6,   139,   140,   141,
      49,    10,    50,   304,   312,   313,    11,    14,   257,   258,
     208,    84,    41,   349,   254,   259,   351,   139,   140,   141,
     209,    15,   142,    52,    53,   205,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   287,
     163,   164,   142,   165,   223,   224,   239,   200,   232,   201,
     202,   203,    54,   -89,   274,   251,   275,   276,   277,    49,
    -124,    50,    96,   166,    49,   225,    50,   103,    64,    65,
     210,   226,   168,   169,    55,   316,   317,   318,   319,   320,
     170,    49,   -99,    50,   123,   307,   194,   195,   308,   255,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,    56,   163,   164,    67,   165,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,    70,   163,   164,    49,   165,    50,   166,    72,   241,
     167,   242,   150,   151,   152,   245,   168,   169,   156,   157,
     158,    73,   306,   161,   170,   166,   112,   113,   114,   233,
     234,   299,   300,    75,   168,   169,    76,    18,    77,   314,
     154,   155,   170,   257,   258,   159,   160,    78,   162,   166,
     163,   164,    79,   165,   327,   328,    80,    18,   168,    81,
     134,   135,    82,    83,   239,    19,   170,    20,    21,    85,
      22,    23,    24,    25,    26,    27,    28,    29,   322,   323,
      -6,    94,    88,   169,    89,    19,    90,    20,    21,   232,
      22,    23,    24,    25,    26,    27,    28,    29,   108,    93,
      -5,   107,   109,   110,   122,   127,   116,   117,   129,   126,
     128,   131,   132,   138,   133,   137,   148,   149,   206,   219,
     220,   221,   207,   222,   240,   236,   251,   247,   256,   263,
     266,   278,   267,   268,   279,   280,   271,   281,   282,   292,
     293,   273,   294,   210,   284,   295,   311,   325,   285,   330,
     331,   332,   333,   334,   335,   286,   298,   336,   296,   337,
     347,   342,   343,   346,    74,   352,   136,   199,    98,   125,
      42,   211,    92,   212,   213,   283,   214,   288,   193,    86,
     289,   105,   290,   291,    87,   310,   350,   340,   265,   315,
     324,   244,   348,   302,   338,   345
};

static const yytype_uint16 yycheck[] =
{
      15,    25,   173,   166,     7,   198,   199,   170,    23,     0,
       1,     0,     1,     0,     1,    48,    49,     1,     1,     1,
       1,    44,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    68,    27,    28,     6,    30,
       6,     7,     0,     1,     5,    43,    61,    71,    16,     3,
       4,    42,    67,    44,     0,    44,    12,    44,    42,    50,
      42,    27,    53,   307,    62,    63,   310,    33,    59,    60,
      26,     6,    43,    62,    63,   268,    67,    61,    61,    61,
      61,    51,    52,    53,    87,   100,    44,     8,     9,    10,
      61,    42,    63,    64,   257,   258,    44,    12,    48,    49,
       1,    16,    44,   347,     1,    55,   350,     8,     9,    10,
      11,    26,    33,    27,    28,   139,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     1,
      27,    28,    33,    30,     6,     7,   160,    61,   153,    63,
      64,    65,    42,    44,    61,    42,    63,    64,    65,    61,
      47,    63,    64,    50,    61,    27,    63,    64,    62,    63,
      61,    33,    59,    60,    42,    61,    62,    63,    64,    65,
      67,    61,    44,    63,    64,    54,    64,    65,    57,   350,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    61,    27,    28,    61,    30,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    61,    27,    28,    61,    30,    63,    50,    42,    61,
      53,    63,    13,    14,    15,    16,    59,    60,    19,    20,
      21,    61,   247,    24,    67,    50,    64,    65,    66,    64,
      65,    64,    65,    42,    59,    60,    42,     1,    42,    16,
      17,    18,    67,    48,    49,    22,    23,    42,    25,    50,
      27,    28,    42,    30,    64,    65,    42,     1,    59,    42,
     116,   117,    42,    61,   298,    29,    67,    31,    32,    44,
      34,    35,    36,    37,    38,    39,    40,    41,   261,   262,
      44,    63,    45,    60,    45,    29,    44,    31,    32,   314,
      34,    35,    36,    37,    38,    39,    40,    41,    45,    61,
      44,    42,    61,    42,    64,    42,    63,    63,    17,    64,
      45,    42,    57,    64,    44,    58,    42,    65,    64,    42,
      42,    42,    64,    42,    64,    61,    42,    61,    42,    56,
      42,    42,    45,    57,    42,    42,    61,    42,    42,    42,
      42,    61,    42,    61,    61,    42,    42,    42,    63,    42,
      42,    42,    42,    42,    42,    65,    57,    42,    64,    42,
      46,    45,    61,    61,    30,    47,   119,   135,    62,   101,
      12,   143,    53,   143,   143,   217,   143,   227,   132,    43,
     227,    68,   227,   227,    43,   252,   349,   308,   190,   259,
     263,   164,   346,   244,   298,   328
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    70,     5,    71,    44,   119,   120,     0,
      42,    44,   101,   102,    12,    26,     1,   120,     1,    29,
      31,    32,    34,    35,    36,    37,    38,    39,    40,    41,
      72,    73,    74,    77,    80,    83,    85,    87,    94,    95,
       6,    44,   102,   112,   113,    43,    62,    63,   122,    61,
      63,   157,    27,    28,    42,    42,    61,    84,    88,   157,
       1,    61,    75,    76,    62,    63,   158,    61,    81,    82,
      61,    86,    42,    61,    73,    42,    42,    42,    42,    42,
      42,    42,    42,    61,    16,    44,   113,   119,    45,    45,
      44,    96,    96,    61,    63,    89,    64,   157,    76,     1,
      61,    78,    79,    64,   157,    82,   158,    42,    45,    61,
      42,   137,    64,    65,    66,    99,    63,    63,    90,    91,
      92,   157,    64,    64,   157,    79,    64,    42,    45,    17,
     121,    42,    57,    44,    97,    97,    92,    58,    64,     8,
       9,    10,    33,   103,   104,   105,   106,   107,    42,    65,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    27,    28,    30,    50,    53,    59,    60,
      67,   123,   126,   130,   131,   132,   133,   134,   135,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     138,   139,   158,    99,    64,    65,   100,    97,    98,    98,
      61,    63,    64,    65,    93,   158,    64,    64,     1,    11,
      61,   104,   105,   106,   107,   108,   109,   110,   111,    42,
      42,    42,    42,     6,     7,    27,    33,   114,   115,   116,
     117,   118,   157,    64,    65,   152,    61,   155,   156,   158,
      64,    61,    63,   153,   153,    16,   132,    61,   127,   128,
     132,    42,   124,   125,     1,   131,    42,    48,    49,    55,
      51,    52,    53,    56,     1,   139,    42,    45,    57,   100,
     100,    61,   159,    61,    61,    63,    64,    65,    42,    42,
      42,    42,    42,   111,    61,    63,    65,     1,   115,   116,
     117,   118,    42,    42,    42,    42,    64,   151,    57,    64,
      65,   154,   154,    43,    64,   129,   157,    54,    57,    68,
     126,    42,   132,   132,    16,   140,    61,    62,    63,    64,
      65,   136,   136,   136,   141,    42,   100,    64,    65,   160,
      42,    42,    42,    42,    42,    42,    42,    42,   156,   124,
     128,   124,    45,    61,   161,   161,    61,    46,   160,   124,
     130,   124,    47
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (ctx, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, ctx); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, cgrp_context_t *ctx)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, ctx)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    cgrp_context_t *ctx;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (ctx);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, cgrp_context_t *ctx)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, ctx)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    cgrp_context_t *ctx;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, ctx);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, cgrp_context_t *ctx)
#else
static void
yy_reduce_print (yyvsp, yyrule, ctx)
    YYSTYPE *yyvsp;
    int yyrule;
    cgrp_context_t *ctx;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       , ctx);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, ctx); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, cgrp_context_t *ctx)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, ctx)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    cgrp_context_t *ctx;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (ctx);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (cgrp_context_t *ctx);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (cgrp_context_t *ctx)
#else
int
yyparse (ctx)
    cgrp_context_t *ctx;
#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 9:

/* Line 1455 of yacc.c  */
#line 247 "cgrp-config.y"
    {
	  CGRP_SET_FLAG(ctx->options.flags, CGRP_FLAG_GROUP_FACTS);
    }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 250 "cgrp-config.y"
    {
          CGRP_SET_FLAG(ctx->options.flags, CGRP_FLAG_PART_FACTS);
    }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 253 "cgrp-config.y"
    {
          CGRP_SET_FLAG(ctx->options.flags, CGRP_FLAG_ALWAYS_FALLBACK);
    }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 256 "cgrp-config.y"
    {
          char *what = (yyvsp[(2) - (3)].string).value;
          int   prio;

          if      (!strcmp(what, ALL_PRIO)) prio = CGRP_PRIO_ALL;
          else if (!strcmp(what, LOW_PRIO)) prio = CGRP_PRIO_LOW;
          else if (!strcmp(what, NO_PRIO )) prio = CGRP_PRIO_NONE;
          else {
              OHM_ERROR("cgrp: invalid %s setting '%s'",
                        "preserve-priority", what);
              OHM_ERROR("cgrp: allowed settings are: '%s', '%s', '%s'",
                        ALL_PRIO, LOW_PRIO, NO_PRIO);
              prio = CGRP_PRIO_LOW;
          }
          
          ctx->options.prio_preserve = prio;
    }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 281 "cgrp-config.y"
    {
        OHM_ERROR("cgrp: failed to parse global options near token '%s'",
                  cgrpyylval.any.token);
        exit(1);
    }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 295 "cgrp-config.y"
    {
          if (!strcmp((yyvsp[(1) - (3)].string).value, "threshold")) {
              ctx->iow.thres_low  = (yyvsp[(2) - (3)].uint32).value;
              ctx->iow.thres_high = (yyvsp[(3) - (3)].uint32).value;
          }
          else if (!strcmp((yyvsp[(1) - (3)].string).value, "poll")) {
              ctx->iow.poll_high = (yyvsp[(2) - (3)].uint32).value;
              ctx->iow.poll_low  = (yyvsp[(3) - (3)].uint32).value;
          }
          else {
              OHM_ERROR("cgrp: invalid iowait-notify parameter %s", (yyvsp[(1) - (3)].string).value);
	      YYABORT;
          }
    }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 309 "cgrp-config.y"
    {
          if (!strcmp((yyvsp[(1) - (2)].string).value, "startup-delay"))
              ctx->iow.startup_delay = (yyvsp[(2) - (2)].uint32).value;
          else {
              ctx->iow.nsample = (yyvsp[(2) - (2)].uint32).value;
              ctx->iow.estim   = estim_alloc((yyvsp[(1) - (2)].string).value, (yyvsp[(2) - (2)].uint32).value);
              if (ctx->iow.estim == NULL)
                  YYABORT;
          }
    }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 319 "cgrp-config.y"
    {
          if (!strcmp((yyvsp[(1) - (2)].string).value, "hook"))
              ctx->iow.hook = STRDUP((yyvsp[(2) - (2)].string).value);
          else {
              OHM_ERROR("cgrp: invalid iowait-notify parameter %s", (yyvsp[(1) - (2)].string).value);
	      YYABORT;
          }
    }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 327 "cgrp-config.y"
    { 
          OHM_ERROR("cgrp: failed to parse I/O wait options near token '%s'",
                    cgrpyylval.any.token);
          exit(1);
    }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 335 "cgrp-config.y"
    {
        ctx->ioq.path = STRDUP((yyvsp[(2) - (3)].string).value);
    }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 344 "cgrp-config.y"
    {
          if (!strcmp((yyvsp[(1) - (3)].string).value, "threshold")) {
              ctx->ioq.thres_low  = (yyvsp[(2) - (3)].uint32).value;
              ctx->ioq.thres_high = (yyvsp[(3) - (3)].uint32).value;
          }
          else {
              OHM_ERROR("cgrp: invalid ioqlen-notify parameter %s", (yyvsp[(1) - (3)].string).value);
	      YYABORT;
          }
    }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 354 "cgrp-config.y"
    {
          if (!strcmp((yyvsp[(1) - (2)].string).value, "period"))
              ctx->ioq.period = (yyvsp[(2) - (2)].uint32).value;
          else {
              OHM_ERROR("cgrp: invalid ioqlen-notify parameter %s", (yyvsp[(1) - (2)].string).value);
	      YYABORT;
          }
    }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 362 "cgrp-config.y"
    {
          if (!strcmp((yyvsp[(1) - (2)].string).value, "hook"))
              ctx->ioq.hook = STRDUP((yyvsp[(2) - (2)].string).value);
          else {
              OHM_ERROR("cgrp: invalid ioqlen-notify parameter %s", (yyvsp[(1) - (2)].string).value);
	      YYABORT;
          }
    }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 370 "cgrp-config.y"
    { 
          OHM_ERROR("cgrp: failed to parse I/O wait options near token '%s'",
                    cgrpyylval.any.token);
          exit(1);
    }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 383 "cgrp-config.y"
    {
          if (strcmp((yyvsp[(1) - (3)].string).value, "threshold")) {
              OHM_ERROR("cgrp: invalid swap-pressure parameter %s", (yyvsp[(1) - (3)].string).value);
	      YYABORT;
          }
          ctx->swp.low  = (yyvsp[(2) - (3)].uint32).value;
          ctx->swp.high = (yyvsp[(3) - (3)].uint32).value;
    }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 391 "cgrp-config.y"
    {
          if (!strcmp((yyvsp[(1) - (2)].string).value, "min-delay"))
              ctx->swp.interval = (yyvsp[(2) - (2)].uint32).value;
          else {
              OHM_ERROR("cgrp: invalid swap-pressure parameter %s", (yyvsp[(1) - (2)].string).value);
	      YYABORT;
          }
    }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 399 "cgrp-config.y"
    {
          if (!strcmp((yyvsp[(1) - (2)].string).value, "hook"))
              ctx->swp.hook = STRDUP((yyvsp[(2) - (2)].string).value);
          else {
              OHM_ERROR("cgrp: invalid swap-pressure parameter %s", (yyvsp[(1) - (2)].string).value);
	      YYABORT;
          }
    }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 412 "cgrp-config.y"
    { cgroup_set_option(ctx, (yyvsp[(1) - (1)].string).value); }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 413 "cgrp-config.y"
    { cgroup_set_option(ctx, (yyvsp[(2) - (2)].string).value); }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 416 "cgrp-config.y"
    {
          ctx->options.addon_rules = STRDUP((yyvsp[(3) - (3)].string).value);
    }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 421 "cgrp-config.y"
    {
          CGRP_CLR_FLAG(ctx->options.flags, CGRP_FLAG_ADDON_MONITOR);
    }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 424 "cgrp-config.y"
    {
          if (!strcmp((yyvsp[(1) - (1)].string).value, "monitor"))
              CGRP_SET_FLAG(ctx->options.flags, CGRP_FLAG_ADDON_MONITOR);
          else
              OHM_ERROR("cgrp: ignoring addon-rule option '%s'", (yyvsp[(1) - (1)].string).value);
    }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 436 "cgrp-config.y"
    {
          cgrp_ctrl_t *ctrl, **p;

          if (ALLOC_OBJ(ctrl) == NULL) {
              OHM_ERROR("cgrp: failed to allocate cgroup control");
              exit(1);
          }

          ctrl->name = STRDUP((yyvsp[(1) - (3)].string).value);
	  ctrl->path = STRDUP((yyvsp[(2) - (3)].string).value);
          ctrl->settings = (yyvsp[(3) - (3)].ctrl_settings);

          for (p = &ctx->controls; *p != NULL; p = &(*p)->next)
    	      ;
          *p = ctrl;
    }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 454 "cgrp-config.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 458 "cgrp-config.y"
    { (yyval.ctrl_settings) = NULL; }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 459 "cgrp-config.y"
    { (yyval.ctrl_settings) = (yyvsp[(1) - (1)].ctrl_settings); }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 462 "cgrp-config.y"
    {
          (yyval.ctrl_settings) = (yyvsp[(1) - (1)].ctrl_settings);
    }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 465 "cgrp-config.y"
    {
          cgrp_ctrl_setting_t *setting;

          for (setting = (yyvsp[(1) - (2)].ctrl_settings); setting->next != NULL; setting = setting->next)
              ;
          setting->next = (yyvsp[(2) - (2)].ctrl_settings);
          (yyval.ctrl_settings)            = (yyvsp[(1) - (2)].ctrl_settings);
    }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 475 "cgrp-config.y"
    {
          cgrp_ctrl_setting_t *setting;

          if (ALLOC_OBJ(setting) == NULL) {
              OHM_ERROR("cgrp: failed to allocate cgroup control setting");
              exit(1);
          }

          setting->name  = STRDUP((yyvsp[(1) - (3)].string).value);
          setting->value = STRDUP((yyvsp[(3) - (3)].string).value);
          (yyval.ctrl_settings)             = setting;
    }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 489 "cgrp-config.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 490 "cgrp-config.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 491 "cgrp-config.y"
    {
          (yyval.string).lineno = (yyvsp[(1) - (1)].sint32).lineno;
          (yyval.string).value  = (char *)(yyvsp[(1) - (1)].sint32).token;
    }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 495 "cgrp-config.y"
    {
          (yyval.string).lineno = (yyvsp[(1) - (1)].uint32).lineno;
          (yyval.string).value  = (char *)(yyvsp[(1) - (1)].uint32).token;
    }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 503 "cgrp-config.y"
    {
        int prio_min, prio_max;
        
        prio_min = (yyvsp[(6) - (7)].int_range).min ? (yyvsp[(6) - (7)].int_range).min : -20;
        prio_max = (yyvsp[(6) - (7)].int_range).max ? (yyvsp[(6) - (7)].int_range).max :  19;

        if (prio_min < -20)
            prio_min = -20;
        if (prio_max > 19)
            prio_max = 19;

        ctx->prio_curve = curve_create((yyvsp[(4) - (7)].string).value,
                                       (yyvsp[(3) - (7)].dbl_range).min, (yyvsp[(3) - (7)].dbl_range).max,
                                       (yyvsp[(5) - (7)].int_range).min, (yyvsp[(5) - (7)].int_range).max,
                                       prio_min, prio_max);

        ctx->prio_default = (yyvsp[(7) - (7)].sint32).value;
    }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 525 "cgrp-config.y"
    {
        int oom_min, oom_max;
        
        oom_min = (yyvsp[(6) - (7)].int_range).set ? (yyvsp[(6) - (7)].int_range).min : -17;
        oom_max = (yyvsp[(6) - (7)].int_range).set ? (yyvsp[(6) - (7)].int_range).max :  15;

        if (oom_min < -17)
            oom_min = -17;
        if (oom_max > 15)
            oom_max = 15;

        ctx->oom_curve = curve_create((yyvsp[(4) - (7)].string).value,
                                      (yyvsp[(3) - (7)].dbl_range).min, (yyvsp[(3) - (7)].dbl_range).max,
                                      (yyvsp[(5) - (7)].int_range).min, (yyvsp[(5) - (7)].int_range).max,
                                      oom_min, oom_max);

        ctx->oom_default = (yyvsp[(7) - (7)].sint32).value;
    }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 545 "cgrp-config.y"
    {
          (yyval.dbl_range).name  = NULL;
          (yyval.dbl_range).min = (yyvsp[(2) - (5)].dbl).value;
          (yyval.dbl_range).max = (yyvsp[(4) - (5)].dbl).value;
    }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 552 "cgrp-config.y"
    {
          (yyval.int_range).name  = NULL;
          (yyval.int_range).min = (yyvsp[(2) - (5)].sint32).value;
          (yyval.int_range).max = (yyvsp[(4) - (5)].sint32).value;
    }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 559 "cgrp-config.y"
    {
          (yyval.int_range).name = NULL;
          (yyval.int_range).set  = FALSE;
          (yyval.int_range).min  = (yyval.int_range).max = 0;
      }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 564 "cgrp-config.y"
    {
         (yyval.int_range)     = (yyvsp[(1) - (1)].int_range);
         (yyval.int_range).set = TRUE;
       }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 571 "cgrp-config.y"
    { (yyval.dbl) = (yyvsp[(1) - (1)].dbl); }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 572 "cgrp-config.y"
    {
                  (yyval.dbl).token  = (yyvsp[(1) - (1)].sint32).token;
                  (yyval.dbl).lineno = (yyvsp[(1) - (1)].sint32).lineno;
                  (yyval.dbl).value  = 1.0 * (yyvsp[(1) - (1)].sint32).value;
              }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 577 "cgrp-config.y"
    {
                  (yyval.dbl).token  = (yyvsp[(1) - (1)].uint32).token;
                  (yyval.dbl).lineno = (yyvsp[(1) - (1)].uint32).lineno;
                  (yyval.dbl).value  = 1.0 * (yyvsp[(1) - (1)].uint32).value;
              }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 584 "cgrp-config.y"
    { (yyval.sint32) = (yyvsp[(1) - (1)].sint32); }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 585 "cgrp-config.y"
    {
                   (yyval.sint32).token  = (yyvsp[(1) - (1)].uint32).token;
                   (yyval.sint32).lineno = (yyvsp[(1) - (1)].uint32).lineno;
                   (yyval.sint32).value  = (yyvsp[(1) - (1)].uint32).value;
               }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 601 "cgrp-config.y"
    {
      (yyvsp[(6) - (7)].part).name     = (yyvsp[(3) - (7)].string).value;
      (yyvsp[(6) - (7)].part).settings = (yyvsp[(7) - (7)].ctrl_settings);
      if (partition_lookup(ctx, (yyvsp[(6) - (7)].part).name) != NULL) {
          OHM_ERROR("cgrp: partition '%s' multiply defined", (yyvsp[(6) - (7)].part).name);
	  YYABORT;
      }

      if (partition_add(ctx, &(yyvsp[(6) - (7)].part)) == NULL)
          YYABORT;
    }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 614 "cgrp-config.y"
    {
          (yyval.part).path = (yyvsp[(1) - (2)].string).value;
    }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 617 "cgrp-config.y"
    {
          CGRP_SET_FLAG((yyval.part).flags, CGRP_PARTITION_FACT);
    }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 620 "cgrp-config.y"
    {
          (yyval.part).limit.cpu = (yyvsp[(1) - (2)].uint32).value;
    }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 623 "cgrp-config.y"
    {
          (yyval.part).limit.mem = (yyvsp[(1) - (2)].uint32).value;
    }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 626 "cgrp-config.y"
    {
          (yyval.part) = (yyvsp[(1) - (3)].part);
          (yyval.part).path = (yyvsp[(2) - (3)].string).value;
    }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 630 "cgrp-config.y"
    {
          (yyval.part) = (yyvsp[(1) - (3)].part);
          CGRP_SET_FLAG((yyval.part).flags, CGRP_PARTITION_FACT);
    }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 634 "cgrp-config.y"
    {
          (yyval.part)           = (yyvsp[(1) - (3)].part);
          (yyval.part).limit.cpu = (yyvsp[(2) - (3)].uint32).value;
    }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 638 "cgrp-config.y"
    {
          (yyval.part)           = (yyvsp[(1) - (3)].part);
          (yyval.part).limit.mem = (yyvsp[(2) - (3)].uint32).value;
    }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 642 "cgrp-config.y"
    {
          (yyval.part)                  = (yyvsp[(1) - (3)].part);
          (yyval.part).limit.rt_period  = (yyvsp[(2) - (3)].part).limit.rt_period;
          (yyval.part).limit.rt_runtime = (yyvsp[(2) - (3)].part).limit.rt_runtime;
    }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 647 "cgrp-config.y"
    {
        OHM_ERROR("cgrp: failed to parse partition properties near token '%s'",
		  cgrpyylval.any.token);
        exit(1);
    }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 654 "cgrp-config.y"
    { (yyval.string) = (yyvsp[(2) - (2)].string); }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 660 "cgrp-config.y"
    { (yyval.uint32) = (yyvsp[(2) - (2)].uint32); }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 663 "cgrp-config.y"
    {
          (yyval.uint32)        = (yyvsp[(2) - (3)].uint32);
	  (yyval.uint32).value *= (yyvsp[(3) - (3)].uint32).value;
    }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 670 "cgrp-config.y"
    {
          if (!strcmp((yyvsp[(2) - (5)].string).value, "period") &&
              !strcmp((yyvsp[(4) - (5)].string).value, "runtime")) {
	      (yyval.part).limit.rt_period  = (yyvsp[(3) - (5)].time);
	      (yyval.part).limit.rt_runtime = (yyvsp[(5) - (5)].time);
          }
	  else if (!strcmp((yyvsp[(4) - (5)].string).value, "period") &&
                   !strcmp((yyvsp[(2) - (5)].string).value, "runtime")) {
	      (yyval.part).limit.rt_period  = (yyvsp[(5) - (5)].time);
	      (yyval.part).limit.rt_runtime = (yyvsp[(3) - (5)].time);
          }
	  else {
              OHM_ERROR("cgrp: invalid realtime limits ('%s', '%s')",
	                (yyvsp[(2) - (5)].string).value, (yyvsp[(4) - (5)].string).value);
              exit(1);
          }
    }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 689 "cgrp-config.y"
    { (yyval.ctrl_settings) = NULL; }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 690 "cgrp-config.y"
    { (yyval.ctrl_settings) = (yyvsp[(1) - (1)].ctrl_settings);   }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 693 "cgrp-config.y"
    {
          (yyval.ctrl_settings) = (yyvsp[(1) - (1)].ctrl_settings);
    }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 696 "cgrp-config.y"
    {
          cgrp_ctrl_setting_t *setting;

          for (setting = (yyvsp[(1) - (2)].ctrl_settings); setting->next != NULL; setting = setting->next)
              ;
          setting->next = (yyvsp[(2) - (2)].ctrl_settings);
          (yyval.ctrl_settings)            = (yyvsp[(1) - (2)].ctrl_settings);
    }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 706 "cgrp-config.y"
    {
          cgrp_ctrl_setting_t *setting;

          if (ALLOC_OBJ(setting) == NULL) {
              OHM_ERROR("cgrp: failed to allocate partition control setting");
              exit(1);
          }

          setting->name  = STRDUP((yyvsp[(1) - (3)].string).value);
          setting->value = STRDUP((yyvsp[(2) - (3)].string).value);
          (yyval.ctrl_settings)             = setting;
    }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 718 "cgrp-config.y"
    {
          cgrp_ctrl_setting_t *setting;

          if (ALLOC_OBJ(setting) == NULL) {
              OHM_ERROR("cgrp: failed to allocate partition control setting");
              exit(1);
          }

          setting->name  = STRDUP((yyvsp[(1) - (3)].string).value);
          setting->value = STRDUP((yyvsp[(2) - (3)].string).value);
          (yyval.ctrl_settings)             = setting;
    }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 730 "cgrp-config.y"
    {
          cgrp_ctrl_setting_t *setting;

          if (ALLOC_OBJ(setting) == NULL) {
              OHM_ERROR("cgrp: failed to allocate partition control setting");
              exit(1);
          }

          setting->name  = STRDUP((yyvsp[(1) - (3)].string).value);
          setting->value = STRDUP((yyvsp[(2) - (3)].uint32).token);
          (yyval.ctrl_settings)             = setting;
    }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 742 "cgrp-config.y"
    {
          cgrp_ctrl_setting_t *setting;

          if (ALLOC_OBJ(setting) == NULL) {
              OHM_ERROR("cgrp: failed to allocate partition control setting");
              exit(1);
          }

          setting->name  = STRDUP((yyvsp[(1) - (3)].string).value);
          setting->value = STRDUP((yyvsp[(2) - (3)].sint32).token);
          (yyval.ctrl_settings)             = setting;
    }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 764 "cgrp-config.y"
    {
      (yyvsp[(6) - (6)].group).name = (yyvsp[(3) - (6)].string).value;
      if (!group_add(ctx, &(yyvsp[(6) - (6)].group)))
          YYABORT;
    }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 771 "cgrp-config.y"
    { (yyval.group) = (yyvsp[(1) - (2)].group); }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 772 "cgrp-config.y"
    { (yyval.group) = (yyvsp[(1) - (2)].group); }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 773 "cgrp-config.y"
    { (yyval.group) = (yyvsp[(1) - (2)].group); }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 774 "cgrp-config.y"
    {
        CGRP_SET_FLAG((yyval.group).flags, CGRP_GROUPFLAG_FACT);
    }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 777 "cgrp-config.y"
    {
        (yyval.group)             = (yyvsp[(1) - (3)].group);
        (yyval.group).description = (yyvsp[(2) - (3)].group).description;
    }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 781 "cgrp-config.y"
    {
        (yyval.group)            = (yyvsp[(1) - (3)].group);
        (yyval.group).partition  = (yyvsp[(2) - (3)].group).partition;
	CGRP_SET_FLAG((yyval.group).flags, CGRP_GROUPFLAG_STATIC);
    }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 786 "cgrp-config.y"
    {
        (yyval.group)            = (yyvsp[(1) - (3)].group);
        (yyval.group).priority   = (yyvsp[(2) - (3)].group).priority;
        CGRP_SET_FLAG((yyval.group).flags, CGRP_GROUPFLAG_PRIORITY);
    }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 791 "cgrp-config.y"
    {
        (yyval.group)        = (yyvsp[(1) - (3)].group);
        CGRP_SET_FLAG((yyval.group).flags, CGRP_GROUPFLAG_FACT);
    }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 795 "cgrp-config.y"
    {
        OHM_ERROR("cgrp: failed to parse group properties near token '%s'",
		  cgrpyylval.any.token);
        exit(1);
    }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 802 "cgrp-config.y"
    {
        memset(&(yyval.group), 0, sizeof((yyval.group)));
        (yyval.group).description = (yyvsp[(2) - (2)].string).value;
    }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 808 "cgrp-config.y"
    {
        memset(&(yyval.group), 0, sizeof((yyval.group)));
	if (((yyval.group).partition = partition_lookup(ctx, (yyvsp[(2) - (2)].string).value)) == NULL) {
	    OHM_ERROR("cgrp: nonexisting partition '%s' in a group", (yyvsp[(2) - (2)].string).value);
	    exit(1);
	}
    }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 817 "cgrp-config.y"
    {
        int priority = (yyvsp[(2) - (2)].sint32).value;
        memset(&(yyval.group), 0, sizeof((yyval.group)));
        (yyval.group).priority = priority < -20 ? -20 : (priority > 19 ? 19: priority);
    }
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 834 "cgrp-config.y"
    {
          OHM_ERROR("cgrp: failed to parse rule section near token '%s'",
	            cgrpyylval.any.token);
          exit(1);
    }
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 842 "cgrp-config.y"
    {
        cgrp_procdef_t procdef;

        procdef.binary = (yyvsp[(3) - (8)].string).value;
        procdef.rules  = (yyvsp[(7) - (8)].rules);

        if (CGRP_TST_FLAG(ctx->options.flags, CGRP_FLAG_ADDON_RULES))
            addon_add(ctx, &procdef);
        else {
            if (!procdef_add(ctx, &procdef))
                YYABORT;
        }
    }
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 858 "cgrp-config.y"
    {
          OHM_WARNING("cgrp: static renice not supported any more.");
      }
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 863 "cgrp-config.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); }
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 864 "cgrp-config.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); }
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 865 "cgrp-config.y"
    { (yyval.string).value = "*"; }
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 869 "cgrp-config.y"
    {
          (yyval.rules) = (yyvsp[(1) - (1)].rules);
      }
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 872 "cgrp-config.y"
    {
          cgrp_rule_t *r;

          for (r = (yyvsp[(1) - (4)].rules); r->next != NULL; r = r->next)
              ;
          r->next = (yyvsp[(3) - (4)].rules);
          (yyval.rules)      = (yyvsp[(1) - (4)].rules);
       }
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 891 "cgrp-config.y"
    {
          (yyvsp[(2) - (9)].rules)->statements = (yyvsp[(7) - (9)].stmt);
          (yyval.rules) = (yyvsp[(2) - (9)].rules);
      }
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 895 "cgrp-config.y"
    {
          cgrp_rule_t *rule;

          if (ALLOC_OBJ(rule) == NULL) {
              OHM_ERROR("cgrp: failed to allocate new rule");
              exit(1);
          }

          rule->event_mask = (1 << CGRP_EVENT_EXEC);
          rule->statements = (yyvsp[(1) - (1)].stmt);

          (yyval.rules) = rule;
      }
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 910 "cgrp-config.y"
    {
       cgrp_rule_t *rule;

       if (ALLOC_OBJ(rule) == NULL) {
           OHM_ERROR("cgrp: failed to allocate new rule");
           exit(1);
       }

       if ((yyvsp[(1) - (1)].rule).event_mask & (1 << CGRP_EVENT_GID)) {
           if ((yyvsp[(1) - (1)].rule).ngid == 0)                       /* wildcard group */
               add_grp(rule, "*");
           else
               add_gid(rule, (gid_t)(yyvsp[(1) - (1)].rule).gids);
       }
       else if ((yyvsp[(1) - (1)].rule).event_mask & (1 << CGRP_EVENT_UID)) {
           if ((yyvsp[(1) - (1)].rule).nuid == 0)                       /* wildcard user */
               add_usr(rule, "*");
           else
               add_uid(rule, (uid_t)(yyvsp[(1) - (1)].rule).uids);
       }
       else
           rule->event_mask = (yyvsp[(1) - (1)].rule).event_mask;
       
       (yyval.rules) = rule;
    }
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 935 "cgrp-config.y"
    {
       if (!((yyvsp[(3) - (3)].rule).event_mask & ((1 << CGRP_EVENT_GID) | (1 << CGRP_EVENT_UID)))) {
           (yyvsp[(1) - (3)].rules)->event_mask |= (yyvsp[(3) - (3)].rule).event_mask;
           (yyval.rules) = (yyvsp[(1) - (3)].rules);
       }
       else {
           if ((yyvsp[(3) - (3)].rule).event_mask & (1 << CGRP_EVENT_GID)) {
               if ((yyvsp[(3) - (3)].rule).ngid == 0)                      /* wildcard group */
                   add_grp((yyvsp[(1) - (3)].rules), "*");
               else
                   add_gid((yyvsp[(1) - (3)].rules), (gid_t)(yyvsp[(3) - (3)].rule).gids);
           }
           else { /* $3->event_mask & (1 << CGRP_EVENT_UID) */
               if ((yyvsp[(3) - (3)].rule).nuid == 0)                      /* wildcard user */
                   add_usr((yyvsp[(1) - (3)].rules), "*");
               else
                   add_uid((yyvsp[(1) - (3)].rules), (uid_t)(yyvsp[(3) - (3)].rule).uids);
           }
       }

       (yyval.rules) = (yyvsp[(1) - (3)].rules);
    }
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 959 "cgrp-config.y"
    {
          memset(&(yyval.rule), 0, sizeof((yyval.rule)));

          if (!strcmp((yyvsp[(1) - (1)].string).value, "execed"))
              (yyval.rule).event_mask = (1 << CGRP_EVENT_EXEC);
          else if (!strcmp((yyvsp[(1) - (1)].string).value, "new-thread"))
              (yyval.rule).event_mask = (1 << CGRP_EVENT_THREAD);
          else if (!strcmp((yyvsp[(1) - (1)].string).value, "session-change"))
              (yyval.rule).event_mask = (1 << CGRP_EVENT_SID);
          else if (!strcmp((yyvsp[(1) - (1)].string).value, "comm-change"))
              (yyval.rule).event_mask = (1 << CGRP_EVENT_COMM);
          else {
              OHM_ERROR("cgrp: invalid rule event '%s'", (yyvsp[(1) - (1)].string).value);
              YYABORT;
          }
      }
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 975 "cgrp-config.y"
    {
          memset(&(yyval.rule), 0, sizeof((yyval.rule)));

          if (!strcmp((yyvsp[(1) - (2)].string).value, "group-change")) {
              (yyval.rule).event_mask = (1 << CGRP_EVENT_GID);
              (yyval.rule).gids       = (gid_t *)(yyvsp[(2) - (2)].uint32).value;
              (yyval.rule).ngid       = 1;
          }
          else if (!strcmp((yyvsp[(1) - (2)].string).value, "user-change")) {
              (yyval.rule).event_mask = (1 << CGRP_EVENT_UID);
              (yyval.rule).uids       = (uid_t *)(yyvsp[(2) - (2)].uint32).value;
              (yyval.rule).nuid       = 1;
          }
          else {
              OHM_ERROR("cgrp: invalid rule event '%s'", (yyvsp[(1) - (2)].string).value);
              YYABORT;
          }
      }
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 993 "cgrp-config.y"
    {
          const char *name = (yyvsp[(2) - (2)].string).value;

          memset(&(yyval.rule), 0, sizeof((yyval.rule)));

          if (!strcmp((yyvsp[(1) - (2)].string).value, "group-change")) {
              (yyval.rule).event_mask = (1 << CGRP_EVENT_GID);

              if (!strcmp(name, "*")) {
                  (yyval.rule).gids = NULL;
                  (yyval.rule).ngid = 0;                     /* wildcard */
              }
              else {
                  if (lookup_gid(name, (gid_t *)&(yyval.rule).gids))
                      (yyval.rule).ngid = 1;
                  else {
                      OHM_ERROR("cgrp: ignoring unknown group '%s'", name);
                      (yyval.rule).event_mask = 0;
                  }
              }
          }
          else if (!strcmp((yyvsp[(1) - (2)].string).value, "user-change")) {
              (yyval.rule).event_mask = (1 << CGRP_EVENT_UID);

              if (!strcmp(name, "*")) {
                  (yyval.rule).uids = NULL;
                  (yyval.rule).nuid = 0;                     /* wildcard */
              }
              else {
                  if (lookup_uid(name, (uid_t *)&(yyval.rule).uids))
                      (yyval.rule).nuid = 1;
                  else {
                      OHM_ERROR("cgrp: ignoring unknown user '%s'", name);
                      (yyval.rule).event_mask = 0;
                  }
              }
          }
          else {
              OHM_ERROR("cgrp: invalid rule event '%s'", (yyvsp[(1) - (2)].string).value);
              YYABORT;
          }
      }
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 1038 "cgrp-config.y"
    { (yyval.string)       = (yyvsp[(1) - (1)].string);  }
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 1039 "cgrp-config.y"
    { (yyval.string).value = "*"; }
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 1042 "cgrp-config.y"
    {
        (yyval.stmt) = (yyvsp[(1) - (2)].stmt);
    }
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 1045 "cgrp-config.y"
    {
        cgrp_stmt_t *stmt;

        for (stmt = (yyvsp[(1) - (3)].stmt); stmt->next != NULL; stmt = stmt->next)
	    ;
	stmt->next = (yyvsp[(2) - (3)].stmt);
        (yyval.stmt)         = (yyvsp[(1) - (3)].stmt);
    }
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 1053 "cgrp-config.y"
    {
          OHM_ERROR("cgrp: failed to parse rule statements real '%s'",
                    cgrpyylval.any.token);
          exit(1);
    }
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 1060 "cgrp-config.y"
    {
        cgrp_stmt_t *stmt;

        if (ALLOC_OBJ(stmt) == NULL) {
            OHM_ERROR("cgrp: failed to allocate statement");
            exit(1);
        }
        stmt->expr    = (yyvsp[(1) - (3)].expr);
        stmt->actions = (yyvsp[(3) - (3)].action);

        (yyval.stmt) = stmt;
    }
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 1072 "cgrp-config.y"
    {
        cgrp_stmt_t *stmt;

        if (ALLOC_OBJ(stmt) == NULL) {
            OHM_ERROR("cgrp: failed to allocate statement");
            exit(1);
        }
        stmt->expr    = NULL;
        stmt->actions = (yyvsp[(1) - (1)].action);

        (yyval.stmt) = stmt;
    }
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 1086 "cgrp-config.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 1087 "cgrp-config.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 1088 "cgrp-config.y"
    { (yyval.expr) = (yyvsp[(2) - (3)].expr); }
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 1091 "cgrp-config.y"
    { (yyval.expr) = bool_expr(CGRP_BOOL_OR , (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));   }
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 1092 "cgrp-config.y"
    { (yyval.expr) = bool_expr(CGRP_BOOL_AND, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));   }
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 1093 "cgrp-config.y"
    { (yyval.expr) = bool_expr(CGRP_BOOL_NOT, (yyvsp[(2) - (2)].expr), NULL); }
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 1096 "cgrp-config.y"
    { (yyval.expr) = prop_expr((yyvsp[(1) - (3)].prop), CGRP_OP_EQUAL, &(yyvsp[(3) - (3)].value)); }
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 1097 "cgrp-config.y"
    { (yyval.expr) = prop_expr((yyvsp[(1) - (3)].prop), CGRP_OP_NOTEQ, &(yyvsp[(3) - (3)].value)); }
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 1098 "cgrp-config.y"
    { (yyval.expr) = prop_expr((yyvsp[(1) - (3)].prop), CGRP_OP_LESS, &(yyvsp[(3) - (3)].value)); }
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 1101 "cgrp-config.y"
    { (yyval.prop) = CGRP_PROP_ARG((yyvsp[(1) - (1)].uint32).value); }
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 1102 "cgrp-config.y"
    { (yyval.prop) = CGRP_PROP_BINARY;        }
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 1103 "cgrp-config.y"
    { (yyval.prop) = CGRP_PROP_CMDLINE;       }
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 1104 "cgrp-config.y"
    { (yyval.prop) = CGRP_PROP_NAME;          }
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 1105 "cgrp-config.y"
    { (yyval.prop) = CGRP_PROP_TYPE;          }
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 1106 "cgrp-config.y"
    { (yyval.prop) = CGRP_PROP_EUID;          }
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 1107 "cgrp-config.y"
    { (yyval.prop) = CGRP_PROP_EGID;          }
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 1108 "cgrp-config.y"
    { (yyval.prop) = CGRP_PROP_PARENT;        }
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 1109 "cgrp-config.y"
    { (yyval.prop) = CGRP_PROP_RECLASSIFY;    }
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 1112 "cgrp-config.y"
    {
        (yyval.value).type = CGRP_VALUE_TYPE_STRING;
	(yyval.value).str  = STRDUP((yyvsp[(1) - (1)].string).value);
    }
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 1116 "cgrp-config.y"
    {
        (yyval.value).type = CGRP_VALUE_TYPE_STRING;
	(yyval.value).str  = STRDUP((yyvsp[(1) - (1)].string).value);
    }
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 1120 "cgrp-config.y"
    {
        (yyval.value).type = CGRP_VALUE_TYPE_STRING;
	(yyval.value).str  = STRDUP((yyvsp[(1) - (1)].string).value);
    }
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 1124 "cgrp-config.y"
    {
        (yyval.value).type = CGRP_VALUE_TYPE_UINT32;
        (yyval.value).u32  = (yyvsp[(1) - (1)].uint32).value;
    }
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 1128 "cgrp-config.y"
    {
        (yyval.value).type = CGRP_VALUE_TYPE_SINT32;
        (yyval.value).s32  = (yyvsp[(1) - (1)].sint32).value;
    }
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 1136 "cgrp-config.y"
    { strcpy(rule_group, (yyvsp[(3) - (4)].string).value); }
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 1137 "cgrp-config.y"
    { rule_group[0] = '\0'; }
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 1142 "cgrp-config.y"
    {
          OHM_ERROR("cgrp: failed to parse simple rule section near token '%s'",
	            cgrpyylval.any.token);
          YYABORT;
    }
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 1149 "cgrp-config.y"
    {
        cgrp_procdef_t  procdef;
	cgrp_rule_t    *rule;
        cgrp_stmt_t    *stmt;
	cgrp_action_t  *action;
	cgrp_group_t   *group = group_find(ctx, rule_group);

        if (group == NULL) {
            OHM_ERROR("cgrp: reference to unknown group '%s'", rule_group);
	    YYABORT;
        }

        action = action_group_new(group);
	if (action == NULL) {
	    OHM_ERROR("cgrp: failed to allocate new group action");
	    YYABORT;
        }

        if (ALLOC_OBJ(stmt) == NULL) {
            OHM_ERROR("cgrp: failed to allocate statement");
	    action_del(action);
            YYABORT;
        }
        stmt->expr    = NULL;
        stmt->actions = action;

        if (ALLOC_OBJ(rule) == NULL) {
            OHM_ERROR("cgrp: failed to allocate rule");
            statement_free_all(stmt);
	    YYABORT;
        }
        rule->event_mask = (1 << CGRP_EVENT_EXEC) | (1 << CGRP_EVENT_THREAD);
        rule->statements = stmt;

        procdef.binary = (yyvsp[(1) - (1)].string).value;
        procdef.rules  = rule;

        if (CGRP_TST_FLAG(ctx->options.flags, CGRP_FLAG_ADDON_RULES))
            addon_add(ctx, &procdef);
        else {
            if (!procdef_add(ctx, &procdef))
                YYABORT;
        }
    }
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 1200 "cgrp-config.y"
    { (yyval.action) = (yyvsp[(1) - (1)].action); }
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 1201 "cgrp-config.y"
    { (yyval.action) = (yyvsp[(1) - (3)].action); action_add((yyval.action), (yyvsp[(3) - (3)].action)); }
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 1204 "cgrp-config.y"
    { (yyval.action) = (yyvsp[(1) - (1)].action); }
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 1205 "cgrp-config.y"
    { (yyval.action) = (yyvsp[(1) - (1)].action); }
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 1206 "cgrp-config.y"
    { (yyval.action) = (yyvsp[(1) - (1)].action); }
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 1207 "cgrp-config.y"
    { (yyval.action) = (yyvsp[(1) - (1)].action); }
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 1208 "cgrp-config.y"
    { (yyval.action) = (yyvsp[(1) - (1)].action); }
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 1209 "cgrp-config.y"
    { (yyval.action) = (yyvsp[(1) - (1)].action); }
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 1210 "cgrp-config.y"
    { (yyval.action) = (yyvsp[(1) - (1)].action); }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 1211 "cgrp-config.y"
    { (yyval.action) = (yyvsp[(1) - (1)].action); }
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 1212 "cgrp-config.y"
    { (yyval.action) = (yyvsp[(1) - (1)].action); }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 1215 "cgrp-config.y"
    {
	cgrp_action_t *action;
	cgrp_group_t  *group = group_find(ctx, (yyvsp[(2) - (2)].string).value);

        if (group == NULL) {
            OHM_ERROR("cgrp: reference to unknown group '%s'", (yyvsp[(2) - (2)].string).value);
	    YYABORT;
        }

        action = action_group_new(group);
	if (action == NULL) {
	    OHM_ERROR("cgrp: failed to allocate new group action");
	    YYABORT;
        }

        (yyval.action) = action;
    }
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 1234 "cgrp-config.y"
    {
        cgrp_action_t *action;

        action = action_classify_new((yyvsp[(2) - (2)].uint32).value);
        if (action == NULL) {
            OHM_ERROR("cgrp: failed to allocate new classify action");
            YYABORT;
        }

        (yyval.action) = action;
    }
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 1248 "cgrp-config.y"
    {
        cgrp_action_t *action;

        action = action_classify_new(-1 - (yyvsp[(1) - (1)].uint32).value);
        if (action == NULL) {
            OHM_ERROR("cgrp: failed to allocate new classify-by-argv0 action");
            YYABORT;
        }

        (yyval.action) = action;
    }
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 1262 "cgrp-config.y"
    {
        cgrp_action_t *action;

        action = action_schedule_new((yyvsp[(2) - (3)].string).value, (yyvsp[(3) - (3)].uint32).value);
        if (action == NULL) {
            OHM_ERROR("cgrp: failed to allocate new schedule action");
            YYABORT;
        }

        (yyval.action) = action;
    }
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 1275 "cgrp-config.y"
    {
        cgrp_action_t *action;

        action = action_renice_new((yyvsp[(2) - (2)].sint32).value);
        if (action == NULL) {
            OHM_ERROR("cgrp: failed to allocate new renice action");
            YYABORT;
        }

        (yyval.action) = action;
    }
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 1288 "cgrp-config.y"
    {
        cgrp_action_t *action;

        action = action_priority_new((yyvsp[(2) - (3)].adjust), (yyvsp[(3) - (3)].sint32).value);
        if (action == NULL) {
            OHM_ERROR("cgrp: failed to allocate new priority action");
            YYABORT;
        }

        (yyval.action) = action;
    }
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 1301 "cgrp-config.y"
    {
        cgrp_action_t *action;

        action = action_oom_new((yyvsp[(2) - (3)].adjust), (yyvsp[(3) - (3)].sint32).value);
        if (action == NULL) {
            OHM_ERROR("cgrp: failed to allocate new OOM action");
            YYABORT;
        }

        (yyval.action) = action;
    }
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 1314 "cgrp-config.y"
    {
        cgrp_action_t *action;

        action = action_ignore_new();
        if (action == NULL) {
            OHM_ERROR("cgrp: failed to allocate new ignore action");
            YYABORT;
        }

        (yyval.action) = action;
    }
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1327 "cgrp-config.y"
    {
        cgrp_action_t *action;

        action = action_leads_new((yyvsp[(2) - (2)].follower));
        if (action == NULL) {
            OHM_ERROR("cgrp: failed to allocate new leads action");
            YYABORT;
        }

        (yyval.action) = action;
    }
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 1340 "cgrp-config.y"
    {
        cgrp_action_t *action;

        action = action_noop_new();
        if (action == NULL) {
            OHM_ERROR("cgrp: failed to allocate new no-op action");
            YYABORT;
        }

        (yyval.action) = action;
    }
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 1353 "cgrp-config.y"
    { (yyval.uint32).value = 0; }
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 1354 "cgrp-config.y"
    { (yyval.uint32) = (yyvsp[(1) - (1)].uint32);      }
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 1357 "cgrp-config.y"
    { (yyval.sint32).value = (yyvsp[(1) - (1)].uint32).value; }
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 1358 "cgrp-config.y"
    { (yyval.sint32).value = (yyvsp[(1) - (1)].sint32).value; }
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 1361 "cgrp-config.y"
    { (yyval.adjust) = parse_adjust((yyvsp[(1) - (1)].string).value); }
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 1362 "cgrp-config.y"
    { (yyval.adjust) = parse_adjust((yyvsp[(1) - (1)].string).value); }
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 1365 "cgrp-config.y"
    { (yyval.sint32).value = (yyvsp[(1) - (1)].sint32).value;      }
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 1366 "cgrp-config.y"
    { (yyval.sint32).value = (int)(yyvsp[(1) - (1)].uint32).value; }
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 1369 "cgrp-config.y"
    {
        (yyval.follower) = (yyvsp[(1) - (1)].follower);
    }
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 1372 "cgrp-config.y"
    {
        cgrp_follower_t *follower;

        for (follower = (yyvsp[(1) - (3)].follower); follower->next != NULL; follower = follower->next)
            ;
        follower->next = (yyvsp[(3) - (3)].follower);
        (yyval.follower)             = (yyvsp[(1) - (3)].follower);
    }
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 1382 "cgrp-config.y"
    {
        cgrp_follower_t *follower;

        if (ALLOC_OBJ(follower) == NULL) {
            OHM_ERROR("cgrp: failed to allocate a follower object");
            exit(1);
        }

        follower->name = STRDUP((yyvsp[(1) - (1)].string).value);
        (yyval.follower) = follower;
    }
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 1399 "cgrp-config.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); }
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 1400 "cgrp-config.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); }
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 1404 "cgrp-config.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); }
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 1405 "cgrp-config.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); }
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 1409 "cgrp-config.y"
    { (yyval.uint32).value = 1; }
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 1410 "cgrp-config.y"
    {
          if ((yyvsp[(1) - (1)].string).value[1] != '\0')
              goto invalid;

          switch ((yyvsp[(1) - (1)].string).value[0]) {
              case 'k': case 'K': (yyval.uint32).value = 1024;        break;
              case 'm': case 'M': (yyval.uint32).value = 1024 * 1024; break;
              default:
              invalid:
	          OHM_ERROR("cgrp: invalid memory limit unit '%s'", (yyvsp[(1) - (1)].string).value);
	          exit(1);
          }
    }
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 1426 "cgrp-config.y"
    {
          if ((yyvsp[(2) - (2)].time) == 0)
	      (yyvsp[(2) - (2)].time) = 1000000;
          (yyval.time) = (s64_t)(yyvsp[(1) - (2)].uint32).value * (yyvsp[(2) - (2)].time);
    }
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 1431 "cgrp-config.y"
    {
          if ((yyvsp[(2) - (2)].time) == 0)
	      (yyvsp[(2) - (2)].time) = 1000000;
          (yyval.time) = (yyvsp[(1) - (2)].sint32).value * (yyvsp[(2) - (2)].time);
    }
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 1438 "cgrp-config.y"
    {
          (yyval.time) = 0;
    }
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 1441 "cgrp-config.y"
    {
          if      (!strcmp((yyvsp[(1) - (1)].string).value,  "sec")) (yyval.time) = 1000 * 1000;
	  else if (!strcmp((yyvsp[(1) - (1)].string).value, "msec")) (yyval.time) = 1000;
          else if (!strcmp((yyvsp[(1) - (1)].string).value, "usec")) (yyval.time) = 1;
          else {
              OHM_ERROR("cgrp: invalid time unit '%s'", (yyvsp[(1) - (1)].string).value);
	      exit(1);
          }
    }
    break;



/* Line 1455 of yacc.c  */
#line 3897 "cgrp-config.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (ctx, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (ctx, yymsg);
	  }
	else
	  {
	    yyerror (ctx, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, ctx);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, ctx);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (ctx, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, ctx);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, ctx);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 1452 "cgrp-config.y"


/*****************************************************************************
 *                        *** parser public interface ***                    *
 *****************************************************************************/

/********************
 * config_parse_config
 ********************/
int
config_parse_config(cgrp_context_t *ctx, char *path)
{
    if (access(path, F_OK) != 0 && errno == ENOENT) {
        OHM_WARNING("cgrp: no configuration file found");
        return TRUE;
    }

    lexer_reset(START_FULL_PARSER);

    if (!lexer_push_input(path))
	return FALSE;

    return cgrpyyparse(ctx) == 0;
}


/********************
 * config_parse_addon
 ********************/
int
config_parse_addon(cgrp_context_t *ctx, char *path)
{
    int success;

    lexer_reset(START_ADDON_PARSER);
    if (!lexer_push_input(path))
        return FALSE;

    CGRP_SET_FLAG(ctx->options.flags, CGRP_FLAG_ADDON_RULES);
    lexer_disable_include();
    success = cgrpyyparse(ctx) == 0;
    lexer_enable_include();
    CGRP_CLR_FLAG(ctx->options.flags, CGRP_FLAG_ADDON_RULES);

    return success;
}


/********************
 * config_parse_addons
 ********************/
int
config_parse_addons(cgrp_context_t *ctx)
{
    char           glob[PATH_MAX], pattern[PATH_MAX];
    char           dir[PATH_MAX], file[PATH_MAX];
    char          *path, *base, *p, *q;
    int            len;
    DIR           *dp;
    struct dirent *de;
    struct stat    st;
    regex_t        regex;
    regmatch_t     m;
    
    path = ctx->options.addon_rules;
    if (path == NULL)
        return TRUE;
    
    if ((base = strrchr(path, '/')) != NULL) {
        if (((p = strchr(path, '*')) != NULL && p < base) ||
            ((p = strchr(path, '?')) != NULL && p < base)) {
            OHM_ERROR("cgrp: invalid addon rule pattern '%s'", path);
            return FALSE;
        }
        
        for (p = base; *p == '/'; p++)
            ;
        strncpy(glob, p, sizeof(glob) - 1);
        glob[sizeof(glob) - 1] = '\0';

        while (*base == '/' && base > path)
            base--;

        len = base - path + 1;
        strncpy(dir, path, len);
        dir[len] = '\0';
    }
    else {
        OHM_ERROR("cgrp: invalid addon rule pattern '%s'", path);
        return FALSE;
    }
    
    for (p = glob, q = pattern; *p; p++) {
        switch (*p) {
        case '*': *q++ = '.';  *q++ = '*'; break;
        case '?': *q++ = '.';              break;
        case '.': *q++ = '\\'; *q++ = '.'; break;
        default:  *q++ = *p;               break;
        }
    }
    *q = '\0';

    if (regcomp(&regex, pattern, /*REG_NOSUB |*/ REG_NEWLINE) != 0) {
        OHM_ERROR("cgrp: failed to compile regexp '%s' for '%s'",
                  pattern, glob);
        return FALSE;
    }
    
    if ((dp = opendir(dir)) == NULL) {
        regfree(&regex);
        return TRUE;
    }

    while ((de = readdir(dp)) != NULL) {
        snprintf(file, sizeof(file), "%s/%s", dir, de->d_name);
        
        if (stat(file, &st) != 0 || !S_ISREG(st.st_mode))
            continue;
        
        if (!regexec(&regex, de->d_name, 1, &m, REG_NOTBOL|REG_NOTEOL) &&
            m.rm_so == 0 && m.rm_eo == (regoff_t)strlen(de->d_name)) {
            config_parse_addon(ctx, file);
        }
    }
    
    closedir(dp);
    regfree(&regex);
    
    return TRUE;
}


/********************
 * config_change_cb
 ********************/
static gboolean
config_change_cb(GIOChannel *chnl, GIOCondition mask, gpointer data)
{
    cgrp_context_t *ctx = (cgrp_context_t *)data;
    struct { 
        struct inotify_event event;
        char                 path[PATH_MAX];
    } event;

    (void)chnl;

    
    if (mask & (G_IO_IN | G_IO_PRI)) {
        read(ctx->addonwd, &event, sizeof(event));
        
        OHM_DEBUG(DBG_CONFIG,
                  "configuration updated (event 0x%x), scheduling reload",
                  event.event.mask);
        
        config_schedule_reload(ctx);
    }

    return TRUE;
}


/********************
 * config_schedule_reload
 ********************/
gboolean
reload_config(gpointer data)
{
    cgrp_context_t *ctx = (cgrp_context_t *)data;
    
    OHM_INFO("cgrp: reloading addon classification rules");

    addon_reload(ctx);
    ctx->addontmr = 0;
    
    OHM_INFO("cgrp: reclassifying existing processes");
    process_scan_proc(ctx);
    
    return FALSE;
}

void
config_schedule_reload(cgrp_context_t *ctx)
{
    if (ctx->addontmr != 0)
        g_source_remove(ctx->addontmr);
    
    ctx->addontmr = g_timeout_add(15 * 1000, reload_config, ctx);
}


/********************
 * config_monitor_init
 ********************/
int
config_monitor_init(cgrp_context_t *ctx)
{
    char         dir[PATH_MAX], *end;
    uint32_t     eventmask;
    GIOCondition condmask;
    
    if (ctx->options.addon_rules == NULL)
        return TRUE;

    if (!CGRP_TST_FLAG(ctx->options.flags, CGRP_FLAG_ADDON_MONITOR))
        return TRUE;

    strncpy(dir, ctx->options.addon_rules, sizeof(dir) - 1);
    dir[sizeof(dir) - 1] = '\0';
    
    if ((end = strrchr(dir, '/')) == NULL)
        return FALSE;
    while (*end == '/' && end > dir)
        *end-- = '\0';

    if ((access(dir, F_OK) != 0 && errno == ENOENT)) {
        OHM_WARNING("cgrp: non-existing add-on rule directory '%s'", dir);
        return FALSE;
    }

    if ((ctx->addonwd = inotify_init()) < 0) {
        OHM_ERROR("cgrp: failed to create inotify watch for addon rules");
        return FALSE;
    }

    eventmask = IN_CLOSE_WRITE | IN_DELETE | IN_MOVE;
    if (inotify_add_watch(ctx->addonwd, dir, eventmask) < 0) {
        OHM_ERROR("cgrp: failed to set up inotify addon rules monitoring");
        return FALSE;
    }

    if ((ctx->addonchnl = g_io_channel_unix_new(ctx->addonwd)) == NULL) {
        OHM_ERROR("cgrp: failed to allocate watch for addon rules");
        return FALSE;
    }
    
    condmask = G_IO_IN | G_IO_HUP | G_IO_PRI | G_IO_ERR;
    ctx->addonsrc = g_io_add_watch(ctx->addonchnl, condmask,
                                   config_change_cb, ctx);
    
    return ctx->addonsrc != 0;
}


/********************
 * config_monitor_exit
 ********************/
void
config_monitor_exit(cgrp_context_t *ctx)
{
    if (ctx->addonsrc != 0) {
        g_source_remove(ctx->addonsrc);
        ctx->addonsrc = 0;
    }
    
    if (ctx->addonchnl != NULL) {
        g_io_channel_unref(ctx->addonchnl);
        ctx->addonchnl = NULL;
    }

    if (ctx->addonwd > 0) {
        close(ctx->addonwd);
        ctx->addonwd = -1;
    }
}


/********************
 * config_dump
 ********************/
void
config_print(cgrp_context_t *ctx, FILE *fp)
{
    const char *prio;
    int         flags;

    flags = ctx->options.flags;

    if (flags) {
        fprintf(fp, "# global configuration flags:\n");
        
        if (CGRP_TST_FLAG(flags, CGRP_FLAG_GROUP_FACTS))
            fprintf(fp, "export-group-facts\n");

        if (CGRP_TST_FLAG(flags, CGRP_FLAG_PART_FACTS))
            fprintf(fp, "export-partition-facts\n");

        if (CGRP_TST_FLAG(flags, CGRP_FLAG_ALWAYS_FALLBACK))
            fprintf(fp, "always-fallback\n");

        switch (ctx->options.prio_preserve) {
        case CGRP_PRIO_ALL:  prio = ALL_PRIO; break;
        case CGRP_PRIO_LOW:  prio = LOW_PRIO; break;
        case CGRP_PRIO_NONE: prio = NO_PRIO;  break;
        default:             prio = "<?>";  break;
        }            

        fprintf(fp, "preserve-priority %s\n", prio);
    }
    
    /* XXX TODO: add dumping all other options, too... */

    ctrl_dump(ctx, fp);
    partition_dump(ctx, fp);
    group_dump(ctx, fp);
    procdef_dump(ctx, fp);
}


void
cgrpyyerror(cgrp_context_t *ctx, const char *msg)
{
    (void)ctx;

    OHM_ERROR("parse error: %s near line %d in file %s", msg,
              lexer_line(), lexer_file());
}


/********************
 * gid/uid routines
 ********************/

static int
add_gid(cgrp_rule_t *rule, gid_t gid)
{
    if ((rule->event_mask & (1 << CGRP_EVENT_GID)) && rule->ngid == 0)
        return TRUE;

    if (REALLOC_ARR(rule->gids, rule->ngid, rule->ngid + 1) != NULL) {
        rule->event_mask |= (1 << CGRP_EVENT_GID);
        rule->gids[rule->ngid++] = gid;
        
        return TRUE;
    }
    else {
        OHM_ERROR("cgrp: failed to allocate new group id for rule events");
        
        return FALSE;
    }
}


static int
add_grp(cgrp_rule_t *rule, const char *name)
{
    gid_t gid;
    
    if ((rule->event_mask & (1 << CGRP_EVENT_GID)) && rule->ngid == 0)
        return TRUE;

    if (!strcmp(name, "*")) {
        if (rule->gids != NULL) {
            FREE(rule->gids);
            rule->gids = NULL;
        }

        rule->ngid        = 0;                 /* mark as wildcard group */
        rule->event_mask |= (1 << CGRP_EVENT_GID);
        
        return TRUE;
    }
    else {
        if (!lookup_gid(name, &gid)) {
            OHM_ERROR("cgrp: failed to find group ID for '%s'", name);

            return FALSE;
        }
 
        return add_gid(rule, gid);
    }
}


static int
lookup_gid(const char *name, gid_t *gid)
{
    long         scnf = sysconf(_SC_GETGR_R_SIZE_MAX);
    size_t       size = (scnf < 0 ? 1024 : (size_t)scnf);
    struct group grp, *found;
    char         buf[size];
    
    if (getgrnam_r(name, &grp, buf, size, &found) != 0 || !found)
        return FALSE;
    else {
        *gid = grp.gr_gid;
        return TRUE;
    }
}


static int
add_uid(cgrp_rule_t *rule, uid_t uid)
{
    if ((rule->event_mask & (1 << CGRP_EVENT_UID)) && rule->nuid == 0)
        return TRUE;

    if (REALLOC_ARR(rule->uids, rule->nuid, rule->nuid + 1) != NULL) {
        rule->event_mask |= (1 << CGRP_EVENT_UID);
        rule->gids[rule->nuid++] = uid;
        
        return TRUE;
    }
    else {
        OHM_ERROR("cgrp: failed to allocate new user id for rule events");
        
        return FALSE;
    }
}


static int
add_usr(cgrp_rule_t *rule, const char *name)
{
    uid_t uid;
    
    if ((rule->event_mask & (1 << CGRP_EVENT_UID)) && rule->nuid == 0)
        return TRUE;

    if (!strcmp(name, "*")) {
        if (rule->uids != NULL) {
            FREE(rule->uids);
            rule->uids = NULL;
        }

        rule->nuid        = 0;                  /* mark as wildcard user */
        rule->event_mask |= (1 << CGRP_EVENT_UID);
        
        return TRUE;
    }
    else {
        if (!lookup_uid(name, &uid)) {
            OHM_ERROR("cgrp: failed to find user ID for '%s'", name);

            return FALSE;
        }
    
        return add_uid(rule, uid);
    }
}


static int
lookup_uid(const char *name, uid_t *uid)
{
    long          scnf = sysconf(_SC_GETPW_R_SIZE_MAX);
    size_t        size = (scnf < 0 ? 1024 : (size_t)scnf);
    struct passwd usr, *found;
    char          buf[size];
    
    if (getpwnam_r(name, &usr, buf, size, &found) != 0 || !found)
        return FALSE;
    else {
        *uid = usr.pw_uid;
        return TRUE;
    }
}


/********************
 * misc. parsing
 ********************/
static cgrp_adjust_t
parse_adjust(const char *action)
{
    if      (!strcmp(action, CGRP_ADJUST_ABSOLUTE)) return CGRP_ADJ_ABSOLUTE;
    else if (!strcmp(action, CGRP_ADJUST_RELATIVE)) return CGRP_ADJ_RELATIVE;
    else if (!strcmp(action, CGRP_ADJUST_LOCK    )) return CGRP_ADJ_LOCK;
    else if (!strcmp(action, CGRP_ADJUST_UNLOCK  )) return CGRP_ADJ_UNLOCK;
    else if (!strcmp(action, CGRP_ADJUST_EXTERN  )) return CGRP_ADJ_EXTERN;
    else if (!strcmp(action, CGRP_ADJUST_INTERN  )) return CGRP_ADJ_INTERN;
    
    return CGRP_ADJ_UNKNOWN;
}



/* 
 * Local Variables:
 * c-basic-offset: 4
 * indent-tabs-mode: nil
 * End:
 * vim:set expandtab shiftwidth=4:
 */

