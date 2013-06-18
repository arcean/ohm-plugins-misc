
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
#define yyparse         yy_videoep_parse
#define yylex           yy_videoep_lex
#define yyerror         yy_videoep_error
#define yylval          yy_videoep_lval
#define yychar          yy_videoep_char
#define yydebug         yy_videoep_debug
#define yynerrs         yy_videoep_nerrs


/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 20 "config-parser.y"


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <errno.h>

#include "plugin.h"
#include "config-private.h"
#include "atom.h"
#include "property.h"
#include "randr.h"
#include "router.h"


extern int                       yy_videoep_lineno;

static const char               *yydeffile;

static randr_mode_def_t          modef;
static struct router_sequence_s *rtdef;
static config_scrdef_t           scrdef;
static char                     *output;
static config_propdef_t          propdef;

static sequence_def_t            seqdef;

static config_windef_t           windefs[128];
static int                       winidx;

static exec_def_t                execdefs[64];
static int                       execidx;

static argument_def_t            argdefs[256];
static argument_def_t           *argstart = argdefs;
static int                       argidx;

static int                       newwin_section_present;
static int                       appwin_section_present;

static int                       position;


static int  unsigned_number(const char *, uint32_t *);
static void print_error(const char *, ...);



/* Line 189 of yacc.c  */
#line 131 "config-parser.c"

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

/* Line 214 of yacc.c  */
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



/* Line 214 of yacc.c  */
#line 351 "config-parser.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 363 "config-parser.c"

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
#define YYFINAL  81
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   395

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  85
/* YYNRULES -- Number of rules.  */
#define YYNRULES  171
/* YYNRULES -- Number of states.  */
#define YYNSTATES  349

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   340

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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    11,    13,    16,    21,    23,    25,
      27,    30,    33,    36,    39,    42,    46,    50,    52,    55,
      62,    64,    66,    68,    70,    72,    76,    78,    81,    90,
      92,    94,    96,    98,   102,   104,   107,   116,   118,   121,
     126,   128,   131,   135,   143,   144,   149,   152,   159,   166,
     167,   170,   174,   176,   178,   180,   182,   184,   186,   188,
     190,   192,   194,   196,   198,   201,   210,   212,   215,   218,
     223,   225,   228,   233,   238,   239,   246,   248,   250,   252,
     253,   258,   259,   263,   265,   269,   272,   281,   284,   293,
     295,   298,   301,   306,   308,   311,   318,   320,   322,   326,
     331,   340,   342,   344,   346,   348,   351,   356,   359,   364,
     366,   369,   372,   374,   377,   382,   384,   387,   390,   392,
     395,   400,   402,   405,   408,   410,   412,   416,   419,   422,
     429,   433,   440,   447,   449,   450,   452,   456,   457,   459,
     463,   467,   469,   471,   473,   478,   483,   488,   492,   496,
     500,   504,   508,   509,   513,   515,   517,   519,   521,   523,
     525,   527,   529,   531,   533,   535,   537,   539,   541,   543,
     545,   548
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     169,     0,    -1,    88,    89,    -1,    68,    31,    69,     3,
      -1,    90,    -1,    89,    90,    -1,    84,    62,    91,     3,
      -1,   170,    -1,    84,    -1,    85,    -1,    68,    93,    -1,
      94,    96,    -1,    95,    96,    -1,    99,   100,    -1,   103,
     104,    -1,    32,    69,     3,    -1,    26,    69,     3,    -1,
      97,    -1,    96,    97,    -1,    84,    62,    98,    63,    84,
       3,    -1,   170,    -1,    31,    -1,    54,    -1,    55,    -1,
      33,    -1,    27,    69,     3,    -1,   101,    -1,   100,   101,
      -1,    84,    64,    84,    62,   102,    63,    84,     3,    -1,
     170,    -1,    31,    -1,    54,    -1,    55,    -1,    28,    69,
       3,    -1,   105,    -1,   104,   105,    -1,    84,    64,    84,
      62,    98,    63,    84,     3,    -1,   170,    -1,   107,   108,
      -1,    68,    38,    69,     3,    -1,   109,    -1,   108,   109,
      -1,   110,   111,     3,    -1,   138,    62,    81,    63,    81,
      63,    81,    -1,    -1,   112,   113,   114,   115,    -1,    63,
      81,    -1,    63,    81,    63,    81,    63,    81,    -1,    63,
      81,    63,    81,    63,    81,    -1,    -1,    63,   116,    -1,
     115,    79,   116,    -1,    42,    -1,    43,    -1,    44,    -1,
      45,    -1,    46,    -1,    47,    -1,    48,    -1,    49,    -1,
      50,    -1,    51,    -1,    52,    -1,    53,    -1,   118,   119,
      -1,    68,    13,    69,     3,    16,    62,    84,     3,    -1,
     120,    -1,   119,   120,    -1,   121,   122,    -1,    17,    62,
      81,     3,    -1,   123,    -1,   122,   123,    -1,   124,   125,
     109,   127,    -1,    18,    62,    81,     3,    -1,    -1,    39,
      62,   126,    63,   126,     3,    -1,    81,    -1,    40,    -1,
      41,    -1,    -1,    38,    62,   138,     3,    -1,    -1,    34,
      62,   128,    -1,   138,    -1,   128,    63,   138,    -1,   130,
     133,    -1,    68,    14,    69,     3,    16,    62,    84,     3,
      -1,   132,   133,    -1,    68,    15,    69,     3,    16,    62,
      84,     3,    -1,   134,    -1,   133,   134,    -1,   135,   136,
      -1,    34,    62,   138,     3,    -1,   137,    -1,   136,   137,
      -1,    32,    62,    84,    64,   138,     3,    -1,    84,    -1,
      85,    -1,   140,   141,   143,    -1,    68,     5,    69,     3,
      -1,     7,    62,    84,     3,     8,    62,   142,     3,    -1,
      10,    -1,    11,    -1,    12,    -1,   144,    -1,   143,   144,
      -1,     9,    62,   160,     3,    -1,   146,   147,    -1,    68,
      19,    69,     3,    -1,   148,    -1,   147,   148,    -1,   157,
       3,    -1,   170,    -1,   150,   151,    -1,    68,    22,    69,
       3,    -1,   152,    -1,   151,   152,    -1,   157,     3,    -1,
     170,    -1,   154,   155,    -1,    68,    23,    69,     3,    -1,
     156,    -1,   155,   156,    -1,   157,     3,    -1,   170,    -1,
     158,    -1,   158,    65,   160,    -1,    32,   159,    -1,    62,
      84,    -1,     4,    64,   161,    66,   162,    67,    -1,     5,
      64,   161,    -1,     6,    64,   161,    66,   163,    67,    -1,
       6,    64,   161,    66,     1,    67,    -1,    84,    -1,    -1,
     165,    -1,   162,    63,   165,    -1,    -1,   164,    -1,   163,
      63,   164,    -1,    84,    62,   165,    -1,    20,    -1,    24,
      -1,    29,    -1,    21,    64,    84,   166,    -1,    25,    64,
      84,   166,    -1,    26,    64,    84,   166,    -1,    30,    64,
      84,    -1,    31,    64,    84,    -1,    55,    64,    85,    -1,
      56,    64,   167,    -1,    57,    64,    81,    -1,    -1,    68,
     167,    69,    -1,    81,    -1,    82,    -1,    83,    -1,    87,
      -1,    92,    -1,   106,    -1,   117,    -1,   129,    -1,   131,
      -1,   139,    -1,   145,    -1,   149,    -1,   153,    -1,     3,
      -1,   170,    -1,   168,    -1,   169,   168,    -1,     1,     3,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   191,   191,   195,   201,   202,   206,   211,   215,   216,
     219,   222,   223,   224,   225,   229,   235,   241,   242,   246,
     257,   261,   262,   263,   264,   268,   274,   275,   279,   291,
     295,   296,   297,   301,   307,   308,   312,   326,   337,   341,
     347,   348,   352,   369,   392,   394,   398,   407,   422,   436,
     438,   439,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   458,   462,   474,   475,   479,   483,
     490,   491,   495,   524,   531,   535,   542,   543,   544,   548,
     549,   552,   554,   558,   559,   564,   568,   580,   584,   596,
     597,   601,   605,   611,   612,   616,   635,   636,   641,   653,
     664,   672,   673,   674,   678,   679,   683,   690,   694,   702,
     703,   707,   743,   747,   751,   760,   761,   765,   808,   814,
     818,   827,   828,   832,   868,   872,   878,   887,   893,   901,
     910,   914,   923,   937,   946,   948,   949,   952,   954,   955,
     959,   965,   973,   981,   989,   997,  1005,  1013,  1016,  1023,
    1029,  1035,  1044,  1045,  1048,  1049,  1050,  1054,  1055,  1056,
    1057,  1058,  1059,  1060,  1061,  1062,  1063,  1064,  1067,  1071,
    1072,  1076
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TKN_EOL", "TKN_FUNCTION",
  "TKN_SEQUENCE", "TKN_RESOLVER", "TKN_NAME", "TKN_STEP_UNTIL", "TKN_STEP",
  "TKN_FIRST_SUCCESS", "TKN_FIRST_FAILURE", "TKN_END", "TKN_DEVICE",
  "TKN_OUT_SIGNAL", "TKN_OUT_RATIO", "TKN_TYPE", "TKN_SCREEN", "TKN_CRTC",
  "TKN_ROOT_WINDOW", "TKN_ROOT_WINDOW_ID", "TKN_ROOT_PROPERTY",
  "TKN_NEW_WINDOW", "TKN_APP_WINDOW", "TKN_APP_WINDOW_ID",
  "TKN_APP_PROPERTY", "TKN_WIN_PROPERTY", "TKN_OUT_PROPERTY",
  "TKN_XV_PROPERTY", "TKN_WIN_ID", "TKN_VARIABLE", "TKN_ATOM",
  "TKN_PROPERTY", "TKN_WINDOW", "TKN_OUTPUT", "TKN_INPUT", "TKN_VIDEO",
  "TKN_TARGET", "TKN_MODE", "TKN_POSITION", "TKN_DONTCARE", "TKN_APPEND",
  "TKN_HSYNC_POSITIVE", "TKN_HSYNC_NEGATIVE", "TKN_VSYNC_POSITIVE",
  "TKN_VSYNC_NEGATIVE", "TKN_INTERLACE", "TKN_DOUBLE_SCAN", "TKN_CSYNC",
  "TKN_CSYNC_POSITIVE", "TKN_CSYNC_NEGATIVE", "TKN_PIXEL_MULTIPLEX",
  "TKN_DOUBLE_CLOCK", "TKN_HALVE_CLOCK", "TKN_CARDINAL", "TKN_STRING",
  "TKN_INTEGER", "TKN_UNSIGNED", "TKN_IF", "TKN_THEN", "TKN_ELSE",
  "TKN_ENDIF", "TKN_ASSIGN", "TKN_COMMA", "TKN_COLON", "TKN_IMPLICATION",
  "TKN_OPEN_PARENTHESIS", "TKN_CLOSE_PARENTHESIS", "TKN_OPEN_BRACKET",
  "TKN_CLOSE_BRACKET", "TKN_LESS", "TKN_LESS_OR_EQUAL", "TKN_EQUAL",
  "TKN_GREATER_OR_EQUAL", "TKN_GREATER", "TKN_PLUS", "TKN_MINUS",
  "TKN_ASTERISK", "TKN_SLASH", "TKN_LOGICAL_OR", "TKN_LOGICAL_AND",
  "TKN_UNSIGNED_NUMBER", "TKN_POSITIVE_NUMBER", "TKN_NEGATIVE_NUMBER",
  "TKN_IDENTIFIER", "TKN_TEXT", "$accept", "atom_section",
  "atom_section_header", "atom_definitions", "atom_definition",
  "atom_value", "property_section", "property_section_type",
  "obsolete_property_section", "window_property_section",
  "window_property_definitions", "window_property_definition",
  "window_property_type", "output_property_section",
  "output_property_definitions", "output_property_definition",
  "output_property_type", "xvideo_property_section",
  "xvideo_property_definitions", "xvideo_property_definition",
  "mode_section", "mode_section_header", "mode_definitions",
  "mode_definition", "mode_definition_mandatory",
  "mode_definition_optional", "mode_clock", "mode_hsync", "mode_vsync",
  "mode_flags", "mode_flag", "device_section", "device_section_header",
  "device_definitions", "screen_definition", "screen_number",
  "crtc_definitions", "crtc_definition", "crtc_number",
  "position_definition", "position_value", "output_definition",
  "output_list", "signal_section", "signal_section_header",
  "ratio_section", "ratio_section_header", "output_definitions",
  "outprop_definition", "output_name", "outprop_settings",
  "outprop_setting", "id_value", "sequence_section",
  "sequence_section_header", "sequence_base_definition", "sequence_type",
  "sequence_step_definitions", "sequence_step_definition",
  "root_window_section", "root_window_section_header",
  "root_window_definitions", "root_window_definition",
  "new_window_section", "new_window_section_header",
  "new_window_definitions", "new_window_definition", "app_window_section",
  "app_window_section_header", "app_window_definitions",
  "app_window_definition", "window_property_exec_definition",
  "window_property", "window_property_id_assingnment",
  "executable_definition", "executable", "positional_argument_definitions",
  "named_argument_definitions", "named_argument_definition",
  "value_definition", "index_definition", "integer", "section",
  "configuration", "invalid_line", 0
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    86,    87,    88,    89,    89,    90,    90,    91,    91,
      92,    93,    93,    93,    93,    94,    95,    96,    96,    97,
      97,    98,    98,    98,    98,    99,   100,   100,   101,   101,
     102,   102,   102,   103,   104,   104,   105,   105,   106,   107,
     108,   108,   109,   110,   111,   111,   112,   113,   114,   115,
     115,   115,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   117,   118,   119,   119,   120,   121,
     122,   122,   123,   124,   125,   125,   126,   126,   126,   109,
     109,   127,   127,   128,   128,   129,   130,   131,   132,   133,
     133,   134,   135,   136,   136,   137,   138,   138,   139,   140,
     141,   142,   142,   142,   143,   143,   144,   145,   146,   147,
     147,   148,   148,   149,   150,   151,   151,   152,   152,   153,
     154,   155,   155,   156,   156,   157,   157,   158,   159,   160,
     160,   160,   160,   161,   162,   162,   162,   163,   163,   163,
     164,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   166,   166,   167,   167,   167,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   169,
     169,   170
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     4,     1,     2,     4,     1,     1,     1,
       2,     2,     2,     2,     2,     3,     3,     1,     2,     6,
       1,     1,     1,     1,     1,     3,     1,     2,     8,     1,
       1,     1,     1,     3,     1,     2,     8,     1,     2,     4,
       1,     2,     3,     7,     0,     4,     2,     6,     6,     0,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     8,     1,     2,     2,     4,
       1,     2,     4,     4,     0,     6,     1,     1,     1,     0,
       4,     0,     3,     1,     3,     2,     8,     2,     8,     1,
       2,     2,     4,     1,     2,     6,     1,     1,     3,     4,
       8,     1,     1,     1,     1,     2,     4,     2,     4,     1,
       2,     2,     1,     2,     4,     1,     2,     2,     1,     2,
       4,     1,     2,     2,     1,     1,     3,     2,     2,     6,
       3,     6,     6,     1,     0,     1,     3,     0,     1,     3,
       3,     1,     1,     1,     4,     4,     4,     3,     3,     3,
       3,     3,     0,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,   167,     0,   157,     0,   158,   159,    79,   160,
       0,   161,     0,   162,     0,   163,     0,   164,     0,   165,
       0,   166,     0,   169,     0,   168,   171,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,     0,     0,     0,     0,     0,     0,     4,     7,     0,
      96,    97,    38,    40,    44,     0,     0,    64,    66,     0,
       0,    85,    89,     0,    87,     0,     0,     0,     0,   109,
       0,   125,   112,     0,   115,     0,   118,     0,   121,     0,
     124,     1,   170,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    17,    20,
       0,     0,     0,    26,    29,     0,     0,    34,    37,     0,
       5,     0,    41,     0,     0,     0,     0,     0,    67,     0,
      68,    70,    74,     0,    90,     0,    91,    93,     0,     0,
      98,   104,     0,   127,   110,   111,     0,   116,   117,   122,
     123,    99,     0,     0,     0,   108,   114,   120,    16,    25,
      33,     3,    15,    39,     0,    18,     0,    27,     0,    35,
       8,     9,     0,     0,    46,    42,     0,     0,     0,     0,
       0,    71,     0,    79,     0,     0,    94,     0,     0,   105,
     128,     0,     0,     0,   126,     0,     0,     0,    21,    24,
      22,    23,     0,     0,     0,     6,    80,     0,     0,    49,
       0,    69,     0,     0,    81,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    45,     0,    73,    77,    78,    76,     0,     0,    72,
       0,     0,   106,   133,     0,   130,     0,     0,     0,     0,
       0,    30,    31,    32,     0,     0,     0,     0,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      50,     0,     0,     0,     0,     0,     0,   134,     0,    65,
      86,    88,    19,     0,     0,     0,     0,    51,    43,     0,
      82,    83,    95,   101,   102,   103,     0,   141,     0,   142,
       0,     0,   143,     0,     0,     0,     0,     0,     0,   135,
       0,     0,     0,   138,     0,     0,    47,     0,    75,     0,
     100,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     129,   132,     0,     0,   131,    28,    36,    48,    84,   152,
     152,   152,   147,   148,   149,   154,   155,   156,   150,   151,
     136,   140,   139,     0,   144,   145,   146,     0,   153
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,    46,    47,   162,     6,    40,    41,    42,
      97,    98,   192,    43,   102,   103,   244,    44,   106,   107,
       7,     8,    52,    53,    54,   114,   115,   167,   199,   221,
     260,     9,    10,    57,    58,    59,   120,   121,   122,   173,
     227,   229,   280,    11,    12,    13,    14,    61,    62,    63,
     126,   127,    55,    15,    16,    66,   286,   130,   131,    17,
      18,    68,    69,    19,    20,    73,    74,    21,    22,    77,
      78,    70,    71,   133,   184,   234,   298,   302,   303,   299,
     344,   338,    23,    24,    99
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -255
static const yytype_int16 yypact[] =
{
      50,    37,  -255,   145,  -255,     4,  -255,  -255,    28,  -255,
      40,  -255,    25,  -255,    25,  -255,    62,  -255,    32,  -255,
      32,  -255,    32,  -255,    49,  -255,  -255,     5,    11,    36,
      54,    85,    94,   101,   105,   106,   109,   111,   112,   113,
    -255,     9,     9,    14,    16,    10,     3,  -255,  -255,    20,
    -255,  -255,    28,  -255,    38,   107,   117,    40,  -255,    73,
     122,    25,  -255,   153,    25,   124,   178,   126,    31,  -255,
     186,   125,  -255,    35,  -255,   188,  -255,    41,  -255,   189,
    -255,  -255,  -255,   190,   191,   192,   193,   194,   196,   197,
     198,   199,   200,   201,   202,   203,   146,     8,  -255,  -255,
      13,   143,    18,  -255,  -255,   147,    27,  -255,  -255,    43,
    -255,    67,  -255,   128,   207,   149,   132,   133,  -255,   154,
      73,  -255,   176,    67,  -255,   155,   153,  -255,   135,   156,
     178,  -255,   136,  -255,  -255,  -255,   110,  -255,  -255,  -255,
    -255,  -255,   205,   206,   208,  -255,  -255,  -255,  -255,  -255,
    -255,  -255,  -255,  -255,    29,  -255,   139,  -255,   141,  -255,
    -255,  -255,   223,   224,  -255,  -255,   148,   165,   167,   228,
     151,  -255,   171,    28,   231,   152,  -255,   232,   110,  -255,
    -255,   173,   174,   175,  -255,   179,   180,   181,  -255,  -255,
    -255,  -255,   177,   182,   183,  -255,  -255,   184,   168,   185,
     169,  -255,   243,    15,   217,  -255,   195,   244,   250,   170,
     170,   170,   172,   187,   204,   209,    23,    29,   210,   211,
      90,   213,   212,  -255,  -255,  -255,  -255,   214,   216,  -255,
      67,   218,  -255,  -255,   215,  -255,   219,   252,   254,   255,
     257,  -255,  -255,  -255,   220,   221,   226,   222,  -255,  -255,
    -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,
    -255,    90,   225,    15,    67,   258,   134,   100,    22,  -255,
    -255,  -255,  -255,   227,   229,   233,   234,  -255,  -255,   259,
     235,  -255,  -255,  -255,  -255,  -255,   260,  -255,   230,  -255,
     236,   237,  -255,   238,   240,   241,   245,   246,   -38,  -255,
     248,   256,   -20,  -255,   261,   262,  -255,   239,  -255,    67,
    -255,   242,   247,   249,   251,   253,   263,    66,   264,   100,
    -255,  -255,   100,   265,  -255,  -255,  -255,  -255,  -255,   266,
     266,   266,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,
    -255,  -255,  -255,    66,  -255,  -255,  -255,   267,  -255
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -255,  -255,  -255,  -255,   270,  -255,  -255,  -255,  -255,  -255,
     275,   -39,    51,  -255,  -255,   164,  -255,  -255,  -255,   161,
    -255,  -255,  -255,   -51,  -255,  -255,  -255,  -255,  -255,  -255,
      12,  -255,  -255,  -255,   268,  -255,  -255,   150,  -255,  -255,
       6,  -255,  -255,  -255,  -255,  -255,  -255,   272,    46,  -255,
    -255,   269,  -111,  -255,  -255,  -255,  -255,  -255,   142,  -255,
    -255,  -255,   271,  -255,  -255,  -255,   273,  -255,  -255,  -255,
     274,    17,  -255,  -255,    98,   -49,  -255,  -255,   -44,  -254,
    -165,   -61,   283,  -255,     2
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -138
static const yytype_int16 yytable[] =
{
     163,   112,    25,    -2,     1,     1,    -2,    48,   -11,     1,
       1,   -11,   174,   -12,     1,     1,   -12,     1,   -13,     1,
      72,   -13,    76,   300,    80,   319,    25,   -14,     1,   320,
     -14,  -107,     1,     1,  -107,  -113,     1,    75,  -113,    79,
      26,  -119,     1,   323,  -119,   104,   108,   324,    48,    81,
       1,     1,     2,     2,   241,   224,   225,    56,   155,    60,
     188,   155,   189,    67,    67,   340,    49,    67,   341,    65,
      72,    -2,   109,    67,    83,    76,   -11,   242,   243,    80,
      84,   -12,   111,   190,   191,  -137,   -13,    45,    45,  -137,
      75,   119,    96,    96,    79,   -14,   226,    96,   101,  -107,
     105,   113,   101,  -113,   104,    85,   301,   124,   108,  -119,
     124,   105,    50,    51,   181,   182,   183,     3,     3,   265,
     287,   288,   204,    86,   289,   290,   291,   160,   161,   292,
     293,   294,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   283,   284,   285,   335,   336,   337,
      27,    50,    51,   281,    87,   295,   296,   297,    28,    29,
      30,   235,   236,    88,    31,   345,   346,    32,    33,   116,
      89,    34,    35,    36,    90,    91,    37,    38,    92,   117,
      93,    94,    95,    39,   123,   125,   128,   129,   132,   135,
     136,   138,   140,   141,   142,   143,   144,   145,   328,   146,
     147,   148,   149,   150,   151,   152,   153,   156,   154,   164,
     165,   158,   166,   168,   169,   172,   170,   175,   178,   177,
     180,   185,   186,   193,   187,   194,   195,   196,   198,   197,
     200,   201,   202,   203,   205,   207,   206,   209,   210,   211,
     215,   212,   213,   214,   216,   217,   223,   218,   220,   219,
     222,   228,   231,   232,   233,   269,   237,   270,   271,   230,
     272,   282,   308,   310,   325,   326,   157,   159,   245,   279,
     171,   238,   179,   277,   247,   262,   208,   263,   264,   342,
     266,   267,   347,   273,   274,   268,    64,     0,   239,   275,
       0,   246,   261,   240,   311,     0,     0,   307,   309,     0,
     312,   313,   314,   276,   315,   316,   278,    82,     0,   317,
     318,   304,     0,   305,   306,   321,   110,   100,   322,     0,
     327,     0,     0,     0,     0,   118,   329,     0,     0,     0,
       0,   330,     0,   331,   343,   332,   348,   333,     0,   134,
       0,     0,     0,     0,     0,   339,   137,     0,   334,   301,
       0,   139,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   176
};

static const yytype_int16 yycheck[] =
{
     111,    52,     0,     0,     1,     1,     3,     5,     0,     1,
       1,     3,   123,     0,     1,     1,     3,     1,     0,     1,
      18,     3,    20,     1,    22,    63,    24,     0,     1,    67,
       3,     0,     1,     1,     3,     0,     1,    20,     3,    22,
       3,     0,     1,    63,     3,    43,    44,    67,    46,     0,
       1,     1,     3,     3,    31,    40,    41,    17,    97,    34,
      31,   100,    33,    32,    32,   319,    38,    32,   322,     7,
      68,    68,    62,    32,    69,    73,    68,    54,    55,    77,
      69,    68,    62,    54,    55,    63,    68,    84,    84,    67,
      73,    18,    84,    84,    77,    68,    81,    84,    84,    68,
      84,    63,    84,    68,   102,    69,    84,    61,   106,    68,
      64,    84,    84,    85,     4,     5,     6,    68,    68,   230,
      20,    21,   173,    69,    24,    25,    26,    84,    85,    29,
      30,    31,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    10,    11,    12,    81,    82,    83,
       5,    84,    85,   264,    69,    55,    56,    57,    13,    14,
      15,   210,   211,    69,    19,   330,   331,    22,    23,    62,
      69,    26,    27,    28,    69,    69,    31,    32,    69,    62,
      69,    69,    69,    38,    62,    32,    62,     9,    62,     3,
      65,     3,     3,     3,     3,     3,     3,     3,   309,     3,
       3,     3,     3,     3,     3,     3,     3,    64,    62,    81,
       3,    64,    63,    81,    81,    39,    62,    62,    62,    84,
      84,    16,    16,    84,    16,    84,     3,     3,    63,    81,
      63,     3,    81,    62,     3,     3,    84,    64,    64,    64,
      63,    62,    62,    62,    62,    62,     3,    63,    63,    81,
      81,    34,     8,     3,    84,     3,    84,     3,     3,    64,
       3,     3,     3,     3,     3,     3,   102,   106,   217,   263,
     120,    84,   130,   261,    63,    63,   178,    63,    62,   323,
      62,    66,   343,    63,    63,    66,    14,    -1,    84,    63,
      -1,    81,    79,    84,    64,    -1,    -1,    63,    63,    -1,
      64,    64,    64,    81,    64,    64,    81,    24,    -1,    64,
      64,    84,    -1,    84,    81,    67,    46,    42,    62,    -1,
      81,    -1,    -1,    -1,    -1,    57,    84,    -1,    -1,    -1,
      -1,    84,    -1,    84,    68,    84,    69,    84,    -1,    68,
      -1,    -1,    -1,    -1,    -1,    81,    73,    -1,    85,    84,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   126
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    68,    87,    88,    92,   106,   107,   117,
     118,   129,   130,   131,   132,   139,   140,   145,   146,   149,
     150,   153,   154,   168,   169,   170,     3,     5,    13,    14,
      15,    19,    22,    23,    26,    27,    28,    31,    32,    38,
      93,    94,    95,    99,   103,    84,    89,    90,   170,    38,
      84,    85,   108,   109,   110,   138,    17,   119,   120,   121,
      34,   133,   134,   135,   133,     7,   141,    32,   147,   148,
     157,   158,   170,   151,   152,   157,   170,   155,   156,   157,
     170,     0,   168,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    84,    96,    97,   170,
      96,    84,   100,   101,   170,    84,   104,   105,   170,    62,
      90,    62,   109,    63,   111,   112,    62,    62,   120,    18,
     122,   123,   124,    62,   134,    32,   136,   137,    62,     9,
     143,   144,    62,   159,   148,     3,    65,   152,     3,   156,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,    62,    97,    64,   101,    64,   105,
      84,    85,    91,   138,    81,     3,    63,   113,    81,    81,
      62,   123,    39,   125,   138,    62,   137,    84,    62,   144,
      84,     4,     5,     6,   160,    16,    16,    16,    31,    33,
      54,    55,    98,    84,    84,     3,     3,    81,    63,   114,
      63,     3,    81,    62,   109,     3,    84,     3,   160,    64,
      64,    64,    62,    62,    62,    63,    62,    62,    63,    81,
      63,   115,    81,     3,    40,    41,    81,   126,    34,   127,
      64,     8,     3,    84,   161,   161,   161,    84,    84,    84,
      84,    31,    54,    55,   102,    98,    81,    63,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
     116,    79,    63,    63,    62,   138,    62,    66,    66,     3,
       3,     3,     3,    63,    63,    63,    81,   116,    81,   126,
     128,   138,     3,    10,    11,    12,   142,    20,    21,    24,
      25,    26,    29,    30,    31,    55,    56,    57,   162,   165,
       1,    84,   163,   164,    84,    84,    81,    63,     3,    63,
       3,    64,    64,    64,    64,    64,    64,    64,    64,    63,
      67,    67,    62,    63,    67,     3,     3,    81,   138,    84,
      84,    84,    84,    84,    85,    81,    82,    83,   167,    81,
     165,   165,   164,    68,   166,   166,   166,   167,    69
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
      yyerror (YY_("syntax error: cannot back up")); \
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
		  Type, Value); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
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
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

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
int yyparse (void);
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
yyparse (void)
#else
int
yyparse ()

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
        case 3:

/* Line 1455 of yacc.c  */
#line 195 "config-parser.y"
    {
      position = 0;
  }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 206 "config-parser.y"
    {
      OHM_DEBUG(DBG_PARSE, "atom_create(%s, %s)\n", (yyvsp[(1) - (4)].string), (yyvsp[(3) - (4)].string));
      tracker_add_atom((yyvsp[(1) - (4)].string), (yyvsp[(3) - (4)].string));
      position = 0;
  }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 215 "config-parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 216 "config-parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 229 "config-parser.y"
    {
      position = 0;
  }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 235 "config-parser.y"
    {
      position = 0;
  }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 248 "config-parser.y"
    {
      OHM_DEBUG(DBG_PARSE, "atom_create(%s, %s)\n", (yyvsp[(1) - (6)].string), (yyvsp[(5) - (6)].string));
      atom_create((yyvsp[(1) - (6)].string), (yyvsp[(5) - (6)].string));

      OHM_DEBUG(DBG_PARSE, "property_definition_create(%s, %d)\n",(yyvsp[(1) - (6)].string),(yyvsp[(3) - (6)].valtyp));
      property_definition_create((yyvsp[(1) - (6)].string), (yyvsp[(3) - (6)].valtyp));

      position = 0;
  }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 261 "config-parser.y"
    { (yyval.valtyp) = videoep_atom;   }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 262 "config-parser.y"
    { (yyval.valtyp) = videoep_card;   }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 263 "config-parser.y"
    { (yyval.valtyp) = videoep_string; }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 264 "config-parser.y"
    { (yyval.valtyp) = videoep_window; }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 268 "config-parser.y"
    {
      position = 0;
  }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 281 "config-parser.y"
    {
      OHM_DEBUG(DBG_PARSE, "atom_create(%s, %s)\n", (yyvsp[(3) - (8)].string), (yyvsp[(7) - (8)].string));
      atom_create((yyvsp[(3) - (8)].string), (yyvsp[(7) - (8)].string));

      OHM_DEBUG(DBG_PARSE, "randr_output_define_property(%s, %s, %s, %d)",
                (yyvsp[(1) - (8)].string),(yyvsp[(3) - (8)].string), (yyvsp[(7) - (8)].string), (yyvsp[(5) - (8)].valtyp));
      randr_output_define_property((yyvsp[(1) - (8)].string), (yyvsp[(3) - (8)].string), (yyvsp[(7) - (8)].string), (yyvsp[(5) - (8)].valtyp));

      position = 0;
  }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 295 "config-parser.y"
    { (yyval.valtyp) = videoep_atom;   }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 296 "config-parser.y"
    { (yyval.valtyp) = videoep_card;   }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 297 "config-parser.y"
    { (yyval.valtyp) = videoep_string; }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 301 "config-parser.y"
    {
      position = 0;
  }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 314 "config-parser.y"
    {
      OHM_DEBUG(DBG_PARSE, "atom_create(%s, %s)\n", (yyvsp[(3) - (8)].string), (yyvsp[(7) - (8)].string));
      atom_create((yyvsp[(3) - (8)].string), (yyvsp[(7) - (8)].string));

#if 0
      OHM_DEBUG(DBG_PARSE, "xvideo_adaptor_define_property(%s, %s %s, %d)\n",
                (yyvsp[(1) - (8)].string),(yyvsp[(3) - (8)].string), (yyvsp[(7) - (8)].string), (yyvsp[(5) - (8)].valtyp));
      xvideo_adaptor_define_property((yyvsp[(1) - (8)].string), (yyvsp[(3) - (8)].string), (yyvsp[(7) - (8)].string), (yyvsp[(5) - (8)].valtyp));
#endif

      position = 0;
  }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 341 "config-parser.y"
    {
      position = 0;
  }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 352 "config-parser.y"
    {

      OHM_DEBUG(DBG_PARSE, "randr_mode_create(<"
                "screen_id:%u, name:'%s', size:%ux%u, "
                "hstart:%u hend:%u, htotal:%u, "
                "vstart:%u vend:%u, vtotal:%u, "
                "hskew:%u, flags:0x%x>)",
                modef.screen_id, modef.name, modef.width,modef.height,
                modef.hstart, modef.hend, modef.htotal,
                modef.vstart, modef.vend, modef.vtotal,
                modef.hskew, modef.flags);

      randr_mode_create(&modef);
  }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 371 "config-parser.y"
    {
      memset(&modef, 0, sizeof(modef));
      modef.name = (yyvsp[(1) - (7)].string);

      if (!unsigned_number((yyvsp[(3) - (7)].string), &modef.screen_id)) {
          print_error("invalid screen ID '%s'", (yyvsp[(3) - (7)].string));
          YYERROR;
      }

      if (!unsigned_number((yyvsp[(5) - (7)].string), &modef.width)  || !modef.width  ||
          !unsigned_number((yyvsp[(7) - (7)].string), &modef.height) || !modef.height   )
      {
          print_error("invalide mode size '%s,%s'", (yyvsp[(5) - (7)].string), (yyvsp[(7) - (7)].string));
          YYERROR;
      }
      
      modef.hstart = modef.hend = modef.htotal = modef.width;
      modef.vstart = modef.vend = modef.vtotal = modef.height;
  }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 398 "config-parser.y"
    {
      if (!unsigned_number((yyvsp[(2) - (2)].string), &modef.clock) || modef.clock < 1000000) {
          print_error("invalid mode clock '%s' Hz (must be in MHz range)",(yyvsp[(2) - (2)].string));
          YYERROR;
      }
  }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 410 "config-parser.y"
    {
      if (!unsigned_number((yyvsp[(2) - (6)].string), &modef.hstart) ||
          !unsigned_number((yyvsp[(4) - (6)].string), &modef.hend  ) ||
          !unsigned_number((yyvsp[(6) - (6)].string), &modef.htotal)   )
      {
          print_error("invalid hstart,hend,htotal values '%s,%s,%s'",(yyvsp[(2) - (6)].string),(yyvsp[(4) - (6)].string),(yyvsp[(6) - (6)].string));
          YYERROR;
      } 
  }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 425 "config-parser.y"
    {
      if (!unsigned_number((yyvsp[(2) - (6)].string), &modef.vstart) ||
          !unsigned_number((yyvsp[(4) - (6)].string), &modef.vend  ) ||
          !unsigned_number((yyvsp[(6) - (6)].string), &modef.vtotal)   )
      {
          print_error("invalid vstart,vend,vtotal values '%s,%s,%s'",(yyvsp[(2) - (6)].string),(yyvsp[(4) - (6)].string),(yyvsp[(6) - (6)].string));
          YYERROR;
      } 
  }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 443 "config-parser.y"
    { modef.flags |= 1;    }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 444 "config-parser.y"
    { modef.flags |= 2;    }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 445 "config-parser.y"
    { modef.flags |= 4;    }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 446 "config-parser.y"
    { modef.flags |= 8;    }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 447 "config-parser.y"
    { modef.flags |= 16;   }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 448 "config-parser.y"
    { modef.flags |= 32;   }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 449 "config-parser.y"
    { modef.flags |= 64;   }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 450 "config-parser.y"
    { modef.flags |= 128;  }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 451 "config-parser.y"
    { modef.flags |= 256;  }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 452 "config-parser.y"
    { modef.flags |= 2048; }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 453 "config-parser.y"
    { modef.flags |= 4096; }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 454 "config-parser.y"
    { modef.flags |= 8192; }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 463 "config-parser.y"
    {
      if ((rtdef = router_sequence_create(router_seq_device, (yyvsp[(7) - (8)].string))) == NULL) {
          print_error("multiple device section definition of '%s'", (yyvsp[(7) - (8)].string));
          YYERROR;
      }
      OHM_DEBUG(DBG_PARSE, "router_sequence_create(device, '%s')", (yyvsp[(7) - (8)].string));
      position = 0;
  }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 483 "config-parser.y"
    {
      memset(&scrdef, 0, sizeof(scrdef));
      scrdef.screen = (yyvsp[(3) - (4)].string);
  }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 495 "config-parser.y"
    {
      int sts;
 
      OHM_DEBUG(DBG_PARSE, "router_add_function(crtc_set_position, %s, %s, "
                "%s, %s)", scrdef.screen, scrdef.crtc, scrdef.x, scrdef.y);

      sts = router_sequence_add_function(rtdef, "crtc_set_position",
                                         scrdef.screen, scrdef.crtc,
                                         scrdef.x, scrdef.y);

      OHM_DEBUG(DBG_PARSE, "router_add_function(crtc_set_mode, %s, %s, %s)",
                scrdef.screen, scrdef.crtc, scrdef.mode?scrdef.mode:"<null>");

      sts = router_sequence_add_function(rtdef, "crtc_set_mode",
                                         scrdef.screen, scrdef.crtc,
                                         scrdef.mode);
                                         
      OHM_DEBUG(DBG_PARSE, "router_add_function(crtc_set_outputs, %s, %s, "
                "%d, <%s ...>)", scrdef.screen, scrdef.crtc, scrdef.outputidx,
                scrdef.outputs[0] ? scrdef.outputs[0] : "NULL");

      sts = router_sequence_add_function(rtdef, "crtc_set_outputs",
                                         scrdef.screen, scrdef.crtc,
                                         scrdef.outputidx, scrdef.outputs);

  }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 524 "config-parser.y"
    {
      scrdef.crtc = (yyvsp[(3) - (4)].string);
      scrdef.outputidx = 0;
  }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 531 "config-parser.y"
    {
    scrdef.x = "dontcare";
    scrdef.y = "dontcare";
  }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 535 "config-parser.y"
    {
    scrdef.x = (yyvsp[(3) - (6)].string);
    scrdef.y = (yyvsp[(5) - (6)].string);
  }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 542 "config-parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string);         }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 543 "config-parser.y"
    { (yyval.string) = "dontcare"; }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 544 "config-parser.y"
    { (yyval.string) = "append";   }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 548 "config-parser.y"
    { scrdef.mode = NULL; }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 549 "config-parser.y"
    { scrdef.mode = (yyvsp[(3) - (4)].string);   }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 558 "config-parser.y"
    { scrdef.outputs[scrdef.outputidx++] = (yyvsp[(1) - (1)].string); }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 559 "config-parser.y"
    { scrdef.outputs[scrdef.outputidx++] = (yyvsp[(3) - (3)].string); }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 569 "config-parser.y"
    {
      if ((rtdef = router_sequence_create(router_seq_signal, (yyvsp[(7) - (8)].string))) == NULL) {
          print_error("multiple signal section definition of '%s'", (yyvsp[(7) - (8)].string));
          YYERROR;
      }
      OHM_DEBUG(DBG_PARSE, "router_sequence_create(signal, '%s')", (yyvsp[(7) - (8)].string));
      position = 0;      
  }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 585 "config-parser.y"
    {
      if ((rtdef = router_sequence_create(router_seq_ratio, (yyvsp[(7) - (8)].string))) == NULL) {
          print_error("multiple ratio section definition of '%s'", (yyvsp[(7) - (8)].string));
          YYERROR;
      }
      OHM_DEBUG(DBG_PARSE, "router_sequence_create(ratio, '%s')", (yyvsp[(7) - (8)].string));
      position = 0;      
  }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 605 "config-parser.y"
    {
      output = (yyvsp[(3) - (4)].string);
  }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 616 "config-parser.y"
    {
      videoep_value_type_t vt = randr_output_get_property_type((yyvsp[(3) - (6)].string));
      int sts;

      if (vt == videoep_unknown) {
          print_error("attempt to set undefined output property '%s'", (yyvsp[(3) - (6)].string));
          YYERROR;
      }
      else {
          OHM_DEBUG(DBG_PARSE, "router_add_function(output_change_property, "
                    "'%s', %s, %d, '%s')", output, (yyvsp[(3) - (6)].string), vt, (yyvsp[(5) - (6)].string));
          sts = router_sequence_add_function(rtdef, "output_change_property",
                                             output, (yyvsp[(3) - (6)].string), vt, (yyvsp[(5) - (6)].string));
      }
  }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 635 "config-parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 636 "config-parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 641 "config-parser.y"
    {
      int sts = sequence_definition_create(seqdef.type, seqdef.name,
                                           seqdef.stepc, seqdef.stepd);
      if (sts < 0) {
          print_error("failed to create sequence '%s'",
                      seqdef.name ? seqdef.name : "<null>");
          YYERROR;
      }
  }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 653 "config-parser.y"
    {
      memset(&seqdef, 0, sizeof(seqdef));
      seqdef.stepd = execdefs;
      execidx  = 0;
      argstart = argdefs;
      argidx   = 0;
      position = 0;
  }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 665 "config-parser.y"
    {
      seqdef.type = (yyvsp[(7) - (8)].seqtype);
      seqdef.name = (yyvsp[(3) - (8)].string);
  }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 672 "config-parser.y"
    { (yyval.seqtype) = sequence_until_first_success; }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 673 "config-parser.y"
    { (yyval.seqtype) = sequence_until_first_failure; }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 674 "config-parser.y"
    { (yyval.seqtype) = sequence_unconditional;       }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 683 "config-parser.y"
    {
      seqdef.stepc = execidx;
  }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 694 "config-parser.y"
    {
      winidx = 0;
      execidx = 0;
      position = 0;
  }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 707 "config-parser.y"
    {
      int sts;

      switch ((yyvsp[(1) - (2)].windef)->type) {
      case windef_property:
          if ((yyvsp[(1) - (2)].windef)->property.exec == NULL) {
              OHM_DEBUG(DBG_PARSE, "tracker_add_rootwin_property"
                        "(%s, %s,<null>, 0,<null>)", (yyvsp[(1) - (2)].windef)->property.name,
                        exec_type_str(exec_noexec));
              sts = tracker_add_rootwin_property((yyvsp[(1) - (2)].windef)->property.name,
                                                 exec_noexec,
                                                 NULL, 0,NULL);
          }
          else {
              exec_def_t *exec = (yyvsp[(1) - (2)].windef)->property.exec;

              OHM_DEBUG(DBG_PARSE, "tracker_add_rootwin_property"
                        "(%s, %s, %s, %d,%p)", (yyvsp[(1) - (2)].windef)->property.name,
                        exec_type_str(exec->type),
                        exec->name, exec->argc, exec->argd);
              sts = tracker_add_rootwin_property((yyvsp[(1) - (2)].windef)->property.name,
                                                 exec->type, exec->name,
                                                 exec->argc,exec->argd);
          }
          if (sts < 0) {
              print_error("failed to add root window property");
              YYERROR;
          }
          break;
      default:
          print_error("unsupported executable type");
          YYERROR;
          break;
      }
      position = 0;
  }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 751 "config-parser.y"
    {
      newwin_section_present = TRUE;
      winidx = 0;
      execidx = 0;
      position = 0;
  }
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 765 "config-parser.y"
    {
      int sts;

      if (appwin_section_present) {
          print_error("new-window section must preceed "
                      "application-window section");
          YYERROR;
      }
      else {
          switch ((yyvsp[(1) - (2)].windef)->type) {
          case windef_property:
              if ((yyvsp[(1) - (2)].windef)->property.exec == NULL) {
                  OHM_DEBUG(DBG_PARSE, "tracker_add_newwin_property"
                            "(%s, %s,<null>, 0,<null>)", (yyvsp[(1) - (2)].windef)->property.name,
                            exec_type_str(exec_noexec));
                  sts = tracker_add_newwin_property((yyvsp[(1) - (2)].windef)->property.name,
                                                    exec_noexec,
                                                    NULL, 0,NULL);
              }
              else {
                  exec_def_t *exec = (yyvsp[(1) - (2)].windef)->property.exec;
                  
                  OHM_DEBUG(DBG_PARSE, "tracker_add_newwin_property"
                            "(%s, %s, %s, %d,%p)", (yyvsp[(1) - (2)].windef)->property.name,
                            exec_type_str(exec->type),
                            exec->name, exec->argc, exec->argd);
                  sts = tracker_add_newwin_property((yyvsp[(1) - (2)].windef)->property.name,
                                                    exec->type, exec->name,
                                                    exec->argc, exec->argd);
              }
              if (sts < 0) {
                  print_error("failed to add new window property");
                  YYERROR;
              }
              break;
          default:
              print_error("unsupported executable type");
              YYERROR;
              break;
          }
      }
      position = 0;
  }
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 818 "config-parser.y"
    {
      appwin_section_present = TRUE;
      winidx = 0;
      execidx = 0;
      position = 0;
  }
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 832 "config-parser.y"
    {
      int sts;

      switch ((yyvsp[(1) - (2)].windef)->type) {
      case windef_property:
          if ((yyvsp[(1) - (2)].windef)->property.exec == NULL) {
              OHM_DEBUG(DBG_PARSE, "tracker_add_appwin_property"
                        "(%s, %s,<null>, 0,<null>)", (yyvsp[(1) - (2)].windef)->property.name,
                        exec_type_str(exec_noexec));
              sts = tracker_add_appwin_property((yyvsp[(1) - (2)].windef)->property.name,
                                                exec_noexec,
                                                NULL, 0,NULL);
          }
          else {
              exec_def_t *exec = (yyvsp[(1) - (2)].windef)->property.exec;

              OHM_DEBUG(DBG_PARSE, "tracker_add_appwin_property"
                        "(%s, %s, %s, %d,%p)", (yyvsp[(1) - (2)].windef)->property.name,
                        exec_type_str(exec->type),
                        exec->name, exec->argc, exec->argd);
              sts = tracker_add_appwin_property((yyvsp[(1) - (2)].windef)->property.name,
                                                exec->type, exec->name,
                                                exec->argc, exec->argd);
          }
          if (sts < 0) {
              print_error("failed to add application window property");
              YYERROR;
          }
          break;
      default:
          print_error("unsupported executable type");
          YYERROR;
          break;
      }
      position = 0;
  }
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 872 "config-parser.y"
    {
      (yyval.windef) = windefs + winidx++;
      (yyval.windef)->type = windef_property;
      (yyval.windef)->property.name = (yyvsp[(1) - (1)].string);
      (yyval.windef)->property.exec = NULL;
  }
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 878 "config-parser.y"
    {
      (yyval.windef) = windefs + winidx++;
      (yyval.windef)->type = windef_property;
      (yyval.windef)->property.name = (yyvsp[(1) - (3)].string);
      (yyval.windef)->property.exec = (yyvsp[(3) - (3)].execdef);
  }
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 887 "config-parser.y"
    {
      (yyval.string) = (yyvsp[(2) - (2)].string);
  }
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 893 "config-parser.y"
    {
      argstart = argdefs;
      argidx = 0;
      (yyval.string) = (yyvsp[(2) - (2)].string);
  }
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 903 "config-parser.y"
    {
      (yyval.execdef) = (yyvsp[(3) - (6)].execdef);
      (yyval.execdef)->type = exec_function;
      (yyval.execdef)->argc = argidx - (argstart -argdefs);
      (yyval.execdef)->argd = argstart;
      argstart = argdefs + argidx;
  }
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 910 "config-parser.y"
    {
      (yyval.execdef) = (yyvsp[(3) - (3)].execdef);
      (yyval.execdef)->type = exec_sequence;
  }
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 916 "config-parser.y"
    {
      (yyval.execdef) = (yyvsp[(3) - (6)].execdef);
      (yyval.execdef)->type = exec_resolver;
      (yyval.execdef)->argc = argidx - (argstart -argdefs);
      (yyval.execdef)->argd = argstart;
      argstart = argdefs + argidx;
  }
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 925 "config-parser.y"
    {
      (yyval.execdef) = (yyvsp[(3) - (6)].execdef);
      (yyval.execdef)->type = exec_noexec;
      (yyval.execdef)->argc = 0;
      (yyval.execdef)->argd = NULL;
      print_error("invalid argument near to '%s' at column %d",
                  (yyvsp[(5) - (6)].string), position);
      yyerrok;
  }
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 937 "config-parser.y"
    {
      (yyval.execdef) = execdefs + execidx++;
      (yyval.execdef)->type = exec_noexec;
      (yyval.execdef)->name = (yyvsp[(1) - (1)].string);
      (yyval.execdef)->argc = 0;
      (yyval.execdef)->argd = NULL;
  }
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 959 "config-parser.y"
    {
      (yyvsp[(3) - (3)].argdef)->name = (yyvsp[(1) - (3)].string); 
  }
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 965 "config-parser.y"
    {
      (yyval.argdef) = argdefs + argidx++;
      (yyval.argdef)->type = argument_root_xid;
      (yyval.argdef)->name = NULL;
      (yyval.argdef)->def  = NULL;
      (yyval.argdef)->idx  = 0;
      position = yy_videoep_column.first;
  }
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 973 "config-parser.y"
    {
      (yyval.argdef) = argdefs + argidx++;
      (yyval.argdef)->type = argument_appwin_xid;
      (yyval.argdef)->name = NULL;
      (yyval.argdef)->def  = NULL;
      (yyval.argdef)->idx  = 0;
      position = yy_videoep_column.first;
  }
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 981 "config-parser.y"
    {
      (yyval.argdef) = argdefs + argidx++;
      (yyval.argdef)->type = argument_window_xid;
      (yyval.argdef)->name = NULL;
      (yyval.argdef)->def  = NULL;
      (yyval.argdef)->idx  = 0;
      position = yy_videoep_column.first;
  }
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 989 "config-parser.y"
    {
      (yyval.argdef) = argdefs + argidx++;
      (yyval.argdef)->type = argument_root_property;
      (yyval.argdef)->name = NULL;
      (yyval.argdef)->def  = (yyvsp[(3) - (4)].string);
      (yyval.argdef)->idx  = (yyvsp[(4) - (4)].integer); 
      position = yy_videoep_column.first;
  }
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 997 "config-parser.y"
    {
      (yyval.argdef) = argdefs + argidx++;
      (yyval.argdef)->type = argument_appwin_property;
      (yyval.argdef)->name = NULL;
      (yyval.argdef)->def  = (yyvsp[(3) - (4)].string);
      (yyval.argdef)->idx  = (yyvsp[(4) - (4)].integer);
      position = yy_videoep_column.first;
  }
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 1005 "config-parser.y"
    {
      (yyval.argdef) = argdefs + argidx++;
      (yyval.argdef)->type = argument_window_property;
      (yyval.argdef)->name = NULL;
      (yyval.argdef)->def  = (yyvsp[(3) - (4)].string);
      (yyval.argdef)->idx  = (yyvsp[(4) - (4)].integer);
      position = yy_videoep_column.first;
  }
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 1013 "config-parser.y"
    {
      position = yy_videoep_column.first;
  }
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 1016 "config-parser.y"
    {
      (yyval.argdef) = argdefs + argidx++;
      (yyval.argdef)->type = argument_atom;
      (yyval.argdef)->name = NULL;
      (yyval.argdef)->def  = (yyvsp[(3) - (3)].string);
      position = yy_videoep_column.first;
  }
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 1023 "config-parser.y"
    {
      (yyval.argdef) = argdefs + argidx++;
      (yyval.argdef)->type = argument_constant_string;
      (yyval.argdef)->def  = (yyvsp[(3) - (3)].string);
      position = yy_videoep_column.first;
  }
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 1029 "config-parser.y"
    {
      (yyval.argdef) = argdefs + argidx++;
      (yyval.argdef)->type = argument_constant_integer;
      (yyval.argdef)->def = (yyvsp[(3) - (3)].string);
      position = yy_videoep_column.first;
  }
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 1035 "config-parser.y"
    {
      (yyval.argdef) = argdefs + argidx++;
      (yyval.argdef)->type = argument_constant_unsignd;
      (yyval.argdef)->def = (yyvsp[(3) - (3)].string);
      position = yy_videoep_column.first;
  }
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 1044 "config-parser.y"
    { (yyval.integer) = 0;  }
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 1045 "config-parser.y"
    { (yyval.integer) = strtol((yyvsp[(2) - (3)].string),NULL,19); }
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 1048 "config-parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); }
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 1049 "config-parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); }
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 1050 "config-parser.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); }
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 1064 "config-parser.y"
    {
      position = 0;
  }
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 1076 "config-parser.y"
    { position = 0; yyerrok; }
    break;



/* Line 1455 of yacc.c  */
#line 3030 "config-parser.c"
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
      yyerror (YY_("syntax error"));
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
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
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
		      yytoken, &yylval);
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
		  yystos[yystate], yyvsp);
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
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
#line 1079 "config-parser.y"


void config_init(OhmPlugin *plugin)
{
    ENTER;

    yydeffile = ohm_plugin_get_param(plugin, "config");

    LEAVE;
}

void config_exit(OhmPlugin *plugin)
{
    (void)plugin;
}

int config_parse_file(const char *path)
{
    ENTER;

    if (path == NULL)
        path = yydeffile;

    if (!path) {
        OHM_ERROR("videoep: no configuration file");
        LEAVE;
        return -1;
    }

    if (scanner_open_file(path) < 0) {
        OHM_ERROR("videoep: can't open config file '%s': %s",
                  path, strerror(errno));
        LEAVE;
        return -1;
    }

    OHM_INFO("videoep: configuration file is '%s'", path);

    if (yy_videoep_parse() != 0) {
        OHM_ERROR("videoep: failed to parse config file '%s'", path);
        LEAVE;
        return -1;
    }

    LEAVE;

    return 0;
}

void yy_videoep_error(const char *msg)
{
    OHM_ERROR("videoep: config file parse error in line %d: %s\n",
              yy_videoep_lineno, msg);
}

static int unsigned_number(const char *str, uint32_t *retval)
{
    unsigned long int number;
    char *e;

    *retval = 0;

    if (str != NULL) {
        number = strtoul(str, &e, 10);

        if (e > str && !*e) {
            *retval = number;
            return TRUE;
        }
    }

    return FALSE;
}

static void print_error(const char *fmt, ...)
{
    va_list ap;
    char    buf[512];

    va_start(ap, fmt);
    vsnprintf(buf, sizeof(buf), fmt, ap);
    va_end(ap);

    yy_videoep_error(buf);
}


/*
 * Local Variables:
 * c-basic-offset: 4
 * indent-tabs-mode: nil
 * End:
 * vim:set expandtab shiftwidth=4:
 */

