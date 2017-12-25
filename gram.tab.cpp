/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "gram.ypp" /* yacc.c:339  */


  /* ========================================= */
  /*               NOTATKI                     */
  /* ========================================= */
  /*
    czy powinienem wyliczać offset raz czy na żądanie?



    [ ] inicjalizowanie tablic
  */


  // code
  // #include <stdio.h>
  // #include <stdlib.h>
  #include <cstdlib>
  #include <iostream>

  #include <cstring>
  #include <string>
  #include <map>
  #include <bitset>
  #include <vector>
  #include <stdio.h>
  #include <stdlib.h>

  extern "C" int yylex();
  extern "C" int yyparse();

  // variables
  /*===================================================*/
  /*                      CONSTANTS                    */
  /*===================================================*/

  #define NUMBER_OF_RESERVED_MEMORY_INDEXES 9
  #define ERROR_BUFFER 150

  /*===================================================*/
  /*                      VARIABLES                    */
  /*===================================================*/
  int currentMemoryIndex = NUMBER_OF_RESERVED_MEMORY_INDEXES;

  /*===================================================*/
  /*                     STRUCTURES                    */
  /*===================================================*/



  bool isDebugOn = false;

  int accumulator;
  int currentArrayIndex;
  char errorMessage[ERROR_BUFFER];


  /*vector containing commands*/
	std::vector<std::string> commandsVector;

  /* declaredVariables */
  /* <nazwa, adres w pamięci> */
  std::map<std::string, int> variablesAddressesMap;

  /*
  tablice moge zapisywać jakoś w postaci
  [nazwa_tablicy]::[numer_komorki]
  */
  std::map<std::string, std::string> variableValueMap;

  /* each initialized variable */
  // <nazwa, czy zainicjalizowane>
  std::map<std::string, bool> initializedVariablesMap;

  /* each array's size */
  /* if a variable is in here then it's an array - useful when determining type of a data*/
  // <nazwa, rozmiar tablicy>
  std::map<std::string, int> arraysMap;


  // int yylex();
  void yyerror (char* msg);

  /*===================================================*/
  /*                      FUNCTIONS                    */
  /*===================================================*/

  // used for declaring a variable
  void declareAVariable(std::string name);
  // used for declaring an array
  void declareAnArray(std::string name, int arraySize);

  // function used for determining whether variable is declared
  bool isVariableDeclared(std::map<std::string, int> *mapToSearch, std::string name);

  bool isVariableInitialized(std::map<std::string, bool>* initializedMap, std::string variableName);

  // debug function performed at the end of parsing
  void finish();

  void displayMap(std::map<std::string, int>* mapToDisplay);
  void displayInitializedMap(std::map<std::string, bool>* map);
  void displayCommandVector(std::vector<std::string>* commandsVector);

  void showAllocatedMemoryIndexes();

  void pushCodeWithAddress(std::string opCode, int number);
  void pushCode(std::string opCode);

  void generateNumber(std::string);
  int computeRequiredMemoryCell(std::string variableName, int currentArrayIndex);


#line 180 "gram.tab.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "gram.tab.hpp".  */
#ifndef YY_YY_GRAM_TAB_HPP_INCLUDED
# define YY_YY_GRAM_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    VAR = 258,
    BEG = 259,
    END = 260,
    IF = 261,
    THEN = 262,
    ELSE = 263,
    ENDIF = 264,
    WHILE = 265,
    DO = 266,
    ENDWHILE = 267,
    FOR = 268,
    FROM = 269,
    TO = 270,
    ENDFOR = 271,
    DOWNTO = 272,
    READ = 273,
    WRITE = 274,
    ASSGN = 275,
    EQ = 276,
    NEQ = 277,
    GT = 278,
    GE = 279,
    LT = 280,
    LE = 281,
    ADD = 282,
    SUB = 283,
    MUL = 284,
    DIV = 285,
    MOD = 286,
    num = 287,
    PID = 288,
    SEM = 289,
    LEFT_BR = 290,
    RIGHT_BR = 291
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 115 "gram.ypp" /* yacc.c:355  */

    char* string;
    int   num;

#line 262 "gram.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAM_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 279 "gram.tab.cpp" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   171

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  10
/* YYNRULES -- Number of rules.  */
#define YYNRULES  33
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  84

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,    39,    38,     2,    37,     2,    40,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    41,     2,     2,     2,     2,     2,
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
      35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   149,   149,   149,   153,   157,   161,   166,   167,   170,
     183,   184,   185,   186,   187,   188,   216,   251,   258,   265,
     266,   267,   268,   270,   271,   272,   273,   274,   275,   277,
     280,   300,   301,   312
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VAR", "BEG", "END", "IF", "THEN",
  "ELSE", "ENDIF", "WHILE", "DO", "ENDWHILE", "FOR", "FROM", "TO",
  "ENDFOR", "DOWNTO", "READ", "WRITE", "ASSGN", "EQ", "NEQ", "GT", "GE",
  "LT", "LE", "ADD", "SUB", "MUL", "DIV", "MOD", "num", "PID", "SEM",
  "LEFT_BR", "RIGHT_BR", "'-'", "'+'", "'*'", "'/'", "'^'", "$accept",
  "program", "$@1", "vdeclarations", "commands", "command", "expression",
  "condition", "value", "identifier", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,    45,    43,    42,
      47,    94
};
# endif

#define YYPACT_NINF -27

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-27)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       8,   -27,    13,   -27,   -27,    -3,   133,   -15,   -26,   -26,
     -12,    -9,   -26,    -8,     4,   -27,    -2,    -4,   -27,    19,
     135,   -27,    20,    21,    -1,     0,   -17,   -27,   -27,   -26,
       2,   133,   -26,   -26,   -26,   -26,   -26,   -26,   133,   -26,
     -27,   -27,     3,     6,    10,   140,   -27,    80,   -27,   -27,
     -27,   -27,   -27,   -27,    90,   -13,   -27,   -27,   -27,   -26,
     -26,   -26,   -26,   -26,   133,   -27,   -27,   -26,   -26,   -27,
     -27,   -27,   -27,   -27,   101,    29,    36,   -27,   133,   133,
     111,   122,   -27,   -27
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     2,     0,     6,     1,     0,     0,     4,     0,     0,
       0,     0,     0,    31,     0,     8,     0,     0,    29,     0,
       0,    30,     0,     0,     0,     0,     0,     3,     7,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      15,    16,     0,     0,     0,    17,     5,     0,    23,    24,
      26,    28,    25,    27,     0,     0,    33,    32,     9,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,    18,
      19,    20,    21,    22,     0,     0,     0,    10,     0,     0,
       0,     0,    13,    14
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -27,   -27,   -27,   -27,   -19,   -11,   -27,    46,    17,    -6
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     5,    14,    15,    44,    19,    20,    21
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      16,     6,    67,    28,    68,    24,    18,    13,    16,    27,
       8,     1,    47,     4,     9,    42,    43,    10,    29,    54,
      17,    23,    11,    12,    13,    16,    31,    26,    30,    25,
       7,    38,    16,    40,    41,    39,    28,    13,    46,    56,
      78,    16,    57,    28,    58,    74,    45,    79,    16,    48,
      49,    50,    51,    52,    53,    22,    55,     0,    16,    80,
      81,     0,     0,    28,     0,     0,     0,     0,    16,    28,
      28,     0,    16,    16,    16,    16,    69,    70,    71,    72,
      73,     0,     0,     0,    75,    76,     8,     0,    64,    65,
       9,     0,     0,    10,     0,     0,     8,     0,    11,    12,
       9,     0,    66,    10,     0,     0,     0,     8,    11,    12,
      77,     9,     0,    13,    10,     0,     0,     8,     0,    11,
      12,     9,     0,    13,    10,     0,     0,    82,     8,    11,
      12,     0,     9,     0,    13,    10,     0,     0,    83,     8,
      11,    12,     0,     9,    13,     0,    10,     0,     0,     0,
       0,    11,    12,     0,     0,    13,    32,    33,    34,    35,
      36,    37,     0,     0,     0,     0,    13,    59,    60,    61,
      62,    63
};

static const yytype_int8 yycheck[] =
{
       6,     4,    15,    14,    17,    11,    32,    33,    14,     5,
       6,     3,    31,     0,    10,    32,    33,    13,    20,    38,
      35,    33,    18,    19,    33,    31,     7,    35,    32,    12,
      33,    11,    38,    34,    34,    14,    47,    33,    36,    36,
      11,    47,    36,    54,    34,    64,    29,    11,    54,    32,
      33,    34,    35,    36,    37,     9,    39,    -1,    64,    78,
      79,    -1,    -1,    74,    -1,    -1,    -1,    -1,    74,    80,
      81,    -1,    78,    79,    80,    81,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    67,    68,     6,    -1,     8,     9,
      10,    -1,    -1,    13,    -1,    -1,     6,    -1,    18,    19,
      10,    -1,    12,    13,    -1,    -1,    -1,     6,    18,    19,
       9,    10,    -1,    33,    13,    -1,    -1,     6,    -1,    18,
      19,    10,    -1,    33,    13,    -1,    -1,    16,     6,    18,
      19,    -1,    10,    -1,    33,    13,    -1,    -1,    16,     6,
      18,    19,    -1,    10,    33,    -1,    13,    -1,    -1,    -1,
      -1,    18,    19,    -1,    -1,    33,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    33,    27,    28,    29,
      30,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    43,    44,     0,    45,     4,    33,     6,    10,
      13,    18,    19,    33,    46,    47,    51,    35,    32,    49,
      50,    51,    49,    33,    51,    50,    35,     5,    47,    20,
      32,     7,    21,    22,    23,    24,    25,    26,    11,    14,
      34,    34,    32,    33,    48,    50,    36,    46,    50,    50,
      50,    50,    50,    50,    46,    50,    36,    36,    34,    27,
      28,    29,    30,    31,     8,     9,    12,    15,    17,    50,
      50,    50,    50,    50,    46,    50,    50,     9,    11,    11,
      46,    46,    16,    16
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    44,    43,    45,    45,    45,    46,    46,    47,
      47,    47,    47,    47,    47,    47,    47,    48,    48,    48,
      48,    48,    48,    49,    49,    49,    49,    49,    49,    50,
      50,    51,    51,    51
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     6,     2,     5,     0,     2,     1,     4,
       7,     5,     5,     9,     9,     3,     3,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     4,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 149 "gram.ypp" /* yacc.c:1646  */
    {/*showAllocatedMemoryIndexes();*/}
#line 1424 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 149 "gram.ypp" /* yacc.c:1646  */
    {
                  finish();
                }
#line 1432 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 153 "gram.ypp" /* yacc.c:1646  */
    {
                  declareAVariable((yyvsp[0].string));
                }
#line 1440 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 157 "gram.ypp" /* yacc.c:1646  */
    {
                  int arraySize = atoi((yyvsp[-1].string));
                  declareAnArray((yyvsp[-3].string), arraySize);
                }
#line 1449 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 161 "gram.ypp" /* yacc.c:1646  */
    {
                  // std::cout << "No variables declared" << "\n";
                }
#line 1457 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 166 "gram.ypp" /* yacc.c:1646  */
    { }
#line 1463 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 167 "gram.ypp" /* yacc.c:1646  */
    { }
#line 1469 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 170 "gram.ypp" /* yacc.c:1646  */
    {
                std::string variableName = (yyvsp[-3].string);
                if (!isVariableDeclared(&variablesAddressesMap, variableName)) { //variable is not declared
                  std::cout << "Error [line "<< "]: Variable "<< (yyvsp[-3].string) <<" not declared!" << "\n";
                  exit(1);
                } else { // variable is declared
                  // find an adress
                  int variableAddress = variablesAddressesMap[variableName];
                  // set as initialized
                  initializedVariablesMap[variableName] = true;
                  pushCodeWithAddress("STORE", variableAddress);
                }
             }
#line 1487 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 183 "gram.ypp" /* yacc.c:1646  */
    {}
#line 1493 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 188 "gram.ypp" /* yacc.c:1646  */
    {
               /*todo: doesn't work*/
               std::string variableName = (yyvsp[-1].string);
               if (!isVariableDeclared(&variablesAddressesMap, variableName)) { //variable is not declared
                 std::cout << "Error [line "<< "]: Variable "<< (yyvsp[-1].string) <<" not declared!" << "\n";
                 exit(1);
               } else {
                 int variableAddress = variablesAddressesMap[variableName];
                //  pushCodeWithAddress("STORE", variableAddress);
                 pushCode("ZERO");
                 pushCode("GET");

                 if (isVariableDeclared(&arraysMap, variableName)) {
                   if (isDebugOn) {
                     std::cout << "I'm an array!" << "\n";
                     std::cout << "Yet not implemented\n"<< currentArrayIndex;
                   }
                   int requiredCell = computeRequiredMemoryCell(variableName, currentArrayIndex);
                   //is variable initialized
                   pushCodeWithAddress("STORE", requiredCell);
                 } else {
                   int variableAddress = variablesAddressesMap[variableName];
                   // std::cout << "I'm a variable, with adress : "<< variableAddress <<"\n";
                   pushCodeWithAddress("STORE", variableAddress);
                   initializedVariablesMap[variableName] = true; // just in case we set it as initialized
                 }
               }
             }
#line 1526 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 216 "gram.ypp" /* yacc.c:1646  */
    {
               std::string variableName = (yyvsp[-1].string);

               if (isVariableDeclared(&variablesAddressesMap, variableName)) {
                 // at this point we know that variable is declared, what about being initialized?
                 int variableAddress = variablesAddressesMap[variableName];
                 //std::cout << "checking if " << variableName << " is initialized\n";
                 if (!isVariableInitialized(&initializedVariablesMap, variableName)) { //checking if it's initialized
                  std::cout << "Variable " << variableName << " not initialized\n";
                  exit(1);
                } else {
                  //std::cout << variableName << " is initialized\n"; //wrong message,
                   // pushCodeWithAddress("STORE", variableAddress);
                  if (isVariableDeclared(&arraysMap, variableName)) { // is it an array?
                    if (isDebugOn) {
                      std::cout << "I'm an array!" << "\n";
                      std::cout << "Yet not implemented\n"<< currentArrayIndex;
                      std::cout  << "\n";
                    }


                  } else {
                    pushCode("ZERO");
                    pushCodeWithAddress("LOAD", variableAddress);
                    pushCode("PUT");
                    pushCode("###");
                    // if it's an array
                  }
                }
               } else { //variable is not declared
                 std::cout << "Error [line "<< "]: Variable "<< (yyvsp[-1].string) <<" not declared!" << "\n";
                 exit(1);
               }
             }
#line 1565 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 251 "gram.ypp" /* yacc.c:1646  */
    {
                /*
                if it's a number then load it directly to the accumulator
                otherwise find an adress and THEN load it
                */
                // pushCodeWithAddress("LOAD", 123);
              }
#line 1577 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 258 "gram.ypp" /* yacc.c:1646  */
    {
                long long value1 = (yyvsp[-2].num);
                long long value2 = (yyvsp[0].num);
                std::cout << value1 << "#" <<value2 << "\n";


             }
#line 1589 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 265 "gram.ypp" /* yacc.c:1646  */
    { }
#line 1595 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 266 "gram.ypp" /* yacc.c:1646  */
    { }
#line 1601 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 267 "gram.ypp" /* yacc.c:1646  */
    { }
#line 1607 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 268 "gram.ypp" /* yacc.c:1646  */
    { }
#line 1613 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 270 "gram.ypp" /* yacc.c:1646  */
    { }
#line 1619 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 271 "gram.ypp" /* yacc.c:1646  */
    { }
#line 1625 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 272 "gram.ypp" /* yacc.c:1646  */
    { }
#line 1631 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 273 "gram.ypp" /* yacc.c:1646  */
    { }
#line 1637 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 274 "gram.ypp" /* yacc.c:1646  */
    { }
#line 1643 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 275 "gram.ypp" /* yacc.c:1646  */
    { }
#line 1649 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 277 "gram.ypp" /* yacc.c:1646  */
    {
                generateNumber((yyvsp[0].string));
             }
#line 1657 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 280 "gram.ypp" /* yacc.c:1646  */
    {
               std::string variableName = (yyvsp[0].string);
               if (!isVariableDeclared(&variablesAddressesMap, variableName)) {
                 // not declared
                  std::cout << "variable " << variableName << " NOT \n";
               } else {
                 // variable is declared
                 if(!isVariableInitialized(&initializedVariablesMap, variableName)) {
                  std::cout << "Variable " << variableName << " declared but not initialized\n";
                  exit(1);
                } else {
                  // and initialized
                  // int variableAddress = variablesAddressesMap[variableName];
                  // std::cout << "variable '" << variableName << "' is declared and initialized\n";
                  // pushCode("ZERO");
                  //pushCodeWithAddress("LOAD [] ", variableAddress);
                }
               }
             }
#line 1681 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 301 "gram.ypp" /* yacc.c:1646  */
    {

               /* yet to be implemented */
              /*
              // znalezc nazwe zmiennej
              // jej wartosc

              std::string variableName = $3;
              currentArrayIndex = toDecimal(variableValueMap[variableName]);
              */
             }
#line 1697 "gram.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 312 "gram.ypp" /* yacc.c:1646  */
    {
              currentArrayIndex = atoi((yyvsp[-1].string));
              /*
              moze tutaj od razu obliczać offset?????

              */
              // pushCodeWithAddress("Current", currentArrayIndex);
             }
#line 1710 "gram.tab.cpp" /* yacc.c:1646  */
    break;


#line 1714 "gram.tab.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 321 "gram.ypp" /* yacc.c:1906  */


void declareAVariable(std::string name) {
  if (!isVariableDeclared(&variablesAddressesMap, name)) {
    currentMemoryIndex++;
    variablesAddressesMap[name] = currentMemoryIndex;
    initializedVariablesMap[name] = false;
    // std::cout << "Declaring new variable: '" << name << "' with adress: " << currentMemoryIndex << "\n";
  } else {
    //throw an error
    std::cout << "Variable " << name << " already defined!" << "\n";
    exit(1);
    //snprintf(errorMessage, ERROR_BUFFER, "Variable '%s' already defined.", name);
    //yyerror(errorMessage);
  }
}

void displayArraySizesMap(std::map<std::string, int>* arraySizesMap) {
  for(auto elem : *arraySizesMap) {
     std::cout << elem.first << " " << elem.second << "\n";
  }
}

void declareAnArray(std::string name, int arraySize) {
  if (!isVariableDeclared(&variablesAddressesMap, name)) {

    currentMemoryIndex++;
    if (isDebugOn) {
      std::cout << "Declaring new array     '" << name << "' of size: " << arraySize << " starting at memIndex " << currentMemoryIndex;
    }
    variablesAddressesMap[name] = currentMemoryIndex; // the beggining of an array
    initializedVariablesMap[name] = true;
    arraysMap[name] = arraySize;
    currentMemoryIndex += arraySize - 1; //without the first one
    if (isDebugOn) {
      std::cout << " and ending at " << currentMemoryIndex << "\n";
    }
  } else {
    std::cout << "Array " << name << " already defined!" << "\n";
  }
}

bool isVariableDeclared(std::map<std::string, int> *mapToSearch, std::string name) {
  if ( (*mapToSearch).find(name) == (*mapToSearch).end() ) {
    // not found
    return false;
  } else {
    // found
    return true;
  }
}

void showAllocatedMemoryIndexes() {
  for (int i = 0; i < 10; i++) {
    std::cout << "index: " << i << " allocated for computing variables\n";
  }
  std::cout << "###################\n\n\n\n";
}

void finish() {
  //std::cout << "number of variables + tokens = " << variablesAddressesMap.size() << "\n";
  // displayMap(&variablesAddressesMap);
  pushCode("HALT");
  displayCommandVector(&commandsVector);
}

void displayMap(std::map<std::string, int>* mapToDisplay) {
  for(auto elem : *mapToDisplay) {
     std::cout << elem.first << " " << elem.second << "\n";
  }
}

void displayInitializedMap(std::map<std::string, bool>* map) {
  for(auto elem : *map) {
     std::cout << elem.first << " " << elem.second << "\n";
  }
}

bool isVariableInitialized(std::map<std::string, bool>* initializedMap, std::string variableName) {
  // mozna w sumie przerobic
  if ( (*initializedMap).find(variableName) == (*initializedMap).end() ) { // not found
    return false;
  } else { // found
    if ((*initializedMap)[variableName] == true) { //initialized
      return true;
    } else { // not initialized
      return false;
    }
  }
}

void displayCommandVector(std::vector<std::string> *commands) {
  int vectorSize = commands->size();
  for (int i=0; i < vectorSize; i++) {
    std::cout << commands->at(i) << "\n";
  }
}

/*===================================================*/
/*                 GENERATING CODE                   */
/*===================================================*/

void pushCode(std::string opCode) {
  commandsVector.push_back(opCode);
}

void pushCodeWithAddress(std::string opCode, int number) {
  std::string space = " ";
  std::string whole = opCode + space + std::to_string(number);
  commandsVector.push_back(whole);
}

void generateNumber(std::string number) {
  /*  ZAPISANIE liczby W PAMIĘCI
    1) wyzerowanie akumulatora
    2) wygenerowanie liczby (w akumulatorze)
    3) znalezenie komorki do ktorej mamy to zapisac - [x]
    4) STORE [x]
  */

  /*
  Dostajemy liczbę w postaci
  */

  int no = std::stoi(number);
  std::cout << "DEC: " << no << "\n";
  std::string bin = std::bitset<5>(no).to_string(); //to binary
  // should i trim it?
  //todo: trimming binary
  std::cout<< bin <<"\n";
  int limit = bin.length()-1;
  int i;
  pushCode("ZERO");

  for(i = 0; i < limit; ++i) {
    if(bin[i] == '1') {
      pushCode("INC");
    }
  //
    if(i < (limit - 1)) {
      pushCode("SHL");
    }
  }
}

int computeRequiredMemoryCell(std::string variableName, int currentArrayIndex) {

  int startingIndex = variablesAddressesMap[variableName];
  int searchedIndex = startingIndex + currentArrayIndex;
  if (isDebugOn) {
    std::cout << "We start at index " << startingIndex << " looking for index " << searchedIndex << "\n";
  }
  return searchedIndex;
}

/*===================================================*/
/*                     STRUCTURES                    */
/*===================================================*/

void freeAll() {

}

int main() {
  yyparse();
  return 0;
}

void yyerror (char *msg) {
    printf("ERROR\n");
}
