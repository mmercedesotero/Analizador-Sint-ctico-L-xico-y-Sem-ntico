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
int erroresSemanticos = 0; /* definicion global usada tambien por tabla_simbolos.c */


/* Nombre del archivo actual para prefijar mensajes */
const char* current_file = NULL;

int yylex(void);
extern int yylineno;

#line 100 "bisonCopia.tab.c"

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
  YYSYMBOL_60_1 = 60,                      /* $@1  */
  YYSYMBOL_listaParametrosop = 61,         /* listaParametrosop  */
  YYSYMBOL_listaParametros = 62,           /* listaParametros  */
  YYSYMBOL_declaVarSimples = 63,           /* declaVarSimples  */
  YYSYMBOL_listaVarSimples = 64,           /* listaVarSimples  */
  YYSYMBOL_inicializacion_op = 65,         /* inicializacion_op  */
  YYSYMBOL_inicializacion = 66,            /* inicializacion  */
  YYSYMBOL_sentencia = 67,                 /* sentencia  */
  YYSYMBOL_setCompuesta = 68,              /* setCompuesta  */
  YYSYMBOL_listaSentencias = 69,           /* listaSentencias  */
  YYSYMBOL_sentExpresion = 70,             /* sentExpresion  */
  YYSYMBOL_sentSeleccion = 71,             /* sentSeleccion  */
  YYSYMBOL_sentIteracion = 72,             /* sentIteracion  */
  YYSYMBOL_forInit = 73,                   /* forInit  */
  YYSYMBOL_declaracionFor = 74,            /* declaracionFor  */
  YYSYMBOL_sentSwitch = 75,                /* sentSwitch  */
  YYSYMBOL_listaCases = 76,                /* listaCases  */
  YYSYMBOL_caseSentencia = 77,             /* caseSentencia  */
  YYSYMBOL_sentSalto = 78,                 /* sentSalto  */
  YYSYMBOL_expresionop = 79,               /* expresionop  */
  YYSYMBOL_expresion = 80,                 /* expresion  */
  YYSYMBOL_expAsignacion = 81,             /* expAsignacion  */
  YYSYMBOL_operAsignacion = 82,            /* operAsignacion  */
  YYSYMBOL_expCondicional = 83,            /* expCondicional  */
  YYSYMBOL_expOr = 84,                     /* expOr  */
  YYSYMBOL_expAnd = 85,                    /* expAnd  */
  YYSYMBOL_expIgualdad = 86,               /* expIgualdad  */
  YYSYMBOL_expRelacional = 87,             /* expRelacional  */
  YYSYMBOL_expAditiva = 88,                /* expAditiva  */
  YYSYMBOL_expMultiplicativa = 89,         /* expMultiplicativa  */
  YYSYMBOL_expUnaria = 90,                 /* expUnaria  */
  YYSYMBOL_operUnario = 91,                /* operUnario  */
  YYSYMBOL_expPostfijo = 92,               /* expPostfijo  */
  YYSYMBOL_listaArgumentosop = 93,         /* listaArgumentosop  */
  YYSYMBOL_listaArgumentos = 94,           /* listaArgumentos  */
  YYSYMBOL_expPrimaria = 95,               /* expPrimaria  */
  YYSYMBOL_constante = 96,                 /* constante  */
  YYSYMBOL_literalCadena = 97,             /* literalCadena  */
  YYSYMBOL_nombreTipo = 98                 /* nombreTipo  */
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
#define YYLAST   504

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  126
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  225

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
       0,    75,    75,    81,    82,    83,    87,    89,    92,    94,
      97,    98,   101,   104,   108,   113,   112,   178,   180,   182,
     194,   209,   229,   245,   273,   276,   281,   296,   297,   298,
     299,   300,   301,   302,   306,   309,   310,   313,   317,   320,
     327,   330,   333,   339,   340,   344,   363,   368,   369,   372,
     373,   377,   380,   383,   392,   395,   398,   409,   416,   423,
     433,   436,   439,   442,   445,   448,   467,   486,   505,   524,
     548,   551,   552,   572,   600,   606,   607,   610,   611,   613,
     614,   617,   618,   620,   621,   622,   625,   626,   627,   628,
     629,   631,   634,   651,   670,   673,   690,   715,   718,   722,
     725,   728,   735,   738,   741,   744,   750,   754,   758,   762,
     766,   789,   814,   816,   819,   820,   824,   845,   848,   851,
     858,   864,   868,   872,   878,   885,   891
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
  "declaracionFuncion", "$@1", "listaParametrosop", "listaParametros",
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

#define YYPACT_NINF (-58)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-10)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -58,    25,   202,   -58,     2,    41,    -2,   -58,   -58,   -58,
     -58,   -58,   -58,    -3,     5,    10,   219,    27,    21,    55,
     438,    59,     6,     6,   -58,   -58,   132,   251,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
      70,   -58,   -58,   -22,   104,    -1,    -5,    32,    48,    76,
       6,   -33,   -58,   -58,   -58,   -58,    18,    20,   -58,   -58,
     455,   -58,   132,   132,   132,   132,    96,    63,   119,   131,
     238,   -58,   132,   -58,   -58,   102,   145,   157,     8,   -58,
     -58,   123,   129,   346,   300,   -58,   -58,     6,   132,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
     -58,   132,   -58,   132,   132,   132,   168,   -58,   -58,   -58,
     169,   -58,   -58,   135,   128,   -58,   136,   140,   171,   144,
     -58,   333,   -58,   -58,   219,   219,   -58,   -58,   219,   219,
     219,   219,   219,   219,   -58,   143,   -58,   134,   -58,   146,
     -58,   -58,   141,   -58,   392,   -58,   104,   -58,   147,    -1,
      -5,    -5,    32,    32,    32,    32,    48,    48,   -58,   -58,
     -58,   148,   137,   -58,   188,   150,   151,   166,   -58,   132,
     438,   438,   166,   154,   219,   -58,   -58,    83,    83,    95,
      95,   -58,   -58,   159,   132,   -58,   -58,   -58,     6,   -58,
     -58,   -58,   -58,   196,   -58,   -58,   212,   -58,   287,   133,
     187,   -58,   438,   210,   438,   219,   224,   189,   -14,   -58,
     193,   -58,   -58,   -58,   110,   192,   438,   -58,   -58,   -58,
     438,   438,   -58,   -58,   -58
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,     1,     0,     0,   116,   125,   121,   122,
     124,   120,   123,     0,     0,     0,    54,     0,     0,     0,
       0,     0,     0,     0,   104,   103,     0,     0,   102,   105,
       4,    13,    12,     5,    27,    28,    29,    30,    31,    32,
       0,    70,    71,    77,    79,    81,    83,    86,    91,    94,
       0,    97,   106,   117,   118,    14,    24,     0,   110,   111,
      75,    76,   112,     0,     0,     0,    54,    56,     0,     0,
       0,    55,     0,    52,    53,     0,     0,     0,   116,    98,
      99,     0,     0,     0,     0,    10,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      75,     0,   100,   112,     0,     0,    17,    22,    25,    21,
       0,    72,   114,     0,   113,    73,     0,     0,     0,     0,
      43,    44,    65,    66,    54,    54,    67,    68,    54,    54,
      54,    54,    54,    54,    51,     0,    33,     0,   126,     0,
     119,    14,     0,    35,     0,    11,    80,    94,     0,    82,
      84,    85,    87,    89,    90,    88,    92,    93,    95,    96,
      74,     0,     0,    26,     0,     0,    18,    24,   107,     0,
       0,     0,    24,    45,    54,    57,    69,    59,    60,    61,
      62,    63,    64,     0,     0,   101,    34,    36,     0,   109,
     108,    19,    15,     0,    23,   115,    38,    40,     0,     0,
       0,    78,     0,     0,     0,    54,     0,     0,     0,    48,
       0,    16,    20,    39,     0,     0,     0,    46,    47,    41,
       0,     0,    50,    42,    49
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -58,   -58,   -58,   -58,   -58,   -58,   -25,   -58,   -58,   -58,
     -58,   -58,   117,    73,   -58,   -20,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,    33,   -58,   -42,    -7,   -57,
     194,    54,   -58,   158,   164,    66,    35,    68,   -19,   -58,
     -58,   160,   -58,   -58,   -15,   -58,   -58
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    83,   142,    84,    30,    31,   202,   165,
     166,    32,    57,   107,   108,    33,    34,   144,    35,    36,
      37,   119,   120,    38,   208,   209,    39,    70,    40,    41,
      63,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,   113,   114,    52,    53,    54,   139
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      76,    71,    85,    79,    80,   112,    87,   206,   207,   103,
      78,     7,     8,     9,    10,    11,    12,   104,    88,    81,
      92,    93,    90,    91,   121,     3,    21,    58,    59,    60,
      61,   102,   217,    94,    95,    22,    23,    58,    59,    64,
      62,    24,    25,    55,   160,    56,   112,    65,    26,   105,
      62,    71,    66,   111,    28,    29,   115,   116,   117,   145,
     106,   109,    73,   143,   110,   135,    96,    97,   147,    72,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   158,
     159,   148,   175,   176,    98,    99,   177,   178,   179,   180,
     181,   182,   122,   123,   124,   125,    74,   162,   163,   118,
      67,    77,     8,     9,    10,    11,    12,   100,    61,    71,
      71,    86,   195,    71,    71,    71,    71,    71,    71,   130,
     131,   132,   133,   126,   187,    68,    69,   152,   153,   154,
     155,    89,   198,   132,   133,   127,     6,     7,     8,     9,
      10,    11,    12,   136,   128,   129,   130,   131,   132,   133,
     196,   197,    21,   220,   206,   207,   150,   151,   137,    71,
     138,    22,    23,   214,   156,   157,   140,    24,    25,   147,
     141,   164,   169,   167,    26,   172,   184,   200,   168,   170,
      28,    29,   211,   171,   213,   174,   183,   186,   190,   185,
      71,   189,   191,   192,   188,   193,   222,   105,   110,   203,
     223,   224,    -2,     4,   199,     5,     6,     7,     8,     9,
      10,    11,    12,    13,   212,    14,    15,    16,    17,    18,
      19,    20,    21,    67,   204,     8,     9,    10,    11,    12,
     210,    22,    23,   215,   219,   173,   216,    24,    25,   221,
     194,   218,   201,   101,    26,   146,     0,    27,    68,    69,
      28,    29,    82,   149,     5,    -6,    -6,    -6,    -6,    -6,
      -6,    -6,    -6,   161,    -6,    -6,    -6,    -6,    -6,    -6,
      -6,    -6,   128,   129,   130,   131,   132,   133,     0,   134,
      -6,    -6,     0,     0,     0,     0,    -6,    -6,     0,     0,
       0,     0,     0,    -6,     0,     0,    -6,    -6,     0,    -6,
      -6,    82,     0,     5,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,     0,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,   128,   129,   130,   131,   132,   133,     0,   205,    -7,
      -7,     0,     0,     0,     0,    -7,    -7,     0,     0,     0,
       0,     0,    -7,     0,     0,    -7,    -7,    75,    -7,    -7,
       6,     7,     8,     9,    10,    11,    12,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,   128,   129,   130,
     131,   132,   133,     0,     0,    22,    23,     0,     0,     0,
       0,    24,    25,     0,     0,     0,     0,     0,    26,     0,
       0,    27,    -8,    75,    28,    29,     6,     7,     8,     9,
      10,    11,    12,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,    22,    23,     0,     0,     0,     0,    24,    25,     0,
       0,     0,     0,     0,    26,     0,     0,    27,    -9,    75,
      28,    29,     6,     7,     8,     9,    10,    11,    12,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,     6,
       7,     8,     9,    10,    11,    12,     0,    22,    23,     0,
       0,     0,     0,    24,    25,    21,     0,     0,     0,     0,
      26,     0,     0,    27,    22,    23,    28,    29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,     0,
       0,     0,     0,    28,    29
};

static const yytype_int16 yycheck[] =
{
      20,    16,    27,    22,    23,    62,    28,    21,    22,    42,
       4,     5,     6,     7,     8,     9,    10,    50,    40,    26,
      25,    26,    23,    24,    66,     0,    20,    29,    30,    31,
      32,    50,    46,    38,    39,    29,    30,    29,    30,    42,
      42,    35,    36,    41,   101,     4,   103,    42,    42,    31,
      42,    66,    42,    60,    48,    49,    63,    64,    65,    84,
      42,    41,    41,    83,    44,    72,    34,    35,    87,    42,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    88,   124,   125,    36,    37,   128,   129,   130,   131,
     132,   133,    29,    30,    31,    32,    41,   104,   105,     3,
       4,    42,     6,     7,     8,     9,    10,    31,    32,   124,
     125,    41,   169,   128,   129,   130,   131,   132,   133,    36,
      37,    38,    39,     4,   144,    29,    30,    92,    93,    94,
      95,    27,   174,    38,    39,     4,     4,     5,     6,     7,
       8,     9,    10,    41,    34,    35,    36,    37,    38,    39,
     170,   171,    20,    43,    21,    22,    90,    91,    13,   174,
       3,    29,    30,   205,    96,    97,    43,    35,    36,   188,
      41,     3,    44,     4,    42,     4,    42,   184,    43,    43,
      48,    49,   202,    43,   204,    41,    43,    46,    51,    43,
     205,    43,     4,    43,    47,    44,   216,    31,    44,     3,
     220,   221,     0,     1,    45,     3,     4,     5,     6,     7,
       8,     9,    10,    11,     4,    13,    14,    15,    16,    17,
      18,    19,    20,     4,    12,     6,     7,     8,     9,    10,
      43,    29,    30,     9,    41,   118,    47,    35,    36,    47,
     167,   208,   188,    49,    42,    87,    -1,    45,    29,    30,
      48,    49,     1,    89,     3,     4,     5,     6,     7,     8,
       9,    10,    11,   103,    13,    14,    15,    16,    17,    18,
      19,    20,    34,    35,    36,    37,    38,    39,    -1,    41,
      29,    30,    -1,    -1,    -1,    -1,    35,    36,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    45,    46,    -1,    48,
      49,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    34,    35,    36,    37,    38,    39,    -1,    41,    29,
      30,    -1,    -1,    -1,    -1,    35,    36,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    45,    46,     1,    48,    49,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    34,    35,    36,
      37,    38,    39,    -1,    -1,    29,    30,    -1,    -1,    -1,
      -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    45,    46,     1,    48,    49,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    30,    -1,    -1,    -1,    -1,    35,    36,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    45,    46,     1,
      48,    49,     4,     5,     6,     7,     8,     9,    10,    11,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,     4,
       5,     6,     7,     8,     9,    10,    -1,    29,    30,    -1,
      -1,    -1,    -1,    35,    36,    20,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    45,    29,    30,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    48,    49
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    53,    54,     0,     1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    13,    14,    15,    16,    17,    18,
      19,    20,    29,    30,    35,    36,    42,    45,    48,    49,
      58,    59,    63,    67,    68,    70,    71,    72,    75,    78,
      80,    81,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    95,    96,    97,    41,     4,    64,    29,    30,
      31,    32,    42,    82,    42,    42,    42,     4,    29,    30,
      79,    96,    42,    41,    41,     1,    67,    42,     4,    90,
      90,    80,     1,    55,    57,    58,    41,    28,    40,    27,
      23,    24,    25,    26,    38,    39,    34,    35,    36,    37,
      31,    82,    90,    42,    50,    31,    42,    65,    66,    41,
      44,    80,    81,    93,    94,    80,    80,    80,     3,    73,
      74,    79,    29,    30,    31,    32,     4,     4,    34,    35,
      36,    37,    38,    39,    41,    80,    41,    13,     3,    98,
      43,    41,    56,    67,    69,    58,    85,    90,    80,    86,
      87,    87,    88,    88,    88,    88,    89,    89,    90,    90,
      81,    93,    80,    80,     3,    61,    62,     4,    43,    44,
      43,    43,     4,    64,    41,    79,    79,    79,    79,    79,
      79,    79,    79,    43,    42,    43,    46,    67,    47,    43,
      51,     4,    43,    44,    65,    81,    67,    67,    79,    45,
      80,    83,    60,     3,    12,    41,    21,    22,    76,    77,
      43,    67,     4,    67,    79,     9,    47,    46,    77,    41,
      43,    47,    67,    67,    67
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    52,    53,    54,    54,    54,    55,    55,    56,    56,
      57,    57,    58,    58,    58,    60,    59,    61,    61,    62,
      62,    63,    64,    64,    65,    65,    66,    67,    67,    67,
      67,    67,    67,    67,    68,    69,    69,    70,    71,    71,
      72,    72,    72,    73,    73,    74,    75,    76,    76,    77,
      77,    78,    78,    78,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      80,    81,    81,    81,    81,    82,    82,    83,    83,    84,
      84,    85,    85,    86,    86,    86,    87,    87,    87,    87,
      87,    88,    88,    88,    89,    89,    89,    90,    90,    90,
      90,    90,    91,    91,    91,    91,    92,    92,    92,    92,
      92,    92,    93,    93,    94,    94,    95,    95,    95,    95,
      96,    96,    96,    96,    96,    97,    98
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     2,     0,     1,     0,     1,
       1,     2,     1,     1,     2,     0,     7,     0,     1,     2,
       4,     3,     2,     4,     0,     1,     2,     1,     1,     1,
       1,     1,     1,     2,     4,     1,     2,     2,     5,     7,
       5,     7,     9,     1,     1,     2,     7,     2,     1,     4,
       3,     3,     2,     2,     0,     1,     1,     3,     1,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     3,
       1,     1,     3,     3,     3,     1,     1,     1,     5,     1,
       3,     1,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     2,     2,
       2,     4,     1,     1,     1,     1,     1,     4,     4,     4,
       2,     2,     0,     1,     1,     3,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1
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
#line 75 "bisonCopia.y"
                        {
                printf("=========================================\n");
                printf("Programa valido.\n");
            }
#line 1792 "bisonCopia.tab.c"
    break;

  case 12: /* declaracion: declaVarSimples  */
#line 101 "bisonCopia.y"
                             {
                printf("Se reconocio la declaracion de variables simples.\n");
            }
#line 1800 "bisonCopia.tab.c"
    break;

  case 13: /* declaracion: declaracionFuncion  */
#line 104 "bisonCopia.y"
                                 { 
                printf("Se reconocio una declaracion de funcion.\n"); 

            }
#line 1809 "bisonCopia.tab.c"
    break;

  case 14: /* declaracion: error ';'  */
#line 108 "bisonCopia.y"
                        { yyerrok; }
#line 1815 "bisonCopia.tab.c"
    break;

  case 15: /* $@1: %empty  */
#line 113 "bisonCopia.y"
    {   /* --- Acción mid-rule: registrar función e insertar parámetros --- */
        ListaVariables* params = (yyvsp[-1].lvars); /* lista de parámetros (puede ser NULL) */
        Parametro* tempParams = NULL;
        int paramCount = 0;

        /* construir un array temporal de Parametro para pasar a insertarFuncion.
           insertarFuncion hace sus propias copias de los strings. */
        if (params) {
            paramCount = params->cantidad;
            tempParams = malloc(sizeof(Parametro) * paramCount);
            for (int i = 0; i < paramCount; ++i) {
                tempParams[i].nombre = params->variables[i].nombre ? strdup(params->variables[i].nombre) : NULL;
                tempParams[i].tipo   = params->variables[i].tipo   ? strdup(params->variables[i].tipo)   : NULL;
            }
        }

        // Registrar la función en la tabla de símbolos.
        insertarFuncion((yyvsp[-3].str), (yyvsp[-4].str), "-", paramCount, tempParams);

        /* Insertar cada parámetro como variable en la tabla de símbolos
           para que estén disponibles dentro del cuerpo de la función. */
        if (params) {
            for (int i = 0; i < params->cantidad; ++i) {
                char* pname = params->variables[i].nombre;
                char* ptype = params->variables[i].tipo;
                int pline   = params->variables[i].linea;
                insertarSimbolo(pname, ptype ? ptype : "-", "-", pline);
            }
        }

        /* Liberar el array temporal usado para insertarFuncion (las copias ya se hicieron). */
        if (tempParams) {
            for (int i = 0; i < paramCount; ++i) {
                if (tempParams[i].nombre) free(tempParams[i].nombre);
                if (tempParams[i].tipo)   free(tempParams[i].tipo);
            }
            free(tempParams);
        }

        /* Liberar la estructura auxiliar params: ya copiamos lo necesario a la TS */
        if (params) {
            for (int i = 0; i < params->cantidad; ++i) {
                if (params->variables[i].nombre) free(params->variables[i].nombre);
                if (params->variables[i].valor)  free(params->variables[i].valor);
                if (params->variables[i].tipo)   free(params->variables[i].tipo);
            }
            free(params->variables);
            free(params);
        }

        /* Liberamos el token de tipo ($1) porque insertarFuncion ya copió el string.
           NO liberamos $2 (nombre) aquí porque lo imprimimos y liberamos en la acción final. */
        free((yyvsp[-4].str));
    }
#line 1874 "bisonCopia.tab.c"
    break;

  case 16: /* declaracionFuncion: TIPO_DATO IDENTIFICADOR '(' listaParametrosop ')' $@1 sentencia  */
#line 168 "bisonCopia.y"
    {   /* --- Acción final: mensaje informativo y liberar IDENTIFICADOR --- */
        if (current_file)
            printf("Se reconocio la declaracion de la funcion: %s (archivo: %s, linea: %d).\n", (yyvsp[-5].str), current_file, (yylsp[-5]).first_line);
        else
            printf("Se reconocio la declaracion de la funcion: %s (linea: %d).\n", (yyvsp[-5].str), (yylsp[-5]).first_line);

        free((yyvsp[-5].str));
    }
#line 1887 "bisonCopia.tab.c"
    break;

  case 19: /* listaParametros: TIPO_DATO IDENTIFICADOR  */
#line 182 "bisonCopia.y"
                                         {
                ListaVariables* lista = malloc(sizeof(ListaVariables));
                lista->variables = malloc(sizeof(Variable));
                lista->variables[0].nombre = strdup((yyvsp[0].str));
                lista->variables[0].tipo = strdup((yyvsp[-1].str));
                lista->variables[0].valor = NULL;
                lista->variables[0].linea = (yylsp[0]).first_line;
                lista->cantidad = 1;
                (yyval.lvars) = lista;
                free((yyvsp[-1].str));
                free((yyvsp[0].str));
            }
#line 1904 "bisonCopia.tab.c"
    break;

  case 20: /* listaParametros: listaParametros ',' TIPO_DATO IDENTIFICADOR  */
#line 194 "bisonCopia.y"
                                                          {
                (yyvsp[-3].lvars)->variables = realloc((yyvsp[-3].lvars)->variables, sizeof(Variable) * ((yyvsp[-3].lvars)->cantidad + 1));
                (yyvsp[-3].lvars)->variables[(yyvsp[-3].lvars)->cantidad].nombre = strdup((yyvsp[0].str));
                (yyvsp[-3].lvars)->variables[(yyvsp[-3].lvars)->cantidad].tipo = strdup((yyvsp[-1].str));
                (yyvsp[-3].lvars)->variables[(yyvsp[-3].lvars)->cantidad].valor = NULL;
                (yyvsp[-3].lvars)->variables[(yyvsp[-3].lvars)->cantidad].linea = (yylsp[0]).first_line;
                (yyvsp[-3].lvars)->cantidad++;
                (yyval.lvars) = (yyvsp[-3].lvars);
                free((yyvsp[-1].str));
                free((yyvsp[0].str));
            }
#line 1920 "bisonCopia.tab.c"
    break;

  case 21: /* declaVarSimples: TIPO_DATO listaVarSimples ';'  */
#line 209 "bisonCopia.y"
                                    {
          for (int i = 0; i < (yyvsp[-1].lvars)->cantidad; i++) {
              char* val = (yyvsp[-1].lvars)->variables[i].valor;
              if (val && strcmp(val, "__ERROR__") == 0) {
                  fprintf(stderr, "No se inserta '%s' por error semantico en la inicializacion (linea %d)\n", (yyvsp[-1].lvars)->variables[i].nombre, (yyvsp[-1].lvars)->variables[i].linea);
                  // ya se conto el error al evaluar la expresion
              } else {
                  insertarSimbolo((yyvsp[-1].lvars)->variables[i].nombre, (yyvsp[-2].str), val ? val : "-", (yyvsp[-1].lvars)->variables[i].linea);
              }
              if ((yyvsp[-1].lvars)->variables[i].nombre) free((yyvsp[-1].lvars)->variables[i].nombre);
              if ((yyvsp[-1].lvars)->variables[i].valor) free((yyvsp[-1].lvars)->variables[i].valor);
          }
          free((yyvsp[-1].lvars)->variables);
          free((yyvsp[-1].lvars));
          free((yyvsp[-2].str));
      }
#line 1941 "bisonCopia.tab.c"
    break;

  case 22: /* listaVarSimples: IDENTIFICADOR inicializacion_op  */
#line 229 "bisonCopia.y"
                                      {
          ListaVariables* lista = malloc(sizeof(ListaVariables));
          lista->variables = malloc(sizeof(Variable));
          lista->variables[0].nombre = strdup((yyvsp[-1].str));
          if ((yyvsp[0].str) && strcmp((yyvsp[0].str), "__ERROR__") == 0) {
              lista->variables[0].valor = strdup("__ERROR__");
          } else if ((yyvsp[0].str) && strlen((yyvsp[0].str)) > 0) {
              lista->variables[0].valor = strdup((yyvsp[0].str) + 3);
          } else {
              lista->variables[0].valor = NULL;
          }
          lista->variables[0].linea = (yylsp[-1]).first_line;
          lista->cantidad = 1;
          (yyval.lvars) = lista;
          free((yyvsp[0].str));
      }
#line 1962 "bisonCopia.tab.c"
    break;

  case 23: /* listaVarSimples: listaVarSimples ',' IDENTIFICADOR inicializacion_op  */
#line 245 "bisonCopia.y"
                                                          {
          (yyvsp[-3].lvars)->variables = realloc((yyvsp[-3].lvars)->variables, sizeof(Variable) * ((yyvsp[-3].lvars)->cantidad + 1));
          (yyvsp[-3].lvars)->variables[(yyvsp[-3].lvars)->cantidad].nombre = strdup((yyvsp[-1].str));
          if ((yyvsp[0].str) && strcmp((yyvsp[0].str), "__ERROR__") == 0) {
              (yyvsp[-3].lvars)->variables[(yyvsp[-3].lvars)->cantidad].valor = strdup("__ERROR__");
          } else if ((yyvsp[0].str) && strlen((yyvsp[0].str)) > 0) {
              (yyvsp[-3].lvars)->variables[(yyvsp[-3].lvars)->cantidad].valor = strdup((yyvsp[0].str) + 3);
          } else {
              (yyvsp[-3].lvars)->variables[(yyvsp[-3].lvars)->cantidad].valor = NULL;
          }
          (yyvsp[-3].lvars)->variables[(yyvsp[-3].lvars)->cantidad].linea = (yylsp[-1]).first_line;
          (yyvsp[-3].lvars)->cantidad++;
          (yyval.lvars) = (yyvsp[-3].lvars);
          free((yyvsp[0].str));
      }
#line 1982 "bisonCopia.tab.c"
    break;

  case 24: /* inicializacion_op: %empty  */
#line 273 "bisonCopia.y"
                         {
                (yyval.str) = strdup("");
            }
#line 1990 "bisonCopia.tab.c"
    break;

  case 25: /* inicializacion_op: inicializacion  */
#line 276 "bisonCopia.y"
                             {
                (yyval.str) = (yyvsp[0].str);
            }
#line 1998 "bisonCopia.tab.c"
    break;

  case 26: /* inicializacion: ASIGNACION expresion  */
#line 281 "bisonCopia.y"
                                     {
            if ((yyvsp[0].expr).tipo && strcmp((yyvsp[0].expr).tipo, "indef") == 0) {
                (yyval.str) = strdup("__ERROR__");
            } else {
                size_t len = (yyvsp[0].expr).valor ? strlen((yyvsp[0].expr).valor) : 0;
                char* temp = malloc(len + 4);
                sprintf(temp, " = %s", (yyvsp[0].expr).valor ? (yyvsp[0].expr).valor : "");
                (yyval.str) = temp;
            }
            }
#line 2013 "bisonCopia.tab.c"
    break;

  case 33: /* sentencia: error ';'  */
#line 302 "bisonCopia.y"
                        { yyerrok; }
#line 2019 "bisonCopia.tab.c"
    break;

  case 38: /* sentSeleccion: IF '(' expresion ')' sentencia  */
#line 317 "bisonCopia.y"
                                           {
                printf("Se reconocio una sentencia IF sin ELSE.\n");
            }
#line 2027 "bisonCopia.tab.c"
    break;

  case 39: /* sentSeleccion: IF '(' expresion ')' sentencia ELSE sentencia  */
#line 320 "bisonCopia.y"
                                                            {
                printf("Se reconocio una sentencia IF con ELSE.\n");
            }
#line 2035 "bisonCopia.tab.c"
    break;

  case 40: /* sentIteracion: WHILE '(' expresion ')' sentencia  */
#line 327 "bisonCopia.y"
                                              {
                printf("Se reconocio una sentencia WHILE.\n");
            }
#line 2043 "bisonCopia.tab.c"
    break;

  case 41: /* sentIteracion: DO sentencia WHILE '(' expresion ')' ';'  */
#line 330 "bisonCopia.y"
                                                       {
                printf("Se reconocio una sentencia DO y WHILE.\n");
            }
#line 2051 "bisonCopia.tab.c"
    break;

  case 42: /* sentIteracion: FOR '(' forInit ';' expresionop ';' expresionop ')' sentencia  */
#line 333 "bisonCopia.y"
                                                                            {
                printf("Se reconocio una sentencia FOR.\n");
            }
#line 2059 "bisonCopia.tab.c"
    break;

  case 45: /* declaracionFor: TIPO_DATO listaVarSimples  */
#line 344 "bisonCopia.y"
                                      {
                for (int i = 0; i < (yyvsp[0].lvars)->cantidad; i++) {
                    char* val = (yyvsp[0].lvars)->variables[i].valor;
                    if (val && strcmp(val, "__ERROR__") == 0) {
                        fprintf(stderr, "No se inserta '%s' por error semantico en la inicializacion (linea %d)\n", (yyvsp[0].lvars)->variables[i].nombre, (yyvsp[0].lvars)->variables[i].linea);
                    } else {
                        insertarSimbolo((yyvsp[0].lvars)->variables[i].nombre, (yyvsp[-1].str),
                                        (yyvsp[0].lvars)->variables[i].valor ? (yyvsp[0].lvars)->variables[i].valor : "-",
                                        (yyvsp[0].lvars)->variables[i].linea);
                    }
                    if ((yyvsp[0].lvars)->variables[i].nombre) free((yyvsp[0].lvars)->variables[i].nombre);
                    if ((yyvsp[0].lvars)->variables[i].valor) free((yyvsp[0].lvars)->variables[i].valor);
                }
                free((yyvsp[0].lvars)->variables);
                free((yyvsp[0].lvars));
                free((yyvsp[-1].str));
            }
#line 2081 "bisonCopia.tab.c"
    break;

  case 46: /* sentSwitch: SWITCH '(' expresion ')' '{' listaCases '}'  */
#line 363 "bisonCopia.y"
                                                        {
                printf("Se reconocio una sentencia SWITCH.\n");
            }
#line 2089 "bisonCopia.tab.c"
    break;

  case 51: /* sentSalto: RETURN expresionop ';'  */
#line 377 "bisonCopia.y"
                                   {
                printf("Se reconocio una sentencia de RETURN.\n");
            }
#line 2097 "bisonCopia.tab.c"
    break;

  case 52: /* sentSalto: BREAK ';'  */
#line 380 "bisonCopia.y"
                        {
                printf("Se reconocio una sentencia BREAK.\n");
            }
#line 2105 "bisonCopia.tab.c"
    break;

  case 53: /* sentSalto: CONTINUE ';'  */
#line 383 "bisonCopia.y"
                           {
                printf("Se reconocio una sentencia CONTINUE.\n");
            }
#line 2113 "bisonCopia.tab.c"
    break;

  case 54: /* expresionop: %empty  */
#line 392 "bisonCopia.y"
                         {
                (yyval.str) = strdup("");
            }
#line 2121 "bisonCopia.tab.c"
    break;

  case 55: /* expresionop: constante  */
#line 395 "bisonCopia.y"
                        {
                (yyval.str) = strdup((yyvsp[0].expr).valor);
            }
#line 2129 "bisonCopia.tab.c"
    break;

  case 56: /* expresionop: IDENTIFICADOR  */
#line 398 "bisonCopia.y"
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
#line 2145 "bisonCopia.tab.c"
    break;

  case 57: /* expresionop: IDENTIFICADOR ASIGNACION expresionop  */
#line 409 "bisonCopia.y"
                                                   {
                // Actualizar el valor en la tabla de símbolos
                if (strlen((yyvsp[0].str)) > 0) {
                    actualizarValor((yyvsp[-2].str), (yyvsp[0].str), (yylsp[-2]).first_line);
                }
                (yyval.str) = strdup((yyvsp[0].str)); 
            }
#line 2157 "bisonCopia.tab.c"
    break;

  case 58: /* expresionop: IDENTIFICADOR  */
#line 416 "bisonCopia.y"
                            {
                if (!existeSimbolo((yyvsp[0].str))) {
                    printf("Error semantico: variable '%s' usada sin declarar (linea %d)\n", (yyvsp[0].str), (yylsp[0]).first_line);
                    erroresSemanticos++;
                }
                (yyval.str) = strdup((yyvsp[0].str));
            }
#line 2169 "bisonCopia.tab.c"
    break;

  case 59: /* expresionop: expresionop '+' expresionop  */
#line 423 "bisonCopia.y"
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
#line 2184 "bisonCopia.tab.c"
    break;

  case 60: /* expresionop: expresionop '-' expresionop  */
#line 433 "bisonCopia.y"
                                          {
                (yyval.str) = strdup("resta");
            }
#line 2192 "bisonCopia.tab.c"
    break;

  case 61: /* expresionop: expresionop '*' expresionop  */
#line 436 "bisonCopia.y"
                                          {
                (yyval.str) = strdup("mult");
            }
#line 2200 "bisonCopia.tab.c"
    break;

  case 62: /* expresionop: expresionop '/' expresionop  */
#line 439 "bisonCopia.y"
                                          {
                (yyval.str) = strdup("div");
            }
#line 2208 "bisonCopia.tab.c"
    break;

  case 63: /* expresionop: expresionop '<' expresionop  */
#line 442 "bisonCopia.y"
                                          {
                (yyval.str) = strdup("menor");
            }
#line 2216 "bisonCopia.tab.c"
    break;

  case 64: /* expresionop: expresionop '>' expresionop  */
#line 445 "bisonCopia.y"
                                          {
                (yyval.str) = strdup("mayor");
            }
#line 2224 "bisonCopia.tab.c"
    break;

  case 65: /* expresionop: IDENTIFICADOR INCREMENTO  */
#line 448 "bisonCopia.y"
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
#line 2248 "bisonCopia.tab.c"
    break;

  case 66: /* expresionop: IDENTIFICADOR DECREMENTO  */
#line 467 "bisonCopia.y"
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
#line 2272 "bisonCopia.tab.c"
    break;

  case 67: /* expresionop: INCREMENTO IDENTIFICADOR  */
#line 486 "bisonCopia.y"
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
#line 2296 "bisonCopia.tab.c"
    break;

  case 68: /* expresionop: DECREMENTO IDENTIFICADOR  */
#line 505 "bisonCopia.y"
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
#line 2320 "bisonCopia.tab.c"
    break;

  case 69: /* expresionop: IDENTIFICADOR MAS_IGUAL expresionop  */
#line 524 "bisonCopia.y"
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
#line 2346 "bisonCopia.tab.c"
    break;

  case 70: /* expresion: expAsignacion  */
#line 548 "bisonCopia.y"
                         { (yyval.expr).tipo = (yyvsp[0].expr).tipo; (yyval.expr).valor = (yyvsp[0].expr).valor; }
#line 2352 "bisonCopia.tab.c"
    break;

  case 71: /* expAsignacion: expCondicional  */
#line 551 "bisonCopia.y"
                              { (yyval.expr).tipo = (yyvsp[0].expr).tipo; (yyval.expr).valor = (yyvsp[0].expr).valor; }
#line 2358 "bisonCopia.tab.c"
    break;

  case 72: /* expAsignacion: IDENTIFICADOR ASIGNACION expresion  */
#line 552 "bisonCopia.y"
                                                 {
                // Asignación simple: x = expr
                char* tipoVar = NULL;
                for (int i = 0; i < cantidadSimbolos; i++) {
                    if (strcmp(listaVariables[i].nombre, (yyvsp[-2].str)) == 0) {
                        tipoVar = listaVariables[i].tipo;
                        break;
                    }
                }
                if (!tipoVar) {
                    printf("Error semantico: variable '%s' usada sin declarar (linea %d)\n", (yyvsp[-2].str), (yylsp[-2]).first_line);
                    erroresSemanticos++;
                } else if (strcmp(tipoVar, (yyvsp[0].expr).tipo) != 0) {
                    fprintf(stderr, "Error semantico: tipos incompatibles en asignacion: %s = %s (linea %d)\n", tipoVar, (yyvsp[0].expr).tipo ? (yyvsp[0].expr).tipo : "(indef)", (yylsp[-2]).first_line);
                    erroresSemanticos++;
                }
                actualizarValor((yyvsp[-2].str), (yyvsp[0].expr).valor, (yylsp[-2]).first_line);
                (yyval.expr).tipo = tipoVar ? strdup(tipoVar) : strdup("indef");
                (yyval.expr).valor = strdup((yyvsp[0].expr).valor);
            }
#line 2383 "bisonCopia.tab.c"
    break;

  case 73: /* expAsignacion: IDENTIFICADOR operAsignacion expresion  */
#line 572 "bisonCopia.y"
                                                     {
                // Evaluar asignación compuesta (ej: x += expr)
                char* valorActual = NULL;
                char* tipoVar = NULL;
                for (int i = 0; i < cantidadSimbolos; i++) {
                    if (strcmp(listaVariables[i].nombre, (yyvsp[-2].str)) == 0) {
                        valorActual = listaVariables[i].valor;
                        tipoVar = listaVariables[i].tipo;
                        break;
                    }
                }
                char* tipoRes = NULL;
                if (!tipoVar || verificarTiposOperacion("+=", tipoVar, (yyvsp[0].expr).tipo, &tipoRes) != ERR_OK) {
                    fprintf(stderr, "Error semantico: tipos incompatibles en asignacion compuesta: %s y %s (linea %d)\n", tipoVar ? tipoVar : "(indef)", (yyvsp[0].expr).tipo ? (yyvsp[0].expr).tipo : "(indef)", (yylsp[-2]).first_line);
                    erroresSemanticos++;
                    (yyval.expr).tipo = strdup("indef");
                    (yyval.expr).valor = strdup("0");
                } else {
                    double valActual = valorActual ? atof(valorActual) : 0;
                    double valNuevo = atof((yyvsp[0].expr).valor);
                    double resultado = valActual + valNuevo; // Solo += por ahora
                    char buffer[64];
                    sprintf(buffer, "%g", resultado);
                    actualizarValor((yyvsp[-2].str), buffer, (yylsp[-2]).first_line);
                    (yyval.expr).tipo = strdup(tipoRes);
                    (yyval.expr).valor = strdup(buffer);
                }
            }
#line 2416 "bisonCopia.tab.c"
    break;

  case 74: /* expAsignacion: expUnaria operAsignacion expAsignacion  */
#line 600 "bisonCopia.y"
                                                     {
                (yyval.expr).tipo = strdup("indef");
                (yyval.expr).valor = strdup("0");
            }
#line 2425 "bisonCopia.tab.c"
    break;

  case 91: /* expAditiva: expMultiplicativa  */
#line 631 "bisonCopia.y"
                               {
                (yyval.expr).tipo = (yyvsp[0].expr).tipo; (yyval.expr).valor = (yyvsp[0].expr).valor;
            }
#line 2433 "bisonCopia.tab.c"
    break;

  case 92: /* expAditiva: expAditiva '+' expMultiplicativa  */
#line 634 "bisonCopia.y"
                                               {
                char* tipoRes = NULL;
                if (verificarTiposOperacion("+", (yyvsp[-2].expr).tipo, (yyvsp[0].expr).tipo, &tipoRes) != ERR_OK) {
                    fprintf(stderr, "Error semantico: tipos incompatibles para +: %s y %s (linea %d)\n", (yyvsp[-2].expr).tipo ? (yyvsp[-2].expr).tipo : "(indef)", (yyvsp[0].expr).tipo ? (yyvsp[0].expr).tipo : "(indef)", yylineno);
                    erroresSemanticos++;
                    (yyval.expr).tipo = strdup("indef");
                    (yyval.expr).valor = strdup("0");
                } else {
                    double val1 = atof((yyvsp[-2].expr).valor);
                    double val2 = atof((yyvsp[0].expr).valor);
                    double resultado = val1 + val2;
                    char buffer[64];
                    sprintf(buffer, "%g", resultado);
                    (yyval.expr).valor = strdup(buffer);
                    (yyval.expr).tipo = strdup(tipoRes);
                }
            }
#line 2455 "bisonCopia.tab.c"
    break;

  case 93: /* expAditiva: expAditiva '-' expMultiplicativa  */
#line 651 "bisonCopia.y"
                                               {
                char* tipoRes = NULL;
                if (verificarTiposOperacion("-", (yyvsp[-2].expr).tipo, (yyvsp[0].expr).tipo, &tipoRes) != ERR_OK) {
                    fprintf(stderr, "Error semantico: tipos incompatibles para -: %s y %s (linea %d)\n", (yyvsp[-2].expr).tipo ? (yyvsp[-2].expr).tipo : "(indef)", (yyvsp[0].expr).tipo ? (yyvsp[0].expr).tipo : "(indef)", yylineno);
                    erroresSemanticos++;
                    (yyval.expr).tipo = strdup("indef");
                    (yyval.expr).valor = strdup("0");
                } else {
                    double val1 = atof((yyvsp[-2].expr).valor);
                    double val2 = atof((yyvsp[0].expr).valor);
                    double resultado = val1 - val2;
                    char buffer[64];
                    sprintf(buffer, "%g", resultado);
                    (yyval.expr).valor = strdup(buffer);
                    (yyval.expr).tipo = strdup(tipoRes);
                }
            }
#line 2477 "bisonCopia.tab.c"
    break;

  case 94: /* expMultiplicativa: expUnaria  */
#line 670 "bisonCopia.y"
                              {
                (yyval.expr).tipo = (yyvsp[0].expr).tipo; (yyval.expr).valor = (yyvsp[0].expr).valor;
            }
#line 2485 "bisonCopia.tab.c"
    break;

  case 95: /* expMultiplicativa: expMultiplicativa '*' expUnaria  */
#line 673 "bisonCopia.y"
                                              {
                char* tipoRes = NULL;
                if (verificarTiposOperacion("*", (yyvsp[-2].expr).tipo, (yyvsp[0].expr).tipo, &tipoRes) != ERR_OK) {
                    fprintf(stderr, "Error semantico: tipos incompatibles para *: %s y %s (linea %d)\n", (yyvsp[-2].expr).tipo ? (yyvsp[-2].expr).tipo : "(indef)", (yyvsp[0].expr).tipo ? (yyvsp[0].expr).tipo : "(indef)", yylineno);
                    erroresSemanticos++;
                    (yyval.expr).tipo = strdup("indef");
                    (yyval.expr).valor = strdup("0");
                } else {
                    double val1 = atof((yyvsp[-2].expr).valor);
                    double val2 = atof((yyvsp[0].expr).valor);
                    double resultado = val1 * val2;
                    char buffer[64];
                    sprintf(buffer, "%g", resultado);
                    (yyval.expr).valor = strdup(buffer);
                    (yyval.expr).tipo = strdup(tipoRes);
                }
            }
#line 2507 "bisonCopia.tab.c"
    break;

  case 96: /* expMultiplicativa: expMultiplicativa '/' expUnaria  */
#line 690 "bisonCopia.y"
                                              {
                char* tipoRes = NULL;
                if (verificarTiposOperacion("/", (yyvsp[-2].expr).tipo, (yyvsp[0].expr).tipo, &tipoRes) != ERR_OK) {
                    fprintf(stderr, "Error semantico: tipos incompatibles para /: %s y %s (linea %d)\n", (yyvsp[-2].expr).tipo ? (yyvsp[-2].expr).tipo : "(indef)", (yyvsp[0].expr).tipo ? (yyvsp[0].expr).tipo : "(indef)", yylineno);
                    erroresSemanticos++;
                    (yyval.expr).tipo = strdup("indef");
                    (yyval.expr).valor = strdup("0");
                } else {
                    double val1 = atof((yyvsp[-2].expr).valor);
                    double val2 = atof((yyvsp[0].expr).valor);
                    if (val2 != 0) {
                        double resultado = val1 / val2;
                        char buffer[64];
                        sprintf(buffer, "%g", resultado);
                        (yyval.expr).valor = strdup(buffer);
                    } else {
                        printf("Error: division por cero\n");
                        (yyval.expr).valor = strdup("0");
                    }
                    (yyval.expr).tipo = strdup(tipoRes);
                }
            }
#line 2534 "bisonCopia.tab.c"
    break;

  case 97: /* expUnaria: expPostfijo  */
#line 715 "bisonCopia.y"
                        {
                (yyval.expr).tipo = (yyvsp[0].expr).tipo; (yyval.expr).valor = (yyvsp[0].expr).valor;
            }
#line 2542 "bisonCopia.tab.c"
    break;

  case 98: /* expUnaria: INCREMENTO expUnaria  */
#line 718 "bisonCopia.y"
                                   {
                /* Pre-incremento: aqui solo propagamos el tipo y valor calculado */
                (yyval.expr).tipo = (yyvsp[0].expr).tipo; (yyval.expr).valor = (yyvsp[0].expr).valor;
            }
#line 2551 "bisonCopia.tab.c"
    break;

  case 99: /* expUnaria: DECREMENTO expUnaria  */
#line 722 "bisonCopia.y"
                                   {
                (yyval.expr).tipo = (yyvsp[0].expr).tipo; (yyval.expr).valor = (yyvsp[0].expr).valor;
            }
#line 2559 "bisonCopia.tab.c"
    break;

  case 100: /* expUnaria: operUnario expUnaria  */
#line 725 "bisonCopia.y"
                                   {
                (yyval.expr).tipo = (yyvsp[0].expr).tipo; (yyval.expr).valor = (yyvsp[0].expr).valor;
            }
#line 2567 "bisonCopia.tab.c"
    break;

  case 101: /* expUnaria: SIZEOF '(' nombreTipo ')'  */
#line 728 "bisonCopia.y"
                                        {
                (yyval.expr).tipo = strdup("int");
                (yyval.expr).valor = strdup("0");
            }
#line 2576 "bisonCopia.tab.c"
    break;

  case 102: /* operUnario: '&'  */
#line 735 "bisonCopia.y"
                {
                (yyval.str) = strdup("&");
            }
#line 2584 "bisonCopia.tab.c"
    break;

  case 103: /* operUnario: '*'  */
#line 738 "bisonCopia.y"
                  {
                (yyval.str) = strdup("*");
            }
#line 2592 "bisonCopia.tab.c"
    break;

  case 104: /* operUnario: '-'  */
#line 741 "bisonCopia.y"
                  {
                (yyval.str) = strdup("-");
            }
#line 2600 "bisonCopia.tab.c"
    break;

  case 105: /* operUnario: '!'  */
#line 744 "bisonCopia.y"
                  {
                (yyval.str) = strdup("!");
            }
#line 2608 "bisonCopia.tab.c"
    break;

  case 106: /* expPostfijo: expPrimaria  */
#line 750 "bisonCopia.y"
                          {
                (yyval.expr).tipo = (yyvsp[0].expr).tipo; (yyval.expr).valor = (yyvsp[0].expr).valor;
            }
#line 2616 "bisonCopia.tab.c"
    break;

  case 107: /* expPostfijo: IDENTIFICADOR '(' listaArgumentosop ')'  */
#line 754 "bisonCopia.y"
                                                      {
                (yyval.expr).valor = strdup("0");
                free((yyvsp[-3].str));
            }
#line 2625 "bisonCopia.tab.c"
    break;

  case 108: /* expPostfijo: expPostfijo '[' expresion ']'  */
#line 758 "bisonCopia.y"
                                             {
                /* no implementado: propagar tipo/valor */
                (yyval.expr).tipo = (yyvsp[-3].expr).tipo; (yyval.expr).valor = (yyvsp[-3].expr).valor;
            }
#line 2634 "bisonCopia.tab.c"
    break;

  case 109: /* expPostfijo: expPostfijo '(' listaArgumentosop ')'  */
#line 762 "bisonCopia.y"
                                                    {
                /* llamada a funcion sobre expresion (e.g. obj.f(...) o (f)(...) ) */
                (yyval.expr).tipo = (yyvsp[-3].expr).tipo; (yyval.expr).valor = (yyvsp[-3].expr).valor;
            }
#line 2643 "bisonCopia.tab.c"
    break;

  case 110: /* expPostfijo: IDENTIFICADOR INCREMENTO  */
#line 766 "bisonCopia.y"
                                       {
                // Post-incremento: retorna valor actual, luego incrementa
                char* valorActual = NULL;
                char* tipoVar = NULL;
                for (int i = 0; i < cantidadSimbolos; i++) {
                    if (strcmp(listaVariables[i].nombre, (yyvsp[-1].str)) == 0) {
                        valorActual = listaVariables[i].valor;
                        tipoVar = listaVariables[i].tipo;
                        break;
                    }
                }
                if (valorActual) {
                    double val = atof(valorActual);
                    (yyval.expr).valor = strdup(valorActual); // Retorna valor actual
                    char buffer[64];
                    sprintf(buffer, "%g", val + 1);
                    actualizarValor((yyvsp[-1].str), buffer, (yylsp[-1]).first_line);
                    (yyval.expr).tipo = tipoVar ? strdup(tipoVar) : strdup("indef");
                } else {
                    (yyval.expr).valor = strdup("0");
                    (yyval.expr).tipo = strdup("indef");
                }
            }
#line 2671 "bisonCopia.tab.c"
    break;

  case 111: /* expPostfijo: IDENTIFICADOR DECREMENTO  */
#line 789 "bisonCopia.y"
                                       {
                // Post-decremento: retorna valor actual, luego decrementa
                char* valorActual = NULL;
                char* tipoVar = NULL;
                for (int i = 0; i < cantidadSimbolos; i++) {
                    if (strcmp(listaVariables[i].nombre, (yyvsp[-1].str)) == 0) {
                        valorActual = listaVariables[i].valor;
                        tipoVar = listaVariables[i].tipo;
                        break;
                    }
                }
                if (valorActual) {
                    double val = atof(valorActual);
                    (yyval.expr).valor = strdup(valorActual); // Retorna valor actual
                    char buffer[64];
                    sprintf(buffer, "%g", val - 1);
                    actualizarValor((yyvsp[-1].str), buffer, (yylsp[-1]).first_line);
                    (yyval.expr).tipo = tipoVar ? strdup(tipoVar) : strdup("indef");
                } else {
                    (yyval.expr).valor = strdup("0");
                    (yyval.expr).tipo = strdup("indef");
                }
            }
#line 2699 "bisonCopia.tab.c"
    break;

  case 116: /* expPrimaria: IDENTIFICADOR  */
#line 824 "bisonCopia.y"
              {
                // Buscar el valor del identificador en la tabla de símbolos
                if (!existeSimbolo((yyvsp[0].str))) {
                    printf("Error semantico: variable '%s' usada sin declarar (linea %d)\n", (yyvsp[0].str), (yylsp[0]).first_line);
                    erroresSemanticos++;
                    (yyval.expr).valor = strdup("0");
                    (yyval.expr).tipo = strdup("indef");
                } else {
                    char* valor = NULL;
                    char* tipo = NULL;
                    for (int i = 0; i < cantidadSimbolos; i++) {
                        if (strcmp(listaVariables[i].nombre, (yyvsp[0].str)) == 0) {
                            valor = listaVariables[i].valor;
                            tipo = listaVariables[i].tipo;
                            break;
                        }
                    }
                    (yyval.expr).valor = strdup(valor ? valor : "0");
                    (yyval.expr).tipo = strdup(tipo ? tipo : "indef");
                }
            }
#line 2725 "bisonCopia.tab.c"
    break;

  case 117: /* expPrimaria: constante  */
#line 845 "bisonCopia.y"
                        {
                (yyval.expr).valor = (yyvsp[0].expr).valor; (yyval.expr).tipo = (yyvsp[0].expr).tipo;
            }
#line 2733 "bisonCopia.tab.c"
    break;

  case 118: /* expPrimaria: literalCadena  */
#line 848 "bisonCopia.y"
                            {
                (yyval.expr).valor = (yyvsp[0].expr).valor; (yyval.expr).tipo = (yyvsp[0].expr).tipo;
            }
#line 2741 "bisonCopia.tab.c"
    break;

  case 119: /* expPrimaria: '(' expresion ')'  */
#line 851 "bisonCopia.y"
                                {
                (yyval.expr).valor = (yyvsp[-1].expr).valor; (yyval.expr).tipo = (yyvsp[-1].expr).tipo;
            }
#line 2749 "bisonCopia.tab.c"
    break;

  case 120: /* constante: CONST_ENTERA  */
#line 858 "bisonCopia.y"
                         {
                char buf[32];
                sprintf(buf, "%d", (yyvsp[0].num));
                (yyval.expr).valor = strdup(buf);
                (yyval.expr).tipo = strdup("int");
            }
#line 2760 "bisonCopia.tab.c"
    break;

  case 121: /* constante: CONST_OCTAL  */
#line 864 "bisonCopia.y"
                          {
                (yyval.expr).valor = strdup((yyvsp[0].str));
                (yyval.expr).tipo = strdup("int");
            }
#line 2769 "bisonCopia.tab.c"
    break;

  case 122: /* constante: CONST_HEXADECIMAL  */
#line 868 "bisonCopia.y"
                                {
                (yyval.expr).valor = strdup((yyvsp[0].str));
                (yyval.expr).tipo = strdup("int");
            }
#line 2778 "bisonCopia.tab.c"
    break;

  case 123: /* constante: CONST_REAL  */
#line 872 "bisonCopia.y"
                         {
                char buf[64];
                sprintf(buf, "%g", (yyvsp[0].real));
                (yyval.expr).valor = strdup(buf);
                (yyval.expr).tipo = strdup("float");
            }
#line 2789 "bisonCopia.tab.c"
    break;

  case 124: /* constante: CONST_CARACTER  */
#line 878 "bisonCopia.y"
                             {
                (yyval.expr).valor = strdup((yyvsp[0].str));
                (yyval.expr).tipo = strdup("char");
            }
#line 2798 "bisonCopia.tab.c"
    break;

  case 125: /* literalCadena: LITERAL_CADENA  */
#line 885 "bisonCopia.y"
                           {
                (yyval.expr).valor = strdup((yyvsp[0].str));
                (yyval.expr).tipo = strdup("string");
            }
#line 2807 "bisonCopia.tab.c"
    break;


#line 2811 "bisonCopia.tab.c"

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

#line 895 "bisonCopia.y"


int yyerror(const char *s) {
    erroresSintacticos++;
    /* Sin prefijo de nombre de archivo */
    fprintf(stderr, "Error sintactico: %s (linea %d, columna %d)\n",
            s, yylloc.first_line, yylloc.first_column);
    return 0;
}


#if YYDEBUG
    yydebug = 1;
#endif

int main(int argc, char *argv[]) {
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
    fprintf(stdout, "\nAnalisis terminado. Errores totales: %d (sintacticos: %d, lexicos: %d, semanticos: %d)\n", totalErrores, erroresSintacticos, erroresLexicos, erroresSemanticos);

    mostrarTabla(current_file ? current_file : argv[1]);
    /* Imprimir la tabla de funciones registrada en la tabla de símbolos */
    mostrarFunciones();

    fprintf(stdout, "\n==================================================\n");
    fflush(stdout);
    return 0;
}
