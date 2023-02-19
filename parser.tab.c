
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



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "parser.y"

    #include<stdio.h>
    #include<string.h>
    #include<stdlib.h>
    #include<ctype.h>
    #include"lex.yy.c"
    void yyerror(const char *s);
    int yylex();
    int yywrap();
    void add(char);
    void insert_type();
    int search(char *);
	void insert_type();
	void print_tree(struct node*);
	void print_inorder(struct node *);
    void check_declaration(char *);
	void check_return_type(char *);
	int check_types(char *, char *);
	char *get_type(char *);
	struct node* mknode(struct node *left, struct node *right, char *token);
	int error=0;
    struct dataType {
        char * id_name;
        char * data_type;
        char * type;
        int line_no;
	} symbol_table[40];

    int count=0;
    int q;
	char type[10];
    extern int countn;
	struct node *head;
	int sem_errors=0;
	int label=0;
	char buff[100];
	char errors[10][100];
	char reserved[10][10] = {"num", "deci", "char", "nthg", "check", "otherwise", "trav", "vsa", "reply", "include", "route", "break", "default", "path"};
	int line_;
	struct node { 
		struct node *left; 
		struct node *right; 
		char *token; 
	};



/* Line 189 of yacc.c  */
#line 121 "parser.tab.c"

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
     VOID = 258,
     SWITCH = 259,
     CASE = 260,
     BREAK = 261,
     DEFAULT = 262,
     WHILE = 263,
     CHARACTER = 264,
     PRINTFF = 265,
     SCANFF = 266,
     INT = 267,
     FLOAT = 268,
     CHAR = 269,
     FOR = 270,
     IF = 271,
     ELSE = 272,
     TRUE = 273,
     FALSE = 274,
     NUMBER = 275,
     FLOAT_NUM = 276,
     ID = 277,
     LE = 278,
     GE = 279,
     EQ = 280,
     NE = 281,
     GT = 282,
     LT = 283,
     AND = 284,
     OR = 285,
     STR = 286,
     ADD = 287,
     MULTIPLY = 288,
     DIVIDE = 289,
     SUBTRACT = 290,
     UNARY = 291,
     INCLUDE = 292,
     RETURN = 293,
     ELIF = 294
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 48 "parser.y"
 struct var_name { 
			char name[100]; 
			struct node* nd;
		} nd_obj;

		struct var_name2 { 
			char name[100]; 
			struct node* nd;
			char type[5];
		} nd_obj2; 
	


/* Line 214 of yacc.c  */
#line 210 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 222 "parser.tab.c"

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   254

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNRULES -- Number of states.  */
#define YYNSTATES  149

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   294

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    46,     2,
      40,    41,     2,     2,    45,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    47,    44,
       2,    48,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    42,     2,    43,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,    12,    15,    16,    19,    22,    24,    26,
      28,    30,    31,    44,    45,    54,    55,    65,    66,    75,
      78,    81,    82,    89,    90,   100,   101,   103,   105,   106,
     115,   116,   123,   125,   126,   127,   137,   138,   144,   145,
     149,   151,   153,   154,   159,   160,   165,   166,   171,   172,
     176,   179,   182,   183,   187,   189,   191,   193,   195,   197,
     199,   201,   203,   205,   207,   209,   211,   213,   215,   217,
     218
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      50,     0,    -1,    51,    53,    40,    41,    42,    55,    81,
      43,    -1,    51,    51,    -1,    -1,    37,    52,    -1,    54,
      22,    -1,    12,    -1,    13,    -1,    14,    -1,     3,    -1,
      -1,    15,    56,    40,    66,    44,    70,    44,    66,    41,
      42,    55,    43,    -1,    -1,     8,    57,    40,    70,    41,
      42,    55,    43,    -1,    -1,    16,    58,    40,    70,    41,
      42,    55,    43,    67,    -1,    -1,     4,    59,    40,    62,
      41,    42,    63,    43,    -1,    71,    44,    -1,    55,    55,
      -1,    -1,    10,    60,    40,    31,    41,    44,    -1,    -1,
      11,    61,    40,    31,    45,    46,    22,    41,    44,    -1,
      -1,    20,    -1,    22,    -1,    -1,     5,    64,    20,    47,
      55,     6,    44,    63,    -1,    -1,     7,    65,    47,    55,
       6,    44,    -1,    71,    -1,    -1,    -1,    39,    68,    40,
      70,    41,    42,    55,    43,    67,    -1,    -1,    17,    69,
      42,    55,    43,    -1,    -1,    80,    79,    80,    -1,    18,
      -1,    19,    -1,    -1,    54,    22,    72,    76,    -1,    -1,
      22,    73,    48,    77,    -1,    -1,    22,    74,    79,    77,
      -1,    -1,    22,    75,    36,    -1,    36,    22,    -1,    48,
      80,    -1,    -1,    77,    78,    77,    -1,    80,    -1,    32,
      -1,    35,    -1,    33,    -1,    34,    -1,    28,    -1,    27,
      -1,    23,    -1,    24,    -1,    25,    -1,    26,    -1,    20,
      -1,    21,    -1,     9,    -1,    22,    -1,    -1,    38,    82,
      80,    44,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    66,    66,    71,    72,    72,    75,    78,    79,    80,
      81,    84,    84,    89,    89,    92,    92,    96,    96,    99,
     100,   101,   101,   102,   102,   103,   106,   107,   110,   110,
     114,   114,   117,   118,   121,   121,   125,   125,   126,   129,
     130,   131,   134,   134,   167,   167,   208,   208,   209,   209,
     214,   222,   223,   226,   264,   267,   268,   269,   270,   273,
     274,   275,   276,   277,   278,   281,   282,   283,   284,   287,
     287
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VOID", "SWITCH", "CASE", "BREAK",
  "DEFAULT", "WHILE", "CHARACTER", "PRINTFF", "SCANFF", "INT", "FLOAT",
  "CHAR", "FOR", "IF", "ELSE", "TRUE", "FALSE", "NUMBER", "FLOAT_NUM",
  "ID", "LE", "GE", "EQ", "NE", "GT", "LT", "AND", "OR", "STR", "ADD",
  "MULTIPLY", "DIVIDE", "SUBTRACT", "UNARY", "INCLUDE", "RETURN", "ELIF",
  "'('", "')'", "'{'", "'}'", "';'", "','", "'&'", "':'", "'='", "$accept",
  "program", "headers", "$@1", "vsa", "datatype", "body", "$@2", "$@3",
  "$@4", "$@5", "$@6", "$@7", "alpha", "case", "$@8", "$@9", "aux1",
  "elif", "$@10", "$@11", "condition", "statement", "$@12", "$@13", "$@14",
  "$@15", "init", "expression", "arithmetic", "relop", "value", "return",
  "$@16", 0
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
      40,    41,   123,   125,    59,    44,    38,    58,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    51,    52,    51,    53,    54,    54,    54,
      54,    56,    55,    57,    55,    58,    55,    59,    55,    55,
      55,    60,    55,    61,    55,    55,    62,    62,    64,    63,
      65,    63,    66,    66,    68,    67,    69,    67,    67,    70,
      70,    70,    72,    71,    73,    71,    74,    71,    75,    71,
      71,    76,    76,    77,    77,    78,    78,    78,    78,    79,
      79,    79,    79,    79,    79,    80,    80,    80,    80,    82,
      81
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     8,     2,     0,     2,     2,     1,     1,     1,
       1,     0,    12,     0,     8,     0,     9,     0,     8,     2,
       2,     0,     6,     0,     9,     0,     1,     1,     0,     8,
       0,     6,     1,     0,     0,     9,     0,     5,     0,     3,
       1,     1,     0,     4,     0,     4,     0,     4,     0,     3,
       2,     2,     0,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     0,     0,     5,     1,    10,     7,     8,     9,
       3,     0,     0,     0,     6,     0,    25,    17,    13,    21,
      23,    11,    15,    46,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,    42,    69,
      20,     0,    19,     0,     0,     0,     0,    33,     0,     0,
      61,    62,    63,    64,    60,    59,     0,    49,    52,     0,
       2,    26,    27,     0,    67,    40,    41,    65,    66,    68,
       0,     0,     0,     0,     0,    32,     0,    45,    54,    47,
       0,    43,     0,     0,     0,     0,     0,     0,     0,     0,
      55,    57,    58,    56,     0,    51,    70,     0,    25,    39,
      22,     0,     0,    25,    53,    28,    30,     0,     0,     0,
      33,     0,     0,     0,    18,    14,     0,     0,    38,     0,
      25,    24,     0,    36,    34,    16,    25,     0,    25,     0,
       0,     0,     0,     0,    25,     0,     0,    31,    12,     0,
       0,     0,    37,     0,    29,    25,     0,    38,    35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    10,     4,    11,    25,    40,    32,    29,    33,
      28,    30,    31,    63,   107,   112,   113,    74,   125,   130,
     129,    70,    27,    58,    34,    35,    36,    81,    77,    94,
      56,    71,    41,    59
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -53
static const yytype_int16 yypact[] =
{
     -32,   -53,    25,    24,   -53,   -53,   -53,   -53,   -53,   -53,
     -32,     3,    28,     5,   -53,    16,   218,   -53,   -53,   -53,
     -53,   -53,   -53,   -27,    40,    52,   161,    32,    39,    43,
      46,    49,    50,    51,    33,   177,    44,   -53,   -53,   -53,
     218,    57,   -53,    13,    76,    62,    70,   145,    76,     2,
     -53,   -53,   -53,   -53,   -53,   -53,     2,   -53,    54,     2,
     -53,   -53,   -53,    64,   -53,   -53,   -53,   -53,   -53,   -53,
      65,   177,    66,    58,    67,   -53,    72,    -3,   -53,    -3,
       2,   -53,    73,    74,    78,     2,    84,    63,    76,    90,
     -53,   -53,   -53,   -53,     2,   -53,   -53,    68,   218,   -53,
     -53,    86,    92,   218,    -3,   -53,   -53,    91,     4,   103,
     145,    41,   125,    99,   -53,   -53,   106,   110,   -11,   105,
     218,   -53,   113,   -53,   -53,   -53,   218,   176,   218,   114,
     120,   203,   109,    56,   218,    76,   117,   -53,   -53,   111,
     121,    68,   -53,   124,   -53,   218,   127,   -11,   -53
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -53,   -53,   168,   -53,   -53,   175,   -16,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,    53,   -53,   -53,    75,    48,   -53,
     -53,   -47,   -45,   -53,   -53,   -53,   -53,   -53,   -52,   -53,
     122,   -46,   -53,   -53
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -49
static const yytype_int16 yytable[] =
{
      26,    76,    75,    78,    79,     1,   123,     6,    17,   -48,
      78,    64,    18,    82,    19,    20,     7,     8,     9,    21,
      22,   -44,    67,    68,    69,     5,    23,     6,   124,    90,
      91,    92,    93,    61,    95,    62,     7,     8,     9,    99,
      24,   102,   104,    13,     6,    17,    15,   115,    78,    18,
      14,    19,    20,     7,     8,     9,    21,    22,    16,     6,
      17,     1,    37,    23,    18,    75,    19,    20,     7,     8,
       9,    21,    22,   105,    38,   106,    42,    24,    23,    43,
      57,    49,   108,    44,   118,    64,    45,   111,   140,    46,
      47,    48,    24,    72,    65,    66,    67,    68,    69,   138,
      60,    73,    80,    87,   127,    83,    84,    86,   109,   101,
     131,    88,   133,    89,     6,    17,    97,    96,   139,    18,
      98,    19,    20,     7,     8,     9,    21,    22,   100,   146,
       6,    17,   103,    23,   114,    18,   110,    19,    20,     7,
       8,     9,    21,    22,   116,   119,   120,    24,     6,    23,
     121,   122,   126,   137,   142,   128,   134,     7,     8,     9,
     135,   141,   143,    24,     6,    17,   145,    23,     3,    18,
     147,    19,    20,     7,     8,     9,    21,    22,    12,     6,
      17,    24,   132,    23,    18,   117,    19,    20,     7,     8,
       9,    21,    22,    85,   144,   148,     0,    24,    23,    39,
      50,    51,    52,    53,    54,    55,     6,    17,     0,   136,
       0,    18,    24,    19,    20,     7,     8,     9,    21,    22,
       0,     6,    17,     0,     0,    23,    18,     0,    19,    20,
       7,     8,     9,    21,    22,     0,     0,     0,     0,    24,
      23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    24
};

static const yytype_int16 yycheck[] =
{
      16,    48,    47,    49,    56,    37,    17,     3,     4,    36,
      56,     9,     8,    59,    10,    11,    12,    13,    14,    15,
      16,    48,    20,    21,    22,     0,    22,     3,    39,    32,
      33,    34,    35,    20,    80,    22,    12,    13,    14,    85,
      36,    88,    94,    40,     3,     4,    41,    43,    94,     8,
      22,    10,    11,    12,    13,    14,    15,    16,    42,     3,
       4,    37,    22,    22,     8,   110,    10,    11,    12,    13,
      14,    15,    16,     5,    22,     7,    44,    36,    22,    40,
      36,    48,    98,    40,    43,     9,    40,   103,   135,    40,
      40,    40,    36,    31,    18,    19,    20,    21,    22,    43,
      43,    31,    48,    45,   120,    41,    41,    41,    22,    46,
     126,    44,   128,    41,     3,     4,    42,    44,   134,     8,
      42,    10,    11,    12,    13,    14,    15,    16,    44,   145,
       3,     4,    42,    22,    43,     8,    44,    10,    11,    12,
      13,    14,    15,    16,    41,    20,    47,    36,     3,    22,
      44,    41,    47,    44,    43,    42,    42,    12,    13,    14,
      40,    44,    41,    36,     3,     4,    42,    22,     0,     8,
      43,    10,    11,    12,    13,    14,    15,    16,     3,     3,
       4,    36,     6,    22,     8,   110,    10,    11,    12,    13,
      14,    15,    16,    71,   141,   147,    -1,    36,    22,    38,
      23,    24,    25,    26,    27,    28,     3,     4,    -1,     6,
      -1,     8,    36,    10,    11,    12,    13,    14,    15,    16,
      -1,     3,     4,    -1,    -1,    22,     8,    -1,    10,    11,
      12,    13,    14,    15,    16,    -1,    -1,    -1,    -1,    36,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    36
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    37,    50,    51,    52,     0,     3,    12,    13,    14,
      51,    53,    54,    40,    22,    41,    42,     4,     8,    10,
      11,    15,    16,    22,    36,    54,    55,    71,    59,    57,
      60,    61,    56,    58,    73,    74,    75,    22,    22,    38,
      55,    81,    44,    40,    40,    40,    40,    40,    40,    48,
      23,    24,    25,    26,    27,    28,    79,    36,    72,    82,
      43,    20,    22,    62,     9,    18,    19,    20,    21,    22,
      70,    80,    31,    31,    66,    71,    70,    77,    80,    77,
      48,    76,    80,    41,    41,    79,    41,    45,    44,    41,
      32,    33,    34,    35,    78,    80,    44,    42,    42,    80,
      44,    46,    70,    42,    77,     5,     7,    63,    55,    22,
      44,    55,    64,    65,    43,    43,    41,    66,    43,    20,
      47,    44,    41,    17,    39,    67,    47,    55,    42,    69,
      68,    55,     6,    55,    42,    40,     6,    44,    43,    55,
      70,    44,    43,    41,    63,    42,    55,    43,    67
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
        case 2:

/* Line 1455 of yacc.c  */
#line 66 "parser.y"
    { (yyvsp[(2) - (8)].nd_obj).nd = mknode((yyvsp[(6) - (8)].nd_obj).nd, (yyvsp[(7) - (8)].nd_obj).nd, "vsa"); (yyval.nd_obj).nd = mknode((yyvsp[(1) - (8)].nd_obj).nd, (yyvsp[(2) - (8)].nd_obj).nd, "program"); 
	head = (yyval.nd_obj).nd;
;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 71 "parser.y"
    { (yyval.nd_obj).nd = mknode((yyvsp[(1) - (2)].nd_obj).nd, (yyvsp[(2) - (2)].nd_obj).nd, "headers"); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 72 "parser.y"
    { add('H'); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 72 "parser.y"
    { (yyval.nd_obj).nd = mknode(NULL, NULL, (yyvsp[(1) - (2)].nd_obj).name); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 75 "parser.y"
    { add('F'); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 78 "parser.y"
    { insert_type(); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 79 "parser.y"
    { insert_type(); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 80 "parser.y"
    { insert_type(); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 81 "parser.y"
    { insert_type(); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 84 "parser.y"
    { add('K'); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 84 "parser.y"
    { 
	struct node *temp = mknode((yyvsp[(6) - (12)].nd_obj).nd, (yyvsp[(8) - (12)].nd_obj).nd, "CONDITION"); 
	struct node *temp2 = mknode((yyvsp[(4) - (12)].nd_obj).nd, temp, "CONDITION"); 
	(yyval.nd_obj).nd = mknode(temp2, (yyvsp[(11) - (12)].nd_obj).nd, (yyvsp[(1) - (12)].nd_obj).name); 
;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 89 "parser.y"
    { add('K'); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 89 "parser.y"
    {
	(yyval.nd_obj).nd = mknode((yyvsp[(4) - (8)].nd_obj).nd, (yyvsp[(7) - (8)].nd_obj).nd, (yyvsp[(1) - (8)].nd_obj).name); 
;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 92 "parser.y"
    { add('K'); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 92 "parser.y"
    { 
	struct node *iff = mknode((yyvsp[(4) - (9)].nd_obj).nd, (yyvsp[(7) - (9)].nd_obj).nd, (yyvsp[(1) - (9)].nd_obj).name); 
	(yyval.nd_obj).nd = mknode(iff, (yyvsp[(9) - (9)].nd_obj).nd, "if-elif-else"); 
;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 96 "parser.y"
    { add('K'); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 96 "parser.y"
    {
	(yyval.nd_obj).nd = mknode((yyvsp[(4) - (8)].nd_obj).nd, (yyvsp[(7) - (8)].nd_obj).nd, (yyvsp[(1) - (8)].nd_obj).name); 
;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 99 "parser.y"
    { (yyval.nd_obj).nd = (yyvsp[(1) - (2)].nd_obj).nd; ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 100 "parser.y"
    { (yyval.nd_obj).nd = mknode((yyvsp[(1) - (2)].nd_obj).nd, (yyvsp[(2) - (2)].nd_obj).nd, "statements"); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 101 "parser.y"
    { add('K'); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 101 "parser.y"
    { (yyval.nd_obj).nd = mknode(NULL, NULL, "show"); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 102 "parser.y"
    { add('K'); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 102 "parser.y"
    { (yyval.nd_obj).nd = mknode(NULL, NULL, "get"); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 103 "parser.y"
    { (yyval.nd_obj).nd = NULL; ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 106 "parser.y"
    {(yyval.nd_obj).nd = mknode(NULL, NULL, (yyvsp[(1) - (1)].nd_obj).name); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 107 "parser.y"
    {(yyval.nd_obj).nd = mknode(NULL, NULL, (yyvsp[(1) - (1)].nd_obj).name); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 110 "parser.y"
    {add('K'); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 110 "parser.y"
    {
	struct node *temp= mknode((yyvsp[(5) - (8)].nd_obj).nd, (yyvsp[(6) - (8)].nd_obj).nd, (yyvsp[(1) - (8)].nd_obj).name); 
	(yyval.nd_obj).nd = mknode(temp, (yyvsp[(8) - (8)].nd_obj).nd, "caselist");
;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 114 "parser.y"
    {add('K'); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 114 "parser.y"
    {(yyval.nd_obj).nd = mknode((yyvsp[(4) - (6)].nd_obj).nd, (yyvsp[(5) - (6)].nd_obj).nd, (yyvsp[(1) - (6)].nd_obj).name);  ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 117 "parser.y"
    { (yyval.nd_obj).nd = mknode((yyvsp[(1) - (1)].nd_obj).nd, NULL, "aux1"); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 118 "parser.y"
    { (yyval.nd_obj).nd = mknode(NULL, NULL, "aux1");;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 121 "parser.y"
    {add('K'); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 121 "parser.y"
    { 
	struct node *elif = mknode((yyvsp[(4) - (9)].nd_obj).nd, (yyvsp[(7) - (9)].nd_obj).nd, (yyvsp[(1) - (9)].nd_obj).name); 
	(yyval.nd_obj).nd = mknode(elif, (yyvsp[(9) - (9)].nd_obj).nd, "elif"); 
 ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 125 "parser.y"
    { add('K'); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 125 "parser.y"
    { (yyval.nd_obj).nd = mknode(NULL, (yyvsp[(4) - (5)].nd_obj).nd, (yyvsp[(1) - (5)].nd_obj).name); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 126 "parser.y"
    { (yyval.nd_obj).nd = NULL; ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 129 "parser.y"
    { (yyval.nd_obj).nd = mknode((yyvsp[(1) - (3)].nd_obj2).nd, (yyvsp[(3) - (3)].nd_obj2).nd, (yyvsp[(2) - (3)].nd_obj).name); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 130 "parser.y"
    { add('K'); (yyval.nd_obj).nd = NULL; ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 131 "parser.y"
    { add('K'); (yyval.nd_obj).nd = NULL; ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 134 "parser.y"
    { add('V'); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 134 "parser.y"
    { 
	(yyvsp[(2) - (4)].nd_obj).nd = mknode(NULL, NULL, (yyvsp[(2) - (4)].nd_obj).name); 
	int t = check_types((yyvsp[(1) - (4)].nd_obj).name, (yyvsp[(4) - (4)].nd_obj2).type); 
	if(t>0) { 
		if(t == 1) {
			struct node *temp = mknode(NULL, (yyvsp[(4) - (4)].nd_obj2).nd, "deci_to_num"); 
			(yyval.nd_obj).nd = mknode((yyvsp[(2) - (4)].nd_obj).nd, temp, "declaration"); 
		} 
		else if(t == 2) { 
			struct node *temp = mknode(NULL, (yyvsp[(4) - (4)].nd_obj2).nd, "num_to_deci"); 
			(yyval.nd_obj).nd = mknode((yyvsp[(2) - (4)].nd_obj).nd, temp, "declaration"); 
		} 
		else if(t == 3) { 
			struct node *temp = mknode(NULL, (yyvsp[(4) - (4)].nd_obj2).nd, "char_to_num"); 
			(yyval.nd_obj).nd = mknode((yyvsp[(2) - (4)].nd_obj).nd, temp, "declaration"); 
		} 
		else if(t == 4) { 
			struct node *temp = mknode(NULL, (yyvsp[(4) - (4)].nd_obj2).nd, "num_to_char"); 
			(yyval.nd_obj).nd = mknode((yyvsp[(2) - (4)].nd_obj).nd, temp, "declaration"); 
		} 
		else if(t == 5) { 
			struct node *temp = mknode(NULL, (yyvsp[(4) - (4)].nd_obj2).nd, "char_to_deci"); 
			(yyval.nd_obj).nd = mknode((yyvsp[(2) - (4)].nd_obj).nd, temp, "declaration"); 
		} 
		else{
			struct node *temp = mknode(NULL, (yyvsp[(4) - (4)].nd_obj2).nd, "deci_to_char"); 
			(yyval.nd_obj).nd = mknode((yyvsp[(2) - (4)].nd_obj).nd, temp, "declaration"); 
		}
	} 
	else { 
		(yyval.nd_obj).nd = mknode((yyvsp[(2) - (4)].nd_obj).nd, (yyvsp[(4) - (4)].nd_obj2).nd, "declaration"); 
	} 
;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 167 "parser.y"
    { check_declaration((yyvsp[(1) - (1)].nd_obj).name); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 167 "parser.y"
    {
	(yyvsp[(1) - (4)].nd_obj).nd = mknode(NULL, NULL, (yyvsp[(1) - (4)].nd_obj).name); 
	char *id_type = get_type((yyvsp[(1) - (4)].nd_obj).name); 
	if(strcmp(id_type, (yyvsp[(4) - (4)].nd_obj2).type)) {
		if(!strcmp(id_type, "num")) {
			if(!strcmp((yyvsp[(4) - (4)].nd_obj2).type, "deci")){
				struct node *temp = mknode(NULL, (yyvsp[(4) - (4)].nd_obj2).nd, "deci_to_num");
				(yyval.nd_obj).nd = mknode((yyvsp[(1) - (4)].nd_obj).nd, temp, "="); 
			}
			else{
				struct node *temp = mknode(NULL, (yyvsp[(4) - (4)].nd_obj2).nd, "char_to_num");
				(yyval.nd_obj).nd = mknode((yyvsp[(1) - (4)].nd_obj).nd, temp, "="); 
			}
			
		}
		else if(!strcmp(id_type, "deci")) {
			if(!strcmp((yyvsp[(4) - (4)].nd_obj2).type, "num")){
				struct node *temp = mknode(NULL, (yyvsp[(4) - (4)].nd_obj2).nd, "num_to_deci");
				(yyval.nd_obj).nd = mknode((yyvsp[(1) - (4)].nd_obj).nd, temp, "="); 
			}
			else{
				struct node *temp = mknode(NULL, (yyvsp[(4) - (4)].nd_obj2).nd, "char_to_deci");
				(yyval.nd_obj).nd = mknode((yyvsp[(1) - (4)].nd_obj).nd, temp, "="); 
			}
			
		}
		else{
			if(!strcmp((yyvsp[(4) - (4)].nd_obj2).type, "num")){
				struct node *temp = mknode(NULL, (yyvsp[(4) - (4)].nd_obj2).nd, "num_to_char");
				(yyval.nd_obj).nd = mknode((yyvsp[(1) - (4)].nd_obj).nd, temp, "="); 
			}
			else{
				struct node *temp = mknode(NULL, (yyvsp[(4) - (4)].nd_obj2).nd, "deci_to_char");
				(yyval.nd_obj).nd = mknode((yyvsp[(1) - (4)].nd_obj).nd, temp, "="); 
			}
		}
	}
	else {
		(yyval.nd_obj).nd = mknode((yyvsp[(1) - (4)].nd_obj).nd, (yyvsp[(4) - (4)].nd_obj2).nd, "="); 
	}
;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 208 "parser.y"
    { check_declaration((yyvsp[(1) - (1)].nd_obj).name); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 208 "parser.y"
    { (yyvsp[(1) - (4)].nd_obj).nd = mknode(NULL, NULL, (yyvsp[(1) - (4)].nd_obj).name); (yyval.nd_obj).nd = mknode((yyvsp[(1) - (4)].nd_obj).nd, (yyvsp[(4) - (4)].nd_obj2).nd, (yyvsp[(3) - (4)].nd_obj).name); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 209 "parser.y"
    { check_declaration((yyvsp[(1) - (1)].nd_obj).name); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 209 "parser.y"
    { 
	(yyvsp[(1) - (3)].nd_obj).nd = mknode(NULL, NULL, (yyvsp[(1) - (3)].nd_obj).name); 
	(yyvsp[(3) - (3)].nd_obj).nd = mknode(NULL, NULL, (yyvsp[(3) - (3)].nd_obj).name); 
	(yyval.nd_obj).nd = mknode((yyvsp[(1) - (3)].nd_obj).nd, (yyvsp[(3) - (3)].nd_obj).nd, "ITERATOR");  
;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 214 "parser.y"
    { 
	check_declaration((yyvsp[(2) - (2)].nd_obj).name); 
	(yyvsp[(1) - (2)].nd_obj).nd = mknode(NULL, NULL, (yyvsp[(1) - (2)].nd_obj).name); 
	(yyvsp[(2) - (2)].nd_obj).nd = mknode(NULL, NULL, (yyvsp[(2) - (2)].nd_obj).name); 
	(yyval.nd_obj).nd = mknode((yyvsp[(1) - (2)].nd_obj).nd, (yyvsp[(2) - (2)].nd_obj).nd, "ITERATOR"); 
;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 222 "parser.y"
    { (yyval.nd_obj2).nd = (yyvsp[(2) - (2)].nd_obj2).nd; sprintf((yyval.nd_obj2).type, (yyvsp[(2) - (2)].nd_obj2).type); strcpy((yyval.nd_obj2).name, (yyvsp[(2) - (2)].nd_obj2).name); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 223 "parser.y"
    { sprintf((yyval.nd_obj2).type, "null"); (yyval.nd_obj2).nd = mknode(NULL, NULL, "NULL"); strcpy((yyval.nd_obj2).name, "NULL"); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 226 "parser.y"
    { 
	if(!strcmp((yyvsp[(1) - (3)].nd_obj2).type, (yyvsp[(3) - (3)].nd_obj2).type)) {
		sprintf((yyval.nd_obj2).type, (yyvsp[(1) - (3)].nd_obj2).type);
		(yyval.nd_obj2).nd = mknode((yyvsp[(1) - (3)].nd_obj2).nd, (yyvsp[(3) - (3)].nd_obj2).nd, (yyvsp[(2) - (3)].nd_obj).name); 
	}
	else {
		if(!strcmp((yyvsp[(1) - (3)].nd_obj2).type, "num") && !strcmp((yyvsp[(3) - (3)].nd_obj2).type, "deci")) {
			struct node *temp = mknode(NULL, (yyvsp[(1) - (3)].nd_obj2).nd, "num_to_deci");
			sprintf((yyval.nd_obj2).type, (yyvsp[(3) - (3)].nd_obj2).type);
			(yyval.nd_obj2).nd = mknode(temp, (yyvsp[(3) - (3)].nd_obj2).nd, (yyvsp[(2) - (3)].nd_obj).name);
		}
		else if(!strcmp((yyvsp[(1) - (3)].nd_obj2).type, "deci") && !strcmp((yyvsp[(3) - (3)].nd_obj2).type, "num")) {
			struct node *temp = mknode(NULL, (yyvsp[(3) - (3)].nd_obj2).nd, "num_to_deci");
			sprintf((yyval.nd_obj2).type, (yyvsp[(1) - (3)].nd_obj2).type);
			(yyval.nd_obj2).nd = mknode((yyvsp[(1) - (3)].nd_obj2).nd, temp, (yyvsp[(2) - (3)].nd_obj).name);
		}
		else if(!strcmp((yyvsp[(1) - (3)].nd_obj2).type, "num") && !strcmp((yyvsp[(3) - (3)].nd_obj2).type, "char")) {
			struct node *temp = mknode(NULL, (yyvsp[(3) - (3)].nd_obj2).nd, "char_to_num");
			sprintf((yyval.nd_obj2).type, (yyvsp[(1) - (3)].nd_obj2).type);
			(yyval.nd_obj2).nd = mknode((yyvsp[(1) - (3)].nd_obj2).nd, temp, (yyvsp[(2) - (3)].nd_obj).name);
		}
		else if(!strcmp((yyvsp[(1) - (3)].nd_obj2).type, "char") && !strcmp((yyvsp[(3) - (3)].nd_obj2).type, "num")) {
			struct node *temp = mknode(NULL, (yyvsp[(1) - (3)].nd_obj2).nd, "char_to_num");
			sprintf((yyval.nd_obj2).type, (yyvsp[(3) - (3)].nd_obj2).type);
			(yyval.nd_obj2).nd = mknode(temp, (yyvsp[(3) - (3)].nd_obj2).nd, (yyvsp[(2) - (3)].nd_obj).name);
		}
		else if(!strcmp((yyvsp[(1) - (3)].nd_obj2).type, "deci") && !strcmp((yyvsp[(3) - (3)].nd_obj2).type, "char")) {
			struct node *temp = mknode(NULL, (yyvsp[(3) - (3)].nd_obj2).nd, "char_to_deci");
			sprintf((yyval.nd_obj2).type, (yyvsp[(1) - (3)].nd_obj2).type);
			(yyval.nd_obj2).nd = mknode((yyvsp[(1) - (3)].nd_obj2).nd, temp, (yyvsp[(2) - (3)].nd_obj).name);
		}
		else {
			struct node *temp = mknode(NULL, (yyvsp[(1) - (3)].nd_obj2).nd, "char_to_deci");
			sprintf((yyval.nd_obj2).type, (yyvsp[(3) - (3)].nd_obj2).type);
			(yyval.nd_obj2).nd = mknode(temp, (yyvsp[(3) - (3)].nd_obj2).nd, (yyvsp[(2) - (3)].nd_obj).name);
		}
	}
;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 264 "parser.y"
    { strcpy((yyval.nd_obj2).name, (yyvsp[(1) - (1)].nd_obj2).name); sprintf((yyval.nd_obj2).type, (yyvsp[(1) - (1)].nd_obj2).type); (yyval.nd_obj2).nd = (yyvsp[(1) - (1)].nd_obj2).nd; ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 281 "parser.y"
    { strcpy((yyval.nd_obj2).name, (yyvsp[(1) - (1)].nd_obj).name); sprintf((yyval.nd_obj2).type, "num"); add('C'); (yyval.nd_obj2).nd = mknode(NULL, NULL, (yyvsp[(1) - (1)].nd_obj).name); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 282 "parser.y"
    { strcpy((yyval.nd_obj2).name, (yyvsp[(1) - (1)].nd_obj).name); sprintf((yyval.nd_obj2).type, "deci"); add('C'); (yyval.nd_obj2).nd = mknode(NULL, NULL, (yyvsp[(1) - (1)].nd_obj).name); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 283 "parser.y"
    { strcpy((yyval.nd_obj2).name, (yyvsp[(1) - (1)].nd_obj).name); sprintf((yyval.nd_obj2).type, "char"); add('C'); (yyval.nd_obj2).nd = mknode(NULL, NULL, (yyvsp[(1) - (1)].nd_obj).name); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 284 "parser.y"
    { strcpy((yyval.nd_obj2).name, (yyvsp[(1) - (1)].nd_obj).name); char *id_type = get_type((yyvsp[(1) - (1)].nd_obj).name); sprintf((yyval.nd_obj2).type, id_type); check_declaration((yyvsp[(1) - (1)].nd_obj).name); (yyval.nd_obj2).nd = mknode(NULL, NULL, (yyvsp[(1) - (1)].nd_obj).name); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 287 "parser.y"
    { add('K'); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 287 "parser.y"
    { check_return_type((yyvsp[(3) - (4)].nd_obj2).name); (yyvsp[(1) - (4)].nd_obj).nd = mknode(NULL, NULL, "reply"); (yyval.nd_obj).nd = mknode((yyvsp[(1) - (4)].nd_obj).nd, (yyvsp[(3) - (4)].nd_obj2).nd, "RETURN"); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2114 "parser.tab.c"
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
#line 290 "parser.y"


int main() {
    yyparse();
    printf("\n\n");
	
	printf("\t\t\t\t STEP 1: LEXICAL ANALYSIS  \n\n\n");
	
	printf("Processing....\n");
	sleep(1);
	printf("\nLexical analysis completed with no errors\n");

	printf("\n\n\t\t\t\t\t SYMBOL TABLE \n");
	printf("\n\nSYMBOL   \t\t\tDATATYPE   \t\t\tTYPE   \t\t\t\tLINE NUMBER \n");
	printf("_____________________________________________________________________________________________________________\n\n");
	int i=0;
	// printf("%d",count);
	for(i=0; i<count; i++) {
		line_ = symbol_table[i].line_no;
		printf("%s\t\t\t\t%s\t\t\t\t%s\t\t\t\t%d\t\t\t\n", symbol_table[i].id_name, symbol_table[i].data_type, symbol_table[i].type, symbol_table[i].line_no);
	}
	
	

	for(i=0;i<count;i++) {
		free(symbol_table[i].id_name);
		free(symbol_table[i].type);
	}
	printf("\n\n");
	printf("\t\t\t\t STEP 2: SYNTAX ANALYSIS \n\n");
	printf("Processing....\n\n");
	sleep(1);
	if(error){
		printf("Syntax error found in line no. ");
		printf("%d",line_);
	}else
		printf("Syntax analysis is completed with no errors\n\n");

	print_tree(head); 
	printf("\n\n\n\n");
	printf("\t\t\t\t STEP 3: SEMANTIC ANALYSIS \n\n");
	if(sem_errors>0) {
		printf("Semantic analysis completed with %d errors\n", sem_errors);
		for(int i=0; i<sem_errors; i++){
			printf("\t - %s", errors[i]);
		}
	} else {
		printf("Processing....");
		sleep(1);
		printf("\n\nSemantic analysis completed with no errors\n\n");
	}
	
}

int search(char *type) {
	int i;
	for(i=count-1; i>=0; i--) {
		if(strcmp(symbol_table[i].id_name, type)==0) {
			return -1;
			break;
		}
	}
	return 0;
}

void check_declaration(char *c) {
    q = search(c);
    if(!q) {
        sprintf(errors[sem_errors], "Line %d: Variable \"%s\" not declared before usage!\n", countn+1, c);
		sem_errors++;
    }
}

void check_return_type(char *value) {
	char *vsa_datatype = get_type("vsa");
	char *return_datatype = get_type(value);
	if((!strcmp(vsa_datatype, "num") && !strcmp(return_datatype, "CONST")) || !strcmp(vsa_datatype, return_datatype)){
		return ;
	}
	else {
		sprintf(errors[sem_errors], "Line %d: Return type mismatch\n", countn+1);
		sem_errors++;
	}
}

int check_types(char *type1, char *type2){
	// declaration with no init
	if(!strcmp(type2, "null"))
		return -1;
	// both datatypes are same
	if(!strcmp(type1, type2))
		return 0;
	// both datatypes are different
	if(!strcmp(type1, "num") && !strcmp(type2, "deci"))
		return 1;
	if(!strcmp(type1, "deci") && !strcmp(type2, "num"))
		return 2;
	if(!strcmp(type1, "num") && !strcmp(type2, "char"))
		return 3;
	if(!strcmp(type1, "char") && !strcmp(type2, "num"))
		return 4;
	if(!strcmp(type1, "deci") && !strcmp(type2, "char"))
		return 5;
	if(!strcmp(type1, "char") && !strcmp(type2, "deci"))
		return 6;
}

char *get_type(char *var){
	for(int i=0; i<count; i++) {
		// Handle case of use before declaration
		if(!strcmp(symbol_table[i].id_name, var)) {
			return symbol_table[i].data_type;
		}
	}
}

void add(char c) {
	if(c == 'V'){
		for(int i=0; i<10; i++){
			if(!strcmp(reserved[i], strdup(yytext))){
        		sprintf(errors[sem_errors], "Line %d: Variable name \"%s\" is a reserved keyword!\n", countn+1, yytext);
				sem_errors++;
				return;
			}
		}
	}
    q=search(yytext);
	if(!q) {
		if(c == 'H') {
			symbol_table[count].id_name=strdup(yytext);
			symbol_table[count].data_type=strdup(type);
			symbol_table[count].line_no=countn;
			symbol_table[count].type=strdup("Header");
			count++;
		}
		else if(c == 'K') {
			symbol_table[count].id_name=strdup(yytext);
			symbol_table[count].data_type=strdup("N/A");
			symbol_table[count].line_no=countn;
			symbol_table[count].type=strdup("Keyword\t");
			count++;
		}
		else if(c == 'V') {
			symbol_table[count].id_name=strdup(yytext);
			symbol_table[count].data_type=strdup(type);
			symbol_table[count].line_no=countn;
			symbol_table[count].type=strdup("Variable");
			count++;
		}
		else if(c == 'C') {
			symbol_table[count].id_name=strdup(yytext);
			symbol_table[count].data_type=strdup("CONST");
			symbol_table[count].line_no=countn;
			symbol_table[count].type=strdup("Constant");
			count++;
		}
		else if(c == 'F') {
			symbol_table[count].id_name=strdup(yytext);
			symbol_table[count].data_type=strdup(type);
			symbol_table[count].line_no=countn;
			symbol_table[count].type=strdup("Function");
			count++;
		}
    }
    else if(c == 'V' && q) {
        sprintf(errors[sem_errors], "Line %d: Multiple declarations of \"%s\" not allowed!\n", countn+1, yytext);
		sem_errors++;
    }
}

struct node* mknode(struct node *left, struct node *right, char *token) {	
	struct node *newnode = (struct node *) malloc(sizeof(struct node));
	char *newstr = (char *) malloc(strlen(token)+1);
	strcpy(newstr, token);
	newnode->left = left;
	newnode->right = right;
	newnode->token = newstr;
	return(newnode);
}

void print_tree(struct node* tree) {
	if(error==0)
		printf("\n\n Displaying Inorder Traversal of Parse Tree \n\n");
	print_inorder(tree);
}

void print_inorder(struct node *tree) {
	int i;
	if (tree->left) {
		print_inorder(tree->left);
	}
	printf("%s, ", tree->token);
	if (tree->right) {
		print_inorder(tree->right);
	}
}

void insert_type() {
	strcpy(type, yytext);
}

void yyerror(const char* msg) {
    fprintf(stderr, "%s\n", msg);
	error=1;
}
