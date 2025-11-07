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
#line 1 "bisonCopia.y"

#include <math.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#include "tabla_simbolos.h"

extern Simbolo tablaSimbolos[];
extern int cantidadSimbolos;

int yyerror(const char *s);
int yywrap() { return 1; }

extern FILE *yyin;
int erroresSintacticos = 0;
int erroresLexicos = 0;

int yylex(void);
extern int yylineno;

#line 94 "bisonCopia.tab.c"

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

#include "bisonCopia.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TIPO_DATO = 3,                  /* TIPO_DATO  */
  YYSYMBOL_IDENTIFICADOR = 4,              /* IDENTIFICADOR  */
  YYSYMBOL_LITERAL_CADENA = 5,             /* LITERAL_CADENA  */
  YYSYMBOL_CONST_OCTAL = 6,                /* CONST_OCTAL  */
  YYSYMBOL_CONST_HEXADECIMAL = 7,          /* CONST_HEXADECIMAL  */
  YYSYMBOL_CONST_CARACTER = 8,             /* CONST_CARACTER  */
  YYSYMBOL_CONST_ENTERA = 9,               /* CONST_ENTERA  */
  YYSYMBOL_CONST_REAL = 10,                /* CONST_REAL  */
  YYSYMBOL_IF = 11,                        /* IF  */
  YYSYMBOL_ELSE = 12,                      /* ELSE  */
  YYSYMBOL_WHILE = 13,                     /* WHILE  */
  YYSYMBOL_FOR = 14,                       /* FOR  */
  YYSYMBOL_RETURN = 15,                    /* RETURN  */
  YYSYMBOL_SWITCH = 16,                    /* SWITCH  */
  YYSYMBOL_BREAK = 17,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 18,                  /* CONTINUE  */
  YYSYMBOL_DO = 19,                        /* DO  */
  YYSYMBOL_SIZEOF = 20,                    /* SIZEOF  */
  YYSYMBOL_CASE = 21,                      /* CASE  */
  YYSYMBOL_DEFAULT = 22,                   /* DEFAULT  */
  YYSYMBOL_IGUAL = 23,                     /* IGUAL  */
  YYSYMBOL_DISTINTO = 24,                  /* DISTINTO  */
  YYSYMBOL_MAYOR_IGUAL = 25,               /* MAYOR_IGUAL  */
  YYSYMBOL_MENOR_IGUAL = 26,               /* MENOR_IGUAL  */
  YYSYMBOL_AND = 27,                       /* AND  */
  YYSYMBOL_OR = 28,                        /* OR  */
  YYSYMBOL_INCREMENTO = 29,                /* INCREMENTO  */
  YYSYMBOL_DECREMENTO = 30,                /* DECREMENTO  */
  YYSYMBOL_ASIGNACION = 31,                /* ASIGNACION  */
  YYSYMBOL_MAS_IGUAL = 32,                 /* MAS_IGUAL  */
  YYSYMBOL_ERROR_LEXICO = 33,              /* ERROR_LEXICO  */
  YYSYMBOL_34_ = 34,                       /* '+'  */
  YYSYMBOL_35_ = 35,                       /* '-'  */
  YYSYMBOL_36_ = 36,                       /* '*'  */
  YYSYMBOL_37_ = 37,                       /* '/'  */
  YYSYMBOL_38_ = 38,                       /* '<'  */
  YYSYMBOL_39_ = 39,                       /* '>'  */
  YYSYMBOL_40_ = 40,                       /* '?'  */
  YYSYMBOL_41_ = 41,                       /* ';'  */
  YYSYMBOL_42_ = 42,                       /* ','  */
  YYSYMBOL_43_ = 43,                       /* '{'  */
  YYSYMBOL_44_ = 44,                       /* '}'  */
  YYSYMBOL_45_ = 45,                       /* '('  */
  YYSYMBOL_46_ = 46,                       /* ')'  */
  YYSYMBOL_47_ = 47,                       /* ':'  */
  YYSYMBOL_48_ = 48,                       /* '&'  */
  YYSYMBOL_49_ = 49,                       /* '!'  */
  YYSYMBOL_50_ = 50,                       /* '['  */
  YYSYMBOL_51_ = 51,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 52,                  /* $accept  */
  YYSYMBOL_programa = 53,                  /* programa  */
  YYSYMBOL_listaTopLevel = 54,             /* listaTopLevel  */
  YYSYMBOL_listaDeclaracionesop = 55,      /* listaDeclaracionesop  */
  YYSYMBOL_listaSentenciasop = 56,         /* listaSentenciasop  */
  YYSYMBOL_listaDeclaraciones = 57,        /* listaDeclaraciones  */
  YYSYMBOL_declaracion = 58,               /* declaracion  */
  YYSYMBOL_declaVarSimples = 59,           /* declaVarSimples  */
  YYSYMBOL_listaVarSimples = 60,           /* listaVarSimples  */
  YYSYMBOL_inicializacion_op = 61,         /* inicializacion_op  */
  YYSYMBOL_inicializacion = 62,            /* inicializacion  */
  YYSYMBOL_sentencia = 63,                 /* sentencia  */
  YYSYMBOL_setCompuesta = 64,              /* setCompuesta  */
  YYSYMBOL_listaSentencias = 65,           /* listaSentencias  */
  YYSYMBOL_sentExpresion = 66,             /* sentExpresion  */
  YYSYMBOL_sentSeleccion = 67,             /* sentSeleccion  */
  YYSYMBOL_sentIteracion = 68,             /* sentIteracion  */
  YYSYMBOL_forInit = 69,                   /* forInit  */
  YYSYMBOL_declaracionFor = 70,            /* declaracionFor  */
  YYSYMBOL_sentSwitch = 71,                /* sentSwitch  */
  YYSYMBOL_listaCases = 72,                /* listaCases  */
  YYSYMBOL_caseSentencia = 73,             /* caseSentencia  */
  YYSYMBOL_sentSalto = 74,                 /* sentSalto  */
  YYSYMBOL_expresionop = 75,               /* expresionop  */
  YYSYMBOL_expresion = 76,                 /* expresion  */
  YYSYMBOL_expAsignacion = 77,             /* expAsignacion  */
  YYSYMBOL_operAsignacion = 78,            /* operAsignacion  */
  YYSYMBOL_expCondicional = 79,            /* expCondicional  */
  YYSYMBOL_expOr = 80,                     /* expOr  */
  YYSYMBOL_expAnd = 81,                    /* expAnd  */
  YYSYMBOL_expIgualdad = 82,               /* expIgualdad  */
  YYSYMBOL_expRelacional = 83,             /* expRelacional  */
  YYSYMBOL_expAditiva = 84,                /* expAditiva  */
  YYSYMBOL_expMultiplicativa = 85,         /* expMultiplicativa  */
  YYSYMBOL_expUnaria = 86,                 /* expUnaria  */
  YYSYMBOL_operUnario = 87,                /* operUnario  */
  YYSYMBOL_expPostfijo = 88,               /* expPostfijo  */
  YYSYMBOL_listaArgumentosop = 89,         /* listaArgumentosop  */
  YYSYMBOL_listaArgumentos = 90,           /* listaArgumentos  */
  YYSYMBOL_expPrimaria = 91,               /* expPrimaria  */
  YYSYMBOL_constante = 92,                 /* constante  */
  YYSYMBOL_literalCadena = 93,             /* literalCadena  */
  YYSYMBOL_nombreTipo = 94                 /* nombreTipo  */
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
typedef yytype_uint8 yy_state_t;

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

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   503

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  119
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  209

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   288


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
       2,     2,     2,    49,     2,     2,     2,     2,    48,     2,
      45,    46,    36,    34,    42,    35,     2,    37,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    47,    41,
      38,     2,    39,    40,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    50,     2,    51,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    43,     2,    44,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    63,    63,    68,    69,    70,    74,    76,    79,    81,
      84,    85,    88,    91,    96,   112,   125,   150,   153,   158,
     169,   170,   171,   172,   173,   174,   175,   179,   182,   183,
     186,   190,   193,   200,   203,   206,   212,   213,   217,   231,
     236,   237,   240,   241,   245,   248,   251,   260,   263,   266,
     277,   284,   287,   293,   303,   306,   309,   312,   315,   318,
     337,   356,   375,   394,   418,   421,   422,   428,   451,   456,
     457,   460,   461,   463,   464,   467,   468,   470,   471,   472,
     475,   476,   477,   478,   479,   481,   484,   494,   506,   509,
     519,   537,   540,   545,   549,   552,   558,   561,   564,   567,
     573,   574,   575,   576,   595,   616,   618,   621,   622,   626,
     643,   646,   649,   659,   664,   667,   670,   675,   681,   686
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TIPO_DATO",
  "IDENTIFICADOR", "LITERAL_CADENA", "CONST_OCTAL", "CONST_HEXADECIMAL",
  "CONST_CARACTER", "CONST_ENTERA", "CONST_REAL", "IF", "ELSE", "WHILE",
  "FOR", "RETURN", "SWITCH", "BREAK", "CONTINUE", "DO", "SIZEOF", "CASE",
  "DEFAULT", "IGUAL", "DISTINTO", "MAYOR_IGUAL", "MENOR_IGUAL", "AND",
  "OR", "INCREMENTO", "DECREMENTO", "ASIGNACION", "MAS_IGUAL",
  "ERROR_LEXICO", "'+'", "'-'", "'*'", "'/'", "'<'", "'>'", "'?'", "';'",
  "','", "'{'", "'}'", "'('", "')'", "':'", "'&'", "'!'", "'['", "']'",
  "$accept", "programa", "listaTopLevel", "listaDeclaracionesop",
  "listaSentenciasop", "listaDeclaraciones", "declaracion",
  "declaVarSimples", "listaVarSimples", "inicializacion_op",
  "inicializacion", "sentencia", "setCompuesta", "listaSentencias",
  "sentExpresion", "sentSeleccion", "sentIteracion", "forInit",
  "declaracionFor", "sentSwitch", "listaCases", "caseSentencia",
  "sentSalto", "expresionop", "expresion", "expAsignacion",
  "operAsignacion", "expCondicional", "expOr", "expAnd", "expIgualdad",
  "expRelacional", "expAditiva", "expMultiplicativa", "expUnaria",
  "operUnario", "expPostfijo", "listaArgumentosop", "listaArgumentos",
  "expPrimaria", "constante", "literalCadena", "nombreTipo", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-89)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-10)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -89,    14,   186,   -89,   -25,    25,    15,   -89,   -89,   -89,
     -89,   -89,   -89,   -18,    -7,     5,   203,    20,    -5,    18,
     422,    22,   115,   115,   -89,   -89,   235,   439,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,    38,
     -89,   -89,   -16,    91,   -17,    59,    -9,    -2,    74,   115,
     -35,   -89,   -89,   -89,   -89,     1,    85,   -89,   -89,    13,
     -89,   439,   439,   439,   473,    64,   139,   144,    95,   -89,
     439,   -89,   -89,   117,   148,   159,   108,   -89,   -89,   124,
     330,   284,   -89,   120,   -89,   115,   439,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   -89,   439,
     -89,   439,   439,   439,   -89,   -89,   -89,   163,   -89,   -89,
     122,   123,    25,   130,   -89,   222,   -89,   -89,   203,   203,
     -89,   -89,   203,   203,   203,   203,   203,   203,   -89,   126,
     -89,   128,   -89,   129,   -89,   133,   -89,   376,   -89,   -89,
      91,   -89,   127,   -17,    59,    59,    -9,    -9,    -9,    -9,
      -2,    -2,   -89,   -89,   -89,   -89,   132,   137,   131,   -89,
       1,   422,   422,   141,   203,   -89,   -89,    63,    63,   101,
     101,   -89,   -89,   138,   439,   -89,   -89,   -89,   115,   -89,
     439,   -89,   -89,   176,   -89,   189,   125,   152,   -89,   -89,
     422,   203,   199,   167,   -13,   -89,   177,   -89,    17,   170,
     422,   -89,   -89,   -89,   422,   422,   -89,   -89,   -89
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,     1,     0,     0,   109,   118,   114,   115,
     117,   113,   116,     0,     0,     0,    47,     0,     0,     0,
       0,     0,     0,     0,    98,    97,     0,     0,    96,    99,
       4,    12,     5,    20,    21,    22,    23,    24,    25,     0,
      64,    65,    71,    73,    75,    77,    80,    85,    88,     0,
      91,   100,   110,   111,    13,    17,     0,   103,   104,    69,
      70,     0,     0,     0,    47,    49,     0,     0,     0,    48,
       0,    45,    46,     0,     0,     0,   109,    92,    93,     0,
       0,     0,    10,     0,    30,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    69,     0,
      94,   105,     0,     0,    15,    18,    14,     0,    66,    67,
       0,     0,     0,     0,    36,    37,    59,    60,    47,    47,
      61,    62,    47,    47,    47,    47,    47,    47,    44,     0,
      26,     0,   119,     0,    13,     0,    28,     0,    11,   112,
      74,    88,     0,    76,    78,    79,    81,    83,    84,    82,
      86,    87,    89,    90,    68,   107,     0,   106,     0,    19,
      17,     0,     0,    38,    47,    50,    63,    53,    54,    55,
      56,    57,    58,     0,     0,    95,    27,    29,     0,   102,
       0,   101,    16,    31,    33,     0,     0,     0,    72,   108,
       0,    47,     0,     0,     0,    41,     0,    32,     0,     0,
       0,    39,    40,    34,     0,     0,    43,    35,    42
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -89,   -89,   -89,   -89,   -89,   -89,   -24,   -89,   107,    60,
     -89,   -20,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,    43,   -89,   -36,   -22,   -88,   214,    69,   -89,   178,
     179,    65,    23,    62,   -19,   -89,   -89,   -89,   -89,   -89,
     -15,   -89,   -89
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    80,   135,    81,    30,    31,    56,   104,
     105,    32,    33,   137,    34,    35,    36,   113,   114,    37,
     194,   195,    38,    68,    39,    40,    61,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,   156,   157,    51,
      52,    53,   133
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      74,    69,    82,    77,    78,    83,    88,    89,   192,   193,
     101,   154,    85,   155,     3,   102,    54,     6,     7,     8,
       9,    10,    11,    12,    86,    94,    95,    62,   115,    55,
     100,   201,   103,    21,    96,    97,    71,   108,    63,   109,
     110,   111,    22,    23,    57,    58,    59,    60,   129,    69,
      64,   122,   123,   124,   125,   126,   127,   138,    27,    72,
     136,    28,    29,   204,   142,    70,   141,    75,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   152,   153,    84,
     158,   159,   165,   166,    90,    91,   167,   168,   169,   170,
     171,   172,   189,   116,   117,   118,   119,    92,    93,   124,
     125,   126,   127,    69,    69,    98,    60,    69,    69,    69,
      69,    69,    69,   146,   147,   148,   149,   177,    87,    76,
       7,     8,     9,    10,    11,    12,   106,   107,   185,   122,
     123,   124,   125,   126,   127,    21,   128,    57,    58,   126,
     127,   183,   184,   120,    22,    23,   192,   193,   121,    69,
      24,    25,   187,   144,   145,   198,   150,   151,   130,   141,
      27,   131,   132,    28,    29,   134,   139,   160,   161,   162,
     197,   164,   173,   174,   178,   175,    69,   176,   179,   180,
     206,   186,   181,   107,   207,   208,    -2,     4,   190,     5,
       6,     7,     8,     9,    10,    11,    12,    13,   196,    14,
      15,    16,    17,    18,    19,    20,    21,    65,   199,     8,
       9,    10,    11,    12,   200,    22,    23,   205,   203,   163,
     182,    24,    25,   122,   123,   124,   125,   126,   127,    26,
     191,    27,    66,    67,    28,    29,    79,   202,     5,    -6,
      -6,    -6,    -6,    -6,    -6,    -6,    -6,   188,    -6,    -6,
      -6,    -6,    -6,    -6,    -6,    -6,   122,   123,   124,   125,
     126,   127,    99,   140,    -6,    -6,   143,     0,     0,     0,
      -6,    -6,     0,     0,     0,     0,     0,     0,    -6,    -6,
      -6,     0,     0,    -6,    -6,    79,     0,     5,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,     0,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,     0,     0,     0,     0,     0,
       0,     0,     0,    -7,    -7,     0,     0,     0,     0,    -7,
      -7,     0,     0,     0,     0,     0,     0,    -7,    -7,    -7,
       0,    73,    -7,    -7,     6,     7,     8,     9,    10,    11,
      12,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,    22,
      23,     0,     0,     0,     0,    24,    25,     0,     0,     0,
       0,     0,     0,    26,    -8,    27,     0,    73,    28,    29,
       6,     7,     8,     9,    10,    11,    12,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,     0,    22,    23,     0,     0,     0,
       0,    24,    25,     0,     0,     0,     0,     0,     0,    26,
      -9,    27,     0,    73,    28,    29,     6,     7,     8,     9,
      10,    11,    12,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,     6,     7,     8,     9,    10,    11,    12,
       0,    22,    23,     0,     0,     0,     0,    24,    25,    21,
       0,     0,     0,     0,     0,    26,     0,    27,    22,    23,
      28,    29,     0,     0,    24,    25,   112,    65,     0,     8,
       9,    10,    11,    12,    27,     0,     0,    28,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    66,    67
};

static const yytype_int16 yycheck[] =
{
      20,    16,    26,    22,    23,    27,    23,    24,    21,    22,
      45,    99,    28,   101,     0,    50,    41,     4,     5,     6,
       7,     8,     9,    10,    40,    34,    35,    45,    64,     4,
      49,    44,    31,    20,    36,    37,    41,    59,    45,    61,
      62,    63,    29,    30,    29,    30,    31,    32,    70,    64,
      45,    34,    35,    36,    37,    38,    39,    81,    45,    41,
      80,    48,    49,    46,    86,    45,    85,    45,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    41,
     102,   103,   118,   119,    25,    26,   122,   123,   124,   125,
     126,   127,   180,    29,    30,    31,    32,    38,    39,    36,
      37,    38,    39,   118,   119,    31,    32,   122,   123,   124,
     125,   126,   127,    90,    91,    92,    93,   137,    27,     4,
       5,     6,     7,     8,     9,    10,    41,    42,   164,    34,
      35,    36,    37,    38,    39,    20,    41,    29,    30,    38,
      39,   161,   162,     4,    29,    30,    21,    22,     4,   164,
      35,    36,   174,    88,    89,   191,    94,    95,    41,   178,
      45,    13,     3,    48,    49,    41,    46,     4,    46,    46,
     190,    41,    46,    45,    47,    46,   191,    44,    46,    42,
     200,    43,    51,    42,   204,   205,     0,     1,    12,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    46,    13,
      14,    15,    16,    17,    18,    19,    20,     4,     9,     6,
       7,     8,     9,    10,    47,    29,    30,    47,    41,   112,
     160,    35,    36,    34,    35,    36,    37,    38,    39,    43,
      41,    45,    29,    30,    48,    49,     1,   194,     3,     4,
       5,     6,     7,     8,     9,    10,    11,   178,    13,    14,
      15,    16,    17,    18,    19,    20,    34,    35,    36,    37,
      38,    39,    48,    85,    29,    30,    87,    -1,    -1,    -1,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,
      45,    -1,    -1,    48,    49,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    30,    -1,    -1,    -1,    -1,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,
      -1,     1,    48,    49,     4,     5,     6,     7,     8,     9,
      10,    11,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      30,    -1,    -1,    -1,    -1,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    44,    45,    -1,     1,    48,    49,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    30,    -1,    -1,    -1,
      -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      44,    45,    -1,     1,    48,    49,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,     4,     5,     6,     7,     8,     9,    10,
      -1,    29,    30,    -1,    -1,    -1,    -1,    35,    36,    20,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    45,    29,    30,
      48,    49,    -1,    -1,    35,    36,     3,     4,    -1,     6,
       7,     8,     9,    10,    45,    -1,    -1,    48,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    30
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    53,    54,     0,     1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    13,    14,    15,    16,    17,    18,
      19,    20,    29,    30,    35,    36,    43,    45,    48,    49,
      58,    59,    63,    64,    66,    67,    68,    71,    74,    76,
      77,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    91,    92,    93,    41,     4,    60,    29,    30,    31,
      32,    78,    45,    45,    45,     4,    29,    30,    75,    92,
      45,    41,    41,     1,    63,    45,     4,    86,    86,     1,
      55,    57,    58,    76,    41,    28,    40,    27,    23,    24,
      25,    26,    38,    39,    34,    35,    36,    37,    31,    78,
      86,    45,    50,    31,    61,    62,    41,    42,    76,    76,
      76,    76,     3,    69,    70,    75,    29,    30,    31,    32,
       4,     4,    34,    35,    36,    37,    38,    39,    41,    76,
      41,    13,     3,    94,    41,    56,    63,    65,    58,    46,
      81,    86,    76,    82,    83,    83,    84,    84,    84,    84,
      85,    85,    86,    86,    77,    77,    89,    90,    76,    76,
       4,    46,    46,    60,    41,    75,    75,    75,    75,    75,
      75,    75,    75,    46,    45,    46,    44,    63,    47,    46,
      42,    51,    61,    63,    63,    75,    43,    76,    79,    77,
      12,    41,    21,    22,    72,    73,    46,    63,    75,     9,
      47,    44,    73,    41,    46,    47,    63,    63,    63
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    52,    53,    54,    54,    54,    55,    55,    56,    56,
      57,    57,    58,    58,    59,    60,    60,    61,    61,    62,
      63,    63,    63,    63,    63,    63,    63,    64,    65,    65,
      66,    67,    67,    68,    68,    68,    69,    69,    70,    71,
      72,    72,    73,    73,    74,    74,    74,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    76,    77,    77,    77,    77,    78,
      78,    79,    79,    80,    80,    81,    81,    82,    82,    82,
      83,    83,    83,    83,    83,    84,    84,    84,    85,    85,
      85,    86,    86,    86,    86,    86,    87,    87,    87,    87,
      88,    88,    88,    88,    88,    89,    89,    90,    90,    91,
      91,    91,    91,    92,    92,    92,    92,    92,    93,    94
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     2,     0,     1,     0,     1,
       1,     2,     1,     2,     3,     2,     4,     0,     1,     2,
       1,     1,     1,     1,     1,     1,     2,     4,     1,     2,
       2,     5,     7,     5,     7,     9,     1,     1,     2,     7,
       2,     1,     4,     3,     3,     2,     2,     0,     1,     1,
       3,     1,     1,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     3,     1,     1,     3,     3,     3,     1,
       1,     1,     5,     1,     3,     1,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     2,     2,     2,     4,     1,     1,     1,     1,
       1,     4,     4,     2,     2,     0,     1,     1,     3,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1
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

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yyerror_range[1] = yylloc;
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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* programa: listaTopLevel  */
#line 63 "bisonCopia.y"
                        {
                printf("Programa valido.\n");
            }
#line 1771 "bisonCopia.tab.c"
    break;

  case 12: /* declaracion: declaVarSimples  */
#line 88 "bisonCopia.y"
                             {
                printf("Se reconocio la declaracion de variables simples.\n");
            }
#line 1779 "bisonCopia.tab.c"
    break;

  case 13: /* declaracion: error ';'  */
#line 91 "bisonCopia.y"
                        { yyerrok; }
#line 1785 "bisonCopia.tab.c"
    break;

  case 14: /* declaVarSimples: TIPO_DATO listaVarSimples ';'  */
#line 96 "bisonCopia.y"
                                    {
          for (int i = 0; i < (yyvsp[-1].lvars)->cantidad; i++) {
              char* val = (yyvsp[-1].lvars)->variables[i].valor ? (yyvsp[-1].lvars)->variables[i].valor : "-";
              insertarSimbolo((yyvsp[-1].lvars)->variables[i].nombre, (yyvsp[-2].str), val, yylineno);
              if ((yyvsp[-1].lvars)->variables[i].nombre) free((yyvsp[-1].lvars)->variables[i].nombre);
              if ((yyvsp[-1].lvars)->variables[i].valor) free((yyvsp[-1].lvars)->variables[i].valor);
          }
          free((yyvsp[-1].lvars)->variables);
          free((yyvsp[-1].lvars));
          free((yyvsp[-2].str));
      }
#line 1801 "bisonCopia.tab.c"
    break;

  case 15: /* listaVarSimples: IDENTIFICADOR inicializacion_op  */
#line 112 "bisonCopia.y"
                                      {
          ListaVariables* lista = malloc(sizeof(ListaVariables));
          lista->variables = malloc(sizeof(Variable));
          lista->variables[0].nombre = strdup((yyvsp[-1].str));
          if ((yyvsp[0].str) && strlen((yyvsp[0].str)) > 0) {
              lista->variables[0].valor = strdup((yyvsp[0].str) + 3);
          } else {
              lista->variables[0].valor = NULL;
          }
          lista->cantidad = 1;
          (yyval.lvars) = lista;
          free((yyvsp[0].str));
      }
#line 1819 "bisonCopia.tab.c"
    break;

  case 16: /* listaVarSimples: listaVarSimples ',' IDENTIFICADOR inicializacion_op  */
#line 125 "bisonCopia.y"
                                                          {
          (yyvsp[-3].lvars)->variables = realloc((yyvsp[-3].lvars)->variables, sizeof(Variable) * ((yyvsp[-3].lvars)->cantidad + 1));
          (yyvsp[-3].lvars)->variables[(yyvsp[-3].lvars)->cantidad].nombre = strdup((yyvsp[-1].str));
          if ((yyvsp[0].str) && strlen((yyvsp[0].str)) > 0) {
              (yyvsp[-3].lvars)->variables[(yyvsp[-3].lvars)->cantidad].valor = strdup((yyvsp[0].str) + 3);
          } else {
              (yyvsp[-3].lvars)->variables[(yyvsp[-3].lvars)->cantidad].valor = NULL;
          }
          (yyvsp[-3].lvars)->cantidad++;
          (yyval.lvars) = (yyvsp[-3].lvars);
          free((yyvsp[0].str));
      }
#line 1836 "bisonCopia.tab.c"
    break;

  case 17: /* inicializacion_op: %empty  */
#line 150 "bisonCopia.y"
                         {
                (yyval.str) = strdup("");
            }
#line 1844 "bisonCopia.tab.c"
    break;

  case 18: /* inicializacion_op: inicializacion  */
#line 153 "bisonCopia.y"
                             {
                (yyval.str) = (yyvsp[0].str);
            }
#line 1852 "bisonCopia.tab.c"
    break;

  case 19: /* inicializacion: ASIGNACION expresion  */
#line 158 "bisonCopia.y"
                                     {
            char* temp = malloc(strlen((yyvsp[0].str)) + 4); 
            sprintf(temp, " = %s", (yyvsp[0].str));
            (yyval.str) = temp;
            free((yyvsp[0].str));
            }
#line 1863 "bisonCopia.tab.c"
    break;

  case 26: /* sentencia: error ';'  */
#line 175 "bisonCopia.y"
                        { yyerrok; }
#line 1869 "bisonCopia.tab.c"
    break;

  case 31: /* sentSeleccion: IF '(' expresion ')' sentencia  */
#line 190 "bisonCopia.y"
                                           {
                printf("Se reconocio una sentencia IF sin ELSE.\n");
            }
#line 1877 "bisonCopia.tab.c"
    break;

  case 32: /* sentSeleccion: IF '(' expresion ')' sentencia ELSE sentencia  */
#line 193 "bisonCopia.y"
                                                            {
                printf("Se reconocio una sentencia IF con ELSE.\n");
            }
#line 1885 "bisonCopia.tab.c"
    break;

  case 33: /* sentIteracion: WHILE '(' expresion ')' sentencia  */
#line 200 "bisonCopia.y"
                                              {
                printf("Se reconocio una sentencia WHILE.\n");
            }
#line 1893 "bisonCopia.tab.c"
    break;

  case 34: /* sentIteracion: DO sentencia WHILE '(' expresion ')' ';'  */
#line 203 "bisonCopia.y"
                                                       {
                printf("Se reconocio una sentencia DO y WHILE.\n");
            }
#line 1901 "bisonCopia.tab.c"
    break;

  case 35: /* sentIteracion: FOR '(' forInit ';' expresionop ';' expresionop ')' sentencia  */
#line 206 "bisonCopia.y"
                                                                            {
                printf("Se reconocio una sentencia FOR.\n");
            }
#line 1909 "bisonCopia.tab.c"
    break;

  case 38: /* declaracionFor: TIPO_DATO listaVarSimples  */
#line 217 "bisonCopia.y"
                                      {
                for (int i = 0; i < (yyvsp[0].lvars)->cantidad; i++) {
                    insertarSimbolo((yyvsp[0].lvars)->variables[i].nombre, (yyvsp[-1].str),
                                    (yyvsp[0].lvars)->variables[i].valor ? (yyvsp[0].lvars)->variables[i].valor : "-",
                                    yylineno);
                    if ((yyvsp[0].lvars)->variables[i].nombre) free((yyvsp[0].lvars)->variables[i].nombre);
                    if ((yyvsp[0].lvars)->variables[i].valor) free((yyvsp[0].lvars)->variables[i].valor);
                }
                free((yyvsp[0].lvars)->variables);
                free((yyvsp[0].lvars));
                free((yyvsp[-1].str));
            }
#line 1926 "bisonCopia.tab.c"
    break;

  case 39: /* sentSwitch: SWITCH '(' expresion ')' '{' listaCases '}'  */
#line 231 "bisonCopia.y"
                                                        {
                printf("Se reconocio una sentencia SWITCH.\n");
            }
#line 1934 "bisonCopia.tab.c"
    break;

  case 44: /* sentSalto: RETURN expresionop ';'  */
#line 245 "bisonCopia.y"
                                   {
                printf("Se reconocio una sentencia de RETURN.\n");
            }
#line 1942 "bisonCopia.tab.c"
    break;

  case 45: /* sentSalto: BREAK ';'  */
#line 248 "bisonCopia.y"
                        {
                printf("Se reconocio una sentencia BREAK.\n");
            }
#line 1950 "bisonCopia.tab.c"
    break;

  case 46: /* sentSalto: CONTINUE ';'  */
#line 251 "bisonCopia.y"
                           {
                printf("Se reconocio una sentencia CONTINUE.\n");
            }
#line 1958 "bisonCopia.tab.c"
    break;

  case 47: /* expresionop: %empty  */
#line 260 "bisonCopia.y"
                         {
                (yyval.str) = strdup("");
            }
#line 1966 "bisonCopia.tab.c"
    break;

  case 48: /* expresionop: constante  */
#line 263 "bisonCopia.y"
                        {
                (yyval.str) = strdup((yyvsp[0].str));
            }
#line 1974 "bisonCopia.tab.c"
    break;

  case 49: /* expresionop: IDENTIFICADOR  */
#line 266 "bisonCopia.y"
                            {
                // Buscar el valor en la tabla de símbolos
                char* valor = NULL;
                for (int i = 0; i < cantidadSimbolos; i++) {
                    if (strcmp(tablaSimbolos[i].nombre, (yyvsp[0].str)) == 0) {
                        valor = tablaSimbolos[i].valor;
                        break;
                    }
                }
                (yyval.str) = strdup(valor ? valor : "0");
            }
#line 1990 "bisonCopia.tab.c"
    break;

  case 50: /* expresionop: IDENTIFICADOR ASIGNACION expresionop  */
#line 277 "bisonCopia.y"
                                                   {
                // Actualizar el valor en la tabla de símbolos
                if (strlen((yyvsp[0].str)) > 0) {
                    actualizarValor((yyvsp[-2].str), (yyvsp[0].str), yylineno);
                }
                (yyval.str) = strdup((yyvsp[0].str)); 
            }
#line 2002 "bisonCopia.tab.c"
    break;

  case 51: /* expresionop: constante  */
#line 284 "bisonCopia.y"
                        {
                (yyval.str) = strdup((yyvsp[0].str));
            }
#line 2010 "bisonCopia.tab.c"
    break;

  case 52: /* expresionop: IDENTIFICADOR  */
#line 287 "bisonCopia.y"
                            {
                if (!existeSimbolo((yyvsp[0].str))) {
                    printf("Error: variable '%s' usada sin declarar (linea %d)\n", (yyvsp[0].str), yylineno);
                }
                (yyval.str) = strdup((yyvsp[0].str));
            }
#line 2021 "bisonCopia.tab.c"
    break;

  case 53: /* expresionop: expresionop '+' expresionop  */
#line 293 "bisonCopia.y"
                                          {
                double val1 = atof((yyvsp[-2].str));
                double val2 = atof((yyvsp[0].str));
                double resultado = val1 + val2;
                char buffer[64];
                sprintf(buffer, "%g", resultado);
                (yyval.str) = strdup(buffer);
                free((yyvsp[-2].str));
                free((yyvsp[0].str));
            }
#line 2036 "bisonCopia.tab.c"
    break;

  case 54: /* expresionop: expresionop '-' expresionop  */
#line 303 "bisonCopia.y"
                                          {
                (yyval.str) = strdup("resta");
            }
#line 2044 "bisonCopia.tab.c"
    break;

  case 55: /* expresionop: expresionop '*' expresionop  */
#line 306 "bisonCopia.y"
                                          {
                (yyval.str) = strdup("mult");
            }
#line 2052 "bisonCopia.tab.c"
    break;

  case 56: /* expresionop: expresionop '/' expresionop  */
#line 309 "bisonCopia.y"
                                          {
                (yyval.str) = strdup("div");
            }
#line 2060 "bisonCopia.tab.c"
    break;

  case 57: /* expresionop: expresionop '<' expresionop  */
#line 312 "bisonCopia.y"
                                          {
                (yyval.str) = strdup("menor");
            }
#line 2068 "bisonCopia.tab.c"
    break;

  case 58: /* expresionop: expresionop '>' expresionop  */
#line 315 "bisonCopia.y"
                                          {
                (yyval.str) = strdup("mayor");
            }
#line 2076 "bisonCopia.tab.c"
    break;

  case 59: /* expresionop: IDENTIFICADOR INCREMENTO  */
#line 318 "bisonCopia.y"
                                       {
                // Post-incremento
                char* valorActual = NULL;
                for (int i = 0; i < cantidadSimbolos; i++) {
                    if (strcmp(tablaSimbolos[i].nombre, (yyvsp[-1].str)) == 0) {
                        valorActual = tablaSimbolos[i].valor;
                        break;
                    }
                }
                if (valorActual) {
                    double val = atof(valorActual);
                    char buffer[64];
                    sprintf(buffer, "%g", val + 1);
                    actualizarValor((yyvsp[-1].str), buffer, yylineno);
                    (yyval.str) = strdup(buffer);
                } else {
                    (yyval.str) = strdup("1");
                }
            }
#line 2100 "bisonCopia.tab.c"
    break;

  case 60: /* expresionop: IDENTIFICADOR DECREMENTO  */
#line 337 "bisonCopia.y"
                                       {
                // Post-decremento
                char* valorActual = NULL;
                for (int i = 0; i < cantidadSimbolos; i++) {
                    if (strcmp(tablaSimbolos[i].nombre, (yyvsp[-1].str)) == 0) {
                        valorActual = tablaSimbolos[i].valor;
                        break;
                    }
                }
                if (valorActual) {
                    double val = atof(valorActual);
                    char buffer[64];
                    sprintf(buffer, "%g", val - 1);
                    actualizarValor((yyvsp[-1].str), buffer, yylineno);
                    (yyval.str) = strdup(buffer);
                } else {
                    (yyval.str) = strdup("-1");
                }
            }
#line 2124 "bisonCopia.tab.c"
    break;

  case 61: /* expresionop: INCREMENTO IDENTIFICADOR  */
#line 356 "bisonCopia.y"
                                       {
                // Pre-incremento
                char* valorActual = NULL;
                for (int i = 0; i < cantidadSimbolos; i++) {
                    if (strcmp(tablaSimbolos[i].nombre, (yyvsp[0].str)) == 0) {
                        valorActual = tablaSimbolos[i].valor;
                        break;
                    }
                }
                if (valorActual) {
                    double val = atof(valorActual);
                    char buffer[64];
                    sprintf(buffer, "%g", val + 1);
                    actualizarValor((yyvsp[0].str), buffer, yylineno);
                    (yyval.str) = strdup(buffer);
                } else {
                    (yyval.str) = strdup("1");
                }
            }
#line 2148 "bisonCopia.tab.c"
    break;

  case 62: /* expresionop: DECREMENTO IDENTIFICADOR  */
#line 375 "bisonCopia.y"
                                       {
                // Pre-decremento
                char* valorActual = NULL;
                for (int i = 0; i < cantidadSimbolos; i++) {
                    if (strcmp(tablaSimbolos[i].nombre, (yyvsp[0].str)) == 0) {
                        valorActual = tablaSimbolos[i].valor;
                        break;
                    }
                }
                if (valorActual) {
                    double val = atof(valorActual);
                    char buffer[64];
                    sprintf(buffer, "%g", val - 1);
                    actualizarValor((yyvsp[0].str), buffer, yylineno);
                    (yyval.str) = strdup(buffer);
                } else {
                    (yyval.str) = strdup("-1");
                }
            }
#line 2172 "bisonCopia.tab.c"
    break;

  case 63: /* expresionop: IDENTIFICADOR MAS_IGUAL expresionop  */
#line 394 "bisonCopia.y"
                                                  {
                // x += expr
                char* valorActual = NULL;
                for (int i = 0; i < cantidadSimbolos; i++) {
                    if (strcmp(tablaSimbolos[i].nombre, (yyvsp[-2].str)) == 0) {
                        valorActual = tablaSimbolos[i].valor;
                        break;
                    }
                }
                if (valorActual && strlen((yyvsp[0].str)) > 0) {
                    double valActual = atof(valorActual);
                    double valNuevo = atof((yyvsp[0].str));
                    double resultado = valActual + valNuevo;
                    char buffer[64];
                    sprintf(buffer, "%g", resultado);
                    actualizarValor((yyvsp[-2].str), buffer, yylineno);
                    (yyval.str) = strdup(buffer);
                } else {
                    (yyval.str) = strdup((yyvsp[0].str));
                }
            }
#line 2198 "bisonCopia.tab.c"
    break;

  case 66: /* expAsignacion: IDENTIFICADOR ASIGNACION expresion  */
#line 422 "bisonCopia.y"
                                                 {
                // Asignación simple: x = expr
                actualizarValor((yyvsp[-2].str), (yyvsp[0].str), yylineno);
                (yyval.str) = strdup((yyvsp[0].str));
                free((yyvsp[0].str));
            }
#line 2209 "bisonCopia.tab.c"
    break;

  case 67: /* expAsignacion: IDENTIFICADOR operAsignacion expresion  */
#line 428 "bisonCopia.y"
                                                     {
                // Evaluar asignación compuesta (ej: x += 5)
                // Obtener valor actual de la variable
                char* valorActual = NULL;
                for (int i = 0; i < cantidadSimbolos; i++) {
                    if (strcmp(tablaSimbolos[i].nombre, (yyvsp[-2].str)) == 0) {
                        valorActual = tablaSimbolos[i].valor;
                        break;
                    }
                }
                if (valorActual) {
                    double valActual = atof(valorActual);
                    double valNuevo = atof((yyvsp[0].str));
                    double resultado = valActual + valNuevo; // Solo += por ahora
                    char buffer[64];
                    sprintf(buffer, "%g", resultado);
                    actualizarValor((yyvsp[-2].str), buffer, yylineno);
                    (yyval.str) = strdup(buffer);
                } else {
                    (yyval.str) = strdup((yyvsp[0].str));
                }
                free((yyvsp[0].str));
            }
#line 2237 "bisonCopia.tab.c"
    break;

  case 68: /* expAsignacion: expUnaria operAsignacion expAsignacion  */
#line 451 "bisonCopia.y"
                                                     {
                (yyval.str) = strdup("asignacion compuesta");
            }
#line 2245 "bisonCopia.tab.c"
    break;

  case 85: /* expAditiva: expMultiplicativa  */
#line 481 "bisonCopia.y"
                               {
                (yyval.str) = strdup((yyvsp[0].str));
            }
#line 2253 "bisonCopia.tab.c"
    break;

  case 86: /* expAditiva: expAditiva '+' expMultiplicativa  */
#line 484 "bisonCopia.y"
                                               {
                double val1 = atof((yyvsp[-2].str));
                double val2 = atof((yyvsp[0].str));
                double resultado = val1 + val2;
                char buffer[64];
                sprintf(buffer, "%g", resultado);
                (yyval.str) = strdup(buffer);
                free((yyvsp[-2].str));
                free((yyvsp[0].str));
            }
#line 2268 "bisonCopia.tab.c"
    break;

  case 87: /* expAditiva: expAditiva '-' expMultiplicativa  */
#line 494 "bisonCopia.y"
                                               {
                double val1 = atof((yyvsp[-2].str));
                double val2 = atof((yyvsp[0].str));
                double resultado = val1 - val2;
                char buffer[64];
                sprintf(buffer, "%g", resultado);
                (yyval.str) = strdup(buffer);
                free((yyvsp[-2].str));
                free((yyvsp[0].str));
            }
#line 2283 "bisonCopia.tab.c"
    break;

  case 88: /* expMultiplicativa: expUnaria  */
#line 506 "bisonCopia.y"
                              {
                (yyval.str) = strdup((yyvsp[0].str));
            }
#line 2291 "bisonCopia.tab.c"
    break;

  case 89: /* expMultiplicativa: expMultiplicativa '*' expUnaria  */
#line 509 "bisonCopia.y"
                                              {
                double val1 = atof((yyvsp[-2].str));
                double val2 = atof((yyvsp[0].str));
                double resultado = val1 * val2;
                char buffer[64];
                sprintf(buffer, "%g", resultado);
                (yyval.str) = strdup(buffer);
                free((yyvsp[-2].str));
                free((yyvsp[0].str));
            }
#line 2306 "bisonCopia.tab.c"
    break;

  case 90: /* expMultiplicativa: expMultiplicativa '/' expUnaria  */
#line 519 "bisonCopia.y"
                                              {
                double val1 = atof((yyvsp[-2].str));
                double val2 = atof((yyvsp[0].str));
                if (val2 != 0) {
                    double resultado = val1 / val2;
                    char buffer[64];
                    sprintf(buffer, "%g", resultado);
                    (yyval.str) = strdup(buffer);
                } else {
                    printf("Error: division por cero\n");
                    (yyval.str) = strdup("0");
                }
                free((yyvsp[-2].str));
                free((yyvsp[0].str));
            }
#line 2326 "bisonCopia.tab.c"
    break;

  case 91: /* expUnaria: expPostfijo  */
#line 537 "bisonCopia.y"
                        {
                (yyval.str) = strdup((yyvsp[0].str));
            }
#line 2334 "bisonCopia.tab.c"
    break;

  case 92: /* expUnaria: INCREMENTO expUnaria  */
#line 540 "bisonCopia.y"
                                   {
                // Pre-incremento: incrementa primero, luego retorna
                // Asumimos que expUnaria es un IDENTIFICADOR
                (yyval.str) = strdup((yyvsp[0].str));
            }
#line 2344 "bisonCopia.tab.c"
    break;

  case 93: /* expUnaria: DECREMENTO expUnaria  */
#line 545 "bisonCopia.y"
                                   {
                // Pre-decremento: decrementa primero, luego retorna
                (yyval.str) = strdup((yyvsp[0].str));
            }
#line 2353 "bisonCopia.tab.c"
    break;

  case 94: /* expUnaria: operUnario expUnaria  */
#line 549 "bisonCopia.y"
                                   {
                (yyval.str) = strdup((yyvsp[0].str));
            }
#line 2361 "bisonCopia.tab.c"
    break;

  case 95: /* expUnaria: SIZEOF '(' nombreTipo ')'  */
#line 552 "bisonCopia.y"
                                        {
                (yyval.str) = strdup("sizeof");
            }
#line 2369 "bisonCopia.tab.c"
    break;

  case 96: /* operUnario: '&'  */
#line 558 "bisonCopia.y"
                {
                (yyval.str) = strdup("&");
            }
#line 2377 "bisonCopia.tab.c"
    break;

  case 97: /* operUnario: '*'  */
#line 561 "bisonCopia.y"
                  {
                (yyval.str) = strdup("*");
            }
#line 2385 "bisonCopia.tab.c"
    break;

  case 98: /* operUnario: '-'  */
#line 564 "bisonCopia.y"
                  {
                (yyval.str) = strdup("-");
            }
#line 2393 "bisonCopia.tab.c"
    break;

  case 99: /* operUnario: '!'  */
#line 567 "bisonCopia.y"
                  {
                (yyval.str) = strdup("!");
            }
#line 2401 "bisonCopia.tab.c"
    break;

  case 103: /* expPostfijo: IDENTIFICADOR INCREMENTO  */
#line 576 "bisonCopia.y"
                                       {
                // Post-incremento: retorna valor actual, luego incrementa
                char* valorActual = NULL;
                for (int i = 0; i < cantidadSimbolos; i++) {
                    if (strcmp(tablaSimbolos[i].nombre, (yyvsp[-1].str)) == 0) {
                        valorActual = tablaSimbolos[i].valor;
                        break;
                    }
                }
                if (valorActual) {
                    double val = atof(valorActual);
                    (yyval.str) = strdup(valorActual); // Retorna valor actual
                    char buffer[64];
                    sprintf(buffer, "%g", val + 1);
                    actualizarValor((yyvsp[-1].str), buffer, yylineno);
                } else {
                    (yyval.str) = strdup("0");
                }
            }
#line 2425 "bisonCopia.tab.c"
    break;

  case 104: /* expPostfijo: IDENTIFICADOR DECREMENTO  */
#line 595 "bisonCopia.y"
                                       {
                // Post-decremento: retorna valor actual, luego decrementa
                char* valorActual = NULL;
                for (int i = 0; i < cantidadSimbolos; i++) {
                    if (strcmp(tablaSimbolos[i].nombre, (yyvsp[-1].str)) == 0) {
                        valorActual = tablaSimbolos[i].valor;
                        break;
                    }
                }
                if (valorActual) {
                    double val = atof(valorActual);
                    (yyval.str) = strdup(valorActual); // Retorna valor actual
                    char buffer[64];
                    sprintf(buffer, "%g", val - 1);
                    actualizarValor((yyvsp[-1].str), buffer, yylineno);
                } else {
                    (yyval.str) = strdup("0");
                }
            }
#line 2449 "bisonCopia.tab.c"
    break;

  case 109: /* expPrimaria: IDENTIFICADOR  */
#line 626 "bisonCopia.y"
                          {
                // Buscar el valor del identificador en la tabla de símbolos
                if (!existeSimbolo((yyvsp[0].str))) {
                    printf("Error: variable '%s' usada sin declarar (linea %d)\n", (yyvsp[0].str), yylineno);
                    (yyval.str) = strdup("0");
                } else {
                    // Buscar el valor en la tabla
                    char* valor = NULL;
                    for (int i = 0; i < cantidadSimbolos; i++) {
                        if (strcmp(tablaSimbolos[i].nombre, (yyvsp[0].str)) == 0) {
                            valor = tablaSimbolos[i].valor;
                            break;
                        }
                    }
                    (yyval.str) = strdup(valor ? valor : "0");
                }
            }
#line 2471 "bisonCopia.tab.c"
    break;

  case 110: /* expPrimaria: constante  */
#line 643 "bisonCopia.y"
                        {
                (yyval.str) = strdup((yyvsp[0].str));
            }
#line 2479 "bisonCopia.tab.c"
    break;

  case 111: /* expPrimaria: literalCadena  */
#line 646 "bisonCopia.y"
                            {
                (yyval.str) = strdup((yyvsp[0].str));
            }
#line 2487 "bisonCopia.tab.c"
    break;

  case 112: /* expPrimaria: '(' expresion ')'  */
#line 649 "bisonCopia.y"
                                {
                int len = strlen((yyvsp[-1].str)) + 3;
                (yyval.str) = malloc(len);
                sprintf((yyval.str), "(%s)", (yyvsp[-1].str));
                free((yyvsp[-1].str));
            }
#line 2498 "bisonCopia.tab.c"
    break;

  case 113: /* constante: CONST_ENTERA  */
#line 659 "bisonCopia.y"
                         {
                char buf[32];
                sprintf(buf, "%d", (yyvsp[0].num));
                (yyval.str) = strdup(buf);
            }
#line 2508 "bisonCopia.tab.c"
    break;

  case 114: /* constante: CONST_OCTAL  */
#line 664 "bisonCopia.y"
                          {
                (yyval.str) = strdup((yyvsp[0].str));
            }
#line 2516 "bisonCopia.tab.c"
    break;

  case 115: /* constante: CONST_HEXADECIMAL  */
#line 667 "bisonCopia.y"
                                {
                (yyval.str) = strdup((yyvsp[0].str));
            }
#line 2524 "bisonCopia.tab.c"
    break;

  case 116: /* constante: CONST_REAL  */
#line 670 "bisonCopia.y"
                         {
                char buf[64];
                sprintf(buf, "%g", (yyvsp[0].real));
                (yyval.str) = strdup(buf);
            }
#line 2534 "bisonCopia.tab.c"
    break;

  case 117: /* constante: CONST_CARACTER  */
#line 675 "bisonCopia.y"
                             {
                (yyval.str) = strdup((yyvsp[0].str));
            }
#line 2542 "bisonCopia.tab.c"
    break;

  case 118: /* literalCadena: LITERAL_CADENA  */
#line 681 "bisonCopia.y"
                           {
                (yyval.str) = strdup((yyvsp[0].str));
            }
#line 2550 "bisonCopia.tab.c"
    break;


#line 2554 "bisonCopia.tab.c"

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
  *++yylsp = yyloc;

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc);
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 690 "bisonCopia.y"


int yyerror(const char *s) {
    erroresSintacticos++;
    fprintf(stderr, "Error sintactico <linea:%d columna:[%d:%d]> %s\n",
            yylloc.first_line, yylloc.first_column, yylloc.last_column - 1, s);
    return 0;
}

int main(int argc, char *argv[]) {

    
#if YYDEBUG
    yydebug = 1;
#endif

    if (argc != 2) {
        fprintf(stderr, "Uso: %s <archivo>\n", argv[0]);
        return 1;
    }

    yyin = fopen(argv[1], "r");
    if (!yyin) {
        fprintf(stderr, "No se pudo abrir el archivo %s\n", argv[1]);
        return 1;
    }

    int resultado = yyparse();

    int totalErrores = erroresSintacticos + erroresLexicos;
    if (resultado == 0 && totalErrores == 0)
        fprintf(stdout, "El archivo %s es valido, no se encontraron errores\n", argv[1]);
    fprintf(stdout, "\nAnalisis terminado. Errores totales: %d (sintacticos: %d, lexicos: %d)\n", totalErrores, erroresSintacticos, erroresLexicos);

    mostrarTabla();
    return 0;


}
