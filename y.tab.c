/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "limbaj.y"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "import.h"
#include "importFunct.h"

extern FILE* yyin;
extern char* yytext;
extern int yylineno; 

char params[100];
char params_clase[100];
char arr_values[100];
char typeDecl[100];
int return_value;
char scope[100] = "global";

#line 90 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
    TIP = 258,                     /* TIP  */
    VOID = 259,                    /* VOID  */
    ID = 260,                      /* ID  */
    STRING = 261,                  /* STRING  */
    CHARACTER = 262,               /* CHARACTER  */
    VERIFY = 263,                  /* VERIFY  */
    BOOL_OP = 264,                 /* BOOL_OP  */
    PLUS = 265,                    /* PLUS  */
    MINUS = 266,                   /* MINUS  */
    MUL = 267,                     /* MUL  */
    DIV = 268,                     /* DIV  */
    IF = 269,                      /* IF  */
    ELSE = 270,                    /* ELSE  */
    ELIF = 271,                    /* ELIF  */
    TYPE = 272,                    /* TYPE  */
    CLS = 273,                     /* CLS  */
    FCT = 274,                     /* FCT  */
    BOOLTNK = 275,                 /* BOOLTNK  */
    NR = 276,                      /* NR  */
    FLOAT_NR = 277,                /* FLOAT_NR  */
    BGIN_GLOBAL = 281,             /* BGIN_GLOBAL  */
    END_GLOBAL = 282,              /* END_GLOBAL  */
    BGIN_DEF = 283,                /* BGIN_DEF  */
    END_DEF = 284,                 /* END_DEF  */
    BGIN_FCT = 285,                /* BGIN_FCT  */
    END_FCT = 286,                 /* END_FCT  */
    BGIN_CLS = 287,                /* BGIN_CLS  */
    END_CLS = 288,                 /* END_CLS  */
    BGIN_MAIN = 289,               /* BGIN_MAIN  */
    END_MAIN = 290,                /* END_MAIN  */
    ASSIGN = 291,                  /* ASSIGN  */
    WHILE = 292,                   /* WHILE  */
    FOR = 293,                     /* FOR  */
    EVAL = 294,                    /* EVAL  */
    TYPEOF = 295                   /* TYPEOF  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define TIP 258
#define VOID 259
#define ID 260
#define STRING 261
#define CHARACTER 262
#define VERIFY 263
#define BOOL_OP 264
#define PLUS 265
#define MINUS 266
#define MUL 267
#define DIV 268
#define IF 269
#define ELSE 270
#define ELIF 271
#define TYPE 272
#define CLS 273
#define FCT 274
#define BOOLTNK 275
#define NR 276
#define FLOAT_NR 277
#define BGIN_GLOBAL 281
#define END_GLOBAL 282
#define BGIN_DEF 283
#define END_DEF 284
#define BGIN_FCT 285
#define END_FCT 286
#define BGIN_CLS 287
#define END_CLS 288
#define BGIN_MAIN 289
#define END_MAIN 290
#define ASSIGN 291
#define WHILE 292
#define FOR 293
#define EVAL 294
#define TYPEOF 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 21 "limbaj.y"

int intval;
char* strval;
float floatval;
struct node* node;

#line 224 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TIP = 3,                        /* TIP  */
  YYSYMBOL_VOID = 4,                       /* VOID  */
  YYSYMBOL_ID = 5,                         /* ID  */
  YYSYMBOL_STRING = 6,                     /* STRING  */
  YYSYMBOL_CHARACTER = 7,                  /* CHARACTER  */
  YYSYMBOL_VERIFY = 8,                     /* VERIFY  */
  YYSYMBOL_BOOL_OP = 9,                    /* BOOL_OP  */
  YYSYMBOL_PLUS = 10,                      /* PLUS  */
  YYSYMBOL_MINUS = 11,                     /* MINUS  */
  YYSYMBOL_MUL = 12,                       /* MUL  */
  YYSYMBOL_DIV = 13,                       /* DIV  */
  YYSYMBOL_IF = 14,                        /* IF  */
  YYSYMBOL_ELSE = 15,                      /* ELSE  */
  YYSYMBOL_ELIF = 16,                      /* ELIF  */
  YYSYMBOL_TYPE = 17,                      /* TYPE  */
  YYSYMBOL_CLS = 18,                       /* CLS  */
  YYSYMBOL_FCT = 19,                       /* FCT  */
  YYSYMBOL_BOOLTNK = 20,                   /* BOOLTNK  */
  YYSYMBOL_NR = 21,                        /* NR  */
  YYSYMBOL_FLOAT_NR = 22,                  /* FLOAT_NR  */
  YYSYMBOL_23_ = 23,                       /* '<'  */
  YYSYMBOL_24_ = 24,                       /* '>'  */
  YYSYMBOL_25_ = 25,                       /* '='  */
  YYSYMBOL_26_ = 26,                       /* "!="  */
  YYSYMBOL_27_ = 27,                       /* "<="  */
  YYSYMBOL_28_ = 28,                       /* ">="  */
  YYSYMBOL_BGIN_GLOBAL = 29,               /* BGIN_GLOBAL  */
  YYSYMBOL_END_GLOBAL = 30,                /* END_GLOBAL  */
  YYSYMBOL_BGIN_DEF = 31,                  /* BGIN_DEF  */
  YYSYMBOL_END_DEF = 32,                   /* END_DEF  */
  YYSYMBOL_BGIN_FCT = 33,                  /* BGIN_FCT  */
  YYSYMBOL_END_FCT = 34,                   /* END_FCT  */
  YYSYMBOL_BGIN_CLS = 35,                  /* BGIN_CLS  */
  YYSYMBOL_END_CLS = 36,                   /* END_CLS  */
  YYSYMBOL_BGIN_MAIN = 37,                 /* BGIN_MAIN  */
  YYSYMBOL_END_MAIN = 38,                  /* END_MAIN  */
  YYSYMBOL_ASSIGN = 39,                    /* ASSIGN  */
  YYSYMBOL_WHILE = 40,                     /* WHILE  */
  YYSYMBOL_FOR = 41,                       /* FOR  */
  YYSYMBOL_EVAL = 42,                      /* EVAL  */
  YYSYMBOL_TYPEOF = 43,                    /* TYPEOF  */
  YYSYMBOL_44_ = 44,                       /* ';'  */
  YYSYMBOL_45_ = 45,                       /* '('  */
  YYSYMBOL_46_ = 46,                       /* ')'  */
  YYSYMBOL_47_ = 47,                       /* '['  */
  YYSYMBOL_48_ = 48,                       /* ']'  */
  YYSYMBOL_49_ = 49,                       /* '~'  */
  YYSYMBOL_50_ = 50,                       /* ','  */
  YYSYMBOL_51_ = 51,                       /* '{'  */
  YYSYMBOL_52_ = 52,                       /* '}'  */
  YYSYMBOL_53_ = 53,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 54,                  /* $accept  */
  YYSYMBOL_progr = 55,                     /* progr  */
  YYSYMBOL_global = 56,                    /* global  */
  YYSYMBOL_declaratii = 57,                /* declaratii  */
  YYSYMBOL_definitions = 58,               /* definitions  */
  YYSYMBOL_clase = 59,                     /* clase  */
  YYSYMBOL_bloc = 60,                      /* bloc  */
  YYSYMBOL_declaratie = 61,                /* declaratie  */
  YYSYMBOL_list_val = 62,                  /* list_val  */
  YYSYMBOL_val = 63,                       /* val  */
  YYSYMBOL_funct_decl = 64,                /* funct_decl  */
  YYSYMBOL_funct = 65,                     /* funct  */
  YYSYMBOL_other = 66,                     /* other  */
  YYSYMBOL_lista_param = 67,               /* lista_param  */
  YYSYMBOL_param = 68,                     /* param  */
  YYSYMBOL_list = 69,                      /* list  */
  YYSYMBOL_lista_clase = 70,               /* lista_clase  */
  YYSYMBOL_classes = 71,                   /* classes  */
  YYSYMBOL_classes_declarations = 72,      /* classes_declarations  */
  YYSYMBOL_param_clase = 73,               /* param_clase  */
  YYSYMBOL_statement = 74,                 /* statement  */
  YYSYMBOL_value = 75,                     /* value  */
  YYSYMBOL_altceva = 76,                   /* altceva  */
  YYSYMBOL_exp = 77,                       /* exp  */
  YYSYMBOL_eval = 78,                      /* eval  */
  YYSYMBOL_TypeOf = 79,                    /* TypeOf  */
  YYSYMBOL_lista_apel = 80,                /* lista_apel  */
  YYSYMBOL_funct_param = 81,               /* funct_param  */
  YYSYMBOL_if = 82,                        /* if  */
  YYSYMBOL_instr = 83,                     /* instr  */
  YYSYMBOL_while = 84,                     /* while  */
  YYSYMBOL_for = 85,                       /* for  */
  YYSYMBOL_condition = 86                  /* condition  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   363

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  125
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  266

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      45,    46,     2,     2,    50,     2,    53,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    44,
      23,    25,    24,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    47,     2,    48,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,     2,    52,    49,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    49,    49,    55,    60,    61,    64,    69,    73,    79,
      88,   101,   111,   121,   131,   141,   157,   169,   193,   213,
     214,   218,   230,   244,   252,   265,   275,   276,   278,   281,
     282,   285,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   335,
     336,   337,   340,   353,   363,   373,   386,   397,   408,   418,
     428,   438,   448,   458,   466,   474,   485,   498,   511,   523,
     536,   549,   559,   569,   582,   587,   593,   598,   603,   608,
     615,   616,   617,   618,   619,   622,   627,   632,   637,   642,
     643,   646,   652,   659,   660,   661,   667,   668,   674,   677,
     678,   679,   680,   681,   690,   703,   716,   733,   734,   737,
     752,   758,   762,   783,   788,   801
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TIP", "VOID", "ID",
  "STRING", "CHARACTER", "VERIFY", "BOOL_OP", "PLUS", "MINUS", "MUL",
  "DIV", "IF", "ELSE", "ELIF", "TYPE", "CLS", "FCT", "BOOLTNK", "NR",
  "FLOAT_NR", "'<'", "'>'", "'='", "\"!=\"", "\"<=\"", "\">=\"",
  "BGIN_GLOBAL", "END_GLOBAL", "BGIN_DEF", "END_DEF", "BGIN_FCT",
  "END_FCT", "BGIN_CLS", "END_CLS", "BGIN_MAIN", "END_MAIN", "ASSIGN",
  "WHILE", "FOR", "EVAL", "TYPEOF", "';'", "'('", "')'", "'['", "']'",
  "'~'", "','", "'{'", "'}'", "'.'", "$accept", "progr", "global",
  "declaratii", "definitions", "clase", "bloc", "declaratie", "list_val",
  "val", "funct_decl", "funct", "other", "lista_param", "param", "list",
  "lista_clase", "classes", "classes_declarations", "param_clase",
  "statement", "value", "altceva", "exp", "eval", "TypeOf", "lista_apel",
  "funct_param", "if", "instr", "while", "for", "condition", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-133)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -8,    27,    37,    41,    73,     9,    -2,  -133,    80,    69,
     -16,  -133,    72,  -133,    94,    86,    70,   103,   106,   216,
     127,  -133,   122,   146,    31,  -133,   132,   161,     4,   137,
      31,  -133,  -133,  -133,  -133,  -133,  -133,  -133,    63,   149,
     159,   170,   254,   214,   215,   163,    80,   179,   177,   183,
     198,   218,    31,   258,  -133,   234,   158,   227,    45,  -133,
    -133,  -133,  -133,    63,  -133,  -133,   182,   228,    15,    16,
     219,   133,   263,   261,    63,    63,  -133,  -133,   243,   244,
     247,   242,    80,   246,   252,   256,  -133,  -133,  -133,  -133,
    -133,  -133,   268,   259,   158,   265,   267,   104,   103,   269,
     270,   271,  -133,   162,   282,   222,    63,    63,    63,    63,
    -133,   272,   300,  -133,    68,  -133,  -133,    82,   275,  -133,
    -133,  -133,  -133,  -133,    63,   274,  -133,  -133,  -133,  -133,
    -133,   114,  -133,   277,    97,   241,   245,    11,    11,   303,
    -133,  -133,  -133,  -133,  -133,     8,   107,  -133,  -133,  -133,
     279,   280,   103,   283,   284,   285,  -133,  -133,  -133,  -133,
     135,   278,  -133,   145,   145,  -133,  -133,   291,  -133,  -133,
     313,  -133,   296,   260,   165,  -133,   273,   281,   224,   168,
     297,  -133,  -133,   322,   323,    35,    71,   288,  -133,  -133,
     152,  -133,  -133,  -133,  -133,  -133,  -133,  -133,  -133,  -133,
     286,   287,  -133,   290,  -133,  -133,   153,   289,  -133,   312,
    -133,  -133,  -133,  -133,  -133,    63,  -133,   166,   292,    12,
      90,    11,   293,   293,    11,  -133,   331,  -133,   291,  -133,
    -133,   276,  -133,   264,  -133,   302,  -133,  -133,  -133,  -133,
    -133,   110,   233,  -133,    19,  -133,  -133,   197,  -133,   318,
    -133,    24,   293,   298,   303,  -133,  -133,  -133,  -133,    11,
     299,    78,   293,   293,  -133,  -133
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     1,     0,     0,
       9,     3,     0,     4,     0,     0,     0,    61,     0,     0,
       0,     5,     0,     0,    45,     6,     0,     0,     0,     0,
      45,     2,    10,    14,    13,    15,    11,    12,     0,     0,
       0,     0,     0,     0,     0,     0,    41,     0,    28,     0,
       0,     0,    45,     0,     7,     0,    58,     0,    89,    92,
      91,    86,    90,     0,   100,    88,     0,    18,     0,     0,
       0,   108,     0,     0,     0,     0,    33,    26,     0,     0,
       0,     0,    40,     0,     0,     0,    35,    37,    38,    32,
      42,    43,     0,     0,    58,     0,     0,     0,    48,     0,
       0,     0,     8,   108,     0,     0,     0,     0,     0,     0,
      16,     0,     0,    23,     0,    29,    25,     0,    67,    71,
      70,    72,    68,    69,     0,   113,   110,   111,   109,   112,
      74,     0,   103,     0,     0,     0,     0,     0,     0,     0,
      36,    34,    39,    44,    27,     0,     0,    46,    49,    59,
       0,     0,    51,     0,     0,     0,    47,    54,    56,    94,
       0,     0,    99,    95,    98,    96,    97,     0,    31,    22,
       0,    24,     0,     0,   108,    73,     0,     0,     0,   108,
       0,   101,   102,     0,     0,     0,     0,     0,    64,    63,
       0,    60,    52,    50,    53,    55,    57,    93,    87,    21,
       0,    20,    30,     0,    75,   106,     0,   113,   104,     0,
      76,    80,    79,    77,    78,     0,    82,     0,     0,     0,
       0,     0,     0,     0,     0,    62,     0,    17,     0,    66,
     105,   108,    85,     0,    81,     0,   122,   124,   125,   123,
     121,    45,   114,   119,     0,    65,    19,     0,    83,     0,
     117,     0,     0,     0,     0,   107,    84,   118,   115,     0,
       0,     0,     0,     0,   120,   116
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -133,  -133,  -133,  -133,  -133,  -133,  -133,    -1,   118,  -133,
     -11,    -7,    -6,   294,   172,   108,   253,    -9,   -19,  -133,
     -45,  -133,  -133,   -49,   -46,   -41,   -97,   174,  -133,  -132,
    -133,  -133,  -118
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     5,     9,    18,    31,    45,   200,   201,
      15,    46,    47,   114,   115,    48,    97,    98,    29,   190,
      49,    64,    65,    66,    50,    51,   131,   132,    86,   242,
      87,    88,   185
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    16,    84,    83,    12,    26,   160,    85,    28,    55,
     100,    99,     4,   188,   105,   101,   183,   236,   112,   112,
     186,     1,    27,    19,    57,   135,   136,     4,   221,    42,
       4,    20,   184,   237,     4,    26,    42,     7,    78,    11,
      54,    82,    13,    14,   221,    96,    92,    81,   100,    99,
      14,   154,   153,   101,   189,    95,   155,   163,   164,   165,
     166,   113,   116,   254,    79,    80,    43,    44,    58,    59,
      60,    26,     8,    43,    44,   173,   257,   206,    10,    55,
     221,   222,   217,    96,    61,    62,   151,   221,   152,    14,
     103,   243,   104,    95,   187,   238,   150,    22,    23,    14,
     154,   153,    25,   240,    17,   155,   244,     4,    63,    42,
       4,   239,    42,     4,   169,    42,    21,   223,   170,    24,
     258,    27,    27,    14,   263,    27,    14,    40,   171,    14,
     264,   265,   170,    55,   247,   151,   178,   152,   125,   126,
     127,   261,   179,    30,   180,   150,    43,    44,    39,    43,
      44,    41,    43,    44,   128,   129,   149,   108,   109,   191,
     175,     4,   250,    42,   176,    52,   233,   125,   126,   127,
     125,   126,   127,   125,   126,   127,    27,    14,    53,   130,
       4,   197,    42,   128,   129,   176,   128,   129,    56,   128,
     129,    78,   106,   107,   108,   109,    14,    67,   225,   230,
      43,    44,   226,   176,    68,    84,    83,    76,   159,   260,
      85,   205,   234,    77,   216,    69,   176,    79,    80,    43,
      44,    32,    33,    34,   118,   119,   120,    89,   110,   210,
     211,   212,   106,   107,   108,   109,    35,    36,    37,   121,
     122,   123,    90,   255,    82,   213,   214,   176,   252,   253,
      81,   106,   107,   108,   109,   106,   107,   108,   109,    74,
      75,    38,    91,    93,   124,   102,   134,   111,   162,   215,
     106,   107,   108,   109,   106,   107,   108,   109,   207,   126,
     127,   125,   126,   127,   133,    94,   140,   181,   137,   138,
     141,   182,   139,    70,   128,   129,   142,   128,   129,    71,
     143,    72,   144,   161,   145,   168,   204,    73,    42,   147,
     248,   148,   199,   156,   157,   158,   112,   203,   218,   174,
     209,   167,   172,   192,   193,   177,   198,   194,   195,   196,
     219,   220,   224,   232,   231,   227,   245,   228,   229,   256,
     235,   249,   202,   259,   241,   262,   246,   146,     0,   251,
     208,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   117
};

static const yytype_int16 yycheck[] =
{
       1,     8,    48,    48,     5,    16,   103,    48,    17,    28,
      56,    56,     3,     5,    63,    56,     5,     5,     3,     3,
     138,    29,    18,    39,    30,    74,    75,     3,     9,     5,
       3,    47,    21,    21,     3,    46,     5,     0,    14,    30,
      36,    48,    44,    19,     9,    56,    52,    48,    94,    94,
      19,    97,    97,    94,    46,    56,    97,   106,   107,   108,
     109,    46,    46,    44,    40,    41,    42,    43,     5,     6,
       7,    82,    31,    42,    43,   124,    52,   174,     5,    98,
       9,    46,   179,    94,    21,    22,    97,     9,    97,    19,
      45,   223,    47,    94,   139,     5,    97,     3,     4,    19,
     146,   146,    32,   221,    35,   146,   224,     3,    45,     5,
       3,    21,     5,     3,    46,     5,    44,    46,    50,    33,
     252,    18,    18,    19,    46,    18,    19,     5,    46,    19,
     262,   263,    50,   152,   231,   146,    39,   146,     5,     6,
       7,   259,    45,    37,    47,   146,    42,    43,    21,    42,
      43,     5,    42,    43,    21,    22,    52,    12,    13,    52,
      46,     3,    52,     5,    50,    33,   215,     5,     6,     7,
       5,     6,     7,     5,     6,     7,    18,    19,    17,    46,
       3,    46,     5,    21,    22,    50,    21,    22,    51,    21,
      22,    14,    10,    11,    12,    13,    19,    48,    46,    46,
      42,    43,    50,    50,    45,   251,   251,    44,    46,   254,
     251,    46,    46,    34,    46,    45,    50,    40,    41,    42,
      43,     5,     6,     7,     5,     6,     7,    44,    46,     5,
       6,     7,    10,    11,    12,    13,    20,    21,    22,    20,
      21,    22,    44,    46,   251,    21,    22,    50,    15,    16,
     251,    10,    11,    12,    13,    10,    11,    12,    13,    45,
      45,    45,    44,     5,    45,    38,     5,    39,    46,    45,
      10,    11,    12,    13,    10,    11,    12,    13,     5,     6,
       7,     5,     6,     7,    21,    51,    44,    46,    45,    45,
      44,    46,    45,    39,    21,    22,    44,    21,    22,    45,
      44,    47,    34,    21,    45,     5,    46,    53,     5,    44,
      46,    44,    21,    44,    44,    44,     3,    21,    21,    45,
      39,    49,    47,    44,    44,    48,    48,    44,    44,    44,
       8,     8,    44,    21,    45,    49,     5,    50,    48,    21,
      48,    39,   170,    45,    51,    46,   228,    94,    -1,   241,
     176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    29,    55,    56,     3,    57,    61,     0,    31,    58,
       5,    30,    61,    44,    19,    64,    65,    35,    59,    39,
      47,    44,     3,     4,    33,    32,    64,    18,    71,    72,
      37,    60,     5,     6,     7,    20,    21,    22,    45,    21,
       5,     5,     5,    42,    43,    61,    65,    66,    69,    74,
      78,    79,    33,    17,    36,    72,    51,    66,     5,     6,
       7,    21,    22,    45,    75,    76,    77,    48,    45,    45,
      39,    45,    47,    53,    45,    45,    44,    34,    14,    40,
      41,    61,    65,    74,    78,    79,    82,    84,    85,    44,
      44,    44,    66,     5,    51,    61,    64,    70,    71,    74,
      78,    79,    38,    45,    47,    77,    10,    11,    12,    13,
      46,    39,     3,    46,    67,    68,    46,    67,     5,     6,
       7,    20,    21,    22,    45,     5,     6,     7,    21,    22,
      46,    80,    81,    21,     5,    77,    77,    45,    45,    45,
      44,    44,    44,    44,    34,    45,    70,    44,    44,    52,
      61,    64,    71,    74,    78,    79,    44,    44,    44,    46,
      80,    21,    46,    77,    77,    77,    77,    49,     5,    46,
      50,    46,    47,    77,    45,    46,    50,    48,    39,    45,
      47,    46,    46,     5,    21,    86,    86,    74,     5,    46,
      73,    52,    44,    44,    44,    44,    44,    46,    48,    21,
      62,    63,    68,    21,    46,    46,    80,     5,    81,    39,
       5,     6,     7,    21,    22,    45,    46,    80,    21,     8,
       8,     9,    46,    46,    44,    46,    50,    49,    50,    48,
      46,    45,    21,    77,    46,    48,     5,    21,     5,    21,
      86,    51,    83,    83,    86,     5,    62,    80,    46,    39,
      52,    69,    15,    16,    44,    46,    21,    52,    83,    45,
      74,    86,    46,    46,    83,    83
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    56,    57,    57,    58,    59,    60,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    62,
      62,    63,    64,    64,    64,    64,    65,    65,    66,    67,
      67,    68,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    71,
      71,    71,    72,    72,    73,    73,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    75,    75,    75,    75,
      76,    76,    76,    76,    76,    77,    77,    77,    77,    77,
      77,    78,    79,    80,    80,    80,    80,    80,    80,    81,
      81,    81,    81,    81,    82,    82,    82,    83,    83,    84,
      85,    86,    86,    86,    86,    86
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     3,     2,     3,     3,     3,     3,     2,
       4,     4,     4,     4,     4,     4,     6,     9,     5,     3,
       1,     1,     6,     5,     6,     5,     4,     5,     1,     1,
       3,     2,     2,     2,     3,     2,     3,     2,     2,     3,
       2,     1,     2,     2,     3,     0,     2,     2,     1,     2,
       3,     2,     3,     3,     2,     3,     2,     3,     0,     4,
       5,     0,     6,     5,     1,     3,     6,     3,     3,     3,
       3,     3,     3,     4,     3,     5,     5,     5,     5,     5,
       5,     6,     5,     7,     8,     6,     1,     4,     1,     1,
       1,     1,     1,     4,     3,     3,     3,     3,     3,     3,
       1,     4,     4,     1,     3,     4,     3,     6,     0,     1,
       1,     1,     1,     1,     5,     7,    10,     2,     3,     5,
       9,     3,     3,     3,     3,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* progr: global definitions clase bloc  */
#line 49 "limbaj.y"
                                     {
     tabel();
     tabelFunct();
     }
#line 1485 "y.tab.c"
    break;

  case 3: /* global: BGIN_GLOBAL declaratii END_GLOBAL  */
#line 55 "limbaj.y"
                                         {
          strcpy(scope, "local"); // se asigneaza pentru urmatorul bloc
}
#line 1493 "y.tab.c"
    break;

  case 6: /* definitions: BGIN_DEF funct END_DEF  */
#line 64 "limbaj.y"
                                    {
     strcpy(scope, "clase");
}
#line 1501 "y.tab.c"
    break;

  case 7: /* clase: BGIN_CLS classes END_CLS  */
#line 69 "limbaj.y"
                                {
     strcpy(scope, "main");}
#line 1508 "y.tab.c"
    break;

  case 8: /* bloc: BGIN_MAIN other END_MAIN  */
#line 73 "limbaj.y"
                               {
     }
#line 1515 "y.tab.c"
    break;

  case 9: /* declaratie: TIP ID  */
#line 79 "limbaj.y"
                   { 
               if( insertVar((yyvsp[0].strval), (yyvsp[-1].strval), scope) == 0){ // variabila nu a fost deja declarata 
                    //printf("variabila %s s-a declarat\n", $2); 
               }
               else {printf("[error, linia %d]variabila exista\n", yylineno);
               return -1;}
                    
          }
#line 1528 "y.tab.c"
    break;

  case 10: /* declaratie: TIP ID ASSIGN ID  */
#line 88 "limbaj.y"
                             {
               if( insertVar((yyvsp[-2].strval), (yyvsp[-3].strval), scope) == 0){  //daca exista prima variabila. daca nu, o inseram in tabel
                    //printf("variabila %s s-a declarat\n", $2); 
                    if(existsVar((yyvsp[0].strval), scope)!=-1 && typeVerify((yyvsp[-2].strval), (yyvsp[0].strval)) == 1) // daca exista si variabila 2 si au acelasi tip
                    { 
                         insertValVar((yyvsp[-2].strval),(yyvsp[0].strval)); // a = b
                         //printf("am inserat in variabila %s valoarea variabilei %s\n", $2, $4);
                    }
                    else {printf("[error, linia %d]nu se poate face asignarea\n", yylineno);
                    return -1;}
               } 
               else {printf("[error, linia %d]variabila exista\n", yylineno); return -1;}
          }
#line 1546 "y.tab.c"
    break;

  case 11: /* declaratie: TIP ID ASSIGN NR  */
#line 101 "limbaj.y"
                           { 
               if( insertVar((yyvsp[-2].strval), (yyvsp[-3].strval), scope) == 0){ 
                    //printf("variabila %s s-a declarat\n", $2); 
                    if(strcmp((yyvsp[-3].strval), "int")==0){
                         insertValInt((yyvsp[-2].strval), (yyvsp[0].intval));
                    }
                    else {printf("[error,linia %d]nu au acelasi tip: int. Nu se poate face asignarea.\n", yylineno);  return -1;}
               } 
               else {printf("[error, linia %d]variabila exista\n", yylineno); return-1;}
         }
#line 1561 "y.tab.c"
    break;

  case 12: /* declaratie: TIP ID ASSIGN FLOAT_NR  */
#line 111 "limbaj.y"
                                 { 
               if( insertVar((yyvsp[-2].strval), (yyvsp[-3].strval), scope) == 0){ 
                    //printf("variabila %s s-a declarat\n", $2); 
                    if(strcmp((yyvsp[-3].strval), "float")==0){
                         insertValFloat((yyvsp[-2].strval), (yyvsp[0].floatval));
                    }
                    else {printf("[error,linia %d]nu au acelasi tip: float. Nu se poate face asignarea.\n", yylineno);  return-1;}
               } 
               else {printf("[error, linia %d]variabila exista\n", yylineno); return-1;}
         }
#line 1576 "y.tab.c"
    break;

  case 13: /* declaratie: TIP ID ASSIGN CHARACTER  */
#line 121 "limbaj.y"
                                   {
               if( insertVar((yyvsp[-2].strval), (yyvsp[-3].strval), scope) == 0){ 
                    //printf("variabila %s s-a declarat\n", $2); 
                    if(strcmp((yyvsp[-3].strval), "char")==0){
                         insertValChar((yyvsp[-2].strval), (yyvsp[0].strval));
                    }
                    else {printf("[error,linia %d]nu au acelasi tip: int. Nu se poate face asignarea.\n", yylineno);  return-1;}
               } 
               else {printf("[error, linia %d]variabila exista\n", yylineno); return-1;}
         }
#line 1591 "y.tab.c"
    break;

  case 14: /* declaratie: TIP ID ASSIGN STRING  */
#line 131 "limbaj.y"
                               {
               if( insertVar((yyvsp[-2].strval), (yyvsp[-3].strval), scope) == 0){ 
                    //printf("variabila %s s-a declarat\n", $2); 
                    if(strcmp((yyvsp[-3].strval), "string")==0){
                         insertValString((yyvsp[-2].strval), (yyvsp[0].strval));
                    }
                    else { printf("[error,linia %d]nu au acelasi tip: int. Nu se poate face asignarea.\n", yylineno);  return-1;}
               } 
               else {printf("[error, linia %d]variabila exista\n", yylineno); return-1;}
         }
#line 1606 "y.tab.c"
    break;

  case 15: /* declaratie: TIP ID ASSIGN BOOLTNK  */
#line 141 "limbaj.y"
                                 {
               if( insertVar((yyvsp[-2].strval), (yyvsp[-3].strval), scope) == 0){ 
                    //printf("variabila %s s-a declarat\n", $2); 
                    if(strcmp((yyvsp[-3].strval), "bool")==0){
                         if(strcmp((yyvsp[0].strval), "true")==0){
                              insertValString((yyvsp[-2].strval), (yyvsp[0].strval));
                         }
                         else if(strcmp((yyvsp[0].strval), "false")==0){
                              insertValString((yyvsp[-2].strval), (yyvsp[0].strval));
                         }
                         else {printf("[error,linia %d]nu ati introdus o valoare corecta.\n", yylineno); return-1;}
                    }
                    else {printf("[error,linia %d]nu au acelasi tip: int. Nu se poate face asignarea.\n", yylineno);  return-1;}
               } 
               else {printf("[error, linia %d]variabila exista\n", yylineno); return-1;}
         }
#line 1627 "y.tab.c"
    break;

  case 16: /* declaratie: TIP ID ASSIGN '(' exp ')'  */
#line 157 "limbaj.y"
                                    {
               if( insertVar((yyvsp[-4].strval), (yyvsp[-5].strval), scope) == 0){ 
                    //printf("variabila %s s-a declarat\n", $2); 
                    if(strcmp((yyvsp[-5].strval), "int")==0){
                         int value = evalAST((struct node*)(yyvsp[-1].node));
                         insertValInt((yyvsp[-4].strval), value);
                    }
                    else {printf("[error, linia %d]nu au acelasi tip: char. Nu se poate face asignarea.\n", yylineno);  return-1;}
               } 
               else {printf("[error, linia %d]variabila exista\n", yylineno); return-1;}

         }
#line 1644 "y.tab.c"
    break;

  case 17: /* declaratie: TIP ID '[' NR ']' ASSIGN '~' list_val '~'  */
#line 169 "limbaj.y"
                                                      { // int arr[3] = ~8,2,3~
               char nr_to_str[33] , name_arr[33];
               sprintf(nr_to_str, "%d", (yyvsp[-5].intval));

               strcpy(name_arr, "");
               strcat(name_arr, (yyvsp[-7].strval));
               strcat(name_arr, "[");
               strcat(name_arr, nr_to_str);
               strcat(name_arr, "]");

               if(existArr((yyvsp[-7].strval)) == 0) // daca nu exista array cu numele dat
               {
                    if( insertVar(name_arr, (yyvsp[-8].strval), scope) == 0){ 
                         //printf("vectorul %s s-a declarat\n", name_arr); 
                         strcat(arr_values, "~ ");

                         insertValString(name_arr, arr_values); 
                    } 
               }
               else {printf("[error, linia %d]vectorul exista\n", yylineno); return-1;}

               strcpy(arr_values, " ");
               arr_values[0] = '\0';
          }
#line 1673 "y.tab.c"
    break;

  case 18: /* declaratie: TIP ID '[' NR ']'  */
#line 193 "limbaj.y"
                             {
               char nr_to_str[33] , name_arr[33];
               sprintf(nr_to_str, "%d", (yyvsp[-1].intval));

               strcpy(name_arr, "");
               strcat(name_arr, (yyvsp[-3].strval));
               strcat(name_arr, "[");
               strcat(name_arr, nr_to_str);
               strcat(name_arr, "]");

               if(existArr((yyvsp[-3].strval)) == 0) // daca nu exista array cu numele dat
               {
                    if( insertVar(name_arr, (yyvsp[-4].strval), scope) == 0){ 
                         //printf("vectorul %s s-a declarat\n", name_arr); 
                    } 
               }
               else {printf("[error, linia %d]vectorul exista\n", yylineno); return-1;}
          }
#line 1696 "y.tab.c"
    break;

  case 21: /* val: NR  */
#line 218 "limbaj.y"
          { 
          char buffer[33];
          sprintf(buffer, "%d", (yyvsp[0].intval));
          if(arr_values[0] != '~')
          strcat(arr_values, "~ ");
          strcat(arr_values, buffer); 
          strcat(arr_values, " "); 
     }
#line 1709 "y.tab.c"
    break;

  case 22: /* funct_decl: FCT TIP ID '(' lista_param ')'  */
#line 230 "limbaj.y"
                                           {
               strcat(numeClaseFunctii, (yyvsp[-3].strval));
               strcat(numeClaseFunctii,"\0");
               UpdateParams((yyvsp[-3].strval));
               strcpy(numeClaseFunctii,"\0");
               strcpy(numeParametru,"\0");
               if( insertFunct((yyvsp[-3].strval), (yyvsp[-4].strval), params, (yyvsp[-3].strval)) == 0){
                    //printf("functia %s s-a declarat \n", $3);
               }
               else {printf("[error, linia %d]functia exista\n", yylineno); return-1;}
               strcpy(params, " ");
               //strcpy(scope, $3);
              }
#line 1727 "y.tab.c"
    break;

  case 23: /* funct_decl: FCT TIP ID '(' ')'  */
#line 244 "limbaj.y"
                               {
                if( insertFunct((yyvsp[-2].strval), (yyvsp[-3].strval), " ", (yyvsp[-2].strval)) == 0){
                    //printf("functia %s s-a declarat\n", $3);
               }
               else {printf("[error, linia %d]functia exista\n", yylineno); return-1;}
               strcpy(params, " ");
               //strcpy(bufferClsFnct, $3);
              }
#line 1740 "y.tab.c"
    break;

  case 24: /* funct_decl: FCT VOID ID '(' lista_param ')'  */
#line 252 "limbaj.y"
                                           {
               strcat(numeClaseFunctii, (yyvsp[-3].strval));
               strcat(numeClaseFunctii,"\0");
               UpdateParams( (yyvsp[-3].strval));
               strcpy(numeClaseFunctii,"\0");
               strcpy(numeParametru,"\0");
               if( insertFunct((yyvsp[-3].strval), (yyvsp[-4].strval), params, (yyvsp[-3].strval)) == 0){
                    //printf("functia %s s-a declarat \n", $3);
               }
               else {printf("[error, linia %d]functia exista\n", yylineno); return-1;}
               strcpy(params, " ");
               //strcpy(bufferClsFnct, $3);
          }
#line 1758 "y.tab.c"
    break;

  case 25: /* funct_decl: FCT VOID ID '(' ')'  */
#line 265 "limbaj.y"
                               {
               if( insertFunct((yyvsp[-2].strval), (yyvsp[-3].strval), " ", (yyvsp[-2].strval)) == 0){
                    //printf("functia %s s-a declarat\n", $3);
               }
               else {printf("[error, linia %d]functia exista\n", yylineno); return-1;}
               strcpy(params, " ");
               //strcpy(bufferClsFnct, $3);
          }
#line 1771 "y.tab.c"
    break;

  case 31: /* param: TIP ID  */
#line 285 "limbaj.y"
               {
          strcat(params, (yyvsp[-1].strval)); 
          strcat(params, " "); 
          strcat(params, (yyvsp[0].strval)); 
          strcat(params, " ");
          
          strcat(numeParametru, (yyvsp[0].strval));
          strcat(numeParametru, " ");

          if( insertVar((yyvsp[0].strval), (yyvsp[-1].strval), scope) == 0){ // variabila nu a fost deja declarata 
               //printf("variabila %s s-a declarat\n", $2); 
          }
          else {printf("[error, linia %d]variabila exista\n", yylineno);  return-1;}      
          }
#line 1790 "y.tab.c"
    break;

  case 62: /* classes_declarations: CLS TYPE ID '(' param_clase ')'  */
#line 340 "limbaj.y"
                                                     {
               strcat(numeClaseFunctii, (yyvsp[-3].strval));
               strcat(numeClaseFunctii,"\0");
               UpdateParams((yyvsp[-3].strval));
               strcpy(numeClaseFunctii,"\0");
               strcpy(numeParametru,"\0");
               if( insertFunct((yyvsp[-3].strval), (yyvsp[-4].strval), params_clase, (yyvsp[-3].strval)) == 0){
                    //printf("clasa %s s-a declarat \n", $3);
               }
               else {printf("[error, linia %d]clasa exista\n", yylineno); return-1;}
               strcpy(params_clase, " ");
               //strcpy(bufferClsFnct, $3);
               }
#line 1808 "y.tab.c"
    break;

  case 63: /* classes_declarations: CLS TYPE ID '(' ')'  */
#line 353 "limbaj.y"
                                 {
               if( insertFunct((yyvsp[-2].strval), (yyvsp[-3].strval), " ", (yyvsp[-2].strval)) == 0){
                    //printf("clasa %s s-a declarat\n", $3);
               }
               else {printf("[error, linia %d]clasa exista\n", yylineno); return-1;}
               strcpy(params_clase, " ");
               //strcpy(bufferClsFnct, $3);
               }
#line 1821 "y.tab.c"
    break;

  case 64: /* param_clase: ID  */
#line 363 "limbaj.y"
                {
          strcat(numeParametru, (yyvsp[0].strval));
          strcat(numeParametru, " ");
          strcat(params_clase, (yyvsp[0].strval)); 
          strcat(params_clase, " ");  
          if( insertVar((yyvsp[0].strval), " ", scope) == 0){ // variabila nu a fost deja declarata 
               //printf("variabila %s s-a declarat\n", $1); 
          }
          else {printf("[error, linia %d]variabila exista\n", yylineno); return-1;}
     }
#line 1836 "y.tab.c"
    break;

  case 65: /* param_clase: param_clase ',' ID  */
#line 373 "limbaj.y"
                         {
          strcat(numeParametru, (yyvsp[0].strval));
          strcat(numeParametru, " ");
          strcat(params_clase, (yyvsp[0].strval)); 
          strcat(params_clase, " "); 
          if( insertVar((yyvsp[0].strval), " ", scope) == 0){ // variabila nu a fost deja declarata 
               //printf("variabila %s s-a declarat\n", $3); 
          }
          else {printf("[error, linia %d]variabila exista\n", yylineno); return-1;}
     }
#line 1851 "y.tab.c"
    break;

  case 66: /* statement: ID ASSIGN ID '[' NR ']'  */
#line 386 "limbaj.y"
                                  {
          char buff[50];
          sprintf(buff,"%s[%d]",(yyvsp[-3].strval), (yyvsp[-1].intval));
          if(existsVar((yyvsp[-5].strval), scope)!=-1 && existsVar(buff, scope)!=-1 ){
               //printf("variabilele %s si %s exista. se poate face asignarea\n", $1, $3);
                    if(typeVerify((yyvsp[-5].strval), (yyvsp[-3].strval)) == 1){ 
                         insertValVar((yyvsp[-5].strval),(yyvsp[-3].strval)); 
                    }
                    else {printf("[error, linia %d]variabilele nu au acelasi tip. nu se poate face asignarea.\n", yylineno); return-1;}
               }
         }
#line 1867 "y.tab.c"
    break;

  case 67: /* statement: ID ASSIGN ID  */
#line 397 "limbaj.y"
                         {
               if(existsVar((yyvsp[-2].strval), scope)!=-1 && existsVar((yyvsp[0].strval), scope)!=-1 ){
                    //printf("variabilele %s si %s exista. se poate face asignarea\n", $1, $3);
                    if(typeVerify((yyvsp[-2].strval), (yyvsp[0].strval)) == 1){ 
                         insertValVar((yyvsp[-2].strval),(yyvsp[0].strval)); 
                    }
                    else {printf("[error, linia %d]variabilele nu au acelasi tip. nu se poate face asignarea.\n", yylineno); return-1;}
               }
               else
                    {printf("[error, linia %d]variabilele nu exista \n", yylineno); return-1;}
          }
#line 1883 "y.tab.c"
    break;

  case 68: /* statement: ID ASSIGN NR  */
#line 408 "limbaj.y"
                       { // a := 10
               if(existsVar((yyvsp[-2].strval),scope)!=-1){  
                    //printf("variabila %s exista.se poate face asignarea\n", $1);
                    if(strcmp(returnType((yyvsp[-2].strval)), "int")==0){
                         insertValInt((yyvsp[-2].strval), (yyvsp[0].intval));
                    }
                    else {printf("[error,linia %d]nu au acelasi tip: int. Nu se poate face asignarea.\n", yylineno);   return-1;}
              }                 
               else {printf("[error,linia %d]variabila nu exista \n", yylineno); return-1;}
         }
#line 1898 "y.tab.c"
    break;

  case 69: /* statement: ID ASSIGN FLOAT_NR  */
#line 418 "limbaj.y"
                             {  
               if(existsVar((yyvsp[-2].strval),scope)!=-1){  
                    //printf("variabila %s exista.se poate face asignarea\n", $1);
                    if(strcmp(returnType((yyvsp[-2].strval)), "float")==0){
                         insertValFloat((yyvsp[-2].strval), (yyvsp[0].floatval));
                    }
                    else {printf("[error, linia %d]nu au acelasi tip: float. Nu se poate face asignarea.\n", yylineno);  return-1;} 
              }                 
               else {printf("[error, linia %d]variabila nu exista \n", yylineno); return-1;}
         }
#line 1913 "y.tab.c"
    break;

  case 70: /* statement: ID ASSIGN CHARACTER  */
#line 428 "limbaj.y"
                               {
               if(existsVar((yyvsp[-2].strval), scope)!=-1){  
                    //printf("variabila %s exista.se poate face asignarea\n", $1);
                    if(strcmp(returnType((yyvsp[-2].strval)), "char")==0){
                         insertValChar((yyvsp[-2].strval), (yyvsp[0].strval));
                    }
                    else {printf("[error, linia %d]nu au acelasi tip: char. Nu se poate face asignarea.\n", yylineno);  return-1;} 
              }                 
               else {printf("[error, linia %d]variabila nu exista \n", yylineno); return-1;}
         }
#line 1928 "y.tab.c"
    break;

  case 71: /* statement: ID ASSIGN STRING  */
#line 438 "limbaj.y"
                           {
               if(existsVar((yyvsp[-2].strval), scope)!=-1){  
                    //printf("variabila %s exista.se poate face asignarea\n", $1);
                    if(strcmp(returnType((yyvsp[-2].strval)), "string")==0){
                         insertValString((yyvsp[-2].strval), (yyvsp[0].strval));
                    }
                    else {printf("[error, linia %d]nu au acelasi tip: char. Nu se poate face asignarea.\n", yylineno);   return-1;}
              }                 
               else {printf("[error, linia %d]variabila nu exista\n", yylineno); return-1;}
         }
#line 1943 "y.tab.c"
    break;

  case 72: /* statement: ID ASSIGN BOOLTNK  */
#line 448 "limbaj.y"
                             {
               if(existsVar((yyvsp[-2].strval), scope)!=-1){  
                    //printf("variabila %s exista.se poate face asignarea\n", $1);
                    if(strcmp(returnType((yyvsp[-2].strval)), "bool")==0){
                         insertValString((yyvsp[-2].strval), (yyvsp[0].strval));
                    }
                    else {printf("[error, linia %d]nu au acelasi tip: bool. Nu se poate face asignarea.\n", yylineno);  return-1;} 
              }                 
               else {printf("[error, linia %d]variabila nu exista\n", yylineno); return-1;}
         }
#line 1958 "y.tab.c"
    break;

  case 73: /* statement: ID '(' lista_apel ')'  */
#line 458 "limbaj.y"
                                {
               if(existsFunct((yyvsp[-3].strval))!=-1){
                    //printf("functia %s exista.se poate apela\n", $1);
                    paramsTypeVerify((yyvsp[-3].strval),typeDecl);
               }
               else {printf("[error,linia %d]functia nu exista\n", yylineno); return-1;}
               strcpy(typeDecl, " ");
         }
#line 1971 "y.tab.c"
    break;

  case 74: /* statement: ID '(' ')'  */
#line 466 "limbaj.y"
                     {
               if(existsFunct((yyvsp[-2].strval))!=-1){
                    //printf("functia %s exista. se poate apela\n", $1);
                    paramsTypeVerify((yyvsp[-2].strval),typeDecl);
               }
               else {printf("[error,linia %d]functia nu exista\n", yylineno);return-1;}
               strcpy(typeDecl, " ");
         }
#line 1984 "y.tab.c"
    break;

  case 75: /* statement: ID ASSIGN '(' exp ')'  */
#line 474 "limbaj.y"
                                {
               if(existsVar((yyvsp[-4].strval), scope)!=-1){  
                    //printf("variabila %s exista.se poate face asignarea\n", $1);
                    if(strcmp(returnType((yyvsp[-4].strval)), "int")==0){
                         int value = evalAST((struct node*)(yyvsp[-1].node));
                         insertValInt((yyvsp[-4].strval), value);
                    }
                    else {printf("[error, linia %d]nu au acelasi tip: char. Nu se poate face asignarea.\n", yylineno); return-1;}   
               }                 
               else {printf("[error, linia %d]variabila nu exista\n", yylineno); return-1;}
         }
#line 2000 "y.tab.c"
    break;

  case 76: /* statement: ID '.' ID ASSIGN ID  */
#line 485 "limbaj.y"
                               {
               if(existsVar((yyvsp[-4].strval), scope)==-2){
               if(existsVar((yyvsp[-2].strval), "clase")!=-1 && existsVar((yyvsp[0].strval), scope)!=-1 ){
                    //printf("variabilele %s si %s exista. se poate face asignarea\n", $1, $3);
                    if(typeVerify((yyvsp[-2].strval), (yyvsp[0].strval)) == 1){ 
                         insertValVar((yyvsp[-2].strval),(yyvsp[0].strval)); 
                    }
                    else {printf("[error, linia %d]variabilele nu au acelasi tip. nu se poate face asignarea.\n", yylineno); return-1;}
               }
               else
                    {printf("[error, linia %d]variabilele nu exista \n", yylineno); return-1;}}
               else {printf("[error, linia %d]variabila de tip clasa nu exista \n", yylineno); return-1;}
          }
#line 2018 "y.tab.c"
    break;

  case 77: /* statement: ID '.' ID ASSIGN NR  */
#line 498 "limbaj.y"
                              {
               if(existsVar((yyvsp[-4].strval), "clase")==-2){
               if(existsVar((yyvsp[-2].strval),"clase")!=-1){  
                   
                    //printf("variabila %s exista.se poate face asignarea\n", $1);
                    if(strcmp(returnType((yyvsp[-2].strval)), "int")==0){
                         insertValInt((yyvsp[-2].strval), (yyvsp[0].intval));
                    }
                    else {printf("[error,linia %d]nu au acelasi tip: int. Nu se poate face asignarea.\n", yylineno);   return-1;}
              }                 
               else {printf("[error,linia %d]variabila nu exista \n", yylineno); return-1;}}
               else {printf("[error, linia %d]variabila de tip clasa nu exista \n", yylineno); return-1;}
         }
#line 2036 "y.tab.c"
    break;

  case 78: /* statement: ID '.' ID ASSIGN FLOAT_NR  */
#line 511 "limbaj.y"
                                    {  
               if(existsVar((yyvsp[-4].strval), "clase")==-2){
               if(existsVar((yyvsp[-2].strval),"clase")!=-1){  
                    //printf("variabila %s exista.se poate face asignarea\n", $1);
                    if(strcmp(returnType((yyvsp[-2].strval)), "float")==0){
                         insertValFloat((yyvsp[-2].strval), (yyvsp[0].floatval));
                    }
                    else {printf("[error, linia %d]nu au acelasi tip: float. Nu se poate face asignarea.\n", yylineno); return-1;}  
              }                 
               else {printf("[error, linia %d]variabila nu exista \n", yylineno); return-1;}}
               else {printf("[error, linia %d]variabila de tip clasa nu exista \n", yylineno); return-1;}
         }
#line 2053 "y.tab.c"
    break;

  case 79: /* statement: ID '.' ID ASSIGN CHARACTER  */
#line 523 "limbaj.y"
                                      {
               if(existsVar((yyvsp[-4].strval), "clase")==-2){
               if(existsVar((yyvsp[-2].strval), "clase")!=-1){  
                    //printf("variabila %s exista.se poate face asignarea\n", $1);
                    if(strcmp(returnType((yyvsp[-2].strval)), "char")==0){
                         insertValChar((yyvsp[-2].strval), (yyvsp[0].strval));
                    }
                    else {printf("[error, linia %d]nu au acelasi tip: char. Nu se poate face asignarea.\n", yylineno);   return-1;}
               }               
               else {printf("[error, linia %d]variabila nu exista \n", yylineno); return-1;}
               }
               else {printf("[error, linia %d]variabila de tip clasa nu exista \n", yylineno); return-1;}
         }
#line 2071 "y.tab.c"
    break;

  case 80: /* statement: ID '.' ID ASSIGN STRING  */
#line 536 "limbaj.y"
                                  {
               if(existsVar((yyvsp[-4].strval), "clase")==-2){
               if(existsVar((yyvsp[-2].strval), "clase")!=-1){  
                    //printf("variabila %s exista.se poate face asignarea\n", $1);
                    if(strcmp(returnType((yyvsp[-2].strval)), "string")==0){
                         insertValString((yyvsp[-2].strval), (yyvsp[0].strval));
                    }
                    else {printf("[error, linia %d]nu au acelasi tip: char. Nu se poate face asignarea.\n", yylineno);   return-1;}
              }                 
               else {printf("[error, linia %d]variabila nu exista\n", yylineno); return-1;}}
               else {printf("[error, linia %d]variabila de tip clasa nu exista \n", yylineno); return-1;}
         }
#line 2088 "y.tab.c"
    break;

  case 81: /* statement: ID '.' ID '(' lista_apel ')'  */
#line 549 "limbaj.y"
                                       {
               if(existsVar((yyvsp[-5].strval), "clase")==-2){
               if(FunctScope((yyvsp[-3].strval))!=-1){
                    //printf("functia %s exista.se poate apela\n", $1);
                    paramsTypeVerify((yyvsp[-3].strval),typeDecl);
               }
               else {printf("[error,linia %d]functia nu exista\n", yylineno);return-1;}}
               else {printf("[error, linia %d]variabila de tip clasa nu exista \n", yylineno); return-1;}
               strcpy(typeDecl, " ");
         }
#line 2103 "y.tab.c"
    break;

  case 82: /* statement: ID '.' ID '(' ')'  */
#line 559 "limbaj.y"
                            {
               if(existsVar((yyvsp[-4].strval), "clase")==-2){
               if(FunctScope((yyvsp[-2].strval))!=-1){
                    //printf("functia %s exista. se poate apela\n", $1);
                    paramsTypeVerify((yyvsp[-2].strval),typeDecl);
               }
               else {printf("[error,linia %d]functia nu exista\n", yylineno); return-1;}}
               else {printf("[error, linia %d]variabila de tip clasa nu exista \n", yylineno); return-1;}
               strcpy(typeDecl, " ");
         }
#line 2118 "y.tab.c"
    break;

  case 83: /* statement: ID '.' ID ASSIGN '(' exp ')'  */
#line 569 "limbaj.y"
                                       {
               if(existsVar((yyvsp[-6].strval), "clase")==-2){
               if(existsVar((yyvsp[-4].strval), "clase")!=-1){  
                    //printf("variabila %s exista.se poate face asignarea\n", $1);
                    if(strcmp(returnType((yyvsp[-4].strval)), "int")==0){
                         int value = evalAST((struct node*)(yyvsp[-1].node));
                         insertValInt((yyvsp[-4].strval), value);
                    }
                    else {printf("[error, linia %d]nu au acelasi tip: char. Nu se poate face asignarea.\n", yylineno);  return-1;}  
               }                 
               else {printf("[error, linia %d]variabila nu exista\n", yylineno); return-1;}}
               else {printf("[error, linia %d]variabila de tip clasa nu exista \n", yylineno); return-1;}
         }
#line 2136 "y.tab.c"
    break;

  case 84: /* statement: ID '.' ID '[' NR ']' ASSIGN NR  */
#line 582 "limbaj.y"
                                          {
               if(existsVar((yyvsp[-7].strval), "clase")==-2){
               insertArrValue((yyvsp[-5].strval), (yyvsp[-3].intval), scope, (yyvsp[0].intval));}
               else {printf("[error, linia %d]variabila de tip clasa nu exista \n", yylineno); return-1;}
           }
#line 2146 "y.tab.c"
    break;

  case 85: /* statement: ID '[' NR ']' ASSIGN NR  */
#line 587 "limbaj.y"
                                     { // arr[0] := 8 
                    insertArrValue((yyvsp[-5].strval), (yyvsp[-3].intval), scope, (yyvsp[0].intval));
         }
#line 2154 "y.tab.c"
    break;

  case 86: /* value: NR  */
#line 593 "limbaj.y"
          {
          struct node* node = (struct node*)malloc(sizeof(struct node));
          node->value.number = (yyvsp[0].intval);
          (yyval.node) = (struct node*)buildAST((struct node*)node, NULL, NULL, "int");
     }
#line 2164 "y.tab.c"
    break;

  case 87: /* value: ID '[' NR ']'  */
#line 598 "limbaj.y"
                    {
          struct node* node = (struct node*)malloc(sizeof(struct node));
          node->value.number = 0;
          (yyval.node) = (struct node*)buildAST((struct node*)node, NULL, NULL, "vector");
     }
#line 2174 "y.tab.c"
    break;

  case 88: /* value: altceva  */
#line 603 "limbaj.y"
               {
          struct node* node = (struct node*)malloc(sizeof(struct node));
          node->value.number = 0;
          (yyval.node) = (struct node*)buildAST((struct node*)node, NULL, NULL, "altceva");
     }
#line 2184 "y.tab.c"
    break;

  case 89: /* value: ID  */
#line 608 "limbaj.y"
          {
          struct node* node = (struct node*)malloc(sizeof(struct node));
          strcpy(node->value.identifier, (yyvsp[0].strval));
          (yyval.node) = (struct node*)buildAST((struct node*)node, NULL, NULL, "id");
     }
#line 2194 "y.tab.c"
    break;

  case 95: /* exp: exp PLUS exp  */
#line 622 "limbaj.y"
                  {
          struct node* node = (struct node*)malloc(sizeof(struct node));
          strcpy(node->value.op, (yyvsp[-1].strval));
          (yyval.node) = (struct node*)buildAST((struct node*)node, (struct node*)(yyvsp[-2].node), (struct node*)(yyvsp[0].node), "op");
     }
#line 2204 "y.tab.c"
    break;

  case 96: /* exp: exp MUL exp  */
#line 627 "limbaj.y"
                 {
          struct node* node = (struct node*)malloc(sizeof(struct node));
          strcpy(node->value.op, (yyvsp[-1].strval));
          (yyval.node) = (struct node*)buildAST((struct node*)node, (struct node*)(yyvsp[-2].node), (struct node*)(yyvsp[0].node), "op");
     }
#line 2214 "y.tab.c"
    break;

  case 97: /* exp: exp DIV exp  */
#line 632 "limbaj.y"
                  {
          struct node* node = (struct node*)malloc(sizeof(struct node));
          strcpy(node->value.op, (yyvsp[-1].strval));
          (yyval.node) = (struct node*)buildAST((struct node*)node, (struct node*)(yyvsp[-2].node), (struct node*)(yyvsp[0].node), "op");
     }
#line 2224 "y.tab.c"
    break;

  case 98: /* exp: exp MINUS exp  */
#line 637 "limbaj.y"
                    {
          struct node* node = (struct node*)malloc(sizeof(struct node));
          strcpy(node->value.op, (yyvsp[-1].strval));
          (yyval.node) = (struct node*)buildAST((struct node*)node, (struct node*)(yyvsp[-2].node), (struct node*)(yyvsp[0].node), "op");
     }
#line 2234 "y.tab.c"
    break;

  case 99: /* exp: '(' exp ')'  */
#line 642 "limbaj.y"
                   {(yyval.node) = (yyvsp[-1].node);}
#line 2240 "y.tab.c"
    break;

  case 101: /* eval: EVAL '(' exp ')'  */
#line 646 "limbaj.y"
                       {
          int value = evalAST((struct node*)(yyvsp[-1].node));
          printf("Rezultatul calculului: %d\n", value);
     }
#line 2249 "y.tab.c"
    break;

  case 102: /* TypeOf: TYPEOF '(' exp ')'  */
#line 652 "limbaj.y"
                          {
     if(typeofAST((struct node*)(yyvsp[-1].node))!="eroare"){
     printf("Expresia are tipul %s", typeofAST((struct node*)(yyvsp[-1].node)));}
     else printf("[error, linia %d]argumentele nu au acelasi tip \n", yylineno);
     }
#line 2259 "y.tab.c"
    break;

  case 105: /* lista_apel: ID '(' lista_apel ')'  */
#line 661 "limbaj.y"
                                   {
                if(existsFunct((yyvsp[-3].strval))!=-1){  
                    strcat(typeDecl, returnType((yyvsp[-3].strval))); strcat(typeDecl, " "); 
               }                 
               else {printf("[error, linia %d]parametri inexistenti \n", yylineno); return-1;}
           }
#line 2270 "y.tab.c"
    break;

  case 107: /* lista_apel: lista_apel ',' ID '(' lista_apel ')'  */
#line 668 "limbaj.y"
                                                  {
               if(existsFunct((yyvsp[-3].strval))!=-1){  
                    strcat(typeDecl, returnType((yyvsp[-3].strval))); strcat(typeDecl, " "); 
               }                 
               else {printf("[error, linia %d]parametri inexistenti \n", yylineno); return-1;}
           }
#line 2281 "y.tab.c"
    break;

  case 109: /* funct_param: NR  */
#line 677 "limbaj.y"
                 {strcat(typeDecl, "int"); strcat(typeDecl, " "); }
#line 2287 "y.tab.c"
    break;

  case 110: /* funct_param: STRING  */
#line 678 "limbaj.y"
                    {strcat(typeDecl, "string"); strcat(typeDecl, " "); }
#line 2293 "y.tab.c"
    break;

  case 111: /* funct_param: CHARACTER  */
#line 679 "limbaj.y"
                       {strcat(typeDecl, "char"); strcat(typeDecl, " "); }
#line 2299 "y.tab.c"
    break;

  case 112: /* funct_param: FLOAT_NR  */
#line 680 "limbaj.y"
                      {strcat(typeDecl, "float"); strcat(typeDecl, " "); }
#line 2305 "y.tab.c"
    break;

  case 113: /* funct_param: ID  */
#line 681 "limbaj.y"
                {
               if(existsVar((yyvsp[0].strval), scope)!=-1){  
                    strcat(typeDecl, returnType((yyvsp[0].strval))); strcat(typeDecl, " "); 
               }                 
               else {printf("[error, linia %d]variabila nu exista \n", yylineno); return-1;}
           }
#line 2316 "y.tab.c"
    break;

  case 114: /* if: IF '(' condition ')' instr  */
#line 690 "limbaj.y"
                                {
          switch(return_value) {
               case 1 :
                    printf("conditia este adevarata\n");
                    break;
               case 0:
                    printf("conditia este falsa\n");
                    break;
               default: printf("eroare la verificarea conditiei\n");
               break;
               
          }
     }
#line 2334 "y.tab.c"
    break;

  case 115: /* if: IF '(' condition ')' instr ELSE instr  */
#line 703 "limbaj.y"
                                          {
        switch(return_value) {
               case 1 :
                    printf("conditia este adevarata\n");
                    break;
               case 0:
                    printf("conditia este falsa\n");
                    break;
               default: printf("eroare la verificarea conditiei\n");
               break;

          }
   }
#line 2352 "y.tab.c"
    break;

  case 116: /* if: IF '(' condition ')' instr ELIF '(' condition ')' instr  */
#line 716 "limbaj.y"
                                                            {
        int loc = return_value;
        switch(loc) {
               case 1 :
                    printf("conditia este adevarata\n");
                    break;
               case 0:
                    printf("conditia este falsa\n");
                    break;
               default: printf("eroare la verificarea conditiei\n");
               break;

          }
   }
#line 2371 "y.tab.c"
    break;

  case 119: /* while: WHILE '(' condition ')' instr  */
#line 737 "limbaj.y"
                                     {
     switch(return_value) {
          case 1 :
               printf("conditia este adevarata\n");
               break;
          case 0:
               printf("conditia este falsa\n");
               break;
          default: printf("eroare la verificarea conditiei\n");
          break;
          
     }
}
#line 2389 "y.tab.c"
    break;

  case 121: /* condition: condition BOOL_OP condition  */
#line 758 "limbaj.y"
                                       {
               return_condition_op_bool((yyvsp[-2].intval), (yyvsp[0].intval), (yyvsp[-1].strval));
          }
#line 2397 "y.tab.c"
    break;

  case 122: /* condition: ID VERIFY ID  */
#line 762 "limbaj.y"
                        {  // if(@a==@b)
               if(existsVar((yyvsp[-2].strval), scope)!=-1 && existsVar((yyvsp[0].strval), scope)!=-1 ){
                    //printf("variabilele %s si %s exista. se poate face verificarea de tip\n", $1, $3);
                    if(typeVerify((yyvsp[-2].strval), (yyvsp[0].strval)) == 1){ // verific tipul ambelor variabile
                         //printf("variabilele %s si %s au acelasi tip. se poate face verificarea conditiei\n", $1, $3);
                         if(strcmp(returnType((yyvsp[-2].strval)), "int") == 0){  
                              return_value = return_condition_value_int(returnVal((yyvsp[-2].strval)) , returnVal((yyvsp[0].strval)), (yyvsp[-1].strval));
                             (yyval.intval) = return_value;

                         }
                         if(strcmp(returnType((yyvsp[-2].strval)), "float") == 0){  
                              return_value = return_condition_value_float(returnVal((yyvsp[-2].strval)) , returnVal((yyvsp[0].strval)), (yyvsp[-1].strval));
                              (yyval.intval) = return_value;
                         }
                         
                    }
                    else {printf("[error, linia %d]variabilele nu au acelasi tip. nu se poate verifica conditia.\n", yylineno); return-1;}
               }
               else
                    {printf("[error, linia %d]variabilele nu exista \n", yylineno); return-1;}
          }
#line 2423 "y.tab.c"
    break;

  case 123: /* condition: NR VERIFY NR  */
#line 783 "limbaj.y"
                         {
               return_value = return_condition_value_int((yyvsp[-2].intval) , (yyvsp[0].intval), (yyvsp[-1].strval));
               (yyval.intval) = return_value;

          }
#line 2433 "y.tab.c"
    break;

  case 124: /* condition: ID VERIFY NR  */
#line 788 "limbaj.y"
                         { 
               if(existsVar((yyvsp[-2].strval), scope)!=-1 ){
                    //printf("variabila %s exista. se poate face verificarea de tip\n", $1);
                         if(strcmp(returnType((yyvsp[-2].strval)), "int") == 0){  
                              return_value = return_condition_value_int(returnVal((yyvsp[-2].strval)) ,(yyvsp[0].intval), (yyvsp[-1].strval));
                              (yyval.intval) = return_value;
                         }
                         else {printf("[error, linia %d]variabila %s nu are tipul int. nu se poate verifica conditia.\n", yylineno, (yyvsp[-2].strval)); return-1;}
               }
               else
                    {printf("[error, linia %d]variabila nu exista \n", yylineno); return-1;}
          
          }
#line 2451 "y.tab.c"
    break;

  case 125: /* condition: NR VERIFY ID  */
#line 801 "limbaj.y"
                          {
               if(existsVar((yyvsp[0].strval), scope)!=-1 ){
                    //printf("variabila %s exista. se poate face verificarea de tip\n", $3);
                         if(strcmp(returnType((yyvsp[0].strval)), "int") == 0){  
                              return_value = return_condition_value_int((yyvsp[-2].intval), returnVal((yyvsp[0].strval)), (yyvsp[-1].strval));
                              (yyval.intval) = return_value;
                         }
                         else {printf("[error, linia %d]variabila %s nu are tipul int. nu se poate verifica conditia.\n", yylineno, (yyvsp[0].strval)); return-1;}
               }
               else
                    {printf("[error, linia %d]variabila nu exista \n", yylineno); return-1;}
          }
#line 2468 "y.tab.c"
    break;


#line 2472 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 815 "limbaj.y"

void yyerror(char * s){
printf("eroare: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv){
     yyin=fopen(argv[1],"r");
     fopen("symbol_table.txt", "w");
     fopen("symbol_table_functions.txt", "w");
     if(!yyparse()){
          printf("Program sintactic corect\n");
          fisier_variables();
          fisier_functions();
     }
} 
