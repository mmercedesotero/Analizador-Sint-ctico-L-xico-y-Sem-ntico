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

/* Acceso directo a la lista de variables declarada en tabla_simbolos.c */
extern Variable listaVariables[];
extern int cantidadSimbolos;

int yyerror(const char *s);
int yywrap() { return 1; }

extern FILE *yyin;
int erroresSintacticos = 0;
int erroresLexicos = 0;

/* Nombre del archivo actual para prefijar mensajes */
const char* current_file = NULL;

int yylex(void);
extern int yylineno;

#line 98 "bisonCopia.tab.c"

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
  YYSYMBOL_42_ = 42,                       /* '('  */
  YYSYMBOL_43_ = 43,                       /* ')'  */
  YYSYMBOL_44_ = 44,                       /* ','  */
  YYSYMBOL_45_ = 45,                       /* '{'  */
  YYSYMBOL_46_ = 46,                       /* '}'  */
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
  YYSYMBOL_declaracionFuncion = 59,        /* declaracionFuncion  */
  YYSYMBOL_listaParametrosop = 60,         /* listaParametrosop  */
  YYSYMBOL_listaParametros = 61,           /* listaParametros  */
  YYSYMBOL_declaVarSimples = 62,           /* declaVarSimples  */
  YYSYMBOL_listaVarSimples = 63,           /* listaVarSimples  */
  YYSYMBOL_inicializacion_op = 64,         /* inicializacion_op  */
  YYSYMBOL_inicializacion = 65,            /* inicializacion  */
  YYSYMBOL_sentencia = 66,                 /* sentencia  */
  YYSYMBOL_setCompuesta = 67,              /* setCompuesta  */
  YYSYMBOL_listaSentencias = 68,           /* listaSentencias  */
  YYSYMBOL_sentExpresion = 69,             /* sentExpresion  */
  YYSYMBOL_sentSeleccion = 70,             /* sentSeleccion  */
  YYSYMBOL_sentIteracion = 71,             /* sentIteracion  */
  YYSYMBOL_forInit = 72,                   /* forInit  */
  YYSYMBOL_declaracionFor = 73,            /* declaracionFor  */
  YYSYMBOL_sentSwitch = 74,                /* sentSwitch  */
  YYSYMBOL_listaCases = 75,                /* listaCases  */
  YYSYMBOL_caseSentencia = 76,             /* caseSentencia  */
  YYSYMBOL_sentSalto = 77,                 /* sentSalto  */
  YYSYMBOL_expresionop = 78,               /* expresionop  */
  YYSYMBOL_expresion = 79,                 /* expresion  */
  YYSYMBOL_expAsignacion = 80,             /* expAsignacion  */
  YYSYMBOL_operAsignacion = 81,            /* operAsignacion  */
  YYSYMBOL_expCondicional = 82,            /* expCondicional  */
  YYSYMBOL_expOr = 83,                     /* expOr  */
  YYSYMBOL_expAnd = 84,                    /* expAnd  */
  YYSYMBOL_expIgualdad = 85,               /* expIgualdad  */
  YYSYMBOL_expRelacional = 86,             /* expRelacional  */
  YYSYMBOL_expAditiva = 87,                /* expAditiva  */
  YYSYMBOL_expMultiplicativa = 88,         /* expMultiplicativa  */
  YYSYMBOL_expUnaria = 89,                 /* expUnaria  */
  YYSYMBOL_operUnario = 90,                /* operUnario  */
  YYSYMBOL_expPostfijo = 91,               /* expPostfijo  */
  YYSYMBOL_listaArgumentosop = 92,         /* listaArgumentosop  */
  YYSYMBOL_listaArgumentos = 93,           /* listaArgumentos  */
  YYSYMBOL_expPrimaria = 94,               /* expPrimaria  */
  YYSYMBOL_constante = 95,                 /* constante  */
  YYSYMBOL_literalCadena = 96,             /* literalCadena  */
  YYSYMBOL_nombreTipo = 97                 /* nombreTipo  */
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
#define YYLAST   546

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  125
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  221

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
      42,    43,    36,    34,    44,    35,     2,    37,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    47,    41,
      38,     2,    39,    40,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    50,     2,    51,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    45,     2,    46,     2,     2,     2,     2,
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
       0,    67,    67,    73,    74,    75,    79,    81,    84,    86,
      89,    90,    93,    96,    99,   102,   106,   108,   110,   114,
     121,   136,   150,   176,   179,   184,   195,   196,   197,   198,
     199,   200,   201,   205,   208,   209,   212,   216,   219,   226,
     229,   232,   238,   239,   243,   257,   262,   263,   266,   267,
     271,   274,   277,   286,   289,   292,   303,   310,   313,   319,
     329,   332,   335,   338,   341,   344,   363,   382,   401,   420,
     444,   447,   448,   454,   477,   482,   483,   486,   487,   489,
     490,   493,   494,   496,   497,   498,   501,   502,   503,   504,
     505,   507,   510,   520,   532,   535,   545,   563,   566,   571,
     575,   578,   584,   587,   590,   593,   599,   600,   601,   602,
     621,   642,   644,   647,   648,   652,   669,   672,   675,   685,
     690,   693,   696,   701,   707,   712
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
  "'('", "')'", "','", "'{'", "'}'", "':'", "'&'", "'!'", "'['", "']'",
  "$accept", "programa", "listaTopLevel", "listaDeclaracionesop",
  "listaSentenciasop", "listaDeclaraciones", "declaracion",
  "declaracionFuncion", "listaParametrosop", "listaParametros",
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

#define YYPACT_NINF (-96)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-10)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -96,    10,   198,   -96,   -35,    50,    63,   -96,   -96,   -96,
     -96,   -96,   -96,    19,    21,    26,    14,    62,    -1,     8,
     434,    66,   451,   451,   -96,   -96,   497,   247,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
      78,   -96,   -96,    -3,   103,     6,     7,    13,    15,    28,
     451,   -14,   -96,   -96,   -96,   -96,    -4,    -2,   -96,   -96,
     119,   -96,   497,   497,   497,     5,    86,   128,   150,    99,
     -96,   497,   -96,   -96,   104,   145,   156,    36,   -96,   -96,
     117,   121,   342,   296,   -96,   -96,   451,   497,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   -96,
     497,   -96,   497,   497,   497,   161,   -96,   -96,   -96,   162,
     -96,   -96,   129,   131,   179,   143,   -96,   185,   -96,   -96,
      14,    14,   -96,   -96,    14,    14,    14,    14,    14,    14,
     -96,   142,   -96,   144,   -96,   146,   -96,   -96,   147,   -96,
     388,   -96,   103,   -96,   148,     6,     7,     7,    13,    13,
      13,    13,    15,    15,   -96,   -96,   -96,   -96,   151,   166,
     137,   -96,   186,   157,   181,   160,   434,   434,   160,   182,
      14,   -96,   -96,   105,   105,    45,    45,   -96,   -96,   184,
     497,   -96,   -96,   -96,   451,   -96,   497,   -96,   -96,   434,
     227,   -96,   219,   -96,   141,   100,   189,   -96,   -96,   -96,
     231,   434,    14,   228,   191,    -5,   -96,   195,   -96,   -96,
      64,   192,   434,   -96,   -96,   -96,   434,   434,   -96,   -96,
     -96
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,     1,     0,     0,   115,   124,   120,   121,
     123,   119,   122,     0,     0,     0,    53,     0,     0,     0,
       0,     0,     0,     0,   104,   103,     0,     0,   102,   105,
       4,    13,    12,     5,    26,    27,    28,    29,    30,    31,
       0,    70,    71,    77,    79,    81,    83,    86,    91,    94,
       0,    97,   106,   116,   117,    14,    23,     0,   109,   110,
      75,    76,     0,     0,     0,    53,    55,     0,     0,     0,
      54,     0,    51,    52,     0,     0,     0,   115,    98,    99,
       0,     0,     0,     0,    10,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    75,
       0,   100,   111,     0,     0,    16,    21,    24,    20,     0,
      72,    73,     0,     0,     0,     0,    42,    43,    65,    66,
      53,    53,    67,    68,    53,    53,    53,    53,    53,    53,
      50,     0,    32,     0,   125,     0,   118,    14,     0,    34,
       0,    11,    80,    94,     0,    82,    84,    85,    87,    89,
      90,    88,    92,    93,    95,    96,    74,   113,     0,   112,
       0,    25,     0,     0,    17,    23,     0,     0,    23,    44,
      53,    56,    69,    59,    60,    61,    62,    63,    64,     0,
       0,   101,    33,    35,     0,   108,     0,   107,    18,     0,
       0,    22,    37,    39,     0,     0,     0,    78,   114,    15,
       0,     0,    53,     0,     0,     0,    47,     0,    19,    38,
       0,     0,     0,    45,    46,    40,     0,     0,    49,    41,
      48
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -96,   -96,   -96,   -96,   -96,   -96,   -25,   -96,   -96,   -96,
     -96,   127,    77,   -96,   -20,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,    39,   -96,   -39,    -7,   -95,   196,
      65,   -96,   173,   180,    67,    59,    75,   -19,   -96,   -96,
     -96,   -96,   -96,   -15,   -96,   -96
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    82,   138,    83,    30,    31,   163,   164,
      32,    57,   106,   107,    33,    34,   140,    35,    36,    37,
     115,   116,    38,   205,   206,    39,    69,    40,    41,    62,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
     158,   159,    52,    53,    54,   135
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      75,    70,    84,    78,    79,   156,    55,   157,   114,    66,
       3,     8,     9,    10,    11,    12,   203,   204,    66,    80,
       8,     9,    10,    11,    12,    86,   117,   104,   102,    89,
      90,   101,    91,    92,    67,    68,   103,    87,   105,   108,
      72,   213,   109,    67,    68,    93,    94,    95,    96,    73,
      70,    97,    98,   110,    56,   111,   112,   113,   141,    99,
      61,    63,   139,    64,   131,    58,    59,   143,    65,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   154,   155,
     144,   171,   172,   128,   129,   173,   174,   175,   176,   177,
     178,   198,    58,    59,    60,    61,   160,   161,   124,   125,
     126,   127,   128,   129,    71,    70,    70,   216,    76,    70,
      70,    70,    70,    70,    70,   118,   119,   120,   121,    85,
     183,   203,   204,     6,     7,     8,     9,    10,    11,    12,
      88,   194,   122,   124,   125,   126,   127,   128,   129,    21,
     130,   126,   127,   128,   129,   132,   192,   193,    22,    23,
     148,   149,   150,   151,   123,    70,   146,   147,   133,   134,
     136,    26,   137,   210,   162,   143,   165,    28,    29,   199,
     152,   153,   166,   196,   167,   124,   125,   126,   127,   128,
     129,   209,   202,   168,   170,   179,   180,    70,   187,   181,
     188,   104,   218,   182,   185,   184,   219,   220,    -2,     4,
     189,     5,     6,     7,     8,     9,    10,    11,    12,    13,
     186,    14,    15,    16,    17,    18,    19,    20,    21,   124,
     125,   126,   127,   128,   129,   190,   109,    22,    23,   195,
     200,   201,   207,    24,    25,   208,   215,   211,   212,   217,
      26,   169,   191,    27,   214,   100,    28,    29,    81,   197,
       5,    -6,    -6,    -6,    -6,    -6,    -6,    -6,    -6,   142,
      -6,    -6,    -6,    -6,    -6,    -6,    -6,    -6,   145,     0,
       0,     0,     0,     0,     0,     0,    -6,    -6,     0,     0,
       0,     0,    -6,    -6,     0,     0,     0,     0,     0,    -6,
       0,     0,    -6,    -6,     0,    -6,    -6,    81,     0,     5,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,     0,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,     0,     0,     0,
       0,     0,     0,     0,     0,    -7,    -7,     0,     0,     0,
       0,    -7,    -7,     0,     0,     0,     0,     0,    -7,     0,
       0,    -7,    -7,    74,    -7,    -7,     6,     7,     8,     9,
      10,    11,    12,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,    22,    23,     0,     0,     0,     0,    24,    25,     0,
       0,     0,     0,     0,    26,     0,     0,    27,    -8,    74,
      28,    29,     6,     7,     8,     9,    10,    11,    12,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,     0,     0,     0,     0,    22,    23,     0,
       0,     0,     0,    24,    25,     0,     0,     0,     0,     0,
      26,     0,     0,    27,    -9,    74,    28,    29,     6,     7,
       8,     9,    10,    11,    12,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    77,     7,     8,     9,    10,
      11,    12,     0,    22,    23,     0,     0,     0,     0,    24,
      25,    21,     0,     0,     0,     0,    26,     0,     0,    27,
      22,    23,    28,    29,     0,     0,    24,    25,     0,     0,
       0,     0,     0,    26,     0,     0,     0,     0,     0,    28,
      29,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,    22,    23,     0,     0,
       0,     0,    24,    25,     0,     0,     0,     0,     0,    26,
       0,     0,     0,     0,     0,    28,    29
};

static const yytype_int16 yycheck[] =
{
      20,    16,    27,    22,    23,   100,    41,   102,     3,     4,
       0,     6,     7,     8,     9,    10,    21,    22,     4,    26,
       6,     7,     8,     9,    10,    28,    65,    31,    42,    23,
      24,    50,    25,    26,    29,    30,    50,    40,    42,    41,
      41,    46,    44,    29,    30,    38,    39,    34,    35,    41,
      65,    36,    37,    60,     4,    62,    63,    64,    83,    31,
      32,    42,    82,    42,    71,    29,    30,    86,    42,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      87,   120,   121,    38,    39,   124,   125,   126,   127,   128,
     129,   186,    29,    30,    31,    32,   103,   104,    34,    35,
      36,    37,    38,    39,    42,   120,   121,    43,    42,   124,
     125,   126,   127,   128,   129,    29,    30,    31,    32,    41,
     140,    21,    22,     4,     5,     6,     7,     8,     9,    10,
      27,   170,     4,    34,    35,    36,    37,    38,    39,    20,
      41,    36,    37,    38,    39,    41,   166,   167,    29,    30,
      91,    92,    93,    94,     4,   170,    89,    90,    13,     3,
      43,    42,    41,   202,     3,   184,     4,    48,    49,   189,
      95,    96,    43,   180,    43,    34,    35,    36,    37,    38,
      39,   201,    41,     4,    41,    43,    42,   202,    51,    43,
       4,    31,   212,    46,    43,    47,   216,   217,     0,     1,
      43,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      44,    13,    14,    15,    16,    17,    18,    19,    20,    34,
      35,    36,    37,    38,    39,    44,    44,    29,    30,    45,
       3,    12,    43,    35,    36,     4,    41,     9,    47,    47,
      42,   114,   165,    45,   205,    49,    48,    49,     1,   184,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    86,
      13,    14,    15,    16,    17,    18,    19,    20,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    -1,    -1,
      -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    45,    46,    -1,    48,    49,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    30,    -1,    -1,    -1,
      -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    45,    46,     1,    48,    49,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    30,    -1,    -1,    -1,    -1,    35,    36,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    45,    46,     1,
      48,    49,     4,     5,     6,     7,     8,     9,    10,    11,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    -1,
      -1,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    45,    46,     1,    48,    49,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,     4,     5,     6,     7,     8,
       9,    10,    -1,    29,    30,    -1,    -1,    -1,    -1,    35,
      36,    20,    -1,    -1,    -1,    -1,    42,    -1,    -1,    45,
      29,    30,    48,    49,    -1,    -1,    35,    36,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    48,
      49,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    -1,    -1,
      -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    48,    49
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    53,    54,     0,     1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    13,    14,    15,    16,    17,    18,
      19,    20,    29,    30,    35,    36,    42,    45,    48,    49,
      58,    59,    62,    66,    67,    69,    70,    71,    74,    77,
      79,    80,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    94,    95,    96,    41,     4,    63,    29,    30,
      31,    32,    81,    42,    42,    42,     4,    29,    30,    78,
      95,    42,    41,    41,     1,    66,    42,     4,    89,    89,
      79,     1,    55,    57,    58,    41,    28,    40,    27,    23,
      24,    25,    26,    38,    39,    34,    35,    36,    37,    31,
      81,    89,    42,    50,    31,    42,    64,    65,    41,    44,
      79,    79,    79,    79,     3,    72,    73,    78,    29,    30,
      31,    32,     4,     4,    34,    35,    36,    37,    38,    39,
      41,    79,    41,    13,     3,    97,    43,    41,    56,    66,
      68,    58,    84,    89,    79,    85,    86,    86,    87,    87,
      87,    87,    88,    88,    89,    89,    80,    80,    92,    93,
      79,    79,     3,    60,    61,     4,    43,    43,     4,    63,
      41,    78,    78,    78,    78,    78,    78,    78,    78,    43,
      42,    43,    46,    66,    47,    43,    44,    51,     4,    43,
      44,    64,    66,    66,    78,    45,    79,    82,    80,    66,
       3,    12,    41,    21,    22,    75,    76,    43,     4,    66,
      78,     9,    47,    46,    76,    41,    43,    47,    66,    66,
      66
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    52,    53,    54,    54,    54,    55,    55,    56,    56,
      57,    57,    58,    58,    58,    59,    60,    60,    61,    61,
      62,    63,    63,    64,    64,    65,    66,    66,    66,    66,
      66,    66,    66,    67,    68,    68,    69,    70,    70,    71,
      71,    71,    72,    72,    73,    74,    75,    75,    76,    76,
      77,    77,    77,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      79,    80,    80,    80,    80,    81,    81,    82,    82,    83,
      83,    84,    84,    85,    85,    85,    86,    86,    86,    86,
      86,    87,    87,    87,    88,    88,    88,    89,    89,    89,
      89,    89,    90,    90,    90,    90,    91,    91,    91,    91,
      91,    92,    92,    93,    93,    94,    94,    94,    94,    95,
      95,    95,    95,    95,    96,    97
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     2,     0,     1,     0,     1,
       1,     2,     1,     1,     2,     6,     0,     1,     2,     4,
       3,     2,     4,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     2,     4,     1,     2,     2,     5,     7,     5,
       7,     9,     1,     1,     2,     7,     2,     1,     4,     3,
       3,     2,     2,     0,     1,     1,     3,     1,     1,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     3,
       1,     1,     3,     3,     3,     1,     1,     1,     5,     1,
       3,     1,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     2,     2,
       2,     4,     1,     1,     1,     1,     1,     4,     4,     2,
       2,     0,     1,     1,     3,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1
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
#line 67 "bisonCopia.y"
                        {
                printf("=========================================\n");
                printf("Programa valido.\n");
            }
#line 1797 "bisonCopia.tab.c"
    break;

  case 12: /* declaracion: declaVarSimples  */
#line 93 "bisonCopia.y"
                             {
                printf("Se reconocio la declaracion de variables simples.\n");
            }
#line 1805 "bisonCopia.tab.c"
    break;

  case 13: /* declaracion: declaracionFuncion  */
#line 96 "bisonCopia.y"
                                 { 
                printf("Se reconocio una declaracion de funcion.\n"); 
            }
#line 1813 "bisonCopia.tab.c"
    break;

  case 14: /* declaracion: error ';'  */
#line 99 "bisonCopia.y"
                        { yyerrok; }
#line 1819 "bisonCopia.tab.c"
    break;

  case 15: /* declaracionFuncion: TIPO_DATO IDENTIFICADOR '(' listaParametrosop ')' sentencia  */
#line 102 "bisonCopia.y"
                                                                                {
                 printf("Se reconocio la declaracion de la funcion: %s.\n", (yyvsp[-4].str));
}
#line 1827 "bisonCopia.tab.c"
    break;

  case 18: /* listaParametros: TIPO_DATO IDENTIFICADOR  */
#line 110 "bisonCopia.y"
                                         {
                /* Registrar parametros como variables declaradas */
                insertarSimbolo((yyvsp[0].str), (yyvsp[-1].str), "-", (yylsp[0]).first_line);
            }
#line 1836 "bisonCopia.tab.c"
    break;

  case 19: /* listaParametros: listaParametros ',' TIPO_DATO IDENTIFICADOR  */
#line 114 "bisonCopia.y"
                                                          {
                insertarSimbolo((yyvsp[0].str), (yyvsp[-1].str), "-", (yylsp[0]).first_line);
            }
#line 1844 "bisonCopia.tab.c"
    break;

  case 20: /* declaVarSimples: TIPO_DATO listaVarSimples ';'  */
#line 121 "bisonCopia.y"
                                    {
          for (int i = 0; i < (yyvsp[-1].lvars)->cantidad; i++) {
              char* val = (yyvsp[-1].lvars)->variables[i].valor ? (yyvsp[-1].lvars)->variables[i].valor : "-";
              insertarSimbolo((yyvsp[-1].lvars)->variables[i].nombre, (yyvsp[-2].str), val, (yyvsp[-1].lvars)->variables[i].linea);
              if ((yyvsp[-1].lvars)->variables[i].nombre) free((yyvsp[-1].lvars)->variables[i].nombre);
              if ((yyvsp[-1].lvars)->variables[i].valor) free((yyvsp[-1].lvars)->variables[i].valor);
          }
          free((yyvsp[-1].lvars)->variables);
          free((yyvsp[-1].lvars));
          free((yyvsp[-2].str));
      }
#line 1860 "bisonCopia.tab.c"
    break;

  case 21: /* listaVarSimples: IDENTIFICADOR inicializacion_op  */
#line 136 "bisonCopia.y"
                                      {
          ListaVariables* lista = malloc(sizeof(ListaVariables));
          lista->variables = malloc(sizeof(Variable));
          lista->variables[0].nombre = strdup((yyvsp[-1].str));
          if ((yyvsp[0].str) && strlen((yyvsp[0].str)) > 0) {
              lista->variables[0].valor = strdup((yyvsp[0].str) + 3);
          } else {
              lista->variables[0].valor = NULL;
          }
          lista->variables[0].linea = (yylsp[-1]).first_line;
          lista->cantidad = 1;
          (yyval.lvars) = lista;
          free((yyvsp[0].str));
      }
#line 1879 "bisonCopia.tab.c"
    break;

  case 22: /* listaVarSimples: listaVarSimples ',' IDENTIFICADOR inicializacion_op  */
#line 150 "bisonCopia.y"
                                                          {
          (yyvsp[-3].lvars)->variables = realloc((yyvsp[-3].lvars)->variables, sizeof(Variable) * ((yyvsp[-3].lvars)->cantidad + 1));
          (yyvsp[-3].lvars)->variables[(yyvsp[-3].lvars)->cantidad].nombre = strdup((yyvsp[-1].str));
          if ((yyvsp[0].str) && strlen((yyvsp[0].str)) > 0) {
              (yyvsp[-3].lvars)->variables[(yyvsp[-3].lvars)->cantidad].valor = strdup((yyvsp[0].str) + 3);
          } else {
              (yyvsp[-3].lvars)->variables[(yyvsp[-3].lvars)->cantidad].valor = NULL;
          }
          (yyvsp[-3].lvars)->variables[(yyvsp[-3].lvars)->cantidad].linea = (yylsp[-1]).first_line;
          (yyvsp[-3].lvars)->cantidad++;
          (yyval.lvars) = (yyvsp[-3].lvars);
          free((yyvsp[0].str));
      }
#line 1897 "bisonCopia.tab.c"
    break;

  case 23: /* inicializacion_op: %empty  */
#line 176 "bisonCopia.y"
                         {
                (yyval.str) = strdup("");
            }
#line 1905 "bisonCopia.tab.c"
    break;

  case 24: /* inicializacion_op: inicializacion  */
#line 179 "bisonCopia.y"
                             {
                (yyval.str) = (yyvsp[0].str);
            }
#line 1913 "bisonCopia.tab.c"
    break;

  case 25: /* inicializacion: ASIGNACION expresion  */
#line 184 "bisonCopia.y"
                                     {
            char* temp = malloc(strlen((yyvsp[0].str)) + 4); 
            sprintf(temp, " = %s", (yyvsp[0].str));
            (yyval.str) = temp;
            free((yyvsp[0].str));
            }
#line 1924 "bisonCopia.tab.c"
    break;

  case 32: /* sentencia: error ';'  */
#line 201 "bisonCopia.y"
                        { yyerrok; }
#line 1930 "bisonCopia.tab.c"
    break;

  case 37: /* sentSeleccion: IF '(' expresion ')' sentencia  */
#line 216 "bisonCopia.y"
                                           {
                printf("Se reconocio una sentencia IF sin ELSE.\n");
            }
#line 1938 "bisonCopia.tab.c"
    break;

  case 38: /* sentSeleccion: IF '(' expresion ')' sentencia ELSE sentencia  */
#line 219 "bisonCopia.y"
                                                            {
                printf("Se reconocio una sentencia IF con ELSE.\n");
            }
#line 1946 "bisonCopia.tab.c"
    break;

  case 39: /* sentIteracion: WHILE '(' expresion ')' sentencia  */
#line 226 "bisonCopia.y"
                                              {
                printf("Se reconocio una sentencia WHILE.\n");
            }
#line 1954 "bisonCopia.tab.c"
    break;

  case 40: /* sentIteracion: DO sentencia WHILE '(' expresion ')' ';'  */
#line 229 "bisonCopia.y"
                                                       {
                printf("Se reconocio una sentencia DO y WHILE.\n");
            }
#line 1962 "bisonCopia.tab.c"
    break;

  case 41: /* sentIteracion: FOR '(' forInit ';' expresionop ';' expresionop ')' sentencia  */
#line 232 "bisonCopia.y"
                                                                            {
                printf("Se reconocio una sentencia FOR.\n");
            }
#line 1970 "bisonCopia.tab.c"
    break;

  case 44: /* declaracionFor: TIPO_DATO listaVarSimples  */
#line 243 "bisonCopia.y"
                                      {
                for (int i = 0; i < (yyvsp[0].lvars)->cantidad; i++) {
                    insertarSimbolo((yyvsp[0].lvars)->variables[i].nombre, (yyvsp[-1].str),
                                    (yyvsp[0].lvars)->variables[i].valor ? (yyvsp[0].lvars)->variables[i].valor : "-",
                                    (yyvsp[0].lvars)->variables[i].linea);
                    if ((yyvsp[0].lvars)->variables[i].nombre) free((yyvsp[0].lvars)->variables[i].nombre);
                    if ((yyvsp[0].lvars)->variables[i].valor) free((yyvsp[0].lvars)->variables[i].valor);
                }
                free((yyvsp[0].lvars)->variables);
                free((yyvsp[0].lvars));
                free((yyvsp[-1].str));
            }
#line 1987 "bisonCopia.tab.c"
    break;

  case 45: /* sentSwitch: SWITCH '(' expresion ')' '{' listaCases '}'  */
#line 257 "bisonCopia.y"
                                                        {
                printf("Se reconocio una sentencia SWITCH.\n");
            }
#line 1995 "bisonCopia.tab.c"
    break;

  case 50: /* sentSalto: RETURN expresionop ';'  */
#line 271 "bisonCopia.y"
                                   {
                printf("Se reconocio una sentencia de RETURN.\n");
            }
#line 2003 "bisonCopia.tab.c"
    break;

  case 51: /* sentSalto: BREAK ';'  */
#line 274 "bisonCopia.y"
                        {
                printf("Se reconocio una sentencia BREAK.\n");
            }
#line 2011 "bisonCopia.tab.c"
    break;

  case 52: /* sentSalto: CONTINUE ';'  */
#line 277 "bisonCopia.y"
                           {
                printf("Se reconocio una sentencia CONTINUE.\n");
            }
#line 2019 "bisonCopia.tab.c"
    break;

  case 53: /* expresionop: %empty  */
#line 286 "bisonCopia.y"
                         {
                (yyval.str) = strdup("");
            }
#line 2027 "bisonCopia.tab.c"
    break;

  case 54: /* expresionop: constante  */
#line 289 "bisonCopia.y"
                        {
                (yyval.str) = strdup((yyvsp[0].str));
            }
#line 2035 "bisonCopia.tab.c"
    break;

  case 55: /* expresionop: IDENTIFICADOR  */
#line 292 "bisonCopia.y"
                            {
                // Buscar el valor en la tabla de símbolos
                char* valor = NULL;
                for (int i = 0; i < cantidadSimbolos; i++) {
                    if (strcmp(listaVariables[i].nombre, (yyvsp[0].str)) == 0) {
                        valor = listaVariables[i].valor;
                        break;
                    }
                }
                (yyval.str) = strdup(valor ? valor : "0");
            }
#line 2051 "bisonCopia.tab.c"
    break;

  case 56: /* expresionop: IDENTIFICADOR ASIGNACION expresionop  */
#line 303 "bisonCopia.y"
                                                   {
                // Actualizar el valor en la tabla de símbolos
                if (strlen((yyvsp[0].str)) > 0) {
                    actualizarValor((yyvsp[-2].str), (yyvsp[0].str), (yylsp[-2]).first_line);
                }
                (yyval.str) = strdup((yyvsp[0].str)); 
            }
#line 2063 "bisonCopia.tab.c"
    break;

  case 57: /* expresionop: constante  */
#line 310 "bisonCopia.y"
                        {
                (yyval.str) = strdup((yyvsp[0].str));
            }
#line 2071 "bisonCopia.tab.c"
    break;

  case 58: /* expresionop: IDENTIFICADOR  */
#line 313 "bisonCopia.y"
                            {
                if (!existeSimbolo((yyvsp[0].str))) {
                    printf("Error semantico: variable '%s' usada sin declarar (linea %d)\n", (yyvsp[0].str), (yylsp[0]).first_line);
                }
                (yyval.str) = strdup((yyvsp[0].str));
            }
#line 2082 "bisonCopia.tab.c"
    break;

  case 59: /* expresionop: expresionop '+' expresionop  */
#line 319 "bisonCopia.y"
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
#line 2097 "bisonCopia.tab.c"
    break;

  case 60: /* expresionop: expresionop '-' expresionop  */
#line 329 "bisonCopia.y"
                                          {
                (yyval.str) = strdup("resta");
            }
#line 2105 "bisonCopia.tab.c"
    break;

  case 61: /* expresionop: expresionop '*' expresionop  */
#line 332 "bisonCopia.y"
                                          {
                (yyval.str) = strdup("mult");
            }
#line 2113 "bisonCopia.tab.c"
    break;

  case 62: /* expresionop: expresionop '/' expresionop  */
#line 335 "bisonCopia.y"
                                          {
                (yyval.str) = strdup("div");
            }
#line 2121 "bisonCopia.tab.c"
    break;

  case 63: /* expresionop: expresionop '<' expresionop  */
#line 338 "bisonCopia.y"
                                          {
                (yyval.str) = strdup("menor");
            }
#line 2129 "bisonCopia.tab.c"
    break;

  case 64: /* expresionop: expresionop '>' expresionop  */
#line 341 "bisonCopia.y"
                                          {
                (yyval.str) = strdup("mayor");
            }
#line 2137 "bisonCopia.tab.c"
    break;

  case 65: /* expresionop: IDENTIFICADOR INCREMENTO  */
#line 344 "bisonCopia.y"
                                       {
                // Post-incremento
                char* valorActual = NULL;
                for (int i = 0; i < cantidadSimbolos; i++) {
                    if (strcmp(listaVariables[i].nombre, (yyvsp[-1].str)) == 0) {
                        valorActual = listaVariables[i].valor;
                        break;
                    }
                }
                if (valorActual) {
                    double val = atof(valorActual);
                    char buffer[64];
                    sprintf(buffer, "%g", val + 1);
                    actualizarValor((yyvsp[-1].str), buffer, (yylsp[-1]).first_line);
                    (yyval.str) = strdup(buffer);
                } else {
                    (yyval.str) = strdup("1");
                }
            }
#line 2161 "bisonCopia.tab.c"
    break;

  case 66: /* expresionop: IDENTIFICADOR DECREMENTO  */
#line 363 "bisonCopia.y"
                                       {
                // Post-decremento
                char* valorActual = NULL;
                for (int i = 0; i < cantidadSimbolos; i++) {
                    if (strcmp(listaVariables[i].nombre, (yyvsp[-1].str)) == 0) {
                        valorActual = listaVariables[i].valor;
                        break;
                    }
                }
                if (valorActual) {
                    double val = atof(valorActual);
                    char buffer[64];
                    sprintf(buffer, "%g", val - 1);
                    actualizarValor((yyvsp[-1].str), buffer, (yylsp[-1]).first_line);
                    (yyval.str) = strdup(buffer);
                } else {
                    (yyval.str) = strdup("-1");
                }
            }
#line 2185 "bisonCopia.tab.c"
    break;

  case 67: /* expresionop: INCREMENTO IDENTIFICADOR  */
#line 382 "bisonCopia.y"
                                       {
                // Pre-incremento
                char* valorActual = NULL;
                for (int i = 0; i < cantidadSimbolos; i++) {
                    if (strcmp(listaVariables[i].nombre, (yyvsp[0].str)) == 0) {
                        valorActual = listaVariables[i].valor;
                        break;
                    }
                }
                if (valorActual) {
                    double val = atof(valorActual);
                    char buffer[64];
                    sprintf(buffer, "%g", val + 1);
                    actualizarValor((yyvsp[0].str), buffer, (yylsp[0]).first_line);
                    (yyval.str) = strdup(buffer);
                } else {
                    (yyval.str) = strdup("1");
                }
            }
#line 2209 "bisonCopia.tab.c"
    break;

  case 68: /* expresionop: DECREMENTO IDENTIFICADOR  */
#line 401 "bisonCopia.y"
                                       {
                // Pre-decremento
                char* valorActual = NULL;
                for (int i = 0; i < cantidadSimbolos; i++) {
                    if (strcmp(listaVariables[i].nombre, (yyvsp[0].str)) == 0) {
                        valorActual = listaVariables[i].valor;
                        break;
                    }
                }
                if (valorActual) {
                    double val = atof(valorActual);
                    char buffer[64];
                    sprintf(buffer, "%g", val - 1);
                    actualizarValor((yyvsp[0].str), buffer, (yylsp[0]).first_line);
                    (yyval.str) = strdup(buffer);
                } else {
                    (yyval.str) = strdup("-1");
                }
            }
#line 2233 "bisonCopia.tab.c"
    break;

  case 69: /* expresionop: IDENTIFICADOR MAS_IGUAL expresionop  */
#line 420 "bisonCopia.y"
                                                  {
                // x += expr
                char* valorActual = NULL;
                for (int i = 0; i < cantidadSimbolos; i++) {
                    if (strcmp(listaVariables[i].nombre, (yyvsp[-2].str)) == 0) {
                        valorActual = listaVariables[i].valor;
                        break;
                    }
                }
                if (valorActual && strlen((yyvsp[0].str)) > 0) {
                    double valActual = atof(valorActual);
                    double valNuevo = atof((yyvsp[0].str));
                    double resultado = valActual + valNuevo;
                    char buffer[64];
                    sprintf(buffer, "%g", resultado);
                    actualizarValor((yyvsp[-2].str), buffer, (yylsp[-2]).first_line);
                    (yyval.str) = strdup(buffer);
                } else {
                    (yyval.str) = strdup((yyvsp[0].str));
                }
            }
#line 2259 "bisonCopia.tab.c"
    break;

  case 72: /* expAsignacion: IDENTIFICADOR ASIGNACION expresion  */
#line 448 "bisonCopia.y"
                                                 {
                // Asignación simple: x = expr
                actualizarValor((yyvsp[-2].str), (yyvsp[0].str), (yylsp[-2]).first_line);
                (yyval.str) = strdup((yyvsp[0].str));
                free((yyvsp[0].str));
            }
#line 2270 "bisonCopia.tab.c"
    break;

  case 73: /* expAsignacion: IDENTIFICADOR operAsignacion expresion  */
#line 454 "bisonCopia.y"
                                                     {
                // Evaluar asignación compuesta (ej: x += 5)
                // Obtener valor actual de la variable
                char* valorActual = NULL;
                for (int i = 0; i < cantidadSimbolos; i++) {
                    if (strcmp(listaVariables[i].nombre, (yyvsp[-2].str)) == 0) {
                        valorActual = listaVariables[i].valor;
                        break;
                    }
                }
                if (valorActual) {
                    double valActual = atof(valorActual);
                    double valNuevo = atof((yyvsp[0].str));
                    double resultado = valActual + valNuevo; // Solo += por ahora
                    char buffer[64];
                    sprintf(buffer, "%g", resultado);
                    actualizarValor((yyvsp[-2].str), buffer, (yylsp[-2]).first_line);
                    (yyval.str) = strdup(buffer);
                } else {
                    (yyval.str) = strdup((yyvsp[0].str));
                }
                free((yyvsp[0].str));
            }
#line 2298 "bisonCopia.tab.c"
    break;

  case 74: /* expAsignacion: expUnaria operAsignacion expAsignacion  */
#line 477 "bisonCopia.y"
                                                     {
                (yyval.str) = strdup("asignacion compuesta");
            }
#line 2306 "bisonCopia.tab.c"
    break;

  case 91: /* expAditiva: expMultiplicativa  */
#line 507 "bisonCopia.y"
                               {
                (yyval.str) = strdup((yyvsp[0].str));
            }
#line 2314 "bisonCopia.tab.c"
    break;

  case 92: /* expAditiva: expAditiva '+' expMultiplicativa  */
#line 510 "bisonCopia.y"
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
#line 2329 "bisonCopia.tab.c"
    break;

  case 93: /* expAditiva: expAditiva '-' expMultiplicativa  */
#line 520 "bisonCopia.y"
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
#line 2344 "bisonCopia.tab.c"
    break;

  case 94: /* expMultiplicativa: expUnaria  */
#line 532 "bisonCopia.y"
                              {
                (yyval.str) = strdup((yyvsp[0].str));
            }
#line 2352 "bisonCopia.tab.c"
    break;

  case 95: /* expMultiplicativa: expMultiplicativa '*' expUnaria  */
#line 535 "bisonCopia.y"
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
#line 2367 "bisonCopia.tab.c"
    break;

  case 96: /* expMultiplicativa: expMultiplicativa '/' expUnaria  */
#line 545 "bisonCopia.y"
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
#line 2387 "bisonCopia.tab.c"
    break;

  case 97: /* expUnaria: expPostfijo  */
#line 563 "bisonCopia.y"
                        {
                (yyval.str) = strdup((yyvsp[0].str));
            }
#line 2395 "bisonCopia.tab.c"
    break;

  case 98: /* expUnaria: INCREMENTO expUnaria  */
#line 566 "bisonCopia.y"
                                   {
                // Pre-incremento: incrementa primero, luego retorna
                // Asumimos que expUnaria es un IDENTIFICADOR
                (yyval.str) = strdup((yyvsp[0].str));
            }
#line 2405 "bisonCopia.tab.c"
    break;

  case 99: /* expUnaria: DECREMENTO expUnaria  */
#line 571 "bisonCopia.y"
                                   {
                // Pre-decremento: decrementa primero, luego retorna
                (yyval.str) = strdup((yyvsp[0].str));
            }
#line 2414 "bisonCopia.tab.c"
    break;

  case 100: /* expUnaria: operUnario expUnaria  */
#line 575 "bisonCopia.y"
                                   {
                (yyval.str) = strdup((yyvsp[0].str));
            }
#line 2422 "bisonCopia.tab.c"
    break;

  case 101: /* expUnaria: SIZEOF '(' nombreTipo ')'  */
#line 578 "bisonCopia.y"
                                        {
                (yyval.str) = strdup("sizeof");
            }
#line 2430 "bisonCopia.tab.c"
    break;

  case 102: /* operUnario: '&'  */
#line 584 "bisonCopia.y"
                {
                (yyval.str) = strdup("&");
            }
#line 2438 "bisonCopia.tab.c"
    break;

  case 103: /* operUnario: '*'  */
#line 587 "bisonCopia.y"
                  {
                (yyval.str) = strdup("*");
            }
#line 2446 "bisonCopia.tab.c"
    break;

  case 104: /* operUnario: '-'  */
#line 590 "bisonCopia.y"
                  {
                (yyval.str) = strdup("-");
            }
#line 2454 "bisonCopia.tab.c"
    break;

  case 105: /* operUnario: '!'  */
#line 593 "bisonCopia.y"
                  {
                (yyval.str) = strdup("!");
            }
#line 2462 "bisonCopia.tab.c"
    break;

  case 109: /* expPostfijo: IDENTIFICADOR INCREMENTO  */
#line 602 "bisonCopia.y"
                                       {
                // Post-incremento: retorna valor actual, luego incrementa
                char* valorActual = NULL;
                for (int i = 0; i < cantidadSimbolos; i++) {
                    if (strcmp(listaVariables[i].nombre, (yyvsp[-1].str)) == 0) {
                        valorActual = listaVariables[i].valor;
                        break;
                    }
                }
                if (valorActual) {
                    double val = atof(valorActual);
                    (yyval.str) = strdup(valorActual); // Retorna valor actual
                    char buffer[64];
                    sprintf(buffer, "%g", val + 1);
                    actualizarValor((yyvsp[-1].str), buffer, (yylsp[-1]).first_line);
                } else {
                    (yyval.str) = strdup("0");
                }
            }
#line 2486 "bisonCopia.tab.c"
    break;

  case 110: /* expPostfijo: IDENTIFICADOR DECREMENTO  */
#line 621 "bisonCopia.y"
                                       {
                // Post-decremento: retorna valor actual, luego decrementa
                char* valorActual = NULL;
                for (int i = 0; i < cantidadSimbolos; i++) {
                    if (strcmp(listaVariables[i].nombre, (yyvsp[-1].str)) == 0) {
                        valorActual = listaVariables[i].valor;
                        break;
                    }
                }
                if (valorActual) {
                    double val = atof(valorActual);
                    (yyval.str) = strdup(valorActual); // Retorna valor actual
                    char buffer[64];
                    sprintf(buffer, "%g", val - 1);
                    actualizarValor((yyvsp[-1].str), buffer, (yylsp[-1]).first_line);
                } else {
                    (yyval.str) = strdup("0");
                }
            }
#line 2510 "bisonCopia.tab.c"
    break;

  case 115: /* expPrimaria: IDENTIFICADOR  */
#line 652 "bisonCopia.y"
              {
                // Buscar el valor del identificador en la tabla de símbolos
                if (!existeSimbolo((yyvsp[0].str))) {
                    printf("Error semantico: variable '%s' usada sin declarar (linea %d)\n", (yyvsp[0].str), (yylsp[0]).first_line);
                    (yyval.str) = strdup("0");
                } else {
                    // Buscar el valor en la tabla
                    char* valor = NULL;
                    for (int i = 0; i < cantidadSimbolos; i++) {
                        if (strcmp(listaVariables[i].nombre, (yyvsp[0].str)) == 0) {
                            valor = listaVariables[i].valor;
                            break;
                        }
                    }
                    (yyval.str) = strdup(valor ? valor : "0");
                }
            }
#line 2532 "bisonCopia.tab.c"
    break;

  case 116: /* expPrimaria: constante  */
#line 669 "bisonCopia.y"
                        {
                (yyval.str) = strdup((yyvsp[0].str));
            }
#line 2540 "bisonCopia.tab.c"
    break;

  case 117: /* expPrimaria: literalCadena  */
#line 672 "bisonCopia.y"
                            {
                (yyval.str) = strdup((yyvsp[0].str));
            }
#line 2548 "bisonCopia.tab.c"
    break;

  case 118: /* expPrimaria: '(' expresion ')'  */
#line 675 "bisonCopia.y"
                                {
                int len = strlen((yyvsp[-1].str)) + 3;
                (yyval.str) = malloc(len);
                sprintf((yyval.str), "(%s)", (yyvsp[-1].str));
                free((yyvsp[-1].str));
            }
#line 2559 "bisonCopia.tab.c"
    break;

  case 119: /* constante: CONST_ENTERA  */
#line 685 "bisonCopia.y"
                         {
                char buf[32];
                sprintf(buf, "%d", (yyvsp[0].num));
                (yyval.str) = strdup(buf);
            }
#line 2569 "bisonCopia.tab.c"
    break;

  case 120: /* constante: CONST_OCTAL  */
#line 690 "bisonCopia.y"
                          {
                (yyval.str) = strdup((yyvsp[0].str));
            }
#line 2577 "bisonCopia.tab.c"
    break;

  case 121: /* constante: CONST_HEXADECIMAL  */
#line 693 "bisonCopia.y"
                                {
                (yyval.str) = strdup((yyvsp[0].str));
            }
#line 2585 "bisonCopia.tab.c"
    break;

  case 122: /* constante: CONST_REAL  */
#line 696 "bisonCopia.y"
                         {
                char buf[64];
                sprintf(buf, "%g", (yyvsp[0].real));
                (yyval.str) = strdup(buf);
            }
#line 2595 "bisonCopia.tab.c"
    break;

  case 123: /* constante: CONST_CARACTER  */
#line 701 "bisonCopia.y"
                             {
                (yyval.str) = strdup((yyvsp[0].str));
            }
#line 2603 "bisonCopia.tab.c"
    break;

  case 124: /* literalCadena: LITERAL_CADENA  */
#line 707 "bisonCopia.y"
                           {
                (yyval.str) = strdup((yyvsp[0].str));
            }
#line 2611 "bisonCopia.tab.c"
    break;


#line 2615 "bisonCopia.tab.c"

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

#line 716 "bisonCopia.y"


int yyerror(const char *s) {
    erroresSintacticos++;
    if (current_file) {
        fprintf(stderr, "%s:%d:%d: Error sintactico: %s\n",
                current_file, yylloc.first_line, yylloc.first_column, s);
    } else {
        fprintf(stderr, "Error sintactico <linea:%d columna:[%d:%d]> %s\n",
                yylloc.first_line, yylloc.first_column, yylloc.last_column - 1, s);
    }
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

    /* Señalización del archivo actual */
    current_file = argv[1];
    printf("\n===== Ejecutando: %s =====\n", current_file);

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

    mostrarTabla(current_file ? current_file : argv[1]);

    fprintf(stdout, "\n==================================================\n");
    fflush(stdout);
    return 0;


}
