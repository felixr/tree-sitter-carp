#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 255
#define SYMBOL_COUNT 164
#define ALIAS_COUNT 0
#define TOKEN_COUNT 97
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 25
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  anon_sym_SEMI = 1,
  aux_sym_line_comment_token1 = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_use = 5,
  anon_sym_doc = 6,
  anon_sym_def = 7,
  anon_sym_fn = 8,
  anon_sym_defn = 9,
  anon_sym_let = 10,
  anon_sym_LBRACK = 11,
  anon_sym_RBRACK = 12,
  anon_sym_do = 13,
  anon_sym_if = 14,
  anon_sym_while = 15,
  anon_sym_ref = 16,
  anon_sym_address = 17,
  anon_sym_set_BANG = 18,
  anon_sym_the = 19,
  anon_sym_register = 20,
  anon_sym_Bool = 21,
  anon_sym_Char = 22,
  anon_sym_Int = 23,
  anon_sym_Long = 24,
  anon_sym_Float = 25,
  anon_sym_Double = 26,
  anon_sym_Vector2 = 27,
  anon_sym_Vector3 = 28,
  anon_sym_VectorN = 29,
  anon_sym_String = 30,
  anon_sym_Pattern = 31,
  anon_sym_Array = 32,
  anon_sym_Map = 33,
  anon_sym_Maybe = 34,
  anon_sym_Result = 35,
  anon_sym_Id = 36,
  anon_sym_Ptr = 37,
  anon_sym_DOT = 38,
  anon_sym_definterface = 39,
  anon_sym_defmacro = 40,
  anon_sym_defndynamic = 41,
  anon_sym_defmodule = 42,
  anon_sym_deftype = 43,
  anon_sym_RPAREN2 = 44,
  anon_sym_COMMA = 45,
  anon_sym_RBRACK2 = 46,
  anon_sym_Fn = 47,
  anon_sym_ = 48,
  anon_sym_AMP = 49,
  anon_sym_AT = 50,
  anon_sym_TILDE = 51,
  anon_sym_SQUOTE = 52,
  sym_integer_literal = 53,
  sym_float_literal = 54,
  anon_sym_true = 55,
  anon_sym_false = 56,
  anon_sym_DQUOTE = 57,
  aux_sym_str_literal_token1 = 58,
  anon_sym_DQUOTE2 = 59,
  anon_sym_BSLASH = 60,
  anon_sym_POUND_DQUOTE = 61,
  sym_escape_sequence = 62,
  anon_sym_LBRACE = 63,
  anon_sym_RBRACE = 64,
  anon_sym_COLON = 65,
  sym_hidden = 66,
  anon_sym_let_DASHdo = 67,
  anon_sym_while_DASHdo = 68,
  anon_sym_defn_DASHdo = 69,
  anon_sym_break = 70,
  anon_sym_for = 71,
  anon_sym_when = 72,
  anon_sym_cond = 73,
  anon_sym_unless = 74,
  anon_sym_case = 75,
  anon_sym_foreach = 76,
  anon_sym_defdynamic = 77,
  anon_sym_load = 78,
  anon_sym_PLUS = 79,
  anon_sym_DASH = 80,
  anon_sym_SLASH = 81,
  anon_sym_STAR = 82,
  anon_sym_PERCENT = 83,
  anon_sym_LT = 84,
  anon_sym_GT = 85,
  anon_sym_EQ = 86,
  anon_sym_LT_EQ = 87,
  anon_sym_GT_EQ = 88,
  anon_sym_SLASH_EQ = 89,
  anon_sym_and = 90,
  anon_sym_or = 91,
  anon_sym_not = 92,
  anon_sym_and_STAR = 93,
  anon_sym_or_STAR = 94,
  sym_upper_identifier = 95,
  sym_identifier = 96,
  sym_source_file = 97,
  sym_line_comment = 98,
  sym__s_expr = 99,
  sym__expr = 100,
  sym__anything = 101,
  sym__s_forms = 102,
  sym__defs = 103,
  sym__literals = 104,
  sym__short_helper = 105,
  sym_use = 106,
  sym_doc = 107,
  sym_def = 108,
  sym_fn = 109,
  sym_defn = 110,
  sym_let = 111,
  sym_let_pairs = 112,
  sym_do = 113,
  sym_if = 114,
  sym_while = 115,
  sym_ref = 116,
  sym_address = 117,
  sym_set = 118,
  sym_the = 119,
  sym_register = 120,
  sym_type = 121,
  sym_complex_type = 122,
  sym_call_expression = 123,
  sym_call_name = 124,
  sym_definterface = 125,
  sym_defmacro = 126,
  sym_defndynamic = 127,
  sym_defmodule = 128,
  sym_deftype = 129,
  sym__deftype1 = 130,
  sym__deftype2 = 131,
  sym__name_deftypes = 132,
  sym_fields = 133,
  sym_interface_fn = 134,
  sym_short_ref = 135,
  sym_short_copy = 136,
  sym_short_fn_ref = 137,
  sym_short_quote = 138,
  sym_parameters = 139,
  sym_typed_parameters = 140,
  sym_bool_literal = 141,
  sym_str_literal = 142,
  sym_char_literal = 143,
  sym_pattern_literal = 144,
  sym_array_expression = 145,
  sym_map_expression = 146,
  sym_symbol = 147,
  sym_other_str = 148,
  sym_operators = 149,
  aux_sym_source_file_repeat1 = 150,
  aux_sym_let_pairs_repeat1 = 151,
  aux_sym_do_repeat1 = 152,
  aux_sym_complex_type_repeat1 = 153,
  aux_sym_call_expression_repeat1 = 154,
  aux_sym_defmodule_repeat1 = 155,
  aux_sym__deftype2_repeat1 = 156,
  aux_sym__name_deftypes_repeat1 = 157,
  aux_sym_fields_repeat1 = 158,
  aux_sym_parameters_repeat1 = 159,
  aux_sym_typed_parameters_repeat1 = 160,
  aux_sym_str_literal_repeat1 = 161,
  aux_sym_array_expression_repeat1 = 162,
  aux_sym_map_expression_repeat1 = 163,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_use] = "use",
  [anon_sym_doc] = "doc",
  [anon_sym_def] = "def",
  [anon_sym_fn] = "fn",
  [anon_sym_defn] = "defn",
  [anon_sym_let] = "let",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_do] = "do",
  [anon_sym_if] = "if",
  [anon_sym_while] = "while",
  [anon_sym_ref] = "ref",
  [anon_sym_address] = "address",
  [anon_sym_set_BANG] = "set!",
  [anon_sym_the] = "the",
  [anon_sym_register] = "register",
  [anon_sym_Bool] = "Bool",
  [anon_sym_Char] = "Char",
  [anon_sym_Int] = "Int",
  [anon_sym_Long] = "Long",
  [anon_sym_Float] = "Float",
  [anon_sym_Double] = "Double",
  [anon_sym_Vector2] = "Vector2",
  [anon_sym_Vector3] = "Vector3",
  [anon_sym_VectorN] = "VectorN",
  [anon_sym_String] = "String",
  [anon_sym_Pattern] = "Pattern",
  [anon_sym_Array] = "Array",
  [anon_sym_Map] = "Map",
  [anon_sym_Maybe] = "Maybe",
  [anon_sym_Result] = "Result",
  [anon_sym_Id] = "Id",
  [anon_sym_Ptr] = "Ptr",
  [anon_sym_DOT] = ".",
  [anon_sym_definterface] = "definterface",
  [anon_sym_defmacro] = "defmacro",
  [anon_sym_defndynamic] = "defndynamic",
  [anon_sym_defmodule] = "defmodule",
  [anon_sym_deftype] = "deftype",
  [anon_sym_RPAREN2] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK2] = "]",
  [anon_sym_Fn] = "Fn",
  [anon_sym_] = "λ",
  [anon_sym_AMP] = "&",
  [anon_sym_AT] = "@",
  [anon_sym_TILDE] = "~",
  [anon_sym_SQUOTE] = "'",
  [sym_integer_literal] = "integer_literal",
  [sym_float_literal] = "float_literal",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_str_literal_token1] = "str_literal_token1",
  [anon_sym_DQUOTE2] = "\"",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_POUND_DQUOTE] = "#\"",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [sym_hidden] = "hidden",
  [anon_sym_let_DASHdo] = "let-do",
  [anon_sym_while_DASHdo] = "while-do",
  [anon_sym_defn_DASHdo] = "defn-do",
  [anon_sym_break] = "break",
  [anon_sym_for] = "for",
  [anon_sym_when] = "when",
  [anon_sym_cond] = "cond",
  [anon_sym_unless] = "unless",
  [anon_sym_case] = "case",
  [anon_sym_foreach] = "foreach",
  [anon_sym_defdynamic] = "defdynamic",
  [anon_sym_load] = "load",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR] = "*",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_EQ] = "=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_not] = "not",
  [anon_sym_and_STAR] = "and*",
  [anon_sym_or_STAR] = "or*",
  [sym_upper_identifier] = "upper_identifier",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym_line_comment] = "line_comment",
  [sym__s_expr] = "_s_expr",
  [sym__expr] = "_expr",
  [sym__anything] = "_anything",
  [sym__s_forms] = "_s_forms",
  [sym__defs] = "_defs",
  [sym__literals] = "_literals",
  [sym__short_helper] = "_short_helper",
  [sym_use] = "use",
  [sym_doc] = "doc",
  [sym_def] = "def",
  [sym_fn] = "fn",
  [sym_defn] = "defn",
  [sym_let] = "let",
  [sym_let_pairs] = "let_pairs",
  [sym_do] = "do",
  [sym_if] = "if",
  [sym_while] = "while",
  [sym_ref] = "ref",
  [sym_address] = "address",
  [sym_set] = "set",
  [sym_the] = "the",
  [sym_register] = "register",
  [sym_type] = "type",
  [sym_complex_type] = "complex_type",
  [sym_call_expression] = "call_expression",
  [sym_call_name] = "call_name",
  [sym_definterface] = "definterface",
  [sym_defmacro] = "defmacro",
  [sym_defndynamic] = "defndynamic",
  [sym_defmodule] = "defmodule",
  [sym_deftype] = "deftype",
  [sym__deftype1] = "_deftype1",
  [sym__deftype2] = "_deftype2",
  [sym__name_deftypes] = "_name_deftypes",
  [sym_fields] = "fields",
  [sym_interface_fn] = "interface_fn",
  [sym_short_ref] = "short_ref",
  [sym_short_copy] = "short_copy",
  [sym_short_fn_ref] = "short_fn_ref",
  [sym_short_quote] = "short_quote",
  [sym_parameters] = "parameters",
  [sym_typed_parameters] = "typed_parameters",
  [sym_bool_literal] = "bool_literal",
  [sym_str_literal] = "str_literal",
  [sym_char_literal] = "char_literal",
  [sym_pattern_literal] = "pattern_literal",
  [sym_array_expression] = "array_expression",
  [sym_map_expression] = "map_expression",
  [sym_symbol] = "symbol",
  [sym_other_str] = "other_str",
  [sym_operators] = "operators",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_let_pairs_repeat1] = "let_pairs_repeat1",
  [aux_sym_do_repeat1] = "do_repeat1",
  [aux_sym_complex_type_repeat1] = "complex_type_repeat1",
  [aux_sym_call_expression_repeat1] = "call_expression_repeat1",
  [aux_sym_defmodule_repeat1] = "defmodule_repeat1",
  [aux_sym__deftype2_repeat1] = "_deftype2_repeat1",
  [aux_sym__name_deftypes_repeat1] = "_name_deftypes_repeat1",
  [aux_sym_fields_repeat1] = "fields_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_typed_parameters_repeat1] = "typed_parameters_repeat1",
  [aux_sym_str_literal_repeat1] = "str_literal_repeat1",
  [aux_sym_array_expression_repeat1] = "array_expression_repeat1",
  [aux_sym_map_expression_repeat1] = "map_expression_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_doc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_address] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_the] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_register] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Vector2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Vector3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VectorN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_String] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Pattern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Maybe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Result] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Id] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ptr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_definterface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defmacro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defndynamic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defmodule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deftype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_str_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_hidden] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_let_DASHdo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while_DASHdo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defn_DASHdo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_when] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cond] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unless] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_foreach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defdynamic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_load] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_upper_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__s_expr] = {
    .visible = false,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym__anything] = {
    .visible = false,
    .named = true,
  },
  [sym__s_forms] = {
    .visible = false,
    .named = true,
  },
  [sym__defs] = {
    .visible = false,
    .named = true,
  },
  [sym__literals] = {
    .visible = false,
    .named = true,
  },
  [sym__short_helper] = {
    .visible = false,
    .named = true,
  },
  [sym_use] = {
    .visible = true,
    .named = true,
  },
  [sym_doc] = {
    .visible = true,
    .named = true,
  },
  [sym_def] = {
    .visible = true,
    .named = true,
  },
  [sym_fn] = {
    .visible = true,
    .named = true,
  },
  [sym_defn] = {
    .visible = true,
    .named = true,
  },
  [sym_let] = {
    .visible = true,
    .named = true,
  },
  [sym_let_pairs] = {
    .visible = true,
    .named = true,
  },
  [sym_do] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym_while] = {
    .visible = true,
    .named = true,
  },
  [sym_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_address] = {
    .visible = true,
    .named = true,
  },
  [sym_set] = {
    .visible = true,
    .named = true,
  },
  [sym_the] = {
    .visible = true,
    .named = true,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_complex_type] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_call_name] = {
    .visible = true,
    .named = true,
  },
  [sym_definterface] = {
    .visible = true,
    .named = true,
  },
  [sym_defmacro] = {
    .visible = true,
    .named = true,
  },
  [sym_defndynamic] = {
    .visible = true,
    .named = true,
  },
  [sym_defmodule] = {
    .visible = true,
    .named = true,
  },
  [sym_deftype] = {
    .visible = true,
    .named = true,
  },
  [sym__deftype1] = {
    .visible = false,
    .named = true,
  },
  [sym__deftype2] = {
    .visible = false,
    .named = true,
  },
  [sym__name_deftypes] = {
    .visible = false,
    .named = true,
  },
  [sym_fields] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_fn] = {
    .visible = true,
    .named = true,
  },
  [sym_short_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_short_copy] = {
    .visible = true,
    .named = true,
  },
  [sym_short_fn_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_short_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_typed_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_str_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_char_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_array_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_map_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_other_str] = {
    .visible = true,
    .named = true,
  },
  [sym_operators] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_let_pairs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_do_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_complex_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_defmodule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__deftype2_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__name_deftypes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fields_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_typed_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_map_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_argument = 1,
  field_body = 2,
  field_call_name = 3,
  field_condition = 4,
  field_definition = 5,
  field_doc_str = 6,
  field_else = 7,
  field_expr = 8,
  field_fields = 9,
  field_fn = 10,
  field_generic_type = 11,
  field_key = 12,
  field_module = 13,
  field_name = 14,
  field_pairs = 15,
  field_parameters = 16,
  field_return_type = 17,
  field_then = 18,
  field_type = 19,
  field_typed_params = 20,
  field_value = 21,
  field_value_name = 22,
  field_var = 23,
  field_variable = 24,
  field_variant = 25,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_body] = "body",
  [field_call_name] = "call_name",
  [field_condition] = "condition",
  [field_definition] = "definition",
  [field_doc_str] = "doc_str",
  [field_else] = "else",
  [field_expr] = "expr",
  [field_fields] = "fields",
  [field_fn] = "fn",
  [field_generic_type] = "generic_type",
  [field_key] = "key",
  [field_module] = "module",
  [field_name] = "name",
  [field_pairs] = "pairs",
  [field_parameters] = "parameters",
  [field_return_type] = "return_type",
  [field_then] = "then",
  [field_type] = "type",
  [field_typed_params] = "typed_params",
  [field_value] = "value",
  [field_value_name] = "value_name",
  [field_var] = "var",
  [field_variable] = "variable",
  [field_variant] = "variant",
};

static const TSFieldMapSlice ts_field_map_slices[] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 1},
  [9] = {.index = 8, .length = 1},
  [11] = {.index = 9, .length = 1},
  [12] = {.index = 10, .length = 3},
  [13] = {.index = 13, .length = 2},
  [14] = {.index = 15, .length = 2},
  [15] = {.index = 17, .length = 2},
  [16] = {.index = 19, .length = 2},
  [17] = {.index = 21, .length = 2},
  [18] = {.index = 23, .length = 2},
  [19] = {.index = 25, .length = 2},
  [20] = {.index = 27, .length = 2},
  [21] = {.index = 29, .length = 2},
  [22] = {.index = 31, .length = 2},
  [23] = {.index = 33, .length = 2},
  [24] = {.index = 35, .length = 2},
  [25] = {.index = 37, .length = 1},
  [26] = {.index = 38, .length = 2},
  [27] = {.index = 40, .length = 3},
  [28] = {.index = 43, .length = 4},
  [29] = {.index = 47, .length = 2},
  [30] = {.index = 49, .length = 2},
  [31] = {.index = 51, .length = 4},
  [32] = {.index = 55, .length = 2},
  [33] = {.index = 57, .length = 3},
  [34] = {.index = 60, .length = 2},
  [35] = {.index = 62, .length = 2},
  [36] = {.index = 64, .length = 4},
  [37] = {.index = 68, .length = 3},
  [38] = {.index = 71, .length = 3},
  [39] = {.index = 74, .length = 2},
  [41] = {.index = 76, .length = 4},
  [42] = {.index = 80, .length = 2},
  [43] = {.index = 82, .length = 2},
  [44] = {.index = 84, .length = 2},
  [45] = {.index = 86, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_call_name, 0},
  [2] =
    {field_module, 1},
  [3] =
    {field_parameters, 1},
  [4] =
    {field_pairs, 1},
  [5] =
    {field_expr, 0},
  [6] =
    {field_expr, 1, .inherited = true},
  [7] =
    {field_condition, 1},
  [8] =
    {field_expr, 1},
  [9] =
    {field_name, 1},
  [10] =
    {field_fields, 1, .inherited = true},
    {field_generic_type, 1, .inherited = true},
    {field_name, 1, .inherited = true},
  [13] =
    {field_generic_type, 0, .inherited = true},
    {field_name, 0, .inherited = true},
  [15] =
    {field_argument, 1},
    {field_call_name, 0},
  [17] =
    {field_doc_str, 2},
    {field_fn, 1},
  [19] =
    {field_name, 1},
    {field_value, 2},
  [21] =
    {field_body, 2},
    {field_parameters, 1},
  [23] =
    {field_name, 1},
    {field_parameters, 2},
  [25] =
    {field_body, 2},
    {field_pairs, 1},
  [27] =
    {field_expr, 0, .inherited = true},
    {field_expr, 1, .inherited = true},
  [29] =
    {field_body, 2},
    {field_condition, 1},
  [31] =
    {field_expr, 2},
    {field_variable, 1},
  [33] =
    {field_expr, 2},
    {field_type, 1},
  [35] =
    {field_name, 1},
    {field_type, 2},
  [37] =
    {field_definition, 0},
  [38] =
    {field_definition, 2, .inherited = true},
    {field_name, 1},
  [40] =
    {field_fields, 1},
    {field_generic_type, 0, .inherited = true},
    {field_name, 0, .inherited = true},
  [43] =
    {field_fields, 1, .inherited = true},
    {field_generic_type, 0, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_variant, 1, .inherited = true},
  [47] =
    {field_key, 0},
    {field_value, 1},
  [49] =
    {field_key, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [51] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [55] =
    {field_module, 0},
    {field_name, 2},
  [57] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [60] =
    {field_expr, 1},
    {field_var, 0},
  [62] =
    {field_expr, 1, .inherited = true},
    {field_var, 1, .inherited = true},
  [64] =
    {field_expr, 0, .inherited = true},
    {field_expr, 1, .inherited = true},
    {field_var, 0, .inherited = true},
    {field_var, 1, .inherited = true},
  [68] =
    {field_condition, 1},
    {field_else, 3},
    {field_then, 2},
  [71] =
    {field_name, 1},
    {field_type, 2},
    {field_value_name, 3},
  [74] =
    {field_definition, 0, .inherited = true},
    {field_definition, 1, .inherited = true},
  [76] =
    {field_fields, 0, .inherited = true},
    {field_fields, 1, .inherited = true},
    {field_variant, 0, .inherited = true},
    {field_variant, 1, .inherited = true},
  [80] =
    {field_fn, 3},
    {field_name, 1},
  [82] =
    {field_generic_type, 2},
    {field_name, 1},
  [84] =
    {field_return_type, 2},
    {field_typed_params, 1},
  [86] =
    {field_fields, 2},
    {field_variant, 1},
};

static TSSymbol ts_alias_sequences[46][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [10] = {
    [0] = sym_identifier,
  },
  [40] = {
    [0] = sym_type,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(191);
      if (lookahead == '"') ADVANCE(298);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '%') ADVANCE(323);
      if (lookahead == '&') ADVANCE(279);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '(') ADVANCE(195);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == '*') ADVANCE(322);
      if (lookahead == '+') ADVANCE(318);
      if (lookahead == ',') ADVANCE(273);
      if (lookahead == '-') ADVANCE(320);
      if (lookahead == '.') ADVANCE(261);
      if (lookahead == '/') ADVANCE(321);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == ';') ADVANCE(192);
      if (lookahead == '<') ADVANCE(324);
      if (lookahead == '=') ADVANCE(326);
      if (lookahead == '>') ADVANCE(325);
      if (lookahead == '@') ADVANCE(280);
      if (lookahead == 'A') ADVANCE(149);
      if (lookahead == 'B') ADVANCE(134);
      if (lookahead == 'C') ADVANCE(95);
      if (lookahead == 'D') ADVANCE(127);
      if (lookahead == 'F') ADVANCE(105);
      if (lookahead == 'I') ADVANCE(44);
      if (lookahead == 'L') ADVANCE(128);
      if (lookahead == 'M') ADVANCE(22);
      if (lookahead == 'P') ADVANCE(29);
      if (lookahead == 'R') ADVANCE(57);
      if (lookahead == 'S') ADVANCE(170);
      if (lookahead == 'V') ADVANCE(58);
      if (lookahead == '[') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(299);
      if (lookahead == ']') ADVANCE(274);
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'b') ADVANCE(151);
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(71);
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'h') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'l') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == 's') ADVANCE(79);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == 'u') ADVANCE(121);
      if (lookahead == 'w') ADVANCE(93);
      if (lookahead == '{') ADVANCE(302);
      if (lookahead == '}') ADVANCE(303);
      if (lookahead == '~') ADVANCE(281);
      if (lookahead == 955) ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(191);
      if (lookahead == '"') ADVANCE(294);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '%') ADVANCE(323);
      if (lookahead == '&') ADVANCE(279);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '(') ADVANCE(195);
      if (lookahead == ')') ADVANCE(196);
      if (lookahead == '*') ADVANCE(322);
      if (lookahead == '+') ADVANCE(318);
      if (lookahead == ',') ADVANCE(273);
      if (lookahead == '-') ADVANCE(320);
      if (lookahead == '.') ADVANCE(261);
      if (lookahead == '/') ADVANCE(321);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == ';') ADVANCE(192);
      if (lookahead == '<') ADVANCE(324);
      if (lookahead == '=') ADVANCE(326);
      if (lookahead == '>') ADVANCE(325);
      if (lookahead == '@') ADVANCE(280);
      if (lookahead == 'A') ADVANCE(149);
      if (lookahead == 'B') ADVANCE(134);
      if (lookahead == 'C') ADVANCE(95);
      if (lookahead == 'D') ADVANCE(127);
      if (lookahead == 'F') ADVANCE(105);
      if (lookahead == 'I') ADVANCE(44);
      if (lookahead == 'L') ADVANCE(128);
      if (lookahead == 'M') ADVANCE(22);
      if (lookahead == 'P') ADVANCE(29);
      if (lookahead == 'R') ADVANCE(57);
      if (lookahead == 'S') ADVANCE(170);
      if (lookahead == 'V') ADVANCE(58);
      if (lookahead == '[') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(299);
      if (lookahead == ']') ADVANCE(210);
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'b') ADVANCE(151);
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(71);
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'h') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'l') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == 's') ADVANCE(79);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == 'u') ADVANCE(121);
      if (lookahead == 'w') ADVANCE(93);
      if (lookahead == '{') ADVANCE(302);
      if (lookahead == '~') ADVANCE(281);
      if (lookahead == 955) ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(191);
      if (lookahead == '"') ADVANCE(294);
      if (lookahead == '%') ADVANCE(323);
      if (lookahead == '(') ADVANCE(195);
      if (lookahead == ')') ADVANCE(196);
      if (lookahead == '*') ADVANCE(322);
      if (lookahead == '+') ADVANCE(318);
      if (lookahead == '-') ADVANCE(319);
      if (lookahead == '/') ADVANCE(321);
      if (lookahead == ';') ADVANCE(192);
      if (lookahead == '<') ADVANCE(324);
      if (lookahead == '=') ADVANCE(326);
      if (lookahead == '>') ADVANCE(325);
      if (lookahead == '[') ADVANCE(209);
      if (lookahead == 'a') ADVANCE(119);
      if (lookahead == 'b') ADVANCE(151);
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(137);
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(120);
      if (lookahead == 'w') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (913 <= lookahead && lookahead <= 937)) ADVANCE(335);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '"') ADVANCE(298);
      if (lookahead == '\\') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0) ADVANCE(295);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\\') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0) ADVANCE(295);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0) ADVANCE(295);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(221);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(300);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(294);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '&') ADVANCE(279);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '(') ADVANCE(195);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == '-') ADVANCE(450);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == ';') ADVANCE(192);
      if (lookahead == '@') ADVANCE(280);
      if (lookahead == '[') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(299);
      if (lookahead == 'a') ADVANCE(356);
      if (lookahead == 'd') ADVANCE(370);
      if (lookahead == 'f') ADVANCE(338);
      if (lookahead == 'i') ADVANCE(378);
      if (lookahead == 'l') ADVANCE(358);
      if (lookahead == 'r') ADVANCE(359);
      if (lookahead == 's') ADVANCE(371);
      if (lookahead == 't') ADVANCE(385);
      if (lookahead == 'u') ADVANCE(427);
      if (lookahead == 'w') ADVANCE(384);
      if (lookahead == '{') ADVANCE(302);
      if (lookahead == '~') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (913 <= lookahead && lookahead <= 937)) ADVANCE(335);
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '+') ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(294);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '&') ADVANCE(279);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '(') ADVANCE(195);
      if (lookahead == ')') ADVANCE(196);
      if (lookahead == '-') ADVANCE(450);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '@') ADVANCE(280);
      if (lookahead == '[') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(299);
      if (lookahead == ']') ADVANCE(274);
      if (lookahead == 'f') ADVANCE(339);
      if (lookahead == 't') ADVANCE(414);
      if (lookahead == '{') ADVANCE(302);
      if (lookahead == '}') ADVANCE(303);
      if (lookahead == '~') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '+') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(294);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '&') ADVANCE(279);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '(') ADVANCE(195);
      if (lookahead == ')') ADVANCE(196);
      if (lookahead == '-') ADVANCE(450);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '@') ADVANCE(280);
      if (lookahead == '[') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(299);
      if (lookahead == 'f') ADVANCE(339);
      if (lookahead == 't') ADVANCE(414);
      if (lookahead == '{') ADVANCE(302);
      if (lookahead == '~') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '+') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(294);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '&') ADVANCE(279);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '(') ADVANCE(195);
      if (lookahead == '-') ADVANCE(450);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == ';') ADVANCE(192);
      if (lookahead == '@') ADVANCE(280);
      if (lookahead == '[') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(299);
      if (lookahead == 'a') ADVANCE(356);
      if (lookahead == 'd') ADVANCE(370);
      if (lookahead == 'f') ADVANCE(338);
      if (lookahead == 'i') ADVANCE(378);
      if (lookahead == 'l') ADVANCE(358);
      if (lookahead == 'r') ADVANCE(359);
      if (lookahead == 's') ADVANCE(371);
      if (lookahead == 't') ADVANCE(385);
      if (lookahead == 'u') ADVANCE(427);
      if (lookahead == 'w') ADVANCE(384);
      if (lookahead == '{') ADVANCE(302);
      if (lookahead == '~') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (913 <= lookahead && lookahead <= 937)) ADVANCE(335);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= '|') ||
          lookahead == 181 ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 12:
      if (lookahead == '&') ADVANCE(279);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '(') ADVANCE(195);
      if (lookahead == ')') ADVANCE(196);
      if (lookahead == ',') ADVANCE(273);
      if (lookahead == '@') ADVANCE(280);
      if (lookahead == 'A') ADVANCE(425);
      if (lookahead == 'B') ADVANCE(409);
      if (lookahead == 'C') ADVANCE(386);
      if (lookahead == 'D') ADVANCE(406);
      if (lookahead == 'F') ADVANCE(393);
      if (lookahead == 'I') ADVANCE(355);
      if (lookahead == 'L') ADVANCE(407);
      if (lookahead == 'M') ADVANCE(342);
      if (lookahead == 'P') ADVANCE(345);
      if (lookahead == 'R') ADVANCE(376);
      if (lookahead == 'S') ADVANCE(439);
      if (lookahead == 'V') ADVANCE(375);
      if (lookahead == ']') ADVANCE(274);
      if (lookahead == '~') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 13:
      if (lookahead == '&') ADVANCE(279);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '(') ADVANCE(195);
      if (lookahead == ')') ADVANCE(196);
      if (lookahead == ',') ADVANCE(273);
      if (lookahead == '@') ADVANCE(280);
      if (lookahead == 'A') ADVANCE(425);
      if (lookahead == 'B') ADVANCE(409);
      if (lookahead == 'C') ADVANCE(386);
      if (lookahead == 'D') ADVANCE(406);
      if (lookahead == 'F') ADVANCE(393);
      if (lookahead == 'I') ADVANCE(355);
      if (lookahead == 'L') ADVANCE(407);
      if (lookahead == 'M') ADVANCE(342);
      if (lookahead == 'P') ADVANCE(345);
      if (lookahead == 'R') ADVANCE(376);
      if (lookahead == 'S') ADVANCE(439);
      if (lookahead == 'V') ADVANCE(375);
      if (lookahead == '~') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '!' ||
          ('%' <= lookahead && lookahead <= '-') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 14:
      if (lookahead == '(') ADVANCE(195);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == ']') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 15:
      if (lookahead == '(') ADVANCE(195);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 16:
      if (lookahead == ')') ADVANCE(196);
      if (lookahead == 'A') ADVANCE(425);
      if (lookahead == 'B') ADVANCE(409);
      if (lookahead == 'C') ADVANCE(386);
      if (lookahead == 'D') ADVANCE(406);
      if (lookahead == 'F') ADVANCE(392);
      if (lookahead == 'I') ADVANCE(355);
      if (lookahead == 'L') ADVANCE(407);
      if (lookahead == 'M') ADVANCE(342);
      if (lookahead == 'P') ADVANCE(345);
      if (lookahead == 'R') ADVANCE(376);
      if (lookahead == 'S') ADVANCE(439);
      if (lookahead == 'V') ADVANCE(375);
      if (lookahead == 955) ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('E' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(50);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(52);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(53);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(239);
      if (lookahead == '3') ADVANCE(241);
      if (lookahead == 'N') ADVANCE(243);
      END_STATE();
    case 21:
      if (lookahead == ']') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(203);
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(160);
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(64);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(108);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(266);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(316);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(171);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(153);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(257);
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(330);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(312);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(317);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(129);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(154);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(132);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(77);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(179);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(183);
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 86:
      if (lookahead == 'f') ADVANCE(213);
      END_STATE();
    case 87:
      if (lookahead == 'f') ADVANCE(202);
      END_STATE();
    case 88:
      if (lookahead == 'f') ADVANCE(217);
      if (lookahead == 'g') ADVANCE(98);
      END_STATE();
    case 89:
      if (lookahead == 'f') ADVANCE(56);
      END_STATE();
    case 90:
      if (lookahead == 'f') ADVANCE(31);
      END_STATE();
    case 91:
      if (lookahead == 'g') ADVANCE(233);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(245);
      END_STATE();
    case 93:
      if (lookahead == 'h') ADVANCE(72);
      END_STATE();
    case 94:
      if (lookahead == 'h') ADVANCE(315);
      END_STATE();
    case 95:
      if (lookahead == 'h') ADVANCE(33);
      END_STATE();
    case 96:
      if (lookahead == 'h') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 97:
      if (lookahead == 'h') ADVANCE(73);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 103:
      if (lookahead == 'k') ADVANCE(309);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(227);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(135);
      if (lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(168);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 113:
      if (lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 114:
      if (lookahead == 'm') ADVANCE(101);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(311);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(305);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(306);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(308);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(307);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 139:
      if (lookahead == 'p') ADVANCE(251);
      if (lookahead == 'y') ADVANCE(36);
      END_STATE();
    case 140:
      if (lookahead == 'p') ADVANCE(68);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(310);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 155:
      if (lookahead == 's') ADVANCE(313);
      END_STATE();
    case 156:
      if (lookahead == 's') ADVANCE(219);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(332);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 176:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 177:
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 178:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 179:
      if (lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 180:
      if (lookahead == 'y') ADVANCE(249);
      END_STATE();
    case 181:
      if (lookahead == 'y') ADVANCE(140);
      END_STATE();
    case 182:
      if (lookahead == 'y') ADVANCE(124);
      END_STATE();
    case 183:
      if (lookahead == 'y') ADVANCE(126);
      END_STATE();
    case 184:
      if (lookahead == '{') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(187);
      END_STATE();
    case 185:
      if (lookahead == '}') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      END_STATE();
    case 186:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    case 187:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      END_STATE();
    case 188:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(301);
      END_STATE();
    case 189:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      END_STATE();
    case 190:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_use);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_doc);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_doc);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'i') ADVANCE(404);
      if (lookahead == 'm') ADVANCE(340);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 't') ADVANCE(447);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'i') ADVANCE(125);
      if (lookahead == 'm') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(206);
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_fn);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == 'd') ADVANCE(449);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == 'd') ADVANCE(182);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '-') ADVANCE(50);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'c') ADVANCE(199);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'c') ADVANCE(200);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_ref);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_address);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_address);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_set_BANG);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_set_BANG);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_the);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_the);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_register);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_register);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_Bool);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_Bool);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_Char);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_Char);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_Int);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_Long);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_Long);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_Float);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_Float);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_Double);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_Double);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_Vector2);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_Vector2);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_Vector3);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_Vector3);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_VectorN);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_VectorN);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_String);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_Pattern);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_Pattern);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_Array);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_Array);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_Map);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_Map);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_Maybe);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_Maybe);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_Result);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_Result);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_Id);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_Id);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_Ptr);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_Ptr);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_definterface);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_definterface);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_defmacro);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_defmacro);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_defndynamic);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_defndynamic);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_defmodule);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_defmodule);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_deftype);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_deftype);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_RPAREN2);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_RBRACK2);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_Fn);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_Fn);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == 'f') ADVANCE(287);
      if (lookahead == 'l') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == 'f') ADVANCE(289);
      if (lookahead == 'l') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_float_literal);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'f') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == 'u') ADVANCE(184);
      if (lookahead == 'x') ADVANCE(190);
      if (lookahead != 0) ADVANCE(301);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_POUND_DQUOTE);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_hidden);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_let_DASHdo);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_while_DASHdo);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_defn_DASHdo);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_cond);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_foreach);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_defdynamic);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(329);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(327);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(328);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '*') ADVANCE(333);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '*') ADVANCE(334);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_and_STAR);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_or_STAR);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_upper_identifier);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(222);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(240);
      if (lookahead == '3') ADVANCE(242);
      if (lookahead == 'N') ADVANCE(244);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(398);
      if (lookahead == 'n') ADVANCE(204);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(398);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(351);
      if (lookahead == 'o') ADVANCE(357);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(399);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(412);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(353);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(448);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(442);
      if (lookahead == 't') ADVANCE(417);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(435);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(418);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(368);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(397);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(267);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(415);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(437);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(423);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(258);
      if (lookahead == 'n') ADVANCE(434);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(354);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(446);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(432);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(380);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(224);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(291);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(293);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(254);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(379);
      if (lookahead == 'o') ADVANCE(212);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(433);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(428);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(420);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(416);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(352);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(429);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(422);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(214);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(201);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(218);
      if (lookahead == 'g') ADVANCE(387);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(343);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(234);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(246);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(388);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(360);
      if (lookahead == 'r') ADVANCE(444);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(347);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(431);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(394);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(350);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(403);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(228);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(410);
      if (lookahead == 'n') ADVANCE(276);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(410);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(364);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(436);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(366);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(369);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(430);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(389);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(341);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(382);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(248);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(383);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(438);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(265);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(443);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(401);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(391);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(408);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(346);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(419);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(252);
      if (lookahead == 'y') ADVANCE(348);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(365);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(444);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(405);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(226);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(230);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(337);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(381);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(390);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(402);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(372);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(344);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(424);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(220);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(361);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(426);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(445);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(363);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(440);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(208);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(336);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(232);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(236);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(411);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(373);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(421);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(374);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(377);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(441);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(349);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(362);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(395);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(396);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(413);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(250);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(400);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(451);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 12},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 12},
  [61] = {.lex_state = 12},
  [62] = {.lex_state = 12},
  [63] = {.lex_state = 12},
  [64] = {.lex_state = 12},
  [65] = {.lex_state = 12},
  [66] = {.lex_state = 12},
  [67] = {.lex_state = 12},
  [68] = {.lex_state = 12},
  [69] = {.lex_state = 12},
  [70] = {.lex_state = 12},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 12},
  [73] = {.lex_state = 12},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 12},
  [76] = {.lex_state = 12},
  [77] = {.lex_state = 12},
  [78] = {.lex_state = 12},
  [79] = {.lex_state = 12},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 12},
  [82] = {.lex_state = 12},
  [83] = {.lex_state = 12},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 12},
  [86] = {.lex_state = 12},
  [87] = {.lex_state = 12},
  [88] = {.lex_state = 12},
  [89] = {.lex_state = 12},
  [90] = {.lex_state = 12},
  [91] = {.lex_state = 12},
  [92] = {.lex_state = 12},
  [93] = {.lex_state = 12},
  [94] = {.lex_state = 12},
  [95] = {.lex_state = 12},
  [96] = {.lex_state = 12},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 12},
  [109] = {.lex_state = 9},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 9},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 9},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 9},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 9},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 9},
  [126] = {.lex_state = 9},
  [127] = {.lex_state = 9},
  [128] = {.lex_state = 9},
  [129] = {.lex_state = 9},
  [130] = {.lex_state = 9},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 9},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 9},
  [140] = {.lex_state = 9},
  [141] = {.lex_state = 9},
  [142] = {.lex_state = 9},
  [143] = {.lex_state = 14},
  [144] = {.lex_state = 14},
  [145] = {.lex_state = 14},
  [146] = {.lex_state = 14},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 3},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 21},
  [163] = {.lex_state = 14},
  [164] = {.lex_state = 14},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 14},
  [170] = {.lex_state = 21},
  [171] = {.lex_state = 21},
  [172] = {.lex_state = 14},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 21},
  [176] = {.lex_state = 21},
  [177] = {.lex_state = 21},
  [178] = {.lex_state = 21},
  [179] = {.lex_state = 21},
  [180] = {.lex_state = 21},
  [181] = {.lex_state = 21},
  [182] = {.lex_state = 21},
  [183] = {.lex_state = 21},
  [184] = {.lex_state = 21},
  [185] = {.lex_state = 21},
  [186] = {.lex_state = 21},
  [187] = {.lex_state = 21},
  [188] = {.lex_state = 21},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 21},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 4},
  [194] = {.lex_state = 2},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 4},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 21},
  [201] = {.lex_state = 21},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 2},
  [205] = {.lex_state = 8},
  [206] = {.lex_state = 14},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 8},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 14},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 2},
  [217] = {.lex_state = 2},
  [218] = {.lex_state = 2},
  [219] = {.lex_state = 8},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 14},
  [222] = {.lex_state = 2},
  [223] = {.lex_state = 2},
  [224] = {.lex_state = 2},
  [225] = {.lex_state = 14},
  [226] = {.lex_state = 2},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 14},
  [229] = {.lex_state = 2},
  [230] = {.lex_state = 2},
  [231] = {.lex_state = 2},
  [232] = {.lex_state = 2},
  [233] = {.lex_state = 14},
  [234] = {.lex_state = 14},
  [235] = {.lex_state = 14},
  [236] = {.lex_state = 2},
  [237] = {.lex_state = 2},
  [238] = {.lex_state = 2},
  [239] = {.lex_state = 14},
  [240] = {.lex_state = 14},
  [241] = {.lex_state = 2},
  [242] = {.lex_state = 14},
  [243] = {.lex_state = 2},
  [244] = {.lex_state = 2},
  [245] = {.lex_state = 14},
  [246] = {.lex_state = 14},
  [247] = {.lex_state = 2},
  [248] = {.lex_state = 2},
  [249] = {.lex_state = 14},
  [250] = {.lex_state = 193},
  [251] = {.lex_state = 14},
  [252] = {.lex_state = 14},
  [253] = {.lex_state = 2},
  [254] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_doc] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_defn] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_address] = ACTIONS(1),
    [anon_sym_set_BANG] = ACTIONS(1),
    [anon_sym_the] = ACTIONS(1),
    [anon_sym_register] = ACTIONS(1),
    [anon_sym_Bool] = ACTIONS(1),
    [anon_sym_Char] = ACTIONS(1),
    [anon_sym_Int] = ACTIONS(1),
    [anon_sym_Long] = ACTIONS(1),
    [anon_sym_Float] = ACTIONS(1),
    [anon_sym_Double] = ACTIONS(1),
    [anon_sym_Vector2] = ACTIONS(1),
    [anon_sym_Vector3] = ACTIONS(1),
    [anon_sym_VectorN] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_Pattern] = ACTIONS(1),
    [anon_sym_Array] = ACTIONS(1),
    [anon_sym_Map] = ACTIONS(1),
    [anon_sym_Maybe] = ACTIONS(1),
    [anon_sym_Result] = ACTIONS(1),
    [anon_sym_Id] = ACTIONS(1),
    [anon_sym_Ptr] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_definterface] = ACTIONS(1),
    [anon_sym_defmacro] = ACTIONS(1),
    [anon_sym_defndynamic] = ACTIONS(1),
    [anon_sym_defmodule] = ACTIONS(1),
    [anon_sym_deftype] = ACTIONS(1),
    [anon_sym_RPAREN2] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK2] = ACTIONS(1),
    [anon_sym_Fn] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_hidden] = ACTIONS(1),
    [anon_sym_let_DASHdo] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_when] = ACTIONS(1),
    [anon_sym_cond] = ACTIONS(1),
    [anon_sym_unless] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_foreach] = ACTIONS(1),
    [anon_sym_load] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_and_STAR] = ACTIONS(1),
    [anon_sym_or_STAR] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(254),
    [sym_line_comment] = STATE(7),
    [sym__s_expr] = STATE(7),
    [sym_other_str] = STATE(7),
    [sym_operators] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_let_DASHdo] = ACTIONS(9),
    [anon_sym_while_DASHdo] = ACTIONS(9),
    [anon_sym_defn_DASHdo] = ACTIONS(9),
    [anon_sym_break] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_when] = ACTIONS(9),
    [anon_sym_cond] = ACTIONS(9),
    [anon_sym_unless] = ACTIONS(9),
    [anon_sym_case] = ACTIONS(9),
    [anon_sym_foreach] = ACTIONS(9),
    [anon_sym_defdynamic] = ACTIONS(9),
    [anon_sym_load] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(13),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(13),
    [anon_sym_SLASH_EQ] = ACTIONS(13),
    [anon_sym_and] = ACTIONS(15),
    [anon_sym_or] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_and_STAR] = ACTIONS(13),
    [anon_sym_or_STAR] = ACTIONS(13),
  },
  [2] = {
    [sym_line_comment] = STATE(222),
    [sym__s_expr] = STATE(222),
    [sym__anything] = STATE(222),
    [sym__s_forms] = STATE(222),
    [sym__defs] = STATE(222),
    [sym__literals] = STATE(222),
    [sym__short_helper] = STATE(222),
    [sym_use] = STATE(222),
    [sym_doc] = STATE(222),
    [sym_def] = STATE(222),
    [sym_fn] = STATE(222),
    [sym_defn] = STATE(222),
    [sym_let] = STATE(222),
    [sym_do] = STATE(222),
    [sym_if] = STATE(222),
    [sym_while] = STATE(222),
    [sym_ref] = STATE(222),
    [sym_address] = STATE(222),
    [sym_set] = STATE(222),
    [sym_the] = STATE(222),
    [sym_register] = STATE(222),
    [sym_call_expression] = STATE(222),
    [sym_call_name] = STATE(15),
    [sym_definterface] = STATE(222),
    [sym_defmacro] = STATE(222),
    [sym_defndynamic] = STATE(222),
    [sym_defmodule] = STATE(222),
    [sym_deftype] = STATE(222),
    [sym_short_ref] = STATE(222),
    [sym_short_copy] = STATE(222),
    [sym_short_fn_ref] = STATE(124),
    [sym_short_quote] = STATE(222),
    [sym_bool_literal] = STATE(222),
    [sym_str_literal] = STATE(222),
    [sym_char_literal] = STATE(222),
    [sym_pattern_literal] = STATE(222),
    [sym_array_expression] = STATE(222),
    [sym_map_expression] = STATE(222),
    [sym_symbol] = STATE(222),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_use] = ACTIONS(17),
    [anon_sym_doc] = ACTIONS(19),
    [anon_sym_def] = ACTIONS(21),
    [anon_sym_fn] = ACTIONS(23),
    [anon_sym_defn] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_do] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_while] = ACTIONS(35),
    [anon_sym_ref] = ACTIONS(37),
    [anon_sym_address] = ACTIONS(39),
    [anon_sym_set_BANG] = ACTIONS(41),
    [anon_sym_the] = ACTIONS(43),
    [anon_sym_register] = ACTIONS(45),
    [anon_sym_definterface] = ACTIONS(47),
    [anon_sym_defmacro] = ACTIONS(49),
    [anon_sym_defndynamic] = ACTIONS(51),
    [anon_sym_defmodule] = ACTIONS(53),
    [anon_sym_deftype] = ACTIONS(55),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(65),
    [sym_float_literal] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_upper_identifier] = ACTIONS(79),
    [sym_identifier] = ACTIONS(81),
  },
  [3] = {
    [sym_line_comment] = STATE(247),
    [sym__s_expr] = STATE(247),
    [sym__anything] = STATE(247),
    [sym__s_forms] = STATE(247),
    [sym__defs] = STATE(247),
    [sym__literals] = STATE(247),
    [sym__short_helper] = STATE(247),
    [sym_use] = STATE(247),
    [sym_doc] = STATE(247),
    [sym_def] = STATE(247),
    [sym_fn] = STATE(247),
    [sym_defn] = STATE(247),
    [sym_let] = STATE(247),
    [sym_do] = STATE(247),
    [sym_if] = STATE(247),
    [sym_while] = STATE(247),
    [sym_ref] = STATE(247),
    [sym_address] = STATE(247),
    [sym_set] = STATE(247),
    [sym_the] = STATE(247),
    [sym_register] = STATE(247),
    [sym_call_expression] = STATE(247),
    [sym_call_name] = STATE(15),
    [sym_definterface] = STATE(247),
    [sym_defmacro] = STATE(247),
    [sym_defndynamic] = STATE(247),
    [sym_defmodule] = STATE(247),
    [sym_deftype] = STATE(247),
    [sym_short_ref] = STATE(247),
    [sym_short_copy] = STATE(247),
    [sym_short_fn_ref] = STATE(124),
    [sym_short_quote] = STATE(247),
    [sym_bool_literal] = STATE(247),
    [sym_str_literal] = STATE(247),
    [sym_char_literal] = STATE(247),
    [sym_pattern_literal] = STATE(247),
    [sym_array_expression] = STATE(247),
    [sym_map_expression] = STATE(247),
    [sym_symbol] = STATE(247),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_use] = ACTIONS(17),
    [anon_sym_doc] = ACTIONS(19),
    [anon_sym_def] = ACTIONS(21),
    [anon_sym_fn] = ACTIONS(23),
    [anon_sym_defn] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_do] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_while] = ACTIONS(35),
    [anon_sym_ref] = ACTIONS(37),
    [anon_sym_address] = ACTIONS(39),
    [anon_sym_set_BANG] = ACTIONS(41),
    [anon_sym_the] = ACTIONS(43),
    [anon_sym_register] = ACTIONS(45),
    [anon_sym_definterface] = ACTIONS(47),
    [anon_sym_defmacro] = ACTIONS(49),
    [anon_sym_defndynamic] = ACTIONS(51),
    [anon_sym_defmodule] = ACTIONS(53),
    [anon_sym_deftype] = ACTIONS(55),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(83),
    [sym_float_literal] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_upper_identifier] = ACTIONS(79),
    [sym_identifier] = ACTIONS(81),
  },
  [4] = {
    [sym_line_comment] = STATE(223),
    [sym__s_expr] = STATE(223),
    [sym__anything] = STATE(223),
    [sym__s_forms] = STATE(223),
    [sym__defs] = STATE(223),
    [sym__literals] = STATE(223),
    [sym__short_helper] = STATE(223),
    [sym_use] = STATE(223),
    [sym_doc] = STATE(223),
    [sym_def] = STATE(223),
    [sym_fn] = STATE(223),
    [sym_defn] = STATE(223),
    [sym_let] = STATE(223),
    [sym_do] = STATE(223),
    [sym_if] = STATE(223),
    [sym_while] = STATE(223),
    [sym_ref] = STATE(223),
    [sym_address] = STATE(223),
    [sym_set] = STATE(223),
    [sym_the] = STATE(223),
    [sym_register] = STATE(223),
    [sym_call_expression] = STATE(223),
    [sym_call_name] = STATE(15),
    [sym_definterface] = STATE(223),
    [sym_defmacro] = STATE(223),
    [sym_defndynamic] = STATE(223),
    [sym_defmodule] = STATE(223),
    [sym_deftype] = STATE(223),
    [sym_short_ref] = STATE(223),
    [sym_short_copy] = STATE(223),
    [sym_short_fn_ref] = STATE(124),
    [sym_short_quote] = STATE(223),
    [sym_bool_literal] = STATE(223),
    [sym_str_literal] = STATE(223),
    [sym_char_literal] = STATE(223),
    [sym_pattern_literal] = STATE(223),
    [sym_array_expression] = STATE(223),
    [sym_map_expression] = STATE(223),
    [sym_symbol] = STATE(223),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_use] = ACTIONS(17),
    [anon_sym_doc] = ACTIONS(19),
    [anon_sym_def] = ACTIONS(21),
    [anon_sym_fn] = ACTIONS(23),
    [anon_sym_defn] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_do] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_while] = ACTIONS(35),
    [anon_sym_ref] = ACTIONS(37),
    [anon_sym_address] = ACTIONS(39),
    [anon_sym_set_BANG] = ACTIONS(41),
    [anon_sym_the] = ACTIONS(43),
    [anon_sym_register] = ACTIONS(45),
    [anon_sym_definterface] = ACTIONS(47),
    [anon_sym_defmacro] = ACTIONS(49),
    [anon_sym_defndynamic] = ACTIONS(51),
    [anon_sym_defmodule] = ACTIONS(53),
    [anon_sym_deftype] = ACTIONS(55),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(85),
    [sym_float_literal] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_upper_identifier] = ACTIONS(79),
    [sym_identifier] = ACTIONS(81),
  },
  [5] = {
    [sym_line_comment] = STATE(241),
    [sym__s_expr] = STATE(241),
    [sym__anything] = STATE(241),
    [sym__s_forms] = STATE(241),
    [sym__defs] = STATE(241),
    [sym__literals] = STATE(241),
    [sym__short_helper] = STATE(241),
    [sym_use] = STATE(241),
    [sym_doc] = STATE(241),
    [sym_def] = STATE(241),
    [sym_fn] = STATE(241),
    [sym_defn] = STATE(241),
    [sym_let] = STATE(241),
    [sym_do] = STATE(241),
    [sym_if] = STATE(241),
    [sym_while] = STATE(241),
    [sym_ref] = STATE(241),
    [sym_address] = STATE(241),
    [sym_set] = STATE(241),
    [sym_the] = STATE(241),
    [sym_register] = STATE(241),
    [sym_call_expression] = STATE(241),
    [sym_call_name] = STATE(15),
    [sym_definterface] = STATE(241),
    [sym_defmacro] = STATE(241),
    [sym_defndynamic] = STATE(241),
    [sym_defmodule] = STATE(241),
    [sym_deftype] = STATE(241),
    [sym_short_ref] = STATE(241),
    [sym_short_copy] = STATE(241),
    [sym_short_fn_ref] = STATE(124),
    [sym_short_quote] = STATE(241),
    [sym_bool_literal] = STATE(241),
    [sym_str_literal] = STATE(241),
    [sym_char_literal] = STATE(241),
    [sym_pattern_literal] = STATE(241),
    [sym_array_expression] = STATE(241),
    [sym_map_expression] = STATE(241),
    [sym_symbol] = STATE(241),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_use] = ACTIONS(17),
    [anon_sym_doc] = ACTIONS(19),
    [anon_sym_def] = ACTIONS(21),
    [anon_sym_fn] = ACTIONS(23),
    [anon_sym_defn] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_do] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_while] = ACTIONS(35),
    [anon_sym_ref] = ACTIONS(37),
    [anon_sym_address] = ACTIONS(39),
    [anon_sym_set_BANG] = ACTIONS(41),
    [anon_sym_the] = ACTIONS(43),
    [anon_sym_register] = ACTIONS(45),
    [anon_sym_definterface] = ACTIONS(47),
    [anon_sym_defmacro] = ACTIONS(49),
    [anon_sym_defndynamic] = ACTIONS(51),
    [anon_sym_defmodule] = ACTIONS(53),
    [anon_sym_deftype] = ACTIONS(55),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(87),
    [sym_float_literal] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_upper_identifier] = ACTIONS(79),
    [sym_identifier] = ACTIONS(81),
  },
  [6] = {
    [sym_line_comment] = STATE(6),
    [sym__s_expr] = STATE(6),
    [sym_other_str] = STATE(6),
    [sym_operators] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_SEMI] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(94),
    [anon_sym_let_DASHdo] = ACTIONS(97),
    [anon_sym_while_DASHdo] = ACTIONS(97),
    [anon_sym_defn_DASHdo] = ACTIONS(97),
    [anon_sym_break] = ACTIONS(97),
    [anon_sym_for] = ACTIONS(100),
    [anon_sym_when] = ACTIONS(97),
    [anon_sym_cond] = ACTIONS(97),
    [anon_sym_unless] = ACTIONS(97),
    [anon_sym_case] = ACTIONS(97),
    [anon_sym_foreach] = ACTIONS(97),
    [anon_sym_defdynamic] = ACTIONS(97),
    [anon_sym_load] = ACTIONS(97),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_SLASH] = ACTIONS(106),
    [anon_sym_STAR] = ACTIONS(103),
    [anon_sym_PERCENT] = ACTIONS(103),
    [anon_sym_LT] = ACTIONS(106),
    [anon_sym_GT] = ACTIONS(106),
    [anon_sym_EQ] = ACTIONS(103),
    [anon_sym_LT_EQ] = ACTIONS(103),
    [anon_sym_GT_EQ] = ACTIONS(103),
    [anon_sym_SLASH_EQ] = ACTIONS(103),
    [anon_sym_and] = ACTIONS(106),
    [anon_sym_or] = ACTIONS(106),
    [anon_sym_not] = ACTIONS(103),
    [anon_sym_and_STAR] = ACTIONS(103),
    [anon_sym_or_STAR] = ACTIONS(103),
  },
  [7] = {
    [sym_line_comment] = STATE(6),
    [sym__s_expr] = STATE(6),
    [sym_other_str] = STATE(6),
    [sym_operators] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(109),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_let_DASHdo] = ACTIONS(9),
    [anon_sym_while_DASHdo] = ACTIONS(9),
    [anon_sym_defn_DASHdo] = ACTIONS(9),
    [anon_sym_break] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_when] = ACTIONS(9),
    [anon_sym_cond] = ACTIONS(9),
    [anon_sym_unless] = ACTIONS(9),
    [anon_sym_case] = ACTIONS(9),
    [anon_sym_foreach] = ACTIONS(9),
    [anon_sym_defdynamic] = ACTIONS(9),
    [anon_sym_load] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(13),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(13),
    [anon_sym_SLASH_EQ] = ACTIONS(13),
    [anon_sym_and] = ACTIONS(15),
    [anon_sym_or] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_and_STAR] = ACTIONS(13),
    [anon_sym_or_STAR] = ACTIONS(13),
  },
  [8] = {
    [sym__s_expr] = STATE(137),
    [sym__expr] = STATE(137),
    [sym__literals] = STATE(137),
    [sym__short_helper] = STATE(137),
    [sym_short_ref] = STATE(137),
    [sym_short_copy] = STATE(137),
    [sym_short_fn_ref] = STATE(137),
    [sym_short_quote] = STATE(137),
    [sym_bool_literal] = STATE(137),
    [sym_str_literal] = STATE(137),
    [sym_char_literal] = STATE(137),
    [sym_pattern_literal] = STATE(137),
    [sym_array_expression] = STATE(137),
    [sym_map_expression] = STATE(137),
    [sym_symbol] = STATE(137),
    [aux_sym_do_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(114),
    [anon_sym_LBRACK] = ACTIONS(116),
    [anon_sym_AMP] = ACTIONS(119),
    [anon_sym_AT] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(125),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [sym_integer_literal] = ACTIONS(131),
    [sym_float_literal] = ACTIONS(131),
    [anon_sym_true] = ACTIONS(134),
    [anon_sym_false] = ACTIONS(134),
    [anon_sym_DQUOTE] = ACTIONS(137),
    [anon_sym_BSLASH] = ACTIONS(140),
    [anon_sym_POUND_DQUOTE] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(146),
    [anon_sym_COLON] = ACTIONS(149),
    [sym_identifier] = ACTIONS(131),
  },
  [9] = {
    [sym__s_expr] = STATE(139),
    [sym__expr] = STATE(139),
    [sym__literals] = STATE(139),
    [sym__short_helper] = STATE(139),
    [sym_short_ref] = STATE(139),
    [sym_short_copy] = STATE(139),
    [sym_short_fn_ref] = STATE(139),
    [sym_short_quote] = STATE(139),
    [sym_bool_literal] = STATE(139),
    [sym_str_literal] = STATE(139),
    [sym_char_literal] = STATE(139),
    [sym_pattern_literal] = STATE(139),
    [sym_array_expression] = STATE(139),
    [sym_map_expression] = STATE(139),
    [sym_symbol] = STATE(139),
    [aux_sym_defmodule_repeat1] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_RPAREN] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(157),
    [anon_sym_AMP] = ACTIONS(160),
    [anon_sym_AT] = ACTIONS(163),
    [anon_sym_TILDE] = ACTIONS(166),
    [anon_sym_SQUOTE] = ACTIONS(169),
    [sym_integer_literal] = ACTIONS(172),
    [sym_float_literal] = ACTIONS(172),
    [anon_sym_true] = ACTIONS(175),
    [anon_sym_false] = ACTIONS(175),
    [anon_sym_DQUOTE] = ACTIONS(178),
    [anon_sym_BSLASH] = ACTIONS(181),
    [anon_sym_POUND_DQUOTE] = ACTIONS(184),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_COLON] = ACTIONS(190),
    [sym_identifier] = ACTIONS(172),
  },
  [10] = {
    [sym__s_expr] = STATE(137),
    [sym__expr] = STATE(137),
    [sym__literals] = STATE(137),
    [sym__short_helper] = STATE(137),
    [sym_short_ref] = STATE(137),
    [sym_short_copy] = STATE(137),
    [sym_short_fn_ref] = STATE(137),
    [sym_short_quote] = STATE(137),
    [sym_bool_literal] = STATE(137),
    [sym_str_literal] = STATE(137),
    [sym_char_literal] = STATE(137),
    [sym_pattern_literal] = STATE(137),
    [sym_array_expression] = STATE(137),
    [sym_map_expression] = STATE(137),
    [sym_symbol] = STATE(137),
    [aux_sym_do_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(197),
    [anon_sym_AT] = ACTIONS(199),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(201),
    [sym_integer_literal] = ACTIONS(203),
    [sym_float_literal] = ACTIONS(203),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_identifier] = ACTIONS(203),
  },
  [11] = {
    [sym__s_expr] = STATE(137),
    [sym__expr] = STATE(137),
    [sym__literals] = STATE(137),
    [sym__short_helper] = STATE(137),
    [sym_short_ref] = STATE(137),
    [sym_short_copy] = STATE(137),
    [sym_short_fn_ref] = STATE(137),
    [sym_short_quote] = STATE(137),
    [sym_bool_literal] = STATE(137),
    [sym_str_literal] = STATE(137),
    [sym_char_literal] = STATE(137),
    [sym_pattern_literal] = STATE(137),
    [sym_array_expression] = STATE(137),
    [sym_map_expression] = STATE(137),
    [sym_symbol] = STATE(137),
    [aux_sym_do_repeat1] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(197),
    [anon_sym_AT] = ACTIONS(199),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(201),
    [sym_integer_literal] = ACTIONS(203),
    [sym_float_literal] = ACTIONS(203),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_identifier] = ACTIONS(203),
  },
  [12] = {
    [sym__s_expr] = STATE(16),
    [sym__expr] = STATE(16),
    [sym__literals] = STATE(16),
    [sym__short_helper] = STATE(16),
    [sym_short_ref] = STATE(16),
    [sym_short_copy] = STATE(16),
    [sym_short_fn_ref] = STATE(16),
    [sym_short_quote] = STATE(16),
    [sym_bool_literal] = STATE(16),
    [sym_str_literal] = STATE(16),
    [sym_char_literal] = STATE(16),
    [sym_pattern_literal] = STATE(16),
    [sym_array_expression] = STATE(16),
    [sym_map_expression] = STATE(16),
    [sym_symbol] = STATE(16),
    [aux_sym_call_expression_repeat1] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(197),
    [anon_sym_AT] = ACTIONS(199),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(201),
    [sym_integer_literal] = ACTIONS(209),
    [sym_float_literal] = ACTIONS(209),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_identifier] = ACTIONS(209),
  },
  [13] = {
    [sym__s_expr] = STATE(139),
    [sym__expr] = STATE(139),
    [sym__literals] = STATE(139),
    [sym__short_helper] = STATE(139),
    [sym_short_ref] = STATE(139),
    [sym_short_copy] = STATE(139),
    [sym_short_fn_ref] = STATE(139),
    [sym_short_quote] = STATE(139),
    [sym_bool_literal] = STATE(139),
    [sym_str_literal] = STATE(139),
    [sym_char_literal] = STATE(139),
    [sym_pattern_literal] = STATE(139),
    [sym_array_expression] = STATE(139),
    [sym_map_expression] = STATE(139),
    [sym_symbol] = STATE(139),
    [aux_sym_defmodule_repeat1] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(211),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(197),
    [anon_sym_AT] = ACTIONS(199),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(201),
    [sym_integer_literal] = ACTIONS(213),
    [sym_float_literal] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_identifier] = ACTIONS(213),
  },
  [14] = {
    [sym__s_expr] = STATE(139),
    [sym__expr] = STATE(139),
    [sym__literals] = STATE(139),
    [sym__short_helper] = STATE(139),
    [sym_short_ref] = STATE(139),
    [sym_short_copy] = STATE(139),
    [sym_short_fn_ref] = STATE(139),
    [sym_short_quote] = STATE(139),
    [sym_bool_literal] = STATE(139),
    [sym_str_literal] = STATE(139),
    [sym_char_literal] = STATE(139),
    [sym_pattern_literal] = STATE(139),
    [sym_array_expression] = STATE(139),
    [sym_map_expression] = STATE(139),
    [sym_symbol] = STATE(139),
    [aux_sym_defmodule_repeat1] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(197),
    [anon_sym_AT] = ACTIONS(199),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(201),
    [sym_integer_literal] = ACTIONS(213),
    [sym_float_literal] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_identifier] = ACTIONS(213),
  },
  [15] = {
    [sym__s_expr] = STATE(12),
    [sym__expr] = STATE(12),
    [sym__literals] = STATE(12),
    [sym__short_helper] = STATE(12),
    [sym_short_ref] = STATE(12),
    [sym_short_copy] = STATE(12),
    [sym_short_fn_ref] = STATE(12),
    [sym_short_quote] = STATE(12),
    [sym_bool_literal] = STATE(12),
    [sym_str_literal] = STATE(12),
    [sym_char_literal] = STATE(12),
    [sym_pattern_literal] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym_map_expression] = STATE(12),
    [sym_symbol] = STATE(12),
    [aux_sym_call_expression_repeat1] = STATE(12),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(197),
    [anon_sym_AT] = ACTIONS(199),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(201),
    [sym_integer_literal] = ACTIONS(219),
    [sym_float_literal] = ACTIONS(219),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_identifier] = ACTIONS(219),
  },
  [16] = {
    [sym__s_expr] = STATE(16),
    [sym__expr] = STATE(16),
    [sym__literals] = STATE(16),
    [sym__short_helper] = STATE(16),
    [sym_short_ref] = STATE(16),
    [sym_short_copy] = STATE(16),
    [sym_short_fn_ref] = STATE(16),
    [sym_short_quote] = STATE(16),
    [sym_bool_literal] = STATE(16),
    [sym_str_literal] = STATE(16),
    [sym_char_literal] = STATE(16),
    [sym_pattern_literal] = STATE(16),
    [sym_array_expression] = STATE(16),
    [sym_map_expression] = STATE(16),
    [sym_symbol] = STATE(16),
    [aux_sym_call_expression_repeat1] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_RPAREN] = ACTIONS(224),
    [anon_sym_LBRACK] = ACTIONS(226),
    [anon_sym_AMP] = ACTIONS(229),
    [anon_sym_AT] = ACTIONS(232),
    [anon_sym_TILDE] = ACTIONS(235),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [sym_integer_literal] = ACTIONS(241),
    [sym_float_literal] = ACTIONS(241),
    [anon_sym_true] = ACTIONS(244),
    [anon_sym_false] = ACTIONS(244),
    [anon_sym_DQUOTE] = ACTIONS(247),
    [anon_sym_BSLASH] = ACTIONS(250),
    [anon_sym_POUND_DQUOTE] = ACTIONS(253),
    [anon_sym_LBRACE] = ACTIONS(256),
    [anon_sym_COLON] = ACTIONS(259),
    [sym_identifier] = ACTIONS(241),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(262),
    [anon_sym_SEMI] = ACTIONS(262),
    [anon_sym_LPAREN] = ACTIONS(262),
    [anon_sym_RPAREN] = ACTIONS(262),
    [anon_sym_let_DASHdo] = ACTIONS(262),
    [anon_sym_while_DASHdo] = ACTIONS(262),
    [anon_sym_defn_DASHdo] = ACTIONS(262),
    [anon_sym_break] = ACTIONS(262),
    [anon_sym_for] = ACTIONS(264),
    [anon_sym_when] = ACTIONS(262),
    [anon_sym_cond] = ACTIONS(262),
    [anon_sym_unless] = ACTIONS(262),
    [anon_sym_case] = ACTIONS(262),
    [anon_sym_foreach] = ACTIONS(262),
    [anon_sym_defdynamic] = ACTIONS(262),
    [anon_sym_load] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(262),
    [anon_sym_DASH] = ACTIONS(262),
    [anon_sym_SLASH] = ACTIONS(264),
    [anon_sym_STAR] = ACTIONS(262),
    [anon_sym_PERCENT] = ACTIONS(262),
    [anon_sym_LT] = ACTIONS(264),
    [anon_sym_GT] = ACTIONS(264),
    [anon_sym_EQ] = ACTIONS(262),
    [anon_sym_LT_EQ] = ACTIONS(262),
    [anon_sym_GT_EQ] = ACTIONS(262),
    [anon_sym_SLASH_EQ] = ACTIONS(262),
    [anon_sym_and] = ACTIONS(264),
    [anon_sym_or] = ACTIONS(264),
    [anon_sym_not] = ACTIONS(262),
    [anon_sym_and_STAR] = ACTIONS(262),
    [anon_sym_or_STAR] = ACTIONS(262),
  },
  [18] = {
    [sym__s_expr] = STATE(232),
    [sym__expr] = STATE(232),
    [sym__literals] = STATE(232),
    [sym__short_helper] = STATE(232),
    [sym_short_ref] = STATE(232),
    [sym_short_copy] = STATE(232),
    [sym_short_fn_ref] = STATE(232),
    [sym_short_quote] = STATE(232),
    [sym_bool_literal] = STATE(232),
    [sym_str_literal] = STATE(232),
    [sym_char_literal] = STATE(232),
    [sym_pattern_literal] = STATE(232),
    [sym_array_expression] = STATE(232),
    [sym_map_expression] = STATE(232),
    [sym_symbol] = STATE(232),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(266),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(268),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(270),
    [sym_float_literal] = ACTIONS(270),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_identifier] = ACTIONS(270),
  },
  [19] = {
    [sym__s_expr] = STATE(236),
    [sym__expr] = STATE(236),
    [sym__literals] = STATE(236),
    [sym__short_helper] = STATE(236),
    [sym_short_ref] = STATE(236),
    [sym_short_copy] = STATE(236),
    [sym_short_fn_ref] = STATE(236),
    [sym_short_quote] = STATE(236),
    [sym_bool_literal] = STATE(236),
    [sym_str_literal] = STATE(236),
    [sym_char_literal] = STATE(236),
    [sym_pattern_literal] = STATE(236),
    [sym_array_expression] = STATE(236),
    [sym_map_expression] = STATE(236),
    [sym_symbol] = STATE(236),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(272),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(268),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(274),
    [sym_float_literal] = ACTIONS(274),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_identifier] = ACTIONS(274),
  },
  [20] = {
    [sym__s_expr] = STATE(238),
    [sym__expr] = STATE(238),
    [sym__literals] = STATE(238),
    [sym__short_helper] = STATE(238),
    [sym_short_ref] = STATE(238),
    [sym_short_copy] = STATE(238),
    [sym_short_fn_ref] = STATE(238),
    [sym_short_quote] = STATE(238),
    [sym_bool_literal] = STATE(238),
    [sym_str_literal] = STATE(238),
    [sym_char_literal] = STATE(238),
    [sym_pattern_literal] = STATE(238),
    [sym_array_expression] = STATE(238),
    [sym_map_expression] = STATE(238),
    [sym_symbol] = STATE(238),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(276),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(268),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(278),
    [sym_float_literal] = ACTIONS(278),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_identifier] = ACTIONS(278),
  },
  [21] = {
    [sym__short_helper] = STATE(23),
    [sym_type] = STATE(23),
    [sym_complex_type] = STATE(62),
    [sym_short_ref] = STATE(23),
    [sym_short_copy] = STATE(23),
    [sym_short_fn_ref] = STATE(23),
    [sym_short_quote] = STATE(23),
    [aux_sym_typed_parameters_repeat1] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(280),
    [anon_sym_Bool] = ACTIONS(282),
    [anon_sym_Char] = ACTIONS(282),
    [anon_sym_Int] = ACTIONS(282),
    [anon_sym_Long] = ACTIONS(282),
    [anon_sym_Float] = ACTIONS(282),
    [anon_sym_Double] = ACTIONS(282),
    [anon_sym_Vector2] = ACTIONS(282),
    [anon_sym_Vector3] = ACTIONS(282),
    [anon_sym_VectorN] = ACTIONS(282),
    [anon_sym_String] = ACTIONS(282),
    [anon_sym_Pattern] = ACTIONS(282),
    [anon_sym_Array] = ACTIONS(282),
    [anon_sym_Map] = ACTIONS(282),
    [anon_sym_Maybe] = ACTIONS(282),
    [anon_sym_Result] = ACTIONS(282),
    [anon_sym_Id] = ACTIONS(282),
    [anon_sym_Ptr] = ACTIONS(282),
    [anon_sym_RBRACK2] = ACTIONS(284),
    [anon_sym_AMP] = ACTIONS(286),
    [anon_sym_AT] = ACTIONS(288),
    [anon_sym_TILDE] = ACTIONS(290),
    [anon_sym_SQUOTE] = ACTIONS(292),
    [sym_identifier] = ACTIONS(294),
  },
  [22] = {
    [sym__s_expr] = STATE(248),
    [sym__expr] = STATE(248),
    [sym__literals] = STATE(248),
    [sym__short_helper] = STATE(248),
    [sym_short_ref] = STATE(248),
    [sym_short_copy] = STATE(248),
    [sym_short_fn_ref] = STATE(248),
    [sym_short_quote] = STATE(248),
    [sym_bool_literal] = STATE(248),
    [sym_str_literal] = STATE(248),
    [sym_char_literal] = STATE(248),
    [sym_pattern_literal] = STATE(248),
    [sym_array_expression] = STATE(248),
    [sym_map_expression] = STATE(248),
    [sym_symbol] = STATE(248),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(296),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(268),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(298),
    [sym_float_literal] = ACTIONS(298),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_identifier] = ACTIONS(298),
  },
  [23] = {
    [sym__short_helper] = STATE(25),
    [sym_type] = STATE(25),
    [sym_complex_type] = STATE(62),
    [sym_short_ref] = STATE(25),
    [sym_short_copy] = STATE(25),
    [sym_short_fn_ref] = STATE(25),
    [sym_short_quote] = STATE(25),
    [aux_sym_typed_parameters_repeat1] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(280),
    [anon_sym_Bool] = ACTIONS(282),
    [anon_sym_Char] = ACTIONS(282),
    [anon_sym_Int] = ACTIONS(282),
    [anon_sym_Long] = ACTIONS(282),
    [anon_sym_Float] = ACTIONS(282),
    [anon_sym_Double] = ACTIONS(282),
    [anon_sym_Vector2] = ACTIONS(282),
    [anon_sym_Vector3] = ACTIONS(282),
    [anon_sym_VectorN] = ACTIONS(282),
    [anon_sym_String] = ACTIONS(282),
    [anon_sym_Pattern] = ACTIONS(282),
    [anon_sym_Array] = ACTIONS(282),
    [anon_sym_Map] = ACTIONS(282),
    [anon_sym_Maybe] = ACTIONS(282),
    [anon_sym_Result] = ACTIONS(282),
    [anon_sym_Id] = ACTIONS(282),
    [anon_sym_Ptr] = ACTIONS(282),
    [anon_sym_RBRACK2] = ACTIONS(300),
    [anon_sym_AMP] = ACTIONS(286),
    [anon_sym_AT] = ACTIONS(288),
    [anon_sym_TILDE] = ACTIONS(290),
    [anon_sym_SQUOTE] = ACTIONS(292),
    [sym_identifier] = ACTIONS(294),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(302),
    [anon_sym_SEMI] = ACTIONS(302),
    [anon_sym_LPAREN] = ACTIONS(302),
    [anon_sym_RPAREN] = ACTIONS(302),
    [anon_sym_let_DASHdo] = ACTIONS(302),
    [anon_sym_while_DASHdo] = ACTIONS(302),
    [anon_sym_defn_DASHdo] = ACTIONS(302),
    [anon_sym_break] = ACTIONS(302),
    [anon_sym_for] = ACTIONS(304),
    [anon_sym_when] = ACTIONS(302),
    [anon_sym_cond] = ACTIONS(302),
    [anon_sym_unless] = ACTIONS(302),
    [anon_sym_case] = ACTIONS(302),
    [anon_sym_foreach] = ACTIONS(302),
    [anon_sym_defdynamic] = ACTIONS(302),
    [anon_sym_load] = ACTIONS(302),
    [anon_sym_PLUS] = ACTIONS(302),
    [anon_sym_DASH] = ACTIONS(302),
    [anon_sym_SLASH] = ACTIONS(304),
    [anon_sym_STAR] = ACTIONS(302),
    [anon_sym_PERCENT] = ACTIONS(302),
    [anon_sym_LT] = ACTIONS(304),
    [anon_sym_GT] = ACTIONS(304),
    [anon_sym_EQ] = ACTIONS(302),
    [anon_sym_LT_EQ] = ACTIONS(302),
    [anon_sym_GT_EQ] = ACTIONS(302),
    [anon_sym_SLASH_EQ] = ACTIONS(302),
    [anon_sym_and] = ACTIONS(304),
    [anon_sym_or] = ACTIONS(304),
    [anon_sym_not] = ACTIONS(302),
    [anon_sym_and_STAR] = ACTIONS(302),
    [anon_sym_or_STAR] = ACTIONS(302),
  },
  [25] = {
    [sym__short_helper] = STATE(25),
    [sym_type] = STATE(25),
    [sym_complex_type] = STATE(62),
    [sym_short_ref] = STATE(25),
    [sym_short_copy] = STATE(25),
    [sym_short_fn_ref] = STATE(25),
    [sym_short_quote] = STATE(25),
    [aux_sym_typed_parameters_repeat1] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(306),
    [anon_sym_Bool] = ACTIONS(309),
    [anon_sym_Char] = ACTIONS(309),
    [anon_sym_Int] = ACTIONS(309),
    [anon_sym_Long] = ACTIONS(309),
    [anon_sym_Float] = ACTIONS(309),
    [anon_sym_Double] = ACTIONS(309),
    [anon_sym_Vector2] = ACTIONS(309),
    [anon_sym_Vector3] = ACTIONS(309),
    [anon_sym_VectorN] = ACTIONS(309),
    [anon_sym_String] = ACTIONS(309),
    [anon_sym_Pattern] = ACTIONS(309),
    [anon_sym_Array] = ACTIONS(309),
    [anon_sym_Map] = ACTIONS(309),
    [anon_sym_Maybe] = ACTIONS(309),
    [anon_sym_Result] = ACTIONS(309),
    [anon_sym_Id] = ACTIONS(309),
    [anon_sym_Ptr] = ACTIONS(309),
    [anon_sym_RBRACK2] = ACTIONS(312),
    [anon_sym_AMP] = ACTIONS(314),
    [anon_sym_AT] = ACTIONS(317),
    [anon_sym_TILDE] = ACTIONS(320),
    [anon_sym_SQUOTE] = ACTIONS(323),
    [sym_identifier] = ACTIONS(326),
  },
  [26] = {
    [sym__s_expr] = STATE(203),
    [sym__expr] = STATE(203),
    [sym__literals] = STATE(203),
    [sym__short_helper] = STATE(203),
    [sym_short_ref] = STATE(203),
    [sym_short_copy] = STATE(203),
    [sym_short_fn_ref] = STATE(203),
    [sym_short_quote] = STATE(203),
    [sym_bool_literal] = STATE(203),
    [sym_str_literal] = STATE(203),
    [sym_char_literal] = STATE(203),
    [sym_pattern_literal] = STATE(203),
    [sym_array_expression] = STATE(203),
    [sym_map_expression] = STATE(203),
    [sym_symbol] = STATE(203),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(329),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(268),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(331),
    [sym_float_literal] = ACTIONS(331),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_identifier] = ACTIONS(331),
  },
  [27] = {
    [sym__s_expr] = STATE(217),
    [sym__expr] = STATE(217),
    [sym__literals] = STATE(217),
    [sym__short_helper] = STATE(217),
    [sym_short_ref] = STATE(217),
    [sym_short_copy] = STATE(217),
    [sym_short_fn_ref] = STATE(217),
    [sym_short_quote] = STATE(217),
    [sym_bool_literal] = STATE(217),
    [sym_str_literal] = STATE(217),
    [sym_char_literal] = STATE(217),
    [sym_pattern_literal] = STATE(217),
    [sym_array_expression] = STATE(217),
    [sym_map_expression] = STATE(217),
    [sym_symbol] = STATE(217),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(333),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(268),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(335),
    [sym_float_literal] = ACTIONS(335),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_identifier] = ACTIONS(335),
  },
  [28] = {
    [sym__s_expr] = STATE(226),
    [sym__expr] = STATE(226),
    [sym__literals] = STATE(226),
    [sym__short_helper] = STATE(226),
    [sym_short_ref] = STATE(226),
    [sym_short_copy] = STATE(226),
    [sym_short_fn_ref] = STATE(226),
    [sym_short_quote] = STATE(226),
    [sym_bool_literal] = STATE(226),
    [sym_str_literal] = STATE(226),
    [sym_char_literal] = STATE(226),
    [sym_pattern_literal] = STATE(226),
    [sym_array_expression] = STATE(226),
    [sym_map_expression] = STATE(226),
    [sym_symbol] = STATE(226),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(337),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(268),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(339),
    [sym_float_literal] = ACTIONS(339),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_identifier] = ACTIONS(339),
  },
  [29] = {
    [sym__s_expr] = STATE(126),
    [sym__expr] = STATE(126),
    [sym__literals] = STATE(126),
    [sym__short_helper] = STATE(126),
    [sym_short_ref] = STATE(126),
    [sym_short_copy] = STATE(126),
    [sym_short_fn_ref] = STATE(126),
    [sym_short_quote] = STATE(126),
    [sym_bool_literal] = STATE(126),
    [sym_str_literal] = STATE(126),
    [sym_char_literal] = STATE(126),
    [sym_pattern_literal] = STATE(126),
    [sym_array_expression] = STATE(126),
    [sym_map_expression] = STATE(126),
    [sym_symbol] = STATE(126),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(268),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(341),
    [sym_float_literal] = ACTIONS(341),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_identifier] = ACTIONS(341),
  },
  [30] = {
    [sym__s_expr] = STATE(214),
    [sym__expr] = STATE(214),
    [sym__literals] = STATE(214),
    [sym__short_helper] = STATE(214),
    [sym_short_ref] = STATE(214),
    [sym_short_copy] = STATE(214),
    [sym_short_fn_ref] = STATE(214),
    [sym_short_quote] = STATE(214),
    [sym_bool_literal] = STATE(214),
    [sym_str_literal] = STATE(214),
    [sym_char_literal] = STATE(214),
    [sym_pattern_literal] = STATE(214),
    [sym_array_expression] = STATE(214),
    [sym_map_expression] = STATE(214),
    [sym_symbol] = STATE(214),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(268),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(343),
    [sym_float_literal] = ACTIONS(343),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_identifier] = ACTIONS(343),
  },
  [31] = {
    [sym__s_expr] = STATE(74),
    [sym__expr] = STATE(74),
    [sym__literals] = STATE(74),
    [sym__short_helper] = STATE(74),
    [sym_short_ref] = STATE(74),
    [sym_short_copy] = STATE(74),
    [sym_short_fn_ref] = STATE(74),
    [sym_short_quote] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [sym_str_literal] = STATE(74),
    [sym_char_literal] = STATE(74),
    [sym_pattern_literal] = STATE(74),
    [sym_array_expression] = STATE(74),
    [sym_map_expression] = STATE(74),
    [sym_symbol] = STATE(74),
    [anon_sym_LPAREN] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(347),
    [anon_sym_AMP] = ACTIONS(286),
    [anon_sym_AT] = ACTIONS(288),
    [anon_sym_TILDE] = ACTIONS(290),
    [anon_sym_SQUOTE] = ACTIONS(292),
    [sym_integer_literal] = ACTIONS(349),
    [sym_float_literal] = ACTIONS(349),
    [anon_sym_true] = ACTIONS(351),
    [anon_sym_false] = ACTIONS(351),
    [anon_sym_DQUOTE] = ACTIONS(353),
    [anon_sym_BSLASH] = ACTIONS(355),
    [anon_sym_POUND_DQUOTE] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_COLON] = ACTIONS(361),
    [sym_identifier] = ACTIONS(349),
  },
  [32] = {
    [sym__s_expr] = STATE(75),
    [sym__expr] = STATE(75),
    [sym__literals] = STATE(75),
    [sym__short_helper] = STATE(75),
    [sym_short_ref] = STATE(75),
    [sym_short_copy] = STATE(75),
    [sym_short_fn_ref] = STATE(75),
    [sym_short_quote] = STATE(75),
    [sym_bool_literal] = STATE(75),
    [sym_str_literal] = STATE(75),
    [sym_char_literal] = STATE(75),
    [sym_pattern_literal] = STATE(75),
    [sym_array_expression] = STATE(75),
    [sym_map_expression] = STATE(75),
    [sym_symbol] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(347),
    [anon_sym_AMP] = ACTIONS(286),
    [anon_sym_AT] = ACTIONS(288),
    [anon_sym_TILDE] = ACTIONS(290),
    [anon_sym_SQUOTE] = ACTIONS(292),
    [sym_integer_literal] = ACTIONS(363),
    [sym_float_literal] = ACTIONS(363),
    [anon_sym_true] = ACTIONS(351),
    [anon_sym_false] = ACTIONS(351),
    [anon_sym_DQUOTE] = ACTIONS(353),
    [anon_sym_BSLASH] = ACTIONS(355),
    [anon_sym_POUND_DQUOTE] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_COLON] = ACTIONS(361),
    [sym_identifier] = ACTIONS(363),
  },
  [33] = {
    [sym__s_expr] = STATE(76),
    [sym__expr] = STATE(76),
    [sym__literals] = STATE(76),
    [sym__short_helper] = STATE(76),
    [sym_short_ref] = STATE(76),
    [sym_short_copy] = STATE(76),
    [sym_short_fn_ref] = STATE(76),
    [sym_short_quote] = STATE(76),
    [sym_bool_literal] = STATE(76),
    [sym_str_literal] = STATE(76),
    [sym_char_literal] = STATE(76),
    [sym_pattern_literal] = STATE(76),
    [sym_array_expression] = STATE(76),
    [sym_map_expression] = STATE(76),
    [sym_symbol] = STATE(76),
    [anon_sym_LPAREN] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(347),
    [anon_sym_AMP] = ACTIONS(286),
    [anon_sym_AT] = ACTIONS(288),
    [anon_sym_TILDE] = ACTIONS(290),
    [anon_sym_SQUOTE] = ACTIONS(292),
    [sym_integer_literal] = ACTIONS(365),
    [sym_float_literal] = ACTIONS(365),
    [anon_sym_true] = ACTIONS(351),
    [anon_sym_false] = ACTIONS(351),
    [anon_sym_DQUOTE] = ACTIONS(353),
    [anon_sym_BSLASH] = ACTIONS(355),
    [anon_sym_POUND_DQUOTE] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_COLON] = ACTIONS(361),
    [sym_identifier] = ACTIONS(365),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(367),
    [anon_sym_SEMI] = ACTIONS(367),
    [anon_sym_LPAREN] = ACTIONS(367),
    [anon_sym_let_DASHdo] = ACTIONS(367),
    [anon_sym_while_DASHdo] = ACTIONS(367),
    [anon_sym_defn_DASHdo] = ACTIONS(367),
    [anon_sym_break] = ACTIONS(367),
    [anon_sym_for] = ACTIONS(369),
    [anon_sym_when] = ACTIONS(367),
    [anon_sym_cond] = ACTIONS(367),
    [anon_sym_unless] = ACTIONS(367),
    [anon_sym_case] = ACTIONS(367),
    [anon_sym_foreach] = ACTIONS(367),
    [anon_sym_defdynamic] = ACTIONS(367),
    [anon_sym_load] = ACTIONS(367),
    [anon_sym_PLUS] = ACTIONS(367),
    [anon_sym_DASH] = ACTIONS(367),
    [anon_sym_SLASH] = ACTIONS(369),
    [anon_sym_STAR] = ACTIONS(367),
    [anon_sym_PERCENT] = ACTIONS(367),
    [anon_sym_LT] = ACTIONS(369),
    [anon_sym_GT] = ACTIONS(369),
    [anon_sym_EQ] = ACTIONS(367),
    [anon_sym_LT_EQ] = ACTIONS(367),
    [anon_sym_GT_EQ] = ACTIONS(367),
    [anon_sym_SLASH_EQ] = ACTIONS(367),
    [anon_sym_and] = ACTIONS(369),
    [anon_sym_or] = ACTIONS(369),
    [anon_sym_not] = ACTIONS(367),
    [anon_sym_and_STAR] = ACTIONS(367),
    [anon_sym_or_STAR] = ACTIONS(367),
  },
  [35] = {
    [sym__s_expr] = STATE(125),
    [sym__expr] = STATE(125),
    [sym__literals] = STATE(125),
    [sym__short_helper] = STATE(125),
    [sym_short_ref] = STATE(125),
    [sym_short_copy] = STATE(125),
    [sym_short_fn_ref] = STATE(125),
    [sym_short_quote] = STATE(125),
    [sym_bool_literal] = STATE(125),
    [sym_str_literal] = STATE(125),
    [sym_char_literal] = STATE(125),
    [sym_pattern_literal] = STATE(125),
    [sym_array_expression] = STATE(125),
    [sym_map_expression] = STATE(125),
    [sym_symbol] = STATE(125),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(268),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(371),
    [sym_float_literal] = ACTIONS(371),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_identifier] = ACTIONS(371),
  },
  [36] = {
    [sym__s_expr] = STATE(130),
    [sym__expr] = STATE(130),
    [sym__literals] = STATE(130),
    [sym__short_helper] = STATE(130),
    [sym_short_ref] = STATE(130),
    [sym_short_copy] = STATE(130),
    [sym_short_fn_ref] = STATE(130),
    [sym_short_quote] = STATE(130),
    [sym_bool_literal] = STATE(130),
    [sym_str_literal] = STATE(130),
    [sym_char_literal] = STATE(130),
    [sym_pattern_literal] = STATE(130),
    [sym_array_expression] = STATE(130),
    [sym_map_expression] = STATE(130),
    [sym_symbol] = STATE(130),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(197),
    [anon_sym_AT] = ACTIONS(199),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(201),
    [sym_integer_literal] = ACTIONS(373),
    [sym_float_literal] = ACTIONS(373),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_identifier] = ACTIONS(373),
  },
  [37] = {
    [sym__s_expr] = STATE(128),
    [sym__expr] = STATE(128),
    [sym__literals] = STATE(128),
    [sym__short_helper] = STATE(128),
    [sym_short_ref] = STATE(128),
    [sym_short_copy] = STATE(128),
    [sym_short_fn_ref] = STATE(128),
    [sym_short_quote] = STATE(128),
    [sym_bool_literal] = STATE(128),
    [sym_str_literal] = STATE(128),
    [sym_char_literal] = STATE(128),
    [sym_pattern_literal] = STATE(128),
    [sym_array_expression] = STATE(128),
    [sym_map_expression] = STATE(128),
    [sym_symbol] = STATE(128),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(197),
    [anon_sym_AT] = ACTIONS(199),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(201),
    [sym_integer_literal] = ACTIONS(375),
    [sym_float_literal] = ACTIONS(375),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_identifier] = ACTIONS(375),
  },
  [38] = {
    [sym__s_expr] = STATE(130),
    [sym__expr] = STATE(130),
    [sym__literals] = STATE(130),
    [sym__short_helper] = STATE(130),
    [sym_short_ref] = STATE(130),
    [sym_short_copy] = STATE(130),
    [sym_short_fn_ref] = STATE(130),
    [sym_short_quote] = STATE(130),
    [sym_bool_literal] = STATE(130),
    [sym_str_literal] = STATE(130),
    [sym_char_literal] = STATE(130),
    [sym_pattern_literal] = STATE(130),
    [sym_array_expression] = STATE(130),
    [sym_map_expression] = STATE(130),
    [sym_symbol] = STATE(130),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(268),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(373),
    [sym_float_literal] = ACTIONS(373),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_identifier] = ACTIONS(373),
  },
  [39] = {
    [sym__s_expr] = STATE(128),
    [sym__expr] = STATE(128),
    [sym__literals] = STATE(128),
    [sym__short_helper] = STATE(128),
    [sym_short_ref] = STATE(128),
    [sym_short_copy] = STATE(128),
    [sym_short_fn_ref] = STATE(128),
    [sym_short_quote] = STATE(128),
    [sym_bool_literal] = STATE(128),
    [sym_str_literal] = STATE(128),
    [sym_char_literal] = STATE(128),
    [sym_pattern_literal] = STATE(128),
    [sym_array_expression] = STATE(128),
    [sym_map_expression] = STATE(128),
    [sym_symbol] = STATE(128),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(268),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(375),
    [sym_float_literal] = ACTIONS(375),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_identifier] = ACTIONS(375),
  },
  [40] = {
    [sym__s_expr] = STATE(126),
    [sym__expr] = STATE(126),
    [sym__literals] = STATE(126),
    [sym__short_helper] = STATE(126),
    [sym_short_ref] = STATE(126),
    [sym_short_copy] = STATE(126),
    [sym_short_fn_ref] = STATE(126),
    [sym_short_quote] = STATE(126),
    [sym_bool_literal] = STATE(126),
    [sym_str_literal] = STATE(126),
    [sym_char_literal] = STATE(126),
    [sym_pattern_literal] = STATE(126),
    [sym_array_expression] = STATE(126),
    [sym_map_expression] = STATE(126),
    [sym_symbol] = STATE(126),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(197),
    [anon_sym_AT] = ACTIONS(199),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(201),
    [sym_integer_literal] = ACTIONS(341),
    [sym_float_literal] = ACTIONS(341),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_identifier] = ACTIONS(341),
  },
  [41] = {
    [sym__s_expr] = STATE(125),
    [sym__expr] = STATE(125),
    [sym__literals] = STATE(125),
    [sym__short_helper] = STATE(125),
    [sym_short_ref] = STATE(125),
    [sym_short_copy] = STATE(125),
    [sym_short_fn_ref] = STATE(125),
    [sym_short_quote] = STATE(125),
    [sym_bool_literal] = STATE(125),
    [sym_str_literal] = STATE(125),
    [sym_char_literal] = STATE(125),
    [sym_pattern_literal] = STATE(125),
    [sym_array_expression] = STATE(125),
    [sym_map_expression] = STATE(125),
    [sym_symbol] = STATE(125),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(197),
    [anon_sym_AT] = ACTIONS(199),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(201),
    [sym_integer_literal] = ACTIONS(371),
    [sym_float_literal] = ACTIONS(371),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_identifier] = ACTIONS(371),
  },
  [42] = {
    [sym__s_expr] = STATE(244),
    [sym__expr] = STATE(244),
    [sym__literals] = STATE(244),
    [sym__short_helper] = STATE(244),
    [sym_short_ref] = STATE(244),
    [sym_short_copy] = STATE(244),
    [sym_short_fn_ref] = STATE(244),
    [sym_short_quote] = STATE(244),
    [sym_bool_literal] = STATE(244),
    [sym_str_literal] = STATE(244),
    [sym_char_literal] = STATE(244),
    [sym_pattern_literal] = STATE(244),
    [sym_array_expression] = STATE(244),
    [sym_map_expression] = STATE(244),
    [sym_symbol] = STATE(244),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(268),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(377),
    [sym_float_literal] = ACTIONS(377),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_identifier] = ACTIONS(377),
  },
  [43] = {
    [sym__s_expr] = STATE(55),
    [sym__expr] = STATE(55),
    [sym__literals] = STATE(55),
    [sym__short_helper] = STATE(55),
    [sym_short_ref] = STATE(55),
    [sym_short_copy] = STATE(55),
    [sym_short_fn_ref] = STATE(55),
    [sym_short_quote] = STATE(55),
    [sym_bool_literal] = STATE(55),
    [sym_str_literal] = STATE(55),
    [sym_char_literal] = STATE(55),
    [sym_pattern_literal] = STATE(55),
    [sym_array_expression] = STATE(55),
    [sym_map_expression] = STATE(55),
    [sym_symbol] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(197),
    [anon_sym_AT] = ACTIONS(199),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(201),
    [sym_integer_literal] = ACTIONS(379),
    [sym_float_literal] = ACTIONS(379),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_identifier] = ACTIONS(379),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(381),
    [anon_sym_SEMI] = ACTIONS(381),
    [anon_sym_LPAREN] = ACTIONS(381),
    [anon_sym_let_DASHdo] = ACTIONS(381),
    [anon_sym_while_DASHdo] = ACTIONS(381),
    [anon_sym_defn_DASHdo] = ACTIONS(381),
    [anon_sym_break] = ACTIONS(381),
    [anon_sym_for] = ACTIONS(383),
    [anon_sym_when] = ACTIONS(381),
    [anon_sym_cond] = ACTIONS(381),
    [anon_sym_unless] = ACTIONS(381),
    [anon_sym_case] = ACTIONS(381),
    [anon_sym_foreach] = ACTIONS(381),
    [anon_sym_defdynamic] = ACTIONS(381),
    [anon_sym_load] = ACTIONS(381),
    [anon_sym_PLUS] = ACTIONS(381),
    [anon_sym_DASH] = ACTIONS(381),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_STAR] = ACTIONS(381),
    [anon_sym_PERCENT] = ACTIONS(381),
    [anon_sym_LT] = ACTIONS(383),
    [anon_sym_GT] = ACTIONS(383),
    [anon_sym_EQ] = ACTIONS(381),
    [anon_sym_LT_EQ] = ACTIONS(381),
    [anon_sym_GT_EQ] = ACTIONS(381),
    [anon_sym_SLASH_EQ] = ACTIONS(381),
    [anon_sym_and] = ACTIONS(383),
    [anon_sym_or] = ACTIONS(383),
    [anon_sym_not] = ACTIONS(381),
    [anon_sym_and_STAR] = ACTIONS(381),
    [anon_sym_or_STAR] = ACTIONS(381),
  },
  [45] = {
    [sym__s_expr] = STATE(187),
    [sym__expr] = STATE(187),
    [sym__literals] = STATE(187),
    [sym__short_helper] = STATE(187),
    [sym_short_ref] = STATE(187),
    [sym_short_copy] = STATE(187),
    [sym_short_fn_ref] = STATE(187),
    [sym_short_quote] = STATE(187),
    [sym_bool_literal] = STATE(187),
    [sym_str_literal] = STATE(187),
    [sym_char_literal] = STATE(187),
    [sym_pattern_literal] = STATE(187),
    [sym_array_expression] = STATE(187),
    [sym_map_expression] = STATE(187),
    [sym_symbol] = STATE(187),
    [anon_sym_LPAREN] = ACTIONS(385),
    [anon_sym_LBRACK] = ACTIONS(387),
    [anon_sym_AMP] = ACTIONS(389),
    [anon_sym_AT] = ACTIONS(391),
    [anon_sym_TILDE] = ACTIONS(393),
    [anon_sym_SQUOTE] = ACTIONS(395),
    [sym_integer_literal] = ACTIONS(397),
    [sym_float_literal] = ACTIONS(397),
    [anon_sym_true] = ACTIONS(399),
    [anon_sym_false] = ACTIONS(399),
    [anon_sym_DQUOTE] = ACTIONS(401),
    [anon_sym_BSLASH] = ACTIONS(403),
    [anon_sym_POUND_DQUOTE] = ACTIONS(405),
    [anon_sym_LBRACE] = ACTIONS(407),
    [anon_sym_COLON] = ACTIONS(409),
    [sym_identifier] = ACTIONS(397),
  },
  [46] = {
    [sym__s_expr] = STATE(28),
    [sym__expr] = STATE(28),
    [sym__literals] = STATE(28),
    [sym__short_helper] = STATE(28),
    [sym_short_ref] = STATE(28),
    [sym_short_copy] = STATE(28),
    [sym_short_fn_ref] = STATE(28),
    [sym_short_quote] = STATE(28),
    [sym_bool_literal] = STATE(28),
    [sym_str_literal] = STATE(28),
    [sym_char_literal] = STATE(28),
    [sym_pattern_literal] = STATE(28),
    [sym_array_expression] = STATE(28),
    [sym_map_expression] = STATE(28),
    [sym_symbol] = STATE(28),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(197),
    [anon_sym_AT] = ACTIONS(199),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(201),
    [sym_integer_literal] = ACTIONS(411),
    [sym_float_literal] = ACTIONS(411),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_identifier] = ACTIONS(411),
  },
  [47] = {
    [sym__s_expr] = STATE(210),
    [sym__expr] = STATE(210),
    [sym__literals] = STATE(210),
    [sym__short_helper] = STATE(210),
    [sym_short_ref] = STATE(210),
    [sym_short_copy] = STATE(210),
    [sym_short_fn_ref] = STATE(210),
    [sym_short_quote] = STATE(210),
    [sym_bool_literal] = STATE(210),
    [sym_str_literal] = STATE(210),
    [sym_char_literal] = STATE(210),
    [sym_pattern_literal] = STATE(210),
    [sym_array_expression] = STATE(210),
    [sym_map_expression] = STATE(210),
    [sym_symbol] = STATE(210),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(268),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(413),
    [sym_float_literal] = ACTIONS(413),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_identifier] = ACTIONS(413),
  },
  [48] = {
    [sym__s_expr] = STATE(179),
    [sym__expr] = STATE(179),
    [sym__literals] = STATE(179),
    [sym__short_helper] = STATE(179),
    [sym_short_ref] = STATE(179),
    [sym_short_copy] = STATE(179),
    [sym_short_fn_ref] = STATE(179),
    [sym_short_quote] = STATE(179),
    [sym_bool_literal] = STATE(179),
    [sym_str_literal] = STATE(179),
    [sym_char_literal] = STATE(179),
    [sym_pattern_literal] = STATE(179),
    [sym_array_expression] = STATE(179),
    [sym_map_expression] = STATE(179),
    [sym_symbol] = STATE(179),
    [anon_sym_LPAREN] = ACTIONS(385),
    [anon_sym_LBRACK] = ACTIONS(387),
    [anon_sym_AMP] = ACTIONS(389),
    [anon_sym_AT] = ACTIONS(391),
    [anon_sym_TILDE] = ACTIONS(393),
    [anon_sym_SQUOTE] = ACTIONS(395),
    [sym_integer_literal] = ACTIONS(415),
    [sym_float_literal] = ACTIONS(415),
    [anon_sym_true] = ACTIONS(399),
    [anon_sym_false] = ACTIONS(399),
    [anon_sym_DQUOTE] = ACTIONS(401),
    [anon_sym_BSLASH] = ACTIONS(403),
    [anon_sym_POUND_DQUOTE] = ACTIONS(405),
    [anon_sym_LBRACE] = ACTIONS(407),
    [anon_sym_COLON] = ACTIONS(409),
    [sym_identifier] = ACTIONS(415),
  },
  [49] = {
    [sym__s_expr] = STATE(178),
    [sym__expr] = STATE(178),
    [sym__literals] = STATE(178),
    [sym__short_helper] = STATE(178),
    [sym_short_ref] = STATE(178),
    [sym_short_copy] = STATE(178),
    [sym_short_fn_ref] = STATE(178),
    [sym_short_quote] = STATE(178),
    [sym_bool_literal] = STATE(178),
    [sym_str_literal] = STATE(178),
    [sym_char_literal] = STATE(178),
    [sym_pattern_literal] = STATE(178),
    [sym_array_expression] = STATE(178),
    [sym_map_expression] = STATE(178),
    [sym_symbol] = STATE(178),
    [anon_sym_LPAREN] = ACTIONS(385),
    [anon_sym_LBRACK] = ACTIONS(387),
    [anon_sym_AMP] = ACTIONS(389),
    [anon_sym_AT] = ACTIONS(391),
    [anon_sym_TILDE] = ACTIONS(393),
    [anon_sym_SQUOTE] = ACTIONS(395),
    [sym_integer_literal] = ACTIONS(417),
    [sym_float_literal] = ACTIONS(417),
    [anon_sym_true] = ACTIONS(399),
    [anon_sym_false] = ACTIONS(399),
    [anon_sym_DQUOTE] = ACTIONS(401),
    [anon_sym_BSLASH] = ACTIONS(403),
    [anon_sym_POUND_DQUOTE] = ACTIONS(405),
    [anon_sym_LBRACE] = ACTIONS(407),
    [anon_sym_COLON] = ACTIONS(409),
    [sym_identifier] = ACTIONS(417),
  },
  [50] = {
    [sym__s_expr] = STATE(177),
    [sym__expr] = STATE(177),
    [sym__literals] = STATE(177),
    [sym__short_helper] = STATE(177),
    [sym_short_ref] = STATE(177),
    [sym_short_copy] = STATE(177),
    [sym_short_fn_ref] = STATE(177),
    [sym_short_quote] = STATE(177),
    [sym_bool_literal] = STATE(177),
    [sym_str_literal] = STATE(177),
    [sym_char_literal] = STATE(177),
    [sym_pattern_literal] = STATE(177),
    [sym_array_expression] = STATE(177),
    [sym_map_expression] = STATE(177),
    [sym_symbol] = STATE(177),
    [anon_sym_LPAREN] = ACTIONS(385),
    [anon_sym_LBRACK] = ACTIONS(387),
    [anon_sym_AMP] = ACTIONS(389),
    [anon_sym_AT] = ACTIONS(391),
    [anon_sym_TILDE] = ACTIONS(393),
    [anon_sym_SQUOTE] = ACTIONS(395),
    [sym_integer_literal] = ACTIONS(419),
    [sym_float_literal] = ACTIONS(419),
    [anon_sym_true] = ACTIONS(399),
    [anon_sym_false] = ACTIONS(399),
    [anon_sym_DQUOTE] = ACTIONS(401),
    [anon_sym_BSLASH] = ACTIONS(403),
    [anon_sym_POUND_DQUOTE] = ACTIONS(405),
    [anon_sym_LBRACE] = ACTIONS(407),
    [anon_sym_COLON] = ACTIONS(409),
    [sym_identifier] = ACTIONS(419),
  },
  [51] = {
    [sym__s_expr] = STATE(229),
    [sym__expr] = STATE(229),
    [sym__literals] = STATE(229),
    [sym__short_helper] = STATE(229),
    [sym_short_ref] = STATE(229),
    [sym_short_copy] = STATE(229),
    [sym_short_fn_ref] = STATE(229),
    [sym_short_quote] = STATE(229),
    [sym_bool_literal] = STATE(229),
    [sym_str_literal] = STATE(229),
    [sym_char_literal] = STATE(229),
    [sym_pattern_literal] = STATE(229),
    [sym_array_expression] = STATE(229),
    [sym_map_expression] = STATE(229),
    [sym_symbol] = STATE(229),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(268),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(421),
    [sym_float_literal] = ACTIONS(421),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_identifier] = ACTIONS(421),
  },
  [52] = {
    [sym__s_expr] = STATE(176),
    [sym__expr] = STATE(176),
    [sym__literals] = STATE(176),
    [sym__short_helper] = STATE(176),
    [sym_short_ref] = STATE(176),
    [sym_short_copy] = STATE(176),
    [sym_short_fn_ref] = STATE(176),
    [sym_short_quote] = STATE(176),
    [sym_bool_literal] = STATE(176),
    [sym_str_literal] = STATE(176),
    [sym_char_literal] = STATE(176),
    [sym_pattern_literal] = STATE(176),
    [sym_array_expression] = STATE(176),
    [sym_map_expression] = STATE(176),
    [sym_symbol] = STATE(176),
    [anon_sym_LPAREN] = ACTIONS(385),
    [anon_sym_LBRACK] = ACTIONS(387),
    [anon_sym_AMP] = ACTIONS(389),
    [anon_sym_AT] = ACTIONS(391),
    [anon_sym_TILDE] = ACTIONS(393),
    [anon_sym_SQUOTE] = ACTIONS(395),
    [sym_integer_literal] = ACTIONS(423),
    [sym_float_literal] = ACTIONS(423),
    [anon_sym_true] = ACTIONS(399),
    [anon_sym_false] = ACTIONS(399),
    [anon_sym_DQUOTE] = ACTIONS(401),
    [anon_sym_BSLASH] = ACTIONS(403),
    [anon_sym_POUND_DQUOTE] = ACTIONS(405),
    [anon_sym_LBRACE] = ACTIONS(407),
    [anon_sym_COLON] = ACTIONS(409),
    [sym_identifier] = ACTIONS(423),
  },
  [53] = {
    [sym__s_expr] = STATE(209),
    [sym__expr] = STATE(209),
    [sym__literals] = STATE(209),
    [sym__short_helper] = STATE(209),
    [sym_short_ref] = STATE(209),
    [sym_short_copy] = STATE(209),
    [sym_short_fn_ref] = STATE(209),
    [sym_short_quote] = STATE(209),
    [sym_bool_literal] = STATE(209),
    [sym_str_literal] = STATE(209),
    [sym_char_literal] = STATE(209),
    [sym_pattern_literal] = STATE(209),
    [sym_array_expression] = STATE(209),
    [sym_map_expression] = STATE(209),
    [sym_symbol] = STATE(209),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(268),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(425),
    [sym_float_literal] = ACTIONS(425),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_identifier] = ACTIONS(425),
  },
  [54] = {
    [sym__s_expr] = STATE(73),
    [sym__expr] = STATE(73),
    [sym__literals] = STATE(73),
    [sym__short_helper] = STATE(73),
    [sym_short_ref] = STATE(73),
    [sym_short_copy] = STATE(73),
    [sym_short_fn_ref] = STATE(73),
    [sym_short_quote] = STATE(73),
    [sym_bool_literal] = STATE(73),
    [sym_str_literal] = STATE(73),
    [sym_char_literal] = STATE(73),
    [sym_pattern_literal] = STATE(73),
    [sym_array_expression] = STATE(73),
    [sym_map_expression] = STATE(73),
    [sym_symbol] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(347),
    [anon_sym_AMP] = ACTIONS(286),
    [anon_sym_AT] = ACTIONS(288),
    [anon_sym_TILDE] = ACTIONS(290),
    [anon_sym_SQUOTE] = ACTIONS(292),
    [sym_integer_literal] = ACTIONS(427),
    [sym_float_literal] = ACTIONS(427),
    [anon_sym_true] = ACTIONS(351),
    [anon_sym_false] = ACTIONS(351),
    [anon_sym_DQUOTE] = ACTIONS(353),
    [anon_sym_BSLASH] = ACTIONS(355),
    [anon_sym_POUND_DQUOTE] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_COLON] = ACTIONS(361),
    [sym_identifier] = ACTIONS(427),
  },
  [55] = {
    [sym__s_expr] = STATE(42),
    [sym__expr] = STATE(42),
    [sym__literals] = STATE(42),
    [sym__short_helper] = STATE(42),
    [sym_short_ref] = STATE(42),
    [sym_short_copy] = STATE(42),
    [sym_short_fn_ref] = STATE(42),
    [sym_short_quote] = STATE(42),
    [sym_bool_literal] = STATE(42),
    [sym_str_literal] = STATE(42),
    [sym_char_literal] = STATE(42),
    [sym_pattern_literal] = STATE(42),
    [sym_array_expression] = STATE(42),
    [sym_map_expression] = STATE(42),
    [sym_symbol] = STATE(42),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(197),
    [anon_sym_AT] = ACTIONS(199),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(201),
    [sym_integer_literal] = ACTIONS(429),
    [sym_float_literal] = ACTIONS(429),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_identifier] = ACTIONS(429),
  },
  [56] = {
    [sym__s_expr] = STATE(231),
    [sym__expr] = STATE(231),
    [sym__literals] = STATE(231),
    [sym__short_helper] = STATE(231),
    [sym_short_ref] = STATE(231),
    [sym_short_copy] = STATE(231),
    [sym_short_fn_ref] = STATE(231),
    [sym_short_quote] = STATE(231),
    [sym_bool_literal] = STATE(231),
    [sym_str_literal] = STATE(231),
    [sym_char_literal] = STATE(231),
    [sym_pattern_literal] = STATE(231),
    [sym_array_expression] = STATE(231),
    [sym_map_expression] = STATE(231),
    [sym_symbol] = STATE(231),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(268),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(431),
    [sym_float_literal] = ACTIONS(431),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [sym_identifier] = ACTIONS(431),
  },
  [57] = {
    [sym__short_helper] = STATE(215),
    [sym_type] = STATE(215),
    [sym_complex_type] = STATE(140),
    [sym_short_ref] = STATE(215),
    [sym_short_copy] = STATE(215),
    [sym_short_fn_ref] = STATE(215),
    [sym_short_quote] = STATE(215),
    [anon_sym_LPAREN] = ACTIONS(433),
    [anon_sym_Bool] = ACTIONS(435),
    [anon_sym_Char] = ACTIONS(435),
    [anon_sym_Int] = ACTIONS(435),
    [anon_sym_Long] = ACTIONS(435),
    [anon_sym_Float] = ACTIONS(435),
    [anon_sym_Double] = ACTIONS(435),
    [anon_sym_Vector2] = ACTIONS(435),
    [anon_sym_Vector3] = ACTIONS(435),
    [anon_sym_VectorN] = ACTIONS(435),
    [anon_sym_String] = ACTIONS(435),
    [anon_sym_Pattern] = ACTIONS(435),
    [anon_sym_Array] = ACTIONS(435),
    [anon_sym_Map] = ACTIONS(435),
    [anon_sym_Maybe] = ACTIONS(435),
    [anon_sym_Result] = ACTIONS(435),
    [anon_sym_Id] = ACTIONS(435),
    [anon_sym_Ptr] = ACTIONS(435),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(268),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_identifier] = ACTIONS(437),
  },
  [58] = {
    [sym__short_helper] = STATE(20),
    [sym_type] = STATE(20),
    [sym_complex_type] = STATE(140),
    [sym_short_ref] = STATE(20),
    [sym_short_copy] = STATE(20),
    [sym_short_fn_ref] = STATE(20),
    [sym_short_quote] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(439),
    [anon_sym_Bool] = ACTIONS(435),
    [anon_sym_Char] = ACTIONS(435),
    [anon_sym_Int] = ACTIONS(435),
    [anon_sym_Long] = ACTIONS(435),
    [anon_sym_Float] = ACTIONS(435),
    [anon_sym_Double] = ACTIONS(435),
    [anon_sym_Vector2] = ACTIONS(435),
    [anon_sym_Vector3] = ACTIONS(435),
    [anon_sym_VectorN] = ACTIONS(435),
    [anon_sym_String] = ACTIONS(435),
    [anon_sym_Pattern] = ACTIONS(435),
    [anon_sym_Array] = ACTIONS(435),
    [anon_sym_Map] = ACTIONS(435),
    [anon_sym_Maybe] = ACTIONS(435),
    [anon_sym_Result] = ACTIONS(435),
    [anon_sym_Id] = ACTIONS(435),
    [anon_sym_Ptr] = ACTIONS(435),
    [anon_sym_AMP] = ACTIONS(197),
    [anon_sym_AT] = ACTIONS(199),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(201),
    [sym_identifier] = ACTIONS(437),
  },
  [59] = {
    [anon_sym_LPAREN] = ACTIONS(441),
    [anon_sym_Bool] = ACTIONS(443),
    [anon_sym_Char] = ACTIONS(443),
    [anon_sym_Int] = ACTIONS(443),
    [anon_sym_Long] = ACTIONS(443),
    [anon_sym_Float] = ACTIONS(443),
    [anon_sym_Double] = ACTIONS(443),
    [anon_sym_Vector2] = ACTIONS(443),
    [anon_sym_Vector3] = ACTIONS(443),
    [anon_sym_VectorN] = ACTIONS(443),
    [anon_sym_String] = ACTIONS(443),
    [anon_sym_Pattern] = ACTIONS(443),
    [anon_sym_Array] = ACTIONS(443),
    [anon_sym_Map] = ACTIONS(443),
    [anon_sym_Maybe] = ACTIONS(443),
    [anon_sym_Result] = ACTIONS(443),
    [anon_sym_Id] = ACTIONS(443),
    [anon_sym_Ptr] = ACTIONS(443),
    [anon_sym_COMMA] = ACTIONS(441),
    [anon_sym_RBRACK2] = ACTIONS(441),
    [anon_sym_AMP] = ACTIONS(441),
    [anon_sym_AT] = ACTIONS(441),
    [anon_sym_TILDE] = ACTIONS(441),
    [anon_sym_SQUOTE] = ACTIONS(441),
    [sym_identifier] = ACTIONS(443),
  },
  [60] = {
    [anon_sym_LPAREN] = ACTIONS(445),
    [anon_sym_Bool] = ACTIONS(447),
    [anon_sym_Char] = ACTIONS(447),
    [anon_sym_Int] = ACTIONS(447),
    [anon_sym_Long] = ACTIONS(447),
    [anon_sym_Float] = ACTIONS(447),
    [anon_sym_Double] = ACTIONS(447),
    [anon_sym_Vector2] = ACTIONS(447),
    [anon_sym_Vector3] = ACTIONS(447),
    [anon_sym_VectorN] = ACTIONS(447),
    [anon_sym_String] = ACTIONS(447),
    [anon_sym_Pattern] = ACTIONS(447),
    [anon_sym_Array] = ACTIONS(447),
    [anon_sym_Map] = ACTIONS(447),
    [anon_sym_Maybe] = ACTIONS(447),
    [anon_sym_Result] = ACTIONS(447),
    [anon_sym_Id] = ACTIONS(447),
    [anon_sym_Ptr] = ACTIONS(447),
    [anon_sym_COMMA] = ACTIONS(445),
    [anon_sym_RBRACK2] = ACTIONS(445),
    [anon_sym_AMP] = ACTIONS(445),
    [anon_sym_AT] = ACTIONS(445),
    [anon_sym_TILDE] = ACTIONS(445),
    [anon_sym_SQUOTE] = ACTIONS(445),
    [sym_identifier] = ACTIONS(447),
  },
  [61] = {
    [anon_sym_LPAREN] = ACTIONS(302),
    [anon_sym_Bool] = ACTIONS(304),
    [anon_sym_Char] = ACTIONS(304),
    [anon_sym_Int] = ACTIONS(304),
    [anon_sym_Long] = ACTIONS(304),
    [anon_sym_Float] = ACTIONS(304),
    [anon_sym_Double] = ACTIONS(304),
    [anon_sym_Vector2] = ACTIONS(304),
    [anon_sym_Vector3] = ACTIONS(304),
    [anon_sym_VectorN] = ACTIONS(304),
    [anon_sym_String] = ACTIONS(304),
    [anon_sym_Pattern] = ACTIONS(304),
    [anon_sym_Array] = ACTIONS(304),
    [anon_sym_Map] = ACTIONS(304),
    [anon_sym_Maybe] = ACTIONS(304),
    [anon_sym_Result] = ACTIONS(304),
    [anon_sym_Id] = ACTIONS(304),
    [anon_sym_Ptr] = ACTIONS(304),
    [anon_sym_RBRACK2] = ACTIONS(302),
    [anon_sym_AMP] = ACTIONS(302),
    [anon_sym_AT] = ACTIONS(302),
    [anon_sym_TILDE] = ACTIONS(302),
    [anon_sym_SQUOTE] = ACTIONS(302),
    [sym_identifier] = ACTIONS(304),
  },
  [62] = {
    [anon_sym_LPAREN] = ACTIONS(449),
    [anon_sym_Bool] = ACTIONS(451),
    [anon_sym_Char] = ACTIONS(451),
    [anon_sym_Int] = ACTIONS(451),
    [anon_sym_Long] = ACTIONS(451),
    [anon_sym_Float] = ACTIONS(451),
    [anon_sym_Double] = ACTIONS(451),
    [anon_sym_Vector2] = ACTIONS(451),
    [anon_sym_Vector3] = ACTIONS(451),
    [anon_sym_VectorN] = ACTIONS(451),
    [anon_sym_String] = ACTIONS(451),
    [anon_sym_Pattern] = ACTIONS(451),
    [anon_sym_Array] = ACTIONS(451),
    [anon_sym_Map] = ACTIONS(451),
    [anon_sym_Maybe] = ACTIONS(451),
    [anon_sym_Result] = ACTIONS(451),
    [anon_sym_Id] = ACTIONS(451),
    [anon_sym_Ptr] = ACTIONS(451),
    [anon_sym_RBRACK2] = ACTIONS(449),
    [anon_sym_AMP] = ACTIONS(449),
    [anon_sym_AT] = ACTIONS(449),
    [anon_sym_TILDE] = ACTIONS(449),
    [anon_sym_SQUOTE] = ACTIONS(449),
    [sym_identifier] = ACTIONS(451),
  },
  [63] = {
    [anon_sym_LPAREN] = ACTIONS(453),
    [anon_sym_Bool] = ACTIONS(455),
    [anon_sym_Char] = ACTIONS(455),
    [anon_sym_Int] = ACTIONS(455),
    [anon_sym_Long] = ACTIONS(455),
    [anon_sym_Float] = ACTIONS(455),
    [anon_sym_Double] = ACTIONS(455),
    [anon_sym_Vector2] = ACTIONS(455),
    [anon_sym_Vector3] = ACTIONS(455),
    [anon_sym_VectorN] = ACTIONS(455),
    [anon_sym_String] = ACTIONS(455),
    [anon_sym_Pattern] = ACTIONS(455),
    [anon_sym_Array] = ACTIONS(455),
    [anon_sym_Map] = ACTIONS(455),
    [anon_sym_Maybe] = ACTIONS(455),
    [anon_sym_Result] = ACTIONS(455),
    [anon_sym_Id] = ACTIONS(455),
    [anon_sym_Ptr] = ACTIONS(455),
    [anon_sym_RBRACK2] = ACTIONS(453),
    [anon_sym_AMP] = ACTIONS(453),
    [anon_sym_AT] = ACTIONS(453),
    [anon_sym_TILDE] = ACTIONS(453),
    [anon_sym_SQUOTE] = ACTIONS(453),
    [sym_identifier] = ACTIONS(455),
  },
  [64] = {
    [anon_sym_LPAREN] = ACTIONS(457),
    [anon_sym_Bool] = ACTIONS(459),
    [anon_sym_Char] = ACTIONS(459),
    [anon_sym_Int] = ACTIONS(459),
    [anon_sym_Long] = ACTIONS(459),
    [anon_sym_Float] = ACTIONS(459),
    [anon_sym_Double] = ACTIONS(459),
    [anon_sym_Vector2] = ACTIONS(459),
    [anon_sym_Vector3] = ACTIONS(459),
    [anon_sym_VectorN] = ACTIONS(459),
    [anon_sym_String] = ACTIONS(459),
    [anon_sym_Pattern] = ACTIONS(459),
    [anon_sym_Array] = ACTIONS(459),
    [anon_sym_Map] = ACTIONS(459),
    [anon_sym_Maybe] = ACTIONS(459),
    [anon_sym_Result] = ACTIONS(459),
    [anon_sym_Id] = ACTIONS(459),
    [anon_sym_Ptr] = ACTIONS(459),
    [anon_sym_RBRACK2] = ACTIONS(457),
    [anon_sym_AMP] = ACTIONS(457),
    [anon_sym_AT] = ACTIONS(457),
    [anon_sym_TILDE] = ACTIONS(457),
    [anon_sym_SQUOTE] = ACTIONS(457),
    [sym_identifier] = ACTIONS(459),
  },
  [65] = {
    [anon_sym_LPAREN] = ACTIONS(461),
    [anon_sym_Bool] = ACTIONS(463),
    [anon_sym_Char] = ACTIONS(463),
    [anon_sym_Int] = ACTIONS(463),
    [anon_sym_Long] = ACTIONS(463),
    [anon_sym_Float] = ACTIONS(463),
    [anon_sym_Double] = ACTIONS(463),
    [anon_sym_Vector2] = ACTIONS(463),
    [anon_sym_Vector3] = ACTIONS(463),
    [anon_sym_VectorN] = ACTIONS(463),
    [anon_sym_String] = ACTIONS(463),
    [anon_sym_Pattern] = ACTIONS(463),
    [anon_sym_Array] = ACTIONS(463),
    [anon_sym_Map] = ACTIONS(463),
    [anon_sym_Maybe] = ACTIONS(463),
    [anon_sym_Result] = ACTIONS(463),
    [anon_sym_Id] = ACTIONS(463),
    [anon_sym_Ptr] = ACTIONS(463),
    [anon_sym_RBRACK2] = ACTIONS(461),
    [anon_sym_AMP] = ACTIONS(461),
    [anon_sym_AT] = ACTIONS(461),
    [anon_sym_TILDE] = ACTIONS(461),
    [anon_sym_SQUOTE] = ACTIONS(461),
    [sym_identifier] = ACTIONS(463),
  },
  [66] = {
    [anon_sym_LPAREN] = ACTIONS(465),
    [anon_sym_Bool] = ACTIONS(467),
    [anon_sym_Char] = ACTIONS(467),
    [anon_sym_Int] = ACTIONS(467),
    [anon_sym_Long] = ACTIONS(467),
    [anon_sym_Float] = ACTIONS(467),
    [anon_sym_Double] = ACTIONS(467),
    [anon_sym_Vector2] = ACTIONS(467),
    [anon_sym_Vector3] = ACTIONS(467),
    [anon_sym_VectorN] = ACTIONS(467),
    [anon_sym_String] = ACTIONS(467),
    [anon_sym_Pattern] = ACTIONS(467),
    [anon_sym_Array] = ACTIONS(467),
    [anon_sym_Map] = ACTIONS(467),
    [anon_sym_Maybe] = ACTIONS(467),
    [anon_sym_Result] = ACTIONS(467),
    [anon_sym_Id] = ACTIONS(467),
    [anon_sym_Ptr] = ACTIONS(467),
    [anon_sym_RBRACK2] = ACTIONS(465),
    [anon_sym_AMP] = ACTIONS(465),
    [anon_sym_AT] = ACTIONS(465),
    [anon_sym_TILDE] = ACTIONS(465),
    [anon_sym_SQUOTE] = ACTIONS(465),
    [sym_identifier] = ACTIONS(467),
  },
  [67] = {
    [anon_sym_LPAREN] = ACTIONS(469),
    [anon_sym_Bool] = ACTIONS(471),
    [anon_sym_Char] = ACTIONS(471),
    [anon_sym_Int] = ACTIONS(471),
    [anon_sym_Long] = ACTIONS(471),
    [anon_sym_Float] = ACTIONS(471),
    [anon_sym_Double] = ACTIONS(471),
    [anon_sym_Vector2] = ACTIONS(471),
    [anon_sym_Vector3] = ACTIONS(471),
    [anon_sym_VectorN] = ACTIONS(471),
    [anon_sym_String] = ACTIONS(471),
    [anon_sym_Pattern] = ACTIONS(471),
    [anon_sym_Array] = ACTIONS(471),
    [anon_sym_Map] = ACTIONS(471),
    [anon_sym_Maybe] = ACTIONS(471),
    [anon_sym_Result] = ACTIONS(471),
    [anon_sym_Id] = ACTIONS(471),
    [anon_sym_Ptr] = ACTIONS(471),
    [anon_sym_RBRACK2] = ACTIONS(469),
    [anon_sym_AMP] = ACTIONS(469),
    [anon_sym_AT] = ACTIONS(469),
    [anon_sym_TILDE] = ACTIONS(469),
    [anon_sym_SQUOTE] = ACTIONS(469),
    [sym_identifier] = ACTIONS(471),
  },
  [68] = {
    [anon_sym_LPAREN] = ACTIONS(473),
    [anon_sym_Bool] = ACTIONS(475),
    [anon_sym_Char] = ACTIONS(475),
    [anon_sym_Int] = ACTIONS(475),
    [anon_sym_Long] = ACTIONS(475),
    [anon_sym_Float] = ACTIONS(475),
    [anon_sym_Double] = ACTIONS(475),
    [anon_sym_Vector2] = ACTIONS(475),
    [anon_sym_Vector3] = ACTIONS(475),
    [anon_sym_VectorN] = ACTIONS(475),
    [anon_sym_String] = ACTIONS(475),
    [anon_sym_Pattern] = ACTIONS(475),
    [anon_sym_Array] = ACTIONS(475),
    [anon_sym_Map] = ACTIONS(475),
    [anon_sym_Maybe] = ACTIONS(475),
    [anon_sym_Result] = ACTIONS(475),
    [anon_sym_Id] = ACTIONS(475),
    [anon_sym_Ptr] = ACTIONS(475),
    [anon_sym_RBRACK2] = ACTIONS(473),
    [anon_sym_AMP] = ACTIONS(473),
    [anon_sym_AT] = ACTIONS(473),
    [anon_sym_TILDE] = ACTIONS(473),
    [anon_sym_SQUOTE] = ACTIONS(473),
    [sym_identifier] = ACTIONS(475),
  },
  [69] = {
    [anon_sym_LPAREN] = ACTIONS(477),
    [anon_sym_Bool] = ACTIONS(479),
    [anon_sym_Char] = ACTIONS(479),
    [anon_sym_Int] = ACTIONS(479),
    [anon_sym_Long] = ACTIONS(479),
    [anon_sym_Float] = ACTIONS(479),
    [anon_sym_Double] = ACTIONS(479),
    [anon_sym_Vector2] = ACTIONS(479),
    [anon_sym_Vector3] = ACTIONS(479),
    [anon_sym_VectorN] = ACTIONS(479),
    [anon_sym_String] = ACTIONS(479),
    [anon_sym_Pattern] = ACTIONS(479),
    [anon_sym_Array] = ACTIONS(479),
    [anon_sym_Map] = ACTIONS(479),
    [anon_sym_Maybe] = ACTIONS(479),
    [anon_sym_Result] = ACTIONS(479),
    [anon_sym_Id] = ACTIONS(479),
    [anon_sym_Ptr] = ACTIONS(479),
    [anon_sym_RBRACK2] = ACTIONS(477),
    [anon_sym_AMP] = ACTIONS(477),
    [anon_sym_AT] = ACTIONS(477),
    [anon_sym_TILDE] = ACTIONS(477),
    [anon_sym_SQUOTE] = ACTIONS(477),
    [sym_identifier] = ACTIONS(479),
  },
  [70] = {
    [anon_sym_LPAREN] = ACTIONS(481),
    [anon_sym_Bool] = ACTIONS(483),
    [anon_sym_Char] = ACTIONS(483),
    [anon_sym_Int] = ACTIONS(483),
    [anon_sym_Long] = ACTIONS(483),
    [anon_sym_Float] = ACTIONS(483),
    [anon_sym_Double] = ACTIONS(483),
    [anon_sym_Vector2] = ACTIONS(483),
    [anon_sym_Vector3] = ACTIONS(483),
    [anon_sym_VectorN] = ACTIONS(483),
    [anon_sym_String] = ACTIONS(483),
    [anon_sym_Pattern] = ACTIONS(483),
    [anon_sym_Array] = ACTIONS(483),
    [anon_sym_Map] = ACTIONS(483),
    [anon_sym_Maybe] = ACTIONS(483),
    [anon_sym_Result] = ACTIONS(483),
    [anon_sym_Id] = ACTIONS(483),
    [anon_sym_Ptr] = ACTIONS(483),
    [anon_sym_RBRACK2] = ACTIONS(481),
    [anon_sym_AMP] = ACTIONS(481),
    [anon_sym_AT] = ACTIONS(481),
    [anon_sym_TILDE] = ACTIONS(481),
    [anon_sym_SQUOTE] = ACTIONS(481),
    [sym_identifier] = ACTIONS(483),
  },
  [71] = {
    [anon_sym_LPAREN] = ACTIONS(485),
    [anon_sym_Bool] = ACTIONS(487),
    [anon_sym_Char] = ACTIONS(487),
    [anon_sym_Int] = ACTIONS(487),
    [anon_sym_Long] = ACTIONS(487),
    [anon_sym_Float] = ACTIONS(487),
    [anon_sym_Double] = ACTIONS(487),
    [anon_sym_Vector2] = ACTIONS(487),
    [anon_sym_Vector3] = ACTIONS(487),
    [anon_sym_VectorN] = ACTIONS(487),
    [anon_sym_String] = ACTIONS(487),
    [anon_sym_Pattern] = ACTIONS(487),
    [anon_sym_Array] = ACTIONS(487),
    [anon_sym_Map] = ACTIONS(487),
    [anon_sym_Maybe] = ACTIONS(487),
    [anon_sym_Result] = ACTIONS(487),
    [anon_sym_Id] = ACTIONS(487),
    [anon_sym_Ptr] = ACTIONS(487),
    [anon_sym_RBRACK2] = ACTIONS(485),
    [anon_sym_AMP] = ACTIONS(485),
    [anon_sym_AT] = ACTIONS(485),
    [anon_sym_TILDE] = ACTIONS(485),
    [anon_sym_SQUOTE] = ACTIONS(485),
    [sym_identifier] = ACTIONS(487),
  },
  [72] = {
    [anon_sym_LPAREN] = ACTIONS(489),
    [anon_sym_Bool] = ACTIONS(491),
    [anon_sym_Char] = ACTIONS(491),
    [anon_sym_Int] = ACTIONS(491),
    [anon_sym_Long] = ACTIONS(491),
    [anon_sym_Float] = ACTIONS(491),
    [anon_sym_Double] = ACTIONS(491),
    [anon_sym_Vector2] = ACTIONS(491),
    [anon_sym_Vector3] = ACTIONS(491),
    [anon_sym_VectorN] = ACTIONS(491),
    [anon_sym_String] = ACTIONS(491),
    [anon_sym_Pattern] = ACTIONS(491),
    [anon_sym_Array] = ACTIONS(491),
    [anon_sym_Map] = ACTIONS(491),
    [anon_sym_Maybe] = ACTIONS(491),
    [anon_sym_Result] = ACTIONS(491),
    [anon_sym_Id] = ACTIONS(491),
    [anon_sym_Ptr] = ACTIONS(491),
    [anon_sym_RBRACK2] = ACTIONS(489),
    [anon_sym_AMP] = ACTIONS(489),
    [anon_sym_AT] = ACTIONS(489),
    [anon_sym_TILDE] = ACTIONS(489),
    [anon_sym_SQUOTE] = ACTIONS(489),
    [sym_identifier] = ACTIONS(491),
  },
  [73] = {
    [anon_sym_LPAREN] = ACTIONS(493),
    [anon_sym_Bool] = ACTIONS(495),
    [anon_sym_Char] = ACTIONS(495),
    [anon_sym_Int] = ACTIONS(495),
    [anon_sym_Long] = ACTIONS(495),
    [anon_sym_Float] = ACTIONS(495),
    [anon_sym_Double] = ACTIONS(495),
    [anon_sym_Vector2] = ACTIONS(495),
    [anon_sym_Vector3] = ACTIONS(495),
    [anon_sym_VectorN] = ACTIONS(495),
    [anon_sym_String] = ACTIONS(495),
    [anon_sym_Pattern] = ACTIONS(495),
    [anon_sym_Array] = ACTIONS(495),
    [anon_sym_Map] = ACTIONS(495),
    [anon_sym_Maybe] = ACTIONS(495),
    [anon_sym_Result] = ACTIONS(495),
    [anon_sym_Id] = ACTIONS(495),
    [anon_sym_Ptr] = ACTIONS(495),
    [anon_sym_RBRACK2] = ACTIONS(493),
    [anon_sym_AMP] = ACTIONS(493),
    [anon_sym_AT] = ACTIONS(493),
    [anon_sym_TILDE] = ACTIONS(493),
    [anon_sym_SQUOTE] = ACTIONS(493),
    [sym_identifier] = ACTIONS(495),
  },
  [74] = {
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_Bool] = ACTIONS(499),
    [anon_sym_Char] = ACTIONS(499),
    [anon_sym_Int] = ACTIONS(499),
    [anon_sym_Long] = ACTIONS(499),
    [anon_sym_Float] = ACTIONS(499),
    [anon_sym_Double] = ACTIONS(499),
    [anon_sym_Vector2] = ACTIONS(499),
    [anon_sym_Vector3] = ACTIONS(499),
    [anon_sym_VectorN] = ACTIONS(499),
    [anon_sym_String] = ACTIONS(499),
    [anon_sym_Pattern] = ACTIONS(499),
    [anon_sym_Array] = ACTIONS(499),
    [anon_sym_Map] = ACTIONS(499),
    [anon_sym_Maybe] = ACTIONS(499),
    [anon_sym_Result] = ACTIONS(499),
    [anon_sym_Id] = ACTIONS(499),
    [anon_sym_Ptr] = ACTIONS(499),
    [anon_sym_RBRACK2] = ACTIONS(497),
    [anon_sym_AMP] = ACTIONS(497),
    [anon_sym_AT] = ACTIONS(497),
    [anon_sym_TILDE] = ACTIONS(497),
    [anon_sym_SQUOTE] = ACTIONS(497),
    [sym_identifier] = ACTIONS(499),
  },
  [75] = {
    [anon_sym_LPAREN] = ACTIONS(501),
    [anon_sym_Bool] = ACTIONS(503),
    [anon_sym_Char] = ACTIONS(503),
    [anon_sym_Int] = ACTIONS(503),
    [anon_sym_Long] = ACTIONS(503),
    [anon_sym_Float] = ACTIONS(503),
    [anon_sym_Double] = ACTIONS(503),
    [anon_sym_Vector2] = ACTIONS(503),
    [anon_sym_Vector3] = ACTIONS(503),
    [anon_sym_VectorN] = ACTIONS(503),
    [anon_sym_String] = ACTIONS(503),
    [anon_sym_Pattern] = ACTIONS(503),
    [anon_sym_Array] = ACTIONS(503),
    [anon_sym_Map] = ACTIONS(503),
    [anon_sym_Maybe] = ACTIONS(503),
    [anon_sym_Result] = ACTIONS(503),
    [anon_sym_Id] = ACTIONS(503),
    [anon_sym_Ptr] = ACTIONS(503),
    [anon_sym_RBRACK2] = ACTIONS(501),
    [anon_sym_AMP] = ACTIONS(501),
    [anon_sym_AT] = ACTIONS(501),
    [anon_sym_TILDE] = ACTIONS(501),
    [anon_sym_SQUOTE] = ACTIONS(501),
    [sym_identifier] = ACTIONS(503),
  },
  [76] = {
    [anon_sym_LPAREN] = ACTIONS(505),
    [anon_sym_Bool] = ACTIONS(507),
    [anon_sym_Char] = ACTIONS(507),
    [anon_sym_Int] = ACTIONS(507),
    [anon_sym_Long] = ACTIONS(507),
    [anon_sym_Float] = ACTIONS(507),
    [anon_sym_Double] = ACTIONS(507),
    [anon_sym_Vector2] = ACTIONS(507),
    [anon_sym_Vector3] = ACTIONS(507),
    [anon_sym_VectorN] = ACTIONS(507),
    [anon_sym_String] = ACTIONS(507),
    [anon_sym_Pattern] = ACTIONS(507),
    [anon_sym_Array] = ACTIONS(507),
    [anon_sym_Map] = ACTIONS(507),
    [anon_sym_Maybe] = ACTIONS(507),
    [anon_sym_Result] = ACTIONS(507),
    [anon_sym_Id] = ACTIONS(507),
    [anon_sym_Ptr] = ACTIONS(507),
    [anon_sym_RBRACK2] = ACTIONS(505),
    [anon_sym_AMP] = ACTIONS(505),
    [anon_sym_AT] = ACTIONS(505),
    [anon_sym_TILDE] = ACTIONS(505),
    [anon_sym_SQUOTE] = ACTIONS(505),
    [sym_identifier] = ACTIONS(507),
  },
  [77] = {
    [anon_sym_LPAREN] = ACTIONS(509),
    [anon_sym_Bool] = ACTIONS(511),
    [anon_sym_Char] = ACTIONS(511),
    [anon_sym_Int] = ACTIONS(511),
    [anon_sym_Long] = ACTIONS(511),
    [anon_sym_Float] = ACTIONS(511),
    [anon_sym_Double] = ACTIONS(511),
    [anon_sym_Vector2] = ACTIONS(511),
    [anon_sym_Vector3] = ACTIONS(511),
    [anon_sym_VectorN] = ACTIONS(511),
    [anon_sym_String] = ACTIONS(511),
    [anon_sym_Pattern] = ACTIONS(511),
    [anon_sym_Array] = ACTIONS(511),
    [anon_sym_Map] = ACTIONS(511),
    [anon_sym_Maybe] = ACTIONS(511),
    [anon_sym_Result] = ACTIONS(511),
    [anon_sym_Id] = ACTIONS(511),
    [anon_sym_Ptr] = ACTIONS(511),
    [anon_sym_RBRACK2] = ACTIONS(509),
    [anon_sym_AMP] = ACTIONS(509),
    [anon_sym_AT] = ACTIONS(509),
    [anon_sym_TILDE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(509),
    [sym_identifier] = ACTIONS(511),
  },
  [78] = {
    [anon_sym_LPAREN] = ACTIONS(513),
    [anon_sym_Bool] = ACTIONS(515),
    [anon_sym_Char] = ACTIONS(515),
    [anon_sym_Int] = ACTIONS(515),
    [anon_sym_Long] = ACTIONS(515),
    [anon_sym_Float] = ACTIONS(515),
    [anon_sym_Double] = ACTIONS(515),
    [anon_sym_Vector2] = ACTIONS(515),
    [anon_sym_Vector3] = ACTIONS(515),
    [anon_sym_VectorN] = ACTIONS(515),
    [anon_sym_String] = ACTIONS(515),
    [anon_sym_Pattern] = ACTIONS(515),
    [anon_sym_Array] = ACTIONS(515),
    [anon_sym_Map] = ACTIONS(515),
    [anon_sym_Maybe] = ACTIONS(515),
    [anon_sym_Result] = ACTIONS(515),
    [anon_sym_Id] = ACTIONS(515),
    [anon_sym_Ptr] = ACTIONS(515),
    [anon_sym_RBRACK2] = ACTIONS(513),
    [anon_sym_AMP] = ACTIONS(513),
    [anon_sym_AT] = ACTIONS(513),
    [anon_sym_TILDE] = ACTIONS(513),
    [anon_sym_SQUOTE] = ACTIONS(513),
    [sym_identifier] = ACTIONS(515),
  },
  [79] = {
    [anon_sym_LPAREN] = ACTIONS(517),
    [anon_sym_Bool] = ACTIONS(519),
    [anon_sym_Char] = ACTIONS(519),
    [anon_sym_Int] = ACTIONS(519),
    [anon_sym_Long] = ACTIONS(519),
    [anon_sym_Float] = ACTIONS(519),
    [anon_sym_Double] = ACTIONS(519),
    [anon_sym_Vector2] = ACTIONS(519),
    [anon_sym_Vector3] = ACTIONS(519),
    [anon_sym_VectorN] = ACTIONS(519),
    [anon_sym_String] = ACTIONS(519),
    [anon_sym_Pattern] = ACTIONS(519),
    [anon_sym_Array] = ACTIONS(519),
    [anon_sym_Map] = ACTIONS(519),
    [anon_sym_Maybe] = ACTIONS(519),
    [anon_sym_Result] = ACTIONS(519),
    [anon_sym_Id] = ACTIONS(519),
    [anon_sym_Ptr] = ACTIONS(519),
    [anon_sym_AMP] = ACTIONS(517),
    [anon_sym_AT] = ACTIONS(517),
    [anon_sym_TILDE] = ACTIONS(517),
    [anon_sym_SQUOTE] = ACTIONS(517),
    [sym_identifier] = ACTIONS(519),
  },
  [80] = {
    [sym_interface_fn] = STATE(243),
    [aux_sym_complex_type_repeat1] = STATE(94),
    [anon_sym_RPAREN] = ACTIONS(521),
    [anon_sym_Bool] = ACTIONS(523),
    [anon_sym_Char] = ACTIONS(523),
    [anon_sym_Int] = ACTIONS(523),
    [anon_sym_Long] = ACTIONS(523),
    [anon_sym_Float] = ACTIONS(523),
    [anon_sym_Double] = ACTIONS(523),
    [anon_sym_Vector2] = ACTIONS(523),
    [anon_sym_Vector3] = ACTIONS(523),
    [anon_sym_VectorN] = ACTIONS(523),
    [anon_sym_String] = ACTIONS(523),
    [anon_sym_Pattern] = ACTIONS(523),
    [anon_sym_Array] = ACTIONS(523),
    [anon_sym_Map] = ACTIONS(523),
    [anon_sym_Maybe] = ACTIONS(523),
    [anon_sym_Result] = ACTIONS(523),
    [anon_sym_Id] = ACTIONS(523),
    [anon_sym_Ptr] = ACTIONS(523),
    [anon_sym_Fn] = ACTIONS(525),
    [anon_sym_] = ACTIONS(525),
    [sym_identifier] = ACTIONS(527),
  },
  [81] = {
    [anon_sym_LPAREN] = ACTIONS(529),
    [anon_sym_Bool] = ACTIONS(531),
    [anon_sym_Char] = ACTIONS(531),
    [anon_sym_Int] = ACTIONS(531),
    [anon_sym_Long] = ACTIONS(531),
    [anon_sym_Float] = ACTIONS(531),
    [anon_sym_Double] = ACTIONS(531),
    [anon_sym_Vector2] = ACTIONS(531),
    [anon_sym_Vector3] = ACTIONS(531),
    [anon_sym_VectorN] = ACTIONS(531),
    [anon_sym_String] = ACTIONS(531),
    [anon_sym_Pattern] = ACTIONS(531),
    [anon_sym_Array] = ACTIONS(531),
    [anon_sym_Map] = ACTIONS(531),
    [anon_sym_Maybe] = ACTIONS(531),
    [anon_sym_Result] = ACTIONS(531),
    [anon_sym_Id] = ACTIONS(531),
    [anon_sym_Ptr] = ACTIONS(531),
    [anon_sym_AMP] = ACTIONS(529),
    [anon_sym_AT] = ACTIONS(529),
    [anon_sym_TILDE] = ACTIONS(529),
    [anon_sym_SQUOTE] = ACTIONS(529),
    [sym_identifier] = ACTIONS(531),
  },
  [82] = {
    [sym_complex_type] = STATE(89),
    [aux_sym_fields_repeat1] = STATE(85),
    [anon_sym_LPAREN] = ACTIONS(280),
    [anon_sym_Bool] = ACTIONS(533),
    [anon_sym_Char] = ACTIONS(533),
    [anon_sym_Int] = ACTIONS(533),
    [anon_sym_Long] = ACTIONS(533),
    [anon_sym_Float] = ACTIONS(533),
    [anon_sym_Double] = ACTIONS(533),
    [anon_sym_Vector2] = ACTIONS(533),
    [anon_sym_Vector3] = ACTIONS(533),
    [anon_sym_VectorN] = ACTIONS(533),
    [anon_sym_String] = ACTIONS(533),
    [anon_sym_Pattern] = ACTIONS(533),
    [anon_sym_Array] = ACTIONS(533),
    [anon_sym_Map] = ACTIONS(533),
    [anon_sym_Maybe] = ACTIONS(533),
    [anon_sym_Result] = ACTIONS(533),
    [anon_sym_Id] = ACTIONS(533),
    [anon_sym_Ptr] = ACTIONS(533),
    [anon_sym_RBRACK2] = ACTIONS(535),
    [sym_identifier] = ACTIONS(537),
  },
  [83] = {
    [sym_complex_type] = STATE(89),
    [aux_sym_fields_repeat1] = STATE(86),
    [anon_sym_LPAREN] = ACTIONS(280),
    [anon_sym_Bool] = ACTIONS(533),
    [anon_sym_Char] = ACTIONS(533),
    [anon_sym_Int] = ACTIONS(533),
    [anon_sym_Long] = ACTIONS(533),
    [anon_sym_Float] = ACTIONS(533),
    [anon_sym_Double] = ACTIONS(533),
    [anon_sym_Vector2] = ACTIONS(533),
    [anon_sym_Vector3] = ACTIONS(533),
    [anon_sym_VectorN] = ACTIONS(533),
    [anon_sym_String] = ACTIONS(533),
    [anon_sym_Pattern] = ACTIONS(533),
    [anon_sym_Array] = ACTIONS(533),
    [anon_sym_Map] = ACTIONS(533),
    [anon_sym_Maybe] = ACTIONS(533),
    [anon_sym_Result] = ACTIONS(533),
    [anon_sym_Id] = ACTIONS(533),
    [anon_sym_Ptr] = ACTIONS(533),
    [anon_sym_RBRACK2] = ACTIONS(539),
    [sym_identifier] = ACTIONS(537),
  },
  [84] = {
    [sym_complex_type] = STATE(89),
    [aux_sym_fields_repeat1] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(280),
    [anon_sym_Bool] = ACTIONS(533),
    [anon_sym_Char] = ACTIONS(533),
    [anon_sym_Int] = ACTIONS(533),
    [anon_sym_Long] = ACTIONS(533),
    [anon_sym_Float] = ACTIONS(533),
    [anon_sym_Double] = ACTIONS(533),
    [anon_sym_Vector2] = ACTIONS(533),
    [anon_sym_Vector3] = ACTIONS(533),
    [anon_sym_VectorN] = ACTIONS(533),
    [anon_sym_String] = ACTIONS(533),
    [anon_sym_Pattern] = ACTIONS(533),
    [anon_sym_Array] = ACTIONS(533),
    [anon_sym_Map] = ACTIONS(533),
    [anon_sym_Maybe] = ACTIONS(533),
    [anon_sym_Result] = ACTIONS(533),
    [anon_sym_Id] = ACTIONS(533),
    [anon_sym_Ptr] = ACTIONS(533),
    [anon_sym_RBRACK2] = ACTIONS(541),
    [sym_identifier] = ACTIONS(537),
  },
  [85] = {
    [sym_complex_type] = STATE(89),
    [aux_sym_fields_repeat1] = STATE(86),
    [anon_sym_LPAREN] = ACTIONS(280),
    [anon_sym_Bool] = ACTIONS(533),
    [anon_sym_Char] = ACTIONS(533),
    [anon_sym_Int] = ACTIONS(533),
    [anon_sym_Long] = ACTIONS(533),
    [anon_sym_Float] = ACTIONS(533),
    [anon_sym_Double] = ACTIONS(533),
    [anon_sym_Vector2] = ACTIONS(533),
    [anon_sym_Vector3] = ACTIONS(533),
    [anon_sym_VectorN] = ACTIONS(533),
    [anon_sym_String] = ACTIONS(533),
    [anon_sym_Pattern] = ACTIONS(533),
    [anon_sym_Array] = ACTIONS(533),
    [anon_sym_Map] = ACTIONS(533),
    [anon_sym_Maybe] = ACTIONS(533),
    [anon_sym_Result] = ACTIONS(533),
    [anon_sym_Id] = ACTIONS(533),
    [anon_sym_Ptr] = ACTIONS(533),
    [anon_sym_RBRACK2] = ACTIONS(543),
    [sym_identifier] = ACTIONS(537),
  },
  [86] = {
    [sym_complex_type] = STATE(89),
    [aux_sym_fields_repeat1] = STATE(86),
    [anon_sym_LPAREN] = ACTIONS(545),
    [anon_sym_Bool] = ACTIONS(548),
    [anon_sym_Char] = ACTIONS(548),
    [anon_sym_Int] = ACTIONS(548),
    [anon_sym_Long] = ACTIONS(548),
    [anon_sym_Float] = ACTIONS(548),
    [anon_sym_Double] = ACTIONS(548),
    [anon_sym_Vector2] = ACTIONS(548),
    [anon_sym_Vector3] = ACTIONS(548),
    [anon_sym_VectorN] = ACTIONS(548),
    [anon_sym_String] = ACTIONS(548),
    [anon_sym_Pattern] = ACTIONS(548),
    [anon_sym_Array] = ACTIONS(548),
    [anon_sym_Map] = ACTIONS(548),
    [anon_sym_Maybe] = ACTIONS(548),
    [anon_sym_Result] = ACTIONS(548),
    [anon_sym_Id] = ACTIONS(548),
    [anon_sym_Ptr] = ACTIONS(548),
    [anon_sym_RBRACK2] = ACTIONS(551),
    [sym_identifier] = ACTIONS(553),
  },
  [87] = {
    [sym_type] = STATE(56),
    [sym_complex_type] = STATE(140),
    [anon_sym_LPAREN] = ACTIONS(433),
    [anon_sym_Bool] = ACTIONS(435),
    [anon_sym_Char] = ACTIONS(435),
    [anon_sym_Int] = ACTIONS(435),
    [anon_sym_Long] = ACTIONS(435),
    [anon_sym_Float] = ACTIONS(435),
    [anon_sym_Double] = ACTIONS(435),
    [anon_sym_Vector2] = ACTIONS(435),
    [anon_sym_Vector3] = ACTIONS(435),
    [anon_sym_VectorN] = ACTIONS(435),
    [anon_sym_String] = ACTIONS(435),
    [anon_sym_Pattern] = ACTIONS(435),
    [anon_sym_Array] = ACTIONS(435),
    [anon_sym_Map] = ACTIONS(435),
    [anon_sym_Maybe] = ACTIONS(435),
    [anon_sym_Result] = ACTIONS(435),
    [anon_sym_Id] = ACTIONS(435),
    [anon_sym_Ptr] = ACTIONS(435),
    [sym_identifier] = ACTIONS(437),
  },
  [88] = {
    [anon_sym_LPAREN] = ACTIONS(556),
    [anon_sym_Bool] = ACTIONS(558),
    [anon_sym_Char] = ACTIONS(558),
    [anon_sym_Int] = ACTIONS(558),
    [anon_sym_Long] = ACTIONS(558),
    [anon_sym_Float] = ACTIONS(558),
    [anon_sym_Double] = ACTIONS(558),
    [anon_sym_Vector2] = ACTIONS(558),
    [anon_sym_Vector3] = ACTIONS(558),
    [anon_sym_VectorN] = ACTIONS(558),
    [anon_sym_String] = ACTIONS(558),
    [anon_sym_Pattern] = ACTIONS(558),
    [anon_sym_Array] = ACTIONS(558),
    [anon_sym_Map] = ACTIONS(558),
    [anon_sym_Maybe] = ACTIONS(558),
    [anon_sym_Result] = ACTIONS(558),
    [anon_sym_Id] = ACTIONS(558),
    [anon_sym_Ptr] = ACTIONS(558),
    [anon_sym_COMMA] = ACTIONS(560),
    [anon_sym_RBRACK2] = ACTIONS(556),
    [sym_identifier] = ACTIONS(558),
  },
  [89] = {
    [anon_sym_LPAREN] = ACTIONS(562),
    [anon_sym_Bool] = ACTIONS(564),
    [anon_sym_Char] = ACTIONS(564),
    [anon_sym_Int] = ACTIONS(564),
    [anon_sym_Long] = ACTIONS(564),
    [anon_sym_Float] = ACTIONS(564),
    [anon_sym_Double] = ACTIONS(564),
    [anon_sym_Vector2] = ACTIONS(564),
    [anon_sym_Vector3] = ACTIONS(564),
    [anon_sym_VectorN] = ACTIONS(564),
    [anon_sym_String] = ACTIONS(564),
    [anon_sym_Pattern] = ACTIONS(564),
    [anon_sym_Array] = ACTIONS(564),
    [anon_sym_Map] = ACTIONS(564),
    [anon_sym_Maybe] = ACTIONS(564),
    [anon_sym_Result] = ACTIONS(564),
    [anon_sym_Id] = ACTIONS(564),
    [anon_sym_Ptr] = ACTIONS(564),
    [anon_sym_COMMA] = ACTIONS(566),
    [anon_sym_RBRACK2] = ACTIONS(562),
    [sym_identifier] = ACTIONS(564),
  },
  [90] = {
    [anon_sym_LPAREN] = ACTIONS(568),
    [anon_sym_Bool] = ACTIONS(570),
    [anon_sym_Char] = ACTIONS(570),
    [anon_sym_Int] = ACTIONS(570),
    [anon_sym_Long] = ACTIONS(570),
    [anon_sym_Float] = ACTIONS(570),
    [anon_sym_Double] = ACTIONS(570),
    [anon_sym_Vector2] = ACTIONS(570),
    [anon_sym_Vector3] = ACTIONS(570),
    [anon_sym_VectorN] = ACTIONS(570),
    [anon_sym_String] = ACTIONS(570),
    [anon_sym_Pattern] = ACTIONS(570),
    [anon_sym_Array] = ACTIONS(570),
    [anon_sym_Map] = ACTIONS(570),
    [anon_sym_Maybe] = ACTIONS(570),
    [anon_sym_Result] = ACTIONS(570),
    [anon_sym_Id] = ACTIONS(570),
    [anon_sym_Ptr] = ACTIONS(570),
    [anon_sym_RBRACK2] = ACTIONS(568),
    [sym_identifier] = ACTIONS(570),
  },
  [91] = {
    [aux_sym_complex_type_repeat1] = STATE(91),
    [anon_sym_RPAREN] = ACTIONS(572),
    [anon_sym_Bool] = ACTIONS(574),
    [anon_sym_Char] = ACTIONS(574),
    [anon_sym_Int] = ACTIONS(574),
    [anon_sym_Long] = ACTIONS(574),
    [anon_sym_Float] = ACTIONS(574),
    [anon_sym_Double] = ACTIONS(574),
    [anon_sym_Vector2] = ACTIONS(574),
    [anon_sym_Vector3] = ACTIONS(574),
    [anon_sym_VectorN] = ACTIONS(574),
    [anon_sym_String] = ACTIONS(574),
    [anon_sym_Pattern] = ACTIONS(574),
    [anon_sym_Array] = ACTIONS(574),
    [anon_sym_Map] = ACTIONS(574),
    [anon_sym_Maybe] = ACTIONS(574),
    [anon_sym_Result] = ACTIONS(574),
    [anon_sym_Id] = ACTIONS(574),
    [anon_sym_Ptr] = ACTIONS(574),
    [sym_identifier] = ACTIONS(577),
  },
  [92] = {
    [aux_sym_complex_type_repeat1] = STATE(91),
    [anon_sym_RPAREN] = ACTIONS(580),
    [anon_sym_Bool] = ACTIONS(523),
    [anon_sym_Char] = ACTIONS(523),
    [anon_sym_Int] = ACTIONS(523),
    [anon_sym_Long] = ACTIONS(523),
    [anon_sym_Float] = ACTIONS(523),
    [anon_sym_Double] = ACTIONS(523),
    [anon_sym_Vector2] = ACTIONS(523),
    [anon_sym_Vector3] = ACTIONS(523),
    [anon_sym_VectorN] = ACTIONS(523),
    [anon_sym_String] = ACTIONS(523),
    [anon_sym_Pattern] = ACTIONS(523),
    [anon_sym_Array] = ACTIONS(523),
    [anon_sym_Map] = ACTIONS(523),
    [anon_sym_Maybe] = ACTIONS(523),
    [anon_sym_Result] = ACTIONS(523),
    [anon_sym_Id] = ACTIONS(523),
    [anon_sym_Ptr] = ACTIONS(523),
    [sym_identifier] = ACTIONS(582),
  },
  [93] = {
    [aux_sym_complex_type_repeat1] = STATE(94),
    [anon_sym_RPAREN] = ACTIONS(521),
    [anon_sym_Bool] = ACTIONS(523),
    [anon_sym_Char] = ACTIONS(523),
    [anon_sym_Int] = ACTIONS(523),
    [anon_sym_Long] = ACTIONS(523),
    [anon_sym_Float] = ACTIONS(523),
    [anon_sym_Double] = ACTIONS(523),
    [anon_sym_Vector2] = ACTIONS(523),
    [anon_sym_Vector3] = ACTIONS(523),
    [anon_sym_VectorN] = ACTIONS(523),
    [anon_sym_String] = ACTIONS(523),
    [anon_sym_Pattern] = ACTIONS(523),
    [anon_sym_Array] = ACTIONS(523),
    [anon_sym_Map] = ACTIONS(523),
    [anon_sym_Maybe] = ACTIONS(523),
    [anon_sym_Result] = ACTIONS(523),
    [anon_sym_Id] = ACTIONS(523),
    [anon_sym_Ptr] = ACTIONS(523),
    [sym_identifier] = ACTIONS(527),
  },
  [94] = {
    [aux_sym_complex_type_repeat1] = STATE(91),
    [anon_sym_RPAREN] = ACTIONS(584),
    [anon_sym_Bool] = ACTIONS(523),
    [anon_sym_Char] = ACTIONS(523),
    [anon_sym_Int] = ACTIONS(523),
    [anon_sym_Long] = ACTIONS(523),
    [anon_sym_Float] = ACTIONS(523),
    [anon_sym_Double] = ACTIONS(523),
    [anon_sym_Vector2] = ACTIONS(523),
    [anon_sym_Vector3] = ACTIONS(523),
    [anon_sym_VectorN] = ACTIONS(523),
    [anon_sym_String] = ACTIONS(523),
    [anon_sym_Pattern] = ACTIONS(523),
    [anon_sym_Array] = ACTIONS(523),
    [anon_sym_Map] = ACTIONS(523),
    [anon_sym_Maybe] = ACTIONS(523),
    [anon_sym_Result] = ACTIONS(523),
    [anon_sym_Id] = ACTIONS(523),
    [anon_sym_Ptr] = ACTIONS(523),
    [sym_identifier] = ACTIONS(582),
  },
  [95] = {
    [anon_sym_LPAREN] = ACTIONS(551),
    [anon_sym_Bool] = ACTIONS(586),
    [anon_sym_Char] = ACTIONS(586),
    [anon_sym_Int] = ACTIONS(586),
    [anon_sym_Long] = ACTIONS(586),
    [anon_sym_Float] = ACTIONS(586),
    [anon_sym_Double] = ACTIONS(586),
    [anon_sym_Vector2] = ACTIONS(586),
    [anon_sym_Vector3] = ACTIONS(586),
    [anon_sym_VectorN] = ACTIONS(586),
    [anon_sym_String] = ACTIONS(586),
    [anon_sym_Pattern] = ACTIONS(586),
    [anon_sym_Array] = ACTIONS(586),
    [anon_sym_Map] = ACTIONS(586),
    [anon_sym_Maybe] = ACTIONS(586),
    [anon_sym_Result] = ACTIONS(586),
    [anon_sym_Id] = ACTIONS(586),
    [anon_sym_Ptr] = ACTIONS(586),
    [anon_sym_RBRACK2] = ACTIONS(551),
    [sym_identifier] = ACTIONS(586),
  },
  [96] = {
    [aux_sym_complex_type_repeat1] = STATE(92),
    [anon_sym_RPAREN] = ACTIONS(588),
    [anon_sym_Bool] = ACTIONS(523),
    [anon_sym_Char] = ACTIONS(523),
    [anon_sym_Int] = ACTIONS(523),
    [anon_sym_Long] = ACTIONS(523),
    [anon_sym_Float] = ACTIONS(523),
    [anon_sym_Double] = ACTIONS(523),
    [anon_sym_Vector2] = ACTIONS(523),
    [anon_sym_Vector3] = ACTIONS(523),
    [anon_sym_VectorN] = ACTIONS(523),
    [anon_sym_String] = ACTIONS(523),
    [anon_sym_Pattern] = ACTIONS(523),
    [anon_sym_Array] = ACTIONS(523),
    [anon_sym_Map] = ACTIONS(523),
    [anon_sym_Maybe] = ACTIONS(523),
    [anon_sym_Result] = ACTIONS(523),
    [anon_sym_Id] = ACTIONS(523),
    [anon_sym_Ptr] = ACTIONS(523),
    [sym_identifier] = ACTIONS(590),
  },
  [97] = {
    [sym__literals] = STATE(133),
    [sym_bool_literal] = STATE(133),
    [sym_str_literal] = STATE(133),
    [sym_char_literal] = STATE(133),
    [sym_pattern_literal] = STATE(133),
    [sym_array_expression] = STATE(133),
    [sym_map_expression] = STATE(133),
    [aux_sym_map_expression_repeat1] = STATE(118),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(592),
    [sym_float_literal] = ACTIONS(592),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(594),
    [sym_identifier] = ACTIONS(592),
  },
  [98] = {
    [sym__literals] = STATE(133),
    [sym_bool_literal] = STATE(133),
    [sym_str_literal] = STATE(133),
    [sym_char_literal] = STATE(133),
    [sym_pattern_literal] = STATE(133),
    [sym_array_expression] = STATE(133),
    [sym_map_expression] = STATE(133),
    [aux_sym_map_expression_repeat1] = STATE(118),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(592),
    [sym_float_literal] = ACTIONS(592),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(596),
    [sym_identifier] = ACTIONS(592),
  },
  [99] = {
    [sym__literals] = STATE(102),
    [sym_bool_literal] = STATE(102),
    [sym_str_literal] = STATE(102),
    [sym_char_literal] = STATE(102),
    [sym_pattern_literal] = STATE(102),
    [sym_array_expression] = STATE(102),
    [sym_map_expression] = STATE(102),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK2] = ACTIONS(598),
    [sym_integer_literal] = ACTIONS(600),
    [sym_float_literal] = ACTIONS(600),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_identifier] = ACTIONS(600),
  },
  [100] = {
    [sym__literals] = STATE(111),
    [sym_bool_literal] = STATE(111),
    [sym_str_literal] = STATE(111),
    [sym_char_literal] = STATE(111),
    [sym_pattern_literal] = STATE(111),
    [sym_array_expression] = STATE(111),
    [sym_map_expression] = STATE(111),
    [aux_sym_array_expression_repeat1] = STATE(111),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK2] = ACTIONS(602),
    [sym_integer_literal] = ACTIONS(604),
    [sym_float_literal] = ACTIONS(604),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_identifier] = ACTIONS(604),
  },
  [101] = {
    [anon_sym_LPAREN] = ACTIONS(469),
    [anon_sym_RPAREN] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(469),
    [anon_sym_RBRACK2] = ACTIONS(469),
    [anon_sym_AMP] = ACTIONS(469),
    [anon_sym_AT] = ACTIONS(469),
    [anon_sym_TILDE] = ACTIONS(469),
    [anon_sym_SQUOTE] = ACTIONS(469),
    [sym_integer_literal] = ACTIONS(471),
    [sym_float_literal] = ACTIONS(471),
    [anon_sym_true] = ACTIONS(471),
    [anon_sym_false] = ACTIONS(471),
    [anon_sym_DQUOTE] = ACTIONS(469),
    [anon_sym_BSLASH] = ACTIONS(469),
    [anon_sym_POUND_DQUOTE] = ACTIONS(469),
    [anon_sym_LBRACE] = ACTIONS(469),
    [anon_sym_RBRACE] = ACTIONS(469),
    [anon_sym_COLON] = ACTIONS(469),
    [sym_identifier] = ACTIONS(471),
  },
  [102] = {
    [sym__literals] = STATE(102),
    [sym_bool_literal] = STATE(102),
    [sym_str_literal] = STATE(102),
    [sym_char_literal] = STATE(102),
    [sym_pattern_literal] = STATE(102),
    [sym_array_expression] = STATE(102),
    [sym_map_expression] = STATE(102),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [anon_sym_LBRACK] = ACTIONS(606),
    [anon_sym_RBRACK2] = ACTIONS(609),
    [sym_integer_literal] = ACTIONS(611),
    [sym_float_literal] = ACTIONS(611),
    [anon_sym_true] = ACTIONS(614),
    [anon_sym_false] = ACTIONS(614),
    [anon_sym_DQUOTE] = ACTIONS(617),
    [anon_sym_BSLASH] = ACTIONS(620),
    [anon_sym_POUND_DQUOTE] = ACTIONS(623),
    [anon_sym_LBRACE] = ACTIONS(626),
    [sym_identifier] = ACTIONS(611),
  },
  [103] = {
    [sym__literals] = STATE(115),
    [sym_bool_literal] = STATE(115),
    [sym_str_literal] = STATE(115),
    [sym_char_literal] = STATE(115),
    [sym_pattern_literal] = STATE(115),
    [sym_array_expression] = STATE(115),
    [sym_map_expression] = STATE(115),
    [aux_sym_array_expression_repeat1] = STATE(115),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK2] = ACTIONS(629),
    [sym_integer_literal] = ACTIONS(631),
    [sym_float_literal] = ACTIONS(631),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_identifier] = ACTIONS(631),
  },
  [104] = {
    [sym__literals] = STATE(133),
    [sym_bool_literal] = STATE(133),
    [sym_str_literal] = STATE(133),
    [sym_char_literal] = STATE(133),
    [sym_pattern_literal] = STATE(133),
    [sym_array_expression] = STATE(133),
    [sym_map_expression] = STATE(133),
    [aux_sym_map_expression_repeat1] = STATE(112),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(592),
    [sym_float_literal] = ACTIONS(592),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(633),
    [sym_identifier] = ACTIONS(592),
  },
  [105] = {
    [anon_sym_LPAREN] = ACTIONS(485),
    [anon_sym_RPAREN] = ACTIONS(485),
    [anon_sym_LBRACK] = ACTIONS(485),
    [anon_sym_RBRACK2] = ACTIONS(485),
    [anon_sym_AMP] = ACTIONS(485),
    [anon_sym_AT] = ACTIONS(485),
    [anon_sym_TILDE] = ACTIONS(485),
    [anon_sym_SQUOTE] = ACTIONS(485),
    [sym_integer_literal] = ACTIONS(487),
    [sym_float_literal] = ACTIONS(487),
    [anon_sym_true] = ACTIONS(487),
    [anon_sym_false] = ACTIONS(487),
    [anon_sym_DQUOTE] = ACTIONS(485),
    [anon_sym_BSLASH] = ACTIONS(485),
    [anon_sym_POUND_DQUOTE] = ACTIONS(485),
    [anon_sym_LBRACE] = ACTIONS(485),
    [anon_sym_RBRACE] = ACTIONS(485),
    [anon_sym_COLON] = ACTIONS(485),
    [sym_identifier] = ACTIONS(487),
  },
  [106] = {
    [sym__literals] = STATE(133),
    [sym_bool_literal] = STATE(133),
    [sym_str_literal] = STATE(133),
    [sym_char_literal] = STATE(133),
    [sym_pattern_literal] = STATE(133),
    [sym_array_expression] = STATE(133),
    [sym_map_expression] = STATE(133),
    [aux_sym_map_expression_repeat1] = STATE(98),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(592),
    [sym_float_literal] = ACTIONS(592),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(635),
    [sym_identifier] = ACTIONS(592),
  },
  [107] = {
    [sym__literals] = STATE(99),
    [sym_bool_literal] = STATE(99),
    [sym_str_literal] = STATE(99),
    [sym_char_literal] = STATE(99),
    [sym_pattern_literal] = STATE(99),
    [sym_array_expression] = STATE(99),
    [sym_map_expression] = STATE(99),
    [aux_sym_array_expression_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK2] = ACTIONS(637),
    [sym_integer_literal] = ACTIONS(639),
    [sym_float_literal] = ACTIONS(639),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_identifier] = ACTIONS(639),
  },
  [108] = {
    [anon_sym_RPAREN] = ACTIONS(641),
    [anon_sym_Bool] = ACTIONS(643),
    [anon_sym_Char] = ACTIONS(643),
    [anon_sym_Int] = ACTIONS(643),
    [anon_sym_Long] = ACTIONS(643),
    [anon_sym_Float] = ACTIONS(643),
    [anon_sym_Double] = ACTIONS(643),
    [anon_sym_Vector2] = ACTIONS(643),
    [anon_sym_Vector3] = ACTIONS(643),
    [anon_sym_VectorN] = ACTIONS(643),
    [anon_sym_String] = ACTIONS(643),
    [anon_sym_Pattern] = ACTIONS(643),
    [anon_sym_Array] = ACTIONS(643),
    [anon_sym_Map] = ACTIONS(643),
    [anon_sym_Maybe] = ACTIONS(643),
    [anon_sym_Result] = ACTIONS(643),
    [anon_sym_Id] = ACTIONS(643),
    [anon_sym_Ptr] = ACTIONS(643),
    [sym_identifier] = ACTIONS(643),
  },
  [109] = {
    [anon_sym_LPAREN] = ACTIONS(509),
    [anon_sym_RPAREN] = ACTIONS(509),
    [anon_sym_LBRACK] = ACTIONS(509),
    [anon_sym_RBRACK2] = ACTIONS(509),
    [anon_sym_AMP] = ACTIONS(509),
    [anon_sym_AT] = ACTIONS(509),
    [anon_sym_TILDE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(509),
    [sym_integer_literal] = ACTIONS(511),
    [sym_float_literal] = ACTIONS(511),
    [anon_sym_true] = ACTIONS(511),
    [anon_sym_false] = ACTIONS(511),
    [anon_sym_DQUOTE] = ACTIONS(509),
    [anon_sym_BSLASH] = ACTIONS(509),
    [anon_sym_POUND_DQUOTE] = ACTIONS(509),
    [anon_sym_LBRACE] = ACTIONS(509),
    [anon_sym_RBRACE] = ACTIONS(509),
    [anon_sym_COLON] = ACTIONS(509),
    [sym_identifier] = ACTIONS(511),
  },
  [110] = {
    [sym__literals] = STATE(133),
    [sym_bool_literal] = STATE(133),
    [sym_str_literal] = STATE(133),
    [sym_char_literal] = STATE(133),
    [sym_pattern_literal] = STATE(133),
    [sym_array_expression] = STATE(133),
    [sym_map_expression] = STATE(133),
    [aux_sym_map_expression_repeat1] = STATE(97),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(592),
    [sym_float_literal] = ACTIONS(592),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(645),
    [sym_identifier] = ACTIONS(592),
  },
  [111] = {
    [sym__literals] = STATE(102),
    [sym_bool_literal] = STATE(102),
    [sym_str_literal] = STATE(102),
    [sym_char_literal] = STATE(102),
    [sym_pattern_literal] = STATE(102),
    [sym_array_expression] = STATE(102),
    [sym_map_expression] = STATE(102),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK2] = ACTIONS(647),
    [sym_integer_literal] = ACTIONS(600),
    [sym_float_literal] = ACTIONS(600),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_identifier] = ACTIONS(600),
  },
  [112] = {
    [sym__literals] = STATE(133),
    [sym_bool_literal] = STATE(133),
    [sym_str_literal] = STATE(133),
    [sym_char_literal] = STATE(133),
    [sym_pattern_literal] = STATE(133),
    [sym_array_expression] = STATE(133),
    [sym_map_expression] = STATE(133),
    [aux_sym_map_expression_repeat1] = STATE(118),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(592),
    [sym_float_literal] = ACTIONS(592),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(649),
    [sym_identifier] = ACTIONS(592),
  },
  [113] = {
    [anon_sym_LPAREN] = ACTIONS(489),
    [anon_sym_RPAREN] = ACTIONS(489),
    [anon_sym_LBRACK] = ACTIONS(489),
    [anon_sym_RBRACK2] = ACTIONS(489),
    [anon_sym_AMP] = ACTIONS(489),
    [anon_sym_AT] = ACTIONS(489),
    [anon_sym_TILDE] = ACTIONS(489),
    [anon_sym_SQUOTE] = ACTIONS(489),
    [sym_integer_literal] = ACTIONS(491),
    [sym_float_literal] = ACTIONS(491),
    [anon_sym_true] = ACTIONS(491),
    [anon_sym_false] = ACTIONS(491),
    [anon_sym_DQUOTE] = ACTIONS(489),
    [anon_sym_BSLASH] = ACTIONS(489),
    [anon_sym_POUND_DQUOTE] = ACTIONS(489),
    [anon_sym_LBRACE] = ACTIONS(489),
    [anon_sym_RBRACE] = ACTIONS(489),
    [anon_sym_COLON] = ACTIONS(489),
    [sym_identifier] = ACTIONS(491),
  },
  [114] = {
    [anon_sym_LPAREN] = ACTIONS(473),
    [anon_sym_RPAREN] = ACTIONS(473),
    [anon_sym_LBRACK] = ACTIONS(473),
    [anon_sym_RBRACK2] = ACTIONS(473),
    [anon_sym_AMP] = ACTIONS(473),
    [anon_sym_AT] = ACTIONS(473),
    [anon_sym_TILDE] = ACTIONS(473),
    [anon_sym_SQUOTE] = ACTIONS(473),
    [sym_integer_literal] = ACTIONS(475),
    [sym_float_literal] = ACTIONS(475),
    [anon_sym_true] = ACTIONS(475),
    [anon_sym_false] = ACTIONS(475),
    [anon_sym_DQUOTE] = ACTIONS(473),
    [anon_sym_BSLASH] = ACTIONS(473),
    [anon_sym_POUND_DQUOTE] = ACTIONS(473),
    [anon_sym_LBRACE] = ACTIONS(473),
    [anon_sym_RBRACE] = ACTIONS(473),
    [anon_sym_COLON] = ACTIONS(473),
    [sym_identifier] = ACTIONS(475),
  },
  [115] = {
    [sym__literals] = STATE(102),
    [sym_bool_literal] = STATE(102),
    [sym_str_literal] = STATE(102),
    [sym_char_literal] = STATE(102),
    [sym_pattern_literal] = STATE(102),
    [sym_array_expression] = STATE(102),
    [sym_map_expression] = STATE(102),
    [aux_sym_array_expression_repeat1] = STATE(102),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK2] = ACTIONS(651),
    [sym_integer_literal] = ACTIONS(600),
    [sym_float_literal] = ACTIONS(600),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_identifier] = ACTIONS(600),
  },
  [116] = {
    [anon_sym_LPAREN] = ACTIONS(513),
    [anon_sym_RPAREN] = ACTIONS(513),
    [anon_sym_LBRACK] = ACTIONS(513),
    [anon_sym_RBRACK2] = ACTIONS(513),
    [anon_sym_AMP] = ACTIONS(513),
    [anon_sym_AT] = ACTIONS(513),
    [anon_sym_TILDE] = ACTIONS(513),
    [anon_sym_SQUOTE] = ACTIONS(513),
    [sym_integer_literal] = ACTIONS(515),
    [sym_float_literal] = ACTIONS(515),
    [anon_sym_true] = ACTIONS(515),
    [anon_sym_false] = ACTIONS(515),
    [anon_sym_DQUOTE] = ACTIONS(513),
    [anon_sym_BSLASH] = ACTIONS(513),
    [anon_sym_POUND_DQUOTE] = ACTIONS(513),
    [anon_sym_LBRACE] = ACTIONS(513),
    [anon_sym_RBRACE] = ACTIONS(513),
    [anon_sym_COLON] = ACTIONS(513),
    [sym_identifier] = ACTIONS(515),
  },
  [117] = {
    [anon_sym_LPAREN] = ACTIONS(457),
    [anon_sym_RPAREN] = ACTIONS(457),
    [anon_sym_LBRACK] = ACTIONS(457),
    [anon_sym_RBRACK2] = ACTIONS(457),
    [anon_sym_AMP] = ACTIONS(457),
    [anon_sym_AT] = ACTIONS(457),
    [anon_sym_TILDE] = ACTIONS(457),
    [anon_sym_SQUOTE] = ACTIONS(457),
    [sym_integer_literal] = ACTIONS(459),
    [sym_float_literal] = ACTIONS(459),
    [anon_sym_true] = ACTIONS(459),
    [anon_sym_false] = ACTIONS(459),
    [anon_sym_DQUOTE] = ACTIONS(457),
    [anon_sym_BSLASH] = ACTIONS(457),
    [anon_sym_POUND_DQUOTE] = ACTIONS(457),
    [anon_sym_LBRACE] = ACTIONS(457),
    [anon_sym_RBRACE] = ACTIONS(457),
    [anon_sym_COLON] = ACTIONS(457),
    [sym_identifier] = ACTIONS(459),
  },
  [118] = {
    [sym__literals] = STATE(133),
    [sym_bool_literal] = STATE(133),
    [sym_str_literal] = STATE(133),
    [sym_char_literal] = STATE(133),
    [sym_pattern_literal] = STATE(133),
    [sym_array_expression] = STATE(133),
    [sym_map_expression] = STATE(133),
    [aux_sym_map_expression_repeat1] = STATE(118),
    [anon_sym_LBRACK] = ACTIONS(653),
    [sym_integer_literal] = ACTIONS(656),
    [sym_float_literal] = ACTIONS(656),
    [anon_sym_true] = ACTIONS(659),
    [anon_sym_false] = ACTIONS(659),
    [anon_sym_DQUOTE] = ACTIONS(662),
    [anon_sym_BSLASH] = ACTIONS(665),
    [anon_sym_POUND_DQUOTE] = ACTIONS(668),
    [anon_sym_LBRACE] = ACTIONS(671),
    [anon_sym_RBRACE] = ACTIONS(674),
    [sym_identifier] = ACTIONS(656),
  },
  [119] = {
    [anon_sym_LPAREN] = ACTIONS(465),
    [anon_sym_RPAREN] = ACTIONS(465),
    [anon_sym_LBRACK] = ACTIONS(465),
    [anon_sym_RBRACK2] = ACTIONS(465),
    [anon_sym_AMP] = ACTIONS(465),
    [anon_sym_AT] = ACTIONS(465),
    [anon_sym_TILDE] = ACTIONS(465),
    [anon_sym_SQUOTE] = ACTIONS(465),
    [sym_integer_literal] = ACTIONS(467),
    [sym_float_literal] = ACTIONS(467),
    [anon_sym_true] = ACTIONS(467),
    [anon_sym_false] = ACTIONS(467),
    [anon_sym_DQUOTE] = ACTIONS(465),
    [anon_sym_BSLASH] = ACTIONS(465),
    [anon_sym_POUND_DQUOTE] = ACTIONS(465),
    [anon_sym_LBRACE] = ACTIONS(465),
    [anon_sym_RBRACE] = ACTIONS(465),
    [anon_sym_COLON] = ACTIONS(465),
    [sym_identifier] = ACTIONS(467),
  },
  [120] = {
    [anon_sym_LPAREN] = ACTIONS(477),
    [anon_sym_RPAREN] = ACTIONS(477),
    [anon_sym_LBRACK] = ACTIONS(477),
    [anon_sym_RBRACK2] = ACTIONS(477),
    [anon_sym_AMP] = ACTIONS(477),
    [anon_sym_AT] = ACTIONS(477),
    [anon_sym_TILDE] = ACTIONS(477),
    [anon_sym_SQUOTE] = ACTIONS(477),
    [sym_integer_literal] = ACTIONS(479),
    [sym_float_literal] = ACTIONS(479),
    [anon_sym_true] = ACTIONS(479),
    [anon_sym_false] = ACTIONS(479),
    [anon_sym_DQUOTE] = ACTIONS(477),
    [anon_sym_BSLASH] = ACTIONS(477),
    [anon_sym_POUND_DQUOTE] = ACTIONS(477),
    [anon_sym_LBRACE] = ACTIONS(477),
    [anon_sym_RBRACE] = ACTIONS(477),
    [anon_sym_COLON] = ACTIONS(477),
    [sym_identifier] = ACTIONS(479),
  },
  [121] = {
    [anon_sym_LPAREN] = ACTIONS(453),
    [anon_sym_RPAREN] = ACTIONS(453),
    [anon_sym_LBRACK] = ACTIONS(453),
    [anon_sym_RBRACK2] = ACTIONS(453),
    [anon_sym_AMP] = ACTIONS(453),
    [anon_sym_AT] = ACTIONS(453),
    [anon_sym_TILDE] = ACTIONS(453),
    [anon_sym_SQUOTE] = ACTIONS(453),
    [sym_integer_literal] = ACTIONS(455),
    [sym_float_literal] = ACTIONS(455),
    [anon_sym_true] = ACTIONS(455),
    [anon_sym_false] = ACTIONS(455),
    [anon_sym_DQUOTE] = ACTIONS(453),
    [anon_sym_BSLASH] = ACTIONS(453),
    [anon_sym_POUND_DQUOTE] = ACTIONS(453),
    [anon_sym_LBRACE] = ACTIONS(453),
    [anon_sym_RBRACE] = ACTIONS(453),
    [anon_sym_COLON] = ACTIONS(453),
    [sym_identifier] = ACTIONS(455),
  },
  [122] = {
    [anon_sym_LPAREN] = ACTIONS(481),
    [anon_sym_RPAREN] = ACTIONS(481),
    [anon_sym_LBRACK] = ACTIONS(481),
    [anon_sym_AMP] = ACTIONS(481),
    [anon_sym_AT] = ACTIONS(481),
    [anon_sym_TILDE] = ACTIONS(481),
    [anon_sym_SQUOTE] = ACTIONS(481),
    [sym_integer_literal] = ACTIONS(483),
    [sym_float_literal] = ACTIONS(483),
    [anon_sym_true] = ACTIONS(483),
    [anon_sym_false] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(481),
    [anon_sym_BSLASH] = ACTIONS(481),
    [anon_sym_POUND_DQUOTE] = ACTIONS(481),
    [anon_sym_LBRACE] = ACTIONS(481),
    [anon_sym_COLON] = ACTIONS(481),
    [sym_identifier] = ACTIONS(483),
  },
  [123] = {
    [anon_sym_LPAREN] = ACTIONS(676),
    [anon_sym_RPAREN] = ACTIONS(676),
    [anon_sym_LBRACK] = ACTIONS(676),
    [anon_sym_AMP] = ACTIONS(676),
    [anon_sym_AT] = ACTIONS(676),
    [anon_sym_TILDE] = ACTIONS(676),
    [anon_sym_SQUOTE] = ACTIONS(676),
    [sym_integer_literal] = ACTIONS(678),
    [sym_float_literal] = ACTIONS(678),
    [anon_sym_true] = ACTIONS(678),
    [anon_sym_false] = ACTIONS(678),
    [anon_sym_DQUOTE] = ACTIONS(676),
    [anon_sym_BSLASH] = ACTIONS(676),
    [anon_sym_POUND_DQUOTE] = ACTIONS(676),
    [anon_sym_LBRACE] = ACTIONS(676),
    [anon_sym_COLON] = ACTIONS(676),
    [sym_identifier] = ACTIONS(678),
  },
  [124] = {
    [anon_sym_LPAREN] = ACTIONS(680),
    [anon_sym_RPAREN] = ACTIONS(680),
    [anon_sym_LBRACK] = ACTIONS(680),
    [anon_sym_AMP] = ACTIONS(680),
    [anon_sym_AT] = ACTIONS(680),
    [anon_sym_TILDE] = ACTIONS(680),
    [anon_sym_SQUOTE] = ACTIONS(680),
    [sym_integer_literal] = ACTIONS(682),
    [sym_float_literal] = ACTIONS(682),
    [anon_sym_true] = ACTIONS(682),
    [anon_sym_false] = ACTIONS(682),
    [anon_sym_DQUOTE] = ACTIONS(680),
    [anon_sym_BSLASH] = ACTIONS(680),
    [anon_sym_POUND_DQUOTE] = ACTIONS(680),
    [anon_sym_LBRACE] = ACTIONS(680),
    [anon_sym_COLON] = ACTIONS(680),
    [sym_identifier] = ACTIONS(682),
  },
  [125] = {
    [anon_sym_LPAREN] = ACTIONS(505),
    [anon_sym_RPAREN] = ACTIONS(505),
    [anon_sym_LBRACK] = ACTIONS(505),
    [anon_sym_AMP] = ACTIONS(505),
    [anon_sym_AT] = ACTIONS(505),
    [anon_sym_TILDE] = ACTIONS(505),
    [anon_sym_SQUOTE] = ACTIONS(505),
    [sym_integer_literal] = ACTIONS(507),
    [sym_float_literal] = ACTIONS(507),
    [anon_sym_true] = ACTIONS(507),
    [anon_sym_false] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(505),
    [anon_sym_BSLASH] = ACTIONS(505),
    [anon_sym_POUND_DQUOTE] = ACTIONS(505),
    [anon_sym_LBRACE] = ACTIONS(505),
    [anon_sym_COLON] = ACTIONS(505),
    [sym_identifier] = ACTIONS(507),
  },
  [126] = {
    [anon_sym_LPAREN] = ACTIONS(501),
    [anon_sym_RPAREN] = ACTIONS(501),
    [anon_sym_LBRACK] = ACTIONS(501),
    [anon_sym_AMP] = ACTIONS(501),
    [anon_sym_AT] = ACTIONS(501),
    [anon_sym_TILDE] = ACTIONS(501),
    [anon_sym_SQUOTE] = ACTIONS(501),
    [sym_integer_literal] = ACTIONS(503),
    [sym_float_literal] = ACTIONS(503),
    [anon_sym_true] = ACTIONS(503),
    [anon_sym_false] = ACTIONS(503),
    [anon_sym_DQUOTE] = ACTIONS(501),
    [anon_sym_BSLASH] = ACTIONS(501),
    [anon_sym_POUND_DQUOTE] = ACTIONS(501),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_COLON] = ACTIONS(501),
    [sym_identifier] = ACTIONS(503),
  },
  [127] = {
    [anon_sym_LPAREN] = ACTIONS(445),
    [anon_sym_RPAREN] = ACTIONS(445),
    [anon_sym_LBRACK] = ACTIONS(445),
    [anon_sym_AMP] = ACTIONS(445),
    [anon_sym_AT] = ACTIONS(445),
    [anon_sym_TILDE] = ACTIONS(445),
    [anon_sym_SQUOTE] = ACTIONS(445),
    [sym_integer_literal] = ACTIONS(447),
    [sym_float_literal] = ACTIONS(447),
    [anon_sym_true] = ACTIONS(447),
    [anon_sym_false] = ACTIONS(447),
    [anon_sym_DQUOTE] = ACTIONS(445),
    [anon_sym_BSLASH] = ACTIONS(445),
    [anon_sym_POUND_DQUOTE] = ACTIONS(445),
    [anon_sym_LBRACE] = ACTIONS(445),
    [anon_sym_COLON] = ACTIONS(445),
    [sym_identifier] = ACTIONS(447),
  },
  [128] = {
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_RPAREN] = ACTIONS(497),
    [anon_sym_LBRACK] = ACTIONS(497),
    [anon_sym_AMP] = ACTIONS(497),
    [anon_sym_AT] = ACTIONS(497),
    [anon_sym_TILDE] = ACTIONS(497),
    [anon_sym_SQUOTE] = ACTIONS(497),
    [sym_integer_literal] = ACTIONS(499),
    [sym_float_literal] = ACTIONS(499),
    [anon_sym_true] = ACTIONS(499),
    [anon_sym_false] = ACTIONS(499),
    [anon_sym_DQUOTE] = ACTIONS(497),
    [anon_sym_BSLASH] = ACTIONS(497),
    [anon_sym_POUND_DQUOTE] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_COLON] = ACTIONS(497),
    [sym_identifier] = ACTIONS(499),
  },
  [129] = {
    [anon_sym_LPAREN] = ACTIONS(684),
    [anon_sym_RPAREN] = ACTIONS(684),
    [anon_sym_LBRACK] = ACTIONS(684),
    [anon_sym_AMP] = ACTIONS(684),
    [anon_sym_AT] = ACTIONS(684),
    [anon_sym_TILDE] = ACTIONS(684),
    [anon_sym_SQUOTE] = ACTIONS(684),
    [sym_integer_literal] = ACTIONS(686),
    [sym_float_literal] = ACTIONS(686),
    [anon_sym_true] = ACTIONS(686),
    [anon_sym_false] = ACTIONS(686),
    [anon_sym_DQUOTE] = ACTIONS(684),
    [anon_sym_BSLASH] = ACTIONS(684),
    [anon_sym_POUND_DQUOTE] = ACTIONS(684),
    [anon_sym_LBRACE] = ACTIONS(684),
    [anon_sym_COLON] = ACTIONS(684),
    [sym_identifier] = ACTIONS(686),
  },
  [130] = {
    [anon_sym_LPAREN] = ACTIONS(493),
    [anon_sym_RPAREN] = ACTIONS(493),
    [anon_sym_LBRACK] = ACTIONS(493),
    [anon_sym_AMP] = ACTIONS(493),
    [anon_sym_AT] = ACTIONS(493),
    [anon_sym_TILDE] = ACTIONS(493),
    [anon_sym_SQUOTE] = ACTIONS(493),
    [sym_integer_literal] = ACTIONS(495),
    [sym_float_literal] = ACTIONS(495),
    [anon_sym_true] = ACTIONS(495),
    [anon_sym_false] = ACTIONS(495),
    [anon_sym_DQUOTE] = ACTIONS(493),
    [anon_sym_BSLASH] = ACTIONS(493),
    [anon_sym_POUND_DQUOTE] = ACTIONS(493),
    [anon_sym_LBRACE] = ACTIONS(493),
    [anon_sym_COLON] = ACTIONS(493),
    [sym_identifier] = ACTIONS(495),
  },
  [131] = {
    [anon_sym_LPAREN] = ACTIONS(688),
    [anon_sym_RPAREN] = ACTIONS(688),
    [anon_sym_LBRACK] = ACTIONS(688),
    [anon_sym_AMP] = ACTIONS(688),
    [anon_sym_AT] = ACTIONS(688),
    [anon_sym_TILDE] = ACTIONS(688),
    [anon_sym_SQUOTE] = ACTIONS(688),
    [sym_integer_literal] = ACTIONS(690),
    [sym_float_literal] = ACTIONS(690),
    [anon_sym_true] = ACTIONS(690),
    [anon_sym_false] = ACTIONS(690),
    [anon_sym_DQUOTE] = ACTIONS(688),
    [anon_sym_BSLASH] = ACTIONS(688),
    [anon_sym_POUND_DQUOTE] = ACTIONS(688),
    [anon_sym_LBRACE] = ACTIONS(688),
    [anon_sym_COLON] = ACTIONS(688),
    [sym_identifier] = ACTIONS(690),
  },
  [132] = {
    [anon_sym_LPAREN] = ACTIONS(692),
    [anon_sym_RPAREN] = ACTIONS(692),
    [anon_sym_LBRACK] = ACTIONS(692),
    [anon_sym_AMP] = ACTIONS(692),
    [anon_sym_AT] = ACTIONS(692),
    [anon_sym_TILDE] = ACTIONS(692),
    [anon_sym_SQUOTE] = ACTIONS(692),
    [sym_integer_literal] = ACTIONS(694),
    [sym_float_literal] = ACTIONS(694),
    [anon_sym_true] = ACTIONS(694),
    [anon_sym_false] = ACTIONS(694),
    [anon_sym_DQUOTE] = ACTIONS(692),
    [anon_sym_BSLASH] = ACTIONS(692),
    [anon_sym_POUND_DQUOTE] = ACTIONS(692),
    [anon_sym_LBRACE] = ACTIONS(692),
    [anon_sym_COLON] = ACTIONS(692),
    [sym_identifier] = ACTIONS(694),
  },
  [133] = {
    [sym__literals] = STATE(142),
    [sym_bool_literal] = STATE(142),
    [sym_str_literal] = STATE(142),
    [sym_char_literal] = STATE(142),
    [sym_pattern_literal] = STATE(142),
    [sym_array_expression] = STATE(142),
    [sym_map_expression] = STATE(142),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(696),
    [sym_float_literal] = ACTIONS(696),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(71),
    [anon_sym_POUND_DQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_identifier] = ACTIONS(696),
  },
  [134] = {
    [anon_sym_LPAREN] = ACTIONS(302),
    [anon_sym_RPAREN] = ACTIONS(302),
    [anon_sym_LBRACK] = ACTIONS(302),
    [anon_sym_AMP] = ACTIONS(302),
    [anon_sym_AT] = ACTIONS(302),
    [anon_sym_TILDE] = ACTIONS(302),
    [anon_sym_SQUOTE] = ACTIONS(302),
    [sym_integer_literal] = ACTIONS(304),
    [sym_float_literal] = ACTIONS(304),
    [anon_sym_true] = ACTIONS(304),
    [anon_sym_false] = ACTIONS(304),
    [anon_sym_DQUOTE] = ACTIONS(302),
    [anon_sym_BSLASH] = ACTIONS(302),
    [anon_sym_POUND_DQUOTE] = ACTIONS(302),
    [anon_sym_LBRACE] = ACTIONS(302),
    [anon_sym_COLON] = ACTIONS(302),
    [sym_identifier] = ACTIONS(304),
  },
  [135] = {
    [anon_sym_LPAREN] = ACTIONS(698),
    [anon_sym_RPAREN] = ACTIONS(698),
    [anon_sym_LBRACK] = ACTIONS(698),
    [anon_sym_AMP] = ACTIONS(698),
    [anon_sym_AT] = ACTIONS(698),
    [anon_sym_TILDE] = ACTIONS(698),
    [anon_sym_SQUOTE] = ACTIONS(698),
    [sym_integer_literal] = ACTIONS(700),
    [sym_float_literal] = ACTIONS(700),
    [anon_sym_true] = ACTIONS(700),
    [anon_sym_false] = ACTIONS(700),
    [anon_sym_DQUOTE] = ACTIONS(698),
    [anon_sym_BSLASH] = ACTIONS(698),
    [anon_sym_POUND_DQUOTE] = ACTIONS(698),
    [anon_sym_LBRACE] = ACTIONS(698),
    [anon_sym_COLON] = ACTIONS(698),
    [sym_identifier] = ACTIONS(700),
  },
  [136] = {
    [anon_sym_LPAREN] = ACTIONS(461),
    [anon_sym_RPAREN] = ACTIONS(461),
    [anon_sym_LBRACK] = ACTIONS(461),
    [anon_sym_AMP] = ACTIONS(461),
    [anon_sym_AT] = ACTIONS(461),
    [anon_sym_TILDE] = ACTIONS(461),
    [anon_sym_SQUOTE] = ACTIONS(461),
    [sym_integer_literal] = ACTIONS(463),
    [sym_float_literal] = ACTIONS(463),
    [anon_sym_true] = ACTIONS(463),
    [anon_sym_false] = ACTIONS(463),
    [anon_sym_DQUOTE] = ACTIONS(461),
    [anon_sym_BSLASH] = ACTIONS(461),
    [anon_sym_POUND_DQUOTE] = ACTIONS(461),
    [anon_sym_LBRACE] = ACTIONS(461),
    [anon_sym_COLON] = ACTIONS(461),
    [sym_identifier] = ACTIONS(463),
  },
  [137] = {
    [anon_sym_LPAREN] = ACTIONS(702),
    [anon_sym_RPAREN] = ACTIONS(702),
    [anon_sym_LBRACK] = ACTIONS(702),
    [anon_sym_AMP] = ACTIONS(702),
    [anon_sym_AT] = ACTIONS(702),
    [anon_sym_TILDE] = ACTIONS(702),
    [anon_sym_SQUOTE] = ACTIONS(702),
    [sym_integer_literal] = ACTIONS(704),
    [sym_float_literal] = ACTIONS(704),
    [anon_sym_true] = ACTIONS(704),
    [anon_sym_false] = ACTIONS(704),
    [anon_sym_DQUOTE] = ACTIONS(702),
    [anon_sym_BSLASH] = ACTIONS(702),
    [anon_sym_POUND_DQUOTE] = ACTIONS(702),
    [anon_sym_LBRACE] = ACTIONS(702),
    [anon_sym_COLON] = ACTIONS(702),
    [sym_identifier] = ACTIONS(704),
  },
  [138] = {
    [anon_sym_LPAREN] = ACTIONS(441),
    [anon_sym_RPAREN] = ACTIONS(441),
    [anon_sym_LBRACK] = ACTIONS(441),
    [anon_sym_AMP] = ACTIONS(441),
    [anon_sym_AT] = ACTIONS(441),
    [anon_sym_TILDE] = ACTIONS(441),
    [anon_sym_SQUOTE] = ACTIONS(441),
    [sym_integer_literal] = ACTIONS(443),
    [sym_float_literal] = ACTIONS(443),
    [anon_sym_true] = ACTIONS(443),
    [anon_sym_false] = ACTIONS(443),
    [anon_sym_DQUOTE] = ACTIONS(441),
    [anon_sym_BSLASH] = ACTIONS(441),
    [anon_sym_POUND_DQUOTE] = ACTIONS(441),
    [anon_sym_LBRACE] = ACTIONS(441),
    [anon_sym_COLON] = ACTIONS(441),
    [sym_identifier] = ACTIONS(443),
  },
  [139] = {
    [anon_sym_LPAREN] = ACTIONS(706),
    [anon_sym_RPAREN] = ACTIONS(706),
    [anon_sym_LBRACK] = ACTIONS(706),
    [anon_sym_AMP] = ACTIONS(706),
    [anon_sym_AT] = ACTIONS(706),
    [anon_sym_TILDE] = ACTIONS(706),
    [anon_sym_SQUOTE] = ACTIONS(706),
    [sym_integer_literal] = ACTIONS(708),
    [sym_float_literal] = ACTIONS(708),
    [anon_sym_true] = ACTIONS(708),
    [anon_sym_false] = ACTIONS(708),
    [anon_sym_DQUOTE] = ACTIONS(706),
    [anon_sym_BSLASH] = ACTIONS(706),
    [anon_sym_POUND_DQUOTE] = ACTIONS(706),
    [anon_sym_LBRACE] = ACTIONS(706),
    [anon_sym_COLON] = ACTIONS(706),
    [sym_identifier] = ACTIONS(708),
  },
  [140] = {
    [anon_sym_LPAREN] = ACTIONS(449),
    [anon_sym_RPAREN] = ACTIONS(449),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_AMP] = ACTIONS(449),
    [anon_sym_AT] = ACTIONS(449),
    [anon_sym_TILDE] = ACTIONS(449),
    [anon_sym_SQUOTE] = ACTIONS(449),
    [sym_integer_literal] = ACTIONS(451),
    [sym_float_literal] = ACTIONS(451),
    [anon_sym_true] = ACTIONS(451),
    [anon_sym_false] = ACTIONS(451),
    [anon_sym_DQUOTE] = ACTIONS(449),
    [anon_sym_BSLASH] = ACTIONS(449),
    [anon_sym_POUND_DQUOTE] = ACTIONS(449),
    [anon_sym_LBRACE] = ACTIONS(449),
    [anon_sym_COLON] = ACTIONS(449),
    [sym_identifier] = ACTIONS(451),
  },
  [141] = {
    [anon_sym_LPAREN] = ACTIONS(710),
    [anon_sym_RPAREN] = ACTIONS(710),
    [anon_sym_LBRACK] = ACTIONS(710),
    [anon_sym_AMP] = ACTIONS(710),
    [anon_sym_AT] = ACTIONS(710),
    [anon_sym_TILDE] = ACTIONS(710),
    [anon_sym_SQUOTE] = ACTIONS(710),
    [sym_integer_literal] = ACTIONS(712),
    [sym_float_literal] = ACTIONS(712),
    [anon_sym_true] = ACTIONS(712),
    [anon_sym_false] = ACTIONS(712),
    [anon_sym_DQUOTE] = ACTIONS(710),
    [anon_sym_BSLASH] = ACTIONS(710),
    [anon_sym_POUND_DQUOTE] = ACTIONS(710),
    [anon_sym_LBRACE] = ACTIONS(710),
    [anon_sym_COLON] = ACTIONS(710),
    [sym_identifier] = ACTIONS(712),
  },
  [142] = {
    [anon_sym_LBRACK] = ACTIONS(714),
    [sym_integer_literal] = ACTIONS(716),
    [sym_float_literal] = ACTIONS(716),
    [anon_sym_true] = ACTIONS(716),
    [anon_sym_false] = ACTIONS(716),
    [anon_sym_DQUOTE] = ACTIONS(714),
    [anon_sym_BSLASH] = ACTIONS(714),
    [anon_sym_POUND_DQUOTE] = ACTIONS(714),
    [anon_sym_LBRACE] = ACTIONS(714),
    [anon_sym_RBRACE] = ACTIONS(714),
    [sym_identifier] = ACTIONS(716),
  },
  [143] = {
    [sym_symbol] = STATE(146),
    [aux_sym_parameters_repeat1] = STATE(146),
    [anon_sym_RBRACK2] = ACTIONS(718),
    [anon_sym_COLON] = ACTIONS(720),
    [sym_identifier] = ACTIONS(722),
  },
  [144] = {
    [sym_symbol] = STATE(143),
    [aux_sym_parameters_repeat1] = STATE(143),
    [anon_sym_RBRACK2] = ACTIONS(724),
    [anon_sym_COLON] = ACTIONS(720),
    [sym_identifier] = ACTIONS(726),
  },
  [145] = {
    [sym__deftype1] = STATE(204),
    [sym__deftype2] = STATE(204),
    [sym__name_deftypes] = STATE(147),
    [anon_sym_LPAREN] = ACTIONS(728),
    [sym_identifier] = ACTIONS(730),
  },
  [146] = {
    [sym_symbol] = STATE(146),
    [aux_sym_parameters_repeat1] = STATE(146),
    [anon_sym_RBRACK2] = ACTIONS(732),
    [anon_sym_COLON] = ACTIONS(734),
    [sym_identifier] = ACTIONS(737),
  },
  [147] = {
    [sym_fields] = STATE(211),
    [aux_sym__deftype2_repeat1] = STATE(167),
    [anon_sym_LPAREN] = ACTIONS(740),
    [anon_sym_RPAREN] = ACTIONS(742),
    [anon_sym_LBRACK] = ACTIONS(744),
  },
  [148] = {
    [aux_sym_str_literal_repeat1] = STATE(157),
    [aux_sym_str_literal_token1] = ACTIONS(746),
    [anon_sym_DQUOTE2] = ACTIONS(748),
    [sym_escape_sequence] = ACTIONS(750),
  },
  [149] = {
    [aux_sym_str_literal_repeat1] = STATE(149),
    [aux_sym_str_literal_token1] = ACTIONS(752),
    [anon_sym_DQUOTE2] = ACTIONS(755),
    [sym_escape_sequence] = ACTIONS(757),
  },
  [150] = {
    [aux_sym_str_literal_repeat1] = STATE(149),
    [aux_sym_str_literal_token1] = ACTIONS(760),
    [anon_sym_DQUOTE2] = ACTIONS(762),
    [sym_escape_sequence] = ACTIONS(764),
  },
  [151] = {
    [aux_sym_str_literal_repeat1] = STATE(149),
    [aux_sym_str_literal_token1] = ACTIONS(760),
    [anon_sym_DQUOTE2] = ACTIONS(766),
    [sym_escape_sequence] = ACTIONS(764),
  },
  [152] = {
    [aux_sym_str_literal_repeat1] = STATE(159),
    [aux_sym_str_literal_token1] = ACTIONS(768),
    [anon_sym_DQUOTE2] = ACTIONS(770),
    [sym_escape_sequence] = ACTIONS(772),
  },
  [153] = {
    [aux_sym_str_literal_repeat1] = STATE(149),
    [aux_sym_str_literal_token1] = ACTIONS(760),
    [anon_sym_DQUOTE2] = ACTIONS(774),
    [sym_escape_sequence] = ACTIONS(764),
  },
  [154] = {
    [aux_sym_str_literal_repeat1] = STATE(151),
    [aux_sym_str_literal_token1] = ACTIONS(776),
    [anon_sym_DQUOTE2] = ACTIONS(778),
    [sym_escape_sequence] = ACTIONS(780),
  },
  [155] = {
    [aux_sym_str_literal_repeat1] = STATE(149),
    [aux_sym_str_literal_token1] = ACTIONS(760),
    [anon_sym_DQUOTE2] = ACTIONS(782),
    [sym_escape_sequence] = ACTIONS(764),
  },
  [156] = {
    [aux_sym_str_literal_repeat1] = STATE(150),
    [aux_sym_str_literal_token1] = ACTIONS(784),
    [anon_sym_DQUOTE2] = ACTIONS(786),
    [sym_escape_sequence] = ACTIONS(788),
  },
  [157] = {
    [aux_sym_str_literal_repeat1] = STATE(149),
    [aux_sym_str_literal_token1] = ACTIONS(760),
    [anon_sym_DQUOTE2] = ACTIONS(790),
    [sym_escape_sequence] = ACTIONS(764),
  },
  [158] = {
    [aux_sym_str_literal_repeat1] = STATE(155),
    [aux_sym_str_literal_token1] = ACTIONS(792),
    [anon_sym_DQUOTE2] = ACTIONS(794),
    [sym_escape_sequence] = ACTIONS(796),
  },
  [159] = {
    [aux_sym_str_literal_repeat1] = STATE(149),
    [aux_sym_str_literal_token1] = ACTIONS(760),
    [anon_sym_DQUOTE2] = ACTIONS(798),
    [sym_escape_sequence] = ACTIONS(764),
  },
  [160] = {
    [aux_sym_str_literal_repeat1] = STATE(153),
    [aux_sym_str_literal_token1] = ACTIONS(800),
    [anon_sym_DQUOTE2] = ACTIONS(802),
    [sym_escape_sequence] = ACTIONS(804),
  },
  [161] = {
    [sym_interface_fn] = STATE(237),
    [anon_sym_Fn] = ACTIONS(806),
    [anon_sym_] = ACTIONS(806),
  },
  [162] = {
    [aux_sym_let_pairs_repeat1] = STATE(170),
    [anon_sym_RBRACK] = ACTIONS(808),
    [sym_identifier] = ACTIONS(810),
  },
  [163] = {
    [aux_sym__name_deftypes_repeat1] = STATE(169),
    [anon_sym_RPAREN2] = ACTIONS(812),
    [sym_identifier] = ACTIONS(814),
  },
  [164] = {
    [aux_sym__name_deftypes_repeat1] = STATE(164),
    [anon_sym_RPAREN2] = ACTIONS(816),
    [sym_identifier] = ACTIONS(818),
  },
  [165] = {
    [anon_sym_LPAREN] = ACTIONS(821),
    [anon_sym_RPAREN] = ACTIONS(821),
    [anon_sym_LBRACK] = ACTIONS(821),
  },
  [166] = {
    [aux_sym__deftype2_repeat1] = STATE(166),
    [anon_sym_LPAREN] = ACTIONS(823),
    [anon_sym_RPAREN] = ACTIONS(826),
  },
  [167] = {
    [aux_sym__deftype2_repeat1] = STATE(166),
    [anon_sym_LPAREN] = ACTIONS(740),
    [anon_sym_RPAREN] = ACTIONS(828),
  },
  [168] = {
    [anon_sym_LPAREN] = ACTIONS(830),
    [anon_sym_RPAREN] = ACTIONS(830),
    [anon_sym_LBRACK] = ACTIONS(830),
  },
  [169] = {
    [aux_sym__name_deftypes_repeat1] = STATE(164),
    [anon_sym_RPAREN2] = ACTIONS(832),
    [sym_identifier] = ACTIONS(834),
  },
  [170] = {
    [aux_sym_let_pairs_repeat1] = STATE(170),
    [anon_sym_RBRACK] = ACTIONS(836),
    [sym_identifier] = ACTIONS(838),
  },
  [171] = {
    [aux_sym_let_pairs_repeat1] = STATE(162),
    [anon_sym_RBRACK] = ACTIONS(841),
    [sym_identifier] = ACTIONS(810),
  },
  [172] = {
    [anon_sym_RBRACK2] = ACTIONS(461),
    [anon_sym_COLON] = ACTIONS(461),
    [sym_identifier] = ACTIONS(461),
  },
  [173] = {
    [anon_sym_LPAREN] = ACTIONS(843),
    [anon_sym_RPAREN] = ACTIONS(843),
    [anon_sym_LBRACK] = ACTIONS(843),
  },
  [174] = {
    [sym_typed_parameters] = STATE(57),
    [anon_sym_LBRACK] = ACTIONS(845),
  },
  [175] = {
    [anon_sym_RBRACK] = ACTIONS(457),
    [sym_identifier] = ACTIONS(457),
  },
  [176] = {
    [anon_sym_RBRACK] = ACTIONS(505),
    [sym_identifier] = ACTIONS(505),
  },
  [177] = {
    [anon_sym_RBRACK] = ACTIONS(501),
    [sym_identifier] = ACTIONS(501),
  },
  [178] = {
    [anon_sym_RBRACK] = ACTIONS(497),
    [sym_identifier] = ACTIONS(497),
  },
  [179] = {
    [anon_sym_RBRACK] = ACTIONS(493),
    [sym_identifier] = ACTIONS(493),
  },
  [180] = {
    [anon_sym_RBRACK] = ACTIONS(489),
    [sym_identifier] = ACTIONS(489),
  },
  [181] = {
    [anon_sym_RBRACK] = ACTIONS(485),
    [sym_identifier] = ACTIONS(485),
  },
  [182] = {
    [anon_sym_RBRACK] = ACTIONS(477),
    [sym_identifier] = ACTIONS(477),
  },
  [183] = {
    [anon_sym_RBRACK] = ACTIONS(473),
    [sym_identifier] = ACTIONS(473),
  },
  [184] = {
    [anon_sym_RBRACK] = ACTIONS(509),
    [sym_identifier] = ACTIONS(509),
  },
  [185] = {
    [anon_sym_RBRACK] = ACTIONS(513),
    [sym_identifier] = ACTIONS(513),
  },
  [186] = {
    [anon_sym_RBRACK] = ACTIONS(469),
    [sym_identifier] = ACTIONS(469),
  },
  [187] = {
    [anon_sym_RBRACK] = ACTIONS(847),
    [sym_identifier] = ACTIONS(847),
  },
  [188] = {
    [anon_sym_RBRACK] = ACTIONS(465),
    [sym_identifier] = ACTIONS(465),
  },
  [189] = {
    [sym_fields] = STATE(219),
    [anon_sym_LBRACK] = ACTIONS(849),
  },
  [190] = {
    [anon_sym_RBRACK] = ACTIONS(453),
    [sym_identifier] = ACTIONS(453),
  },
  [191] = {
    [sym_parameters] = STATE(22),
    [anon_sym_LBRACK] = ACTIONS(851),
  },
  [192] = {
    [anon_sym_LPAREN] = ACTIONS(853),
    [anon_sym_RPAREN] = ACTIONS(853),
  },
  [193] = {
    [aux_sym_str_literal_token1] = ACTIONS(855),
    [sym_escape_sequence] = ACTIONS(857),
  },
  [194] = {
    [sym_str_literal] = STATE(213),
    [anon_sym_DQUOTE] = ACTIONS(69),
  },
  [195] = {
    [sym_let_pairs] = STATE(26),
    [anon_sym_LBRACK] = ACTIONS(859),
  },
  [196] = {
    [sym_parameters] = STATE(27),
    [anon_sym_LBRACK] = ACTIONS(851),
  },
  [197] = {
    [aux_sym_str_literal_token1] = ACTIONS(861),
    [sym_escape_sequence] = ACTIONS(863),
  },
  [198] = {
    [aux_sym_str_literal_token1] = ACTIONS(865),
    [sym_escape_sequence] = ACTIONS(867),
  },
  [199] = {
    [sym_parameters] = STATE(18),
    [anon_sym_LBRACK] = ACTIONS(851),
  },
  [200] = {
    [anon_sym_RBRACK] = ACTIONS(461),
    [sym_identifier] = ACTIONS(461),
  },
  [201] = {
    [anon_sym_RBRACK] = ACTIONS(302),
    [sym_identifier] = ACTIONS(302),
  },
  [202] = {
    [sym_parameters] = STATE(19),
    [anon_sym_LBRACK] = ACTIONS(851),
  },
  [203] = {
    [anon_sym_RPAREN] = ACTIONS(869),
  },
  [204] = {
    [anon_sym_RPAREN] = ACTIONS(871),
  },
  [205] = {
    [anon_sym_RPAREN2] = ACTIONS(873),
  },
  [206] = {
    [sym_identifier] = ACTIONS(875),
  },
  [207] = {
    [anon_sym_LPAREN] = ACTIONS(877),
  },
  [208] = {
    [anon_sym_RPAREN2] = ACTIONS(879),
  },
  [209] = {
    [anon_sym_RPAREN] = ACTIONS(881),
  },
  [210] = {
    [anon_sym_RPAREN] = ACTIONS(883),
  },
  [211] = {
    [anon_sym_RPAREN] = ACTIONS(885),
  },
  [212] = {
    [sym_identifier] = ACTIONS(887),
  },
  [213] = {
    [anon_sym_RPAREN] = ACTIONS(889),
  },
  [214] = {
    [anon_sym_RPAREN] = ACTIONS(891),
  },
  [215] = {
    [anon_sym_RPAREN] = ACTIONS(893),
  },
  [216] = {
    [anon_sym_RPAREN] = ACTIONS(895),
  },
  [217] = {
    [anon_sym_RPAREN] = ACTIONS(897),
  },
  [218] = {
    [anon_sym_RPAREN] = ACTIONS(879),
  },
  [219] = {
    [anon_sym_RPAREN2] = ACTIONS(899),
  },
  [220] = {
    [anon_sym_RPAREN] = ACTIONS(901),
  },
  [221] = {
    [sym_identifier] = ACTIONS(903),
  },
  [222] = {
    [anon_sym_RPAREN] = ACTIONS(905),
  },
  [223] = {
    [anon_sym_RPAREN] = ACTIONS(907),
  },
  [224] = {
    [anon_sym_RPAREN] = ACTIONS(909),
  },
  [225] = {
    [sym_identifier] = ACTIONS(911),
  },
  [226] = {
    [anon_sym_RPAREN] = ACTIONS(913),
  },
  [227] = {
    [anon_sym_DOT] = ACTIONS(915),
  },
  [228] = {
    [sym_identifier] = ACTIONS(917),
  },
  [229] = {
    [anon_sym_RPAREN] = ACTIONS(919),
  },
  [230] = {
    [anon_sym_RPAREN] = ACTIONS(873),
  },
  [231] = {
    [anon_sym_RPAREN] = ACTIONS(921),
  },
  [232] = {
    [anon_sym_RPAREN] = ACTIONS(923),
  },
  [233] = {
    [sym_identifier] = ACTIONS(925),
  },
  [234] = {
    [sym_identifier] = ACTIONS(927),
  },
  [235] = {
    [sym_identifier] = ACTIONS(929),
  },
  [236] = {
    [anon_sym_RPAREN] = ACTIONS(931),
  },
  [237] = {
    [anon_sym_RPAREN] = ACTIONS(933),
  },
  [238] = {
    [anon_sym_RPAREN] = ACTIONS(935),
  },
  [239] = {
    [sym_identifier] = ACTIONS(937),
  },
  [240] = {
    [sym_identifier] = ACTIONS(939),
  },
  [241] = {
    [anon_sym_RPAREN] = ACTIONS(941),
  },
  [242] = {
    [sym_identifier] = ACTIONS(943),
  },
  [243] = {
    [anon_sym_RPAREN] = ACTIONS(945),
  },
  [244] = {
    [anon_sym_RPAREN] = ACTIONS(947),
  },
  [245] = {
    [sym_identifier] = ACTIONS(949),
  },
  [246] = {
    [sym_identifier] = ACTIONS(951),
  },
  [247] = {
    [anon_sym_RPAREN] = ACTIONS(953),
  },
  [248] = {
    [anon_sym_RPAREN] = ACTIONS(955),
  },
  [249] = {
    [sym_identifier] = ACTIONS(957),
  },
  [250] = {
    [aux_sym_line_comment_token1] = ACTIONS(959),
  },
  [251] = {
    [sym_identifier] = ACTIONS(961),
  },
  [252] = {
    [sym_identifier] = ACTIONS(963),
  },
  [253] = {
    [sym_upper_identifier] = ACTIONS(965),
  },
  [254] = {
    [ts_builtin_sym_end] = ACTIONS(967),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(250),
  [7] = {.count = 1, .reusable = true}, SHIFT(4),
  [9] = {.count = 1, .reusable = true}, SHIFT(44),
  [11] = {.count = 1, .reusable = false}, SHIFT(44),
  [13] = {.count = 1, .reusable = true}, SHIFT(34),
  [15] = {.count = 1, .reusable = false}, SHIFT(34),
  [17] = {.count = 1, .reusable = false}, SHIFT(253),
  [19] = {.count = 1, .reusable = false}, SHIFT(252),
  [21] = {.count = 1, .reusable = false}, SHIFT(251),
  [23] = {.count = 1, .reusable = false}, SHIFT(196),
  [25] = {.count = 1, .reusable = false}, SHIFT(249),
  [27] = {.count = 1, .reusable = false}, SHIFT(195),
  [29] = {.count = 1, .reusable = true}, SHIFT(103),
  [31] = {.count = 1, .reusable = false}, SHIFT(11),
  [33] = {.count = 1, .reusable = false}, SHIFT(43),
  [35] = {.count = 1, .reusable = false}, SHIFT(46),
  [37] = {.count = 1, .reusable = false}, SHIFT(47),
  [39] = {.count = 1, .reusable = false}, SHIFT(53),
  [41] = {.count = 1, .reusable = false}, SHIFT(245),
  [43] = {.count = 1, .reusable = false}, SHIFT(87),
  [45] = {.count = 1, .reusable = false}, SHIFT(242),
  [47] = {.count = 1, .reusable = false}, SHIFT(239),
  [49] = {.count = 1, .reusable = false}, SHIFT(235),
  [51] = {.count = 1, .reusable = false}, SHIFT(234),
  [53] = {.count = 1, .reusable = false}, SHIFT(233),
  [55] = {.count = 1, .reusable = false}, SHIFT(145),
  [57] = {.count = 1, .reusable = true}, SHIFT(35),
  [59] = {.count = 1, .reusable = true}, SHIFT(29),
  [61] = {.count = 1, .reusable = true}, SHIFT(37),
  [63] = {.count = 1, .reusable = true}, SHIFT(38),
  [65] = {.count = 1, .reusable = false}, SHIFT(222),
  [67] = {.count = 1, .reusable = false}, SHIFT(116),
  [69] = {.count = 1, .reusable = true}, SHIFT(160),
  [71] = {.count = 1, .reusable = true}, SHIFT(198),
  [73] = {.count = 1, .reusable = true}, SHIFT(154),
  [75] = {.count = 1, .reusable = true}, SHIFT(104),
  [77] = {.count = 1, .reusable = true}, SHIFT(228),
  [79] = {.count = 1, .reusable = true}, SHIFT(227),
  [81] = {.count = 1, .reusable = false}, SHIFT(135),
  [83] = {.count = 1, .reusable = false}, SHIFT(247),
  [85] = {.count = 1, .reusable = false}, SHIFT(223),
  [87] = {.count = 1, .reusable = false}, SHIFT(241),
  [89] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [91] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(250),
  [94] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [97] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [100] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [103] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [106] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [111] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(2),
  [114] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20),
  [116] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(103),
  [119] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(41),
  [122] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(40),
  [125] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(37),
  [128] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(36),
  [131] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(137),
  [134] = {.count = 2, .reusable = false}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(116),
  [137] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(160),
  [140] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(198),
  [143] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(154),
  [146] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(104),
  [149] = {.count = 2, .reusable = true}, REDUCE(aux_sym_do_repeat1, 2, .production_id = 20), SHIFT_REPEAT(228),
  [152] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(2),
  [155] = {.count = 1, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39),
  [157] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(103),
  [160] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(41),
  [163] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(40),
  [166] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(37),
  [169] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(36),
  [172] = {.count = 2, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(139),
  [175] = {.count = 2, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(116),
  [178] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(160),
  [181] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(198),
  [184] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(154),
  [187] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(104),
  [190] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2, .production_id = 39), SHIFT_REPEAT(228),
  [193] = {.count = 1, .reusable = true}, SHIFT(2),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_do, 2, .production_id = 7),
  [197] = {.count = 1, .reusable = true}, SHIFT(41),
  [199] = {.count = 1, .reusable = true}, SHIFT(40),
  [201] = {.count = 1, .reusable = true}, SHIFT(36),
  [203] = {.count = 1, .reusable = false}, SHIFT(137),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_do, 1),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .production_id = 14),
  [209] = {.count = 1, .reusable = false}, SHIFT(16),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_defmodule, 2, .production_id = 11),
  [213] = {.count = 1, .reusable = false}, SHIFT(139),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_defmodule, 3, .production_id = 26),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 1, .production_id = 2),
  [219] = {.count = 1, .reusable = false}, SHIFT(12),
  [221] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(2),
  [224] = {.count = 1, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2),
  [226] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(103),
  [229] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(41),
  [232] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(40),
  [235] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(37),
  [238] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(36),
  [241] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(16),
  [244] = {.count = 2, .reusable = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(116),
  [247] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(160),
  [250] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(198),
  [253] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(154),
  [256] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(104),
  [259] = {.count = 2, .reusable = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(228),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_line_comment, 2),
  [264] = {.count = 1, .reusable = false}, REDUCE(sym_line_comment, 2),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym_defndynamic, 3, .production_id = 18),
  [268] = {.count = 1, .reusable = true}, SHIFT(39),
  [270] = {.count = 1, .reusable = false}, SHIFT(232),
  [272] = {.count = 1, .reusable = true}, REDUCE(sym_defmacro, 3, .production_id = 18),
  [274] = {.count = 1, .reusable = false}, SHIFT(236),
  [276] = {.count = 1, .reusable = true}, REDUCE(sym_register, 3, .production_id = 24),
  [278] = {.count = 1, .reusable = false}, SHIFT(238),
  [280] = {.count = 1, .reusable = true}, SHIFT(96),
  [282] = {.count = 1, .reusable = false}, SHIFT(70),
  [284] = {.count = 1, .reusable = true}, SHIFT(79),
  [286] = {.count = 1, .reusable = true}, SHIFT(33),
  [288] = {.count = 1, .reusable = true}, SHIFT(32),
  [290] = {.count = 1, .reusable = true}, SHIFT(31),
  [292] = {.count = 1, .reusable = true}, SHIFT(54),
  [294] = {.count = 1, .reusable = false}, SHIFT(62),
  [296] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 3, .production_id = 18),
  [298] = {.count = 1, .reusable = false}, SHIFT(248),
  [300] = {.count = 1, .reusable = true}, SHIFT(81),
  [302] = {.count = 1, .reusable = true}, REDUCE(sym__s_expr, 3),
  [304] = {.count = 1, .reusable = false}, REDUCE(sym__s_expr, 3),
  [306] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(96),
  [309] = {.count = 2, .reusable = false}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(70),
  [312] = {.count = 1, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2),
  [314] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(33),
  [317] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(32),
  [320] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(31),
  [323] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(54),
  [326] = {.count = 2, .reusable = false}, REDUCE(aux_sym_typed_parameters_repeat1, 2), SHIFT_REPEAT(62),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym_let, 2, .production_id = 5),
  [331] = {.count = 1, .reusable = false}, SHIFT(203),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 2, .production_id = 4),
  [335] = {.count = 1, .reusable = false}, SHIFT(217),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym_while, 2, .production_id = 8),
  [339] = {.count = 1, .reusable = false}, SHIFT(226),
  [341] = {.count = 1, .reusable = false}, SHIFT(126),
  [343] = {.count = 1, .reusable = false}, SHIFT(214),
  [345] = {.count = 1, .reusable = true}, SHIFT(3),
  [347] = {.count = 1, .reusable = true}, SHIFT(100),
  [349] = {.count = 1, .reusable = false}, SHIFT(74),
  [351] = {.count = 1, .reusable = false}, SHIFT(78),
  [353] = {.count = 1, .reusable = true}, SHIFT(156),
  [355] = {.count = 1, .reusable = true}, SHIFT(193),
  [357] = {.count = 1, .reusable = true}, SHIFT(152),
  [359] = {.count = 1, .reusable = true}, SHIFT(106),
  [361] = {.count = 1, .reusable = true}, SHIFT(246),
  [363] = {.count = 1, .reusable = false}, SHIFT(75),
  [365] = {.count = 1, .reusable = false}, SHIFT(76),
  [367] = {.count = 1, .reusable = true}, REDUCE(sym_operators, 1),
  [369] = {.count = 1, .reusable = false}, REDUCE(sym_operators, 1),
  [371] = {.count = 1, .reusable = false}, SHIFT(125),
  [373] = {.count = 1, .reusable = false}, SHIFT(130),
  [375] = {.count = 1, .reusable = false}, SHIFT(128),
  [377] = {.count = 1, .reusable = false}, SHIFT(244),
  [379] = {.count = 1, .reusable = false}, SHIFT(55),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_other_str, 1),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym_other_str, 1),
  [385] = {.count = 1, .reusable = true}, SHIFT(5),
  [387] = {.count = 1, .reusable = true}, SHIFT(107),
  [389] = {.count = 1, .reusable = true}, SHIFT(52),
  [391] = {.count = 1, .reusable = true}, SHIFT(50),
  [393] = {.count = 1, .reusable = true}, SHIFT(49),
  [395] = {.count = 1, .reusable = true}, SHIFT(48),
  [397] = {.count = 1, .reusable = false}, SHIFT(187),
  [399] = {.count = 1, .reusable = false}, SHIFT(185),
  [401] = {.count = 1, .reusable = true}, SHIFT(148),
  [403] = {.count = 1, .reusable = true}, SHIFT(197),
  [405] = {.count = 1, .reusable = true}, SHIFT(158),
  [407] = {.count = 1, .reusable = true}, SHIFT(110),
  [409] = {.count = 1, .reusable = true}, SHIFT(240),
  [411] = {.count = 1, .reusable = false}, SHIFT(28),
  [413] = {.count = 1, .reusable = false}, SHIFT(210),
  [415] = {.count = 1, .reusable = false}, SHIFT(179),
  [417] = {.count = 1, .reusable = false}, SHIFT(178),
  [419] = {.count = 1, .reusable = false}, SHIFT(177),
  [421] = {.count = 1, .reusable = false}, SHIFT(229),
  [423] = {.count = 1, .reusable = false}, SHIFT(176),
  [425] = {.count = 1, .reusable = false}, SHIFT(209),
  [427] = {.count = 1, .reusable = false}, SHIFT(73),
  [429] = {.count = 1, .reusable = false}, SHIFT(42),
  [431] = {.count = 1, .reusable = false}, SHIFT(231),
  [433] = {.count = 1, .reusable = true}, SHIFT(93),
  [435] = {.count = 1, .reusable = false}, SHIFT(122),
  [437] = {.count = 1, .reusable = false}, SHIFT(140),
  [439] = {.count = 1, .reusable = true}, SHIFT(80),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_complex_type, 3),
  [443] = {.count = 1, .reusable = false}, REDUCE(sym_complex_type, 3),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_complex_type, 2),
  [447] = {.count = 1, .reusable = false}, REDUCE(sym_complex_type, 2),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [451] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 3, .production_id = 30),
  [455] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 3, .production_id = 30),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 3),
  [459] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 3),
  [461] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 2),
  [463] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 2),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 3),
  [467] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 3),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 3),
  [471] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 3),
  [473] = {.count = 1, .reusable = true}, REDUCE(sym_map_expression, 2),
  [475] = {.count = 1, .reusable = false}, REDUCE(sym_map_expression, 2),
  [477] = {.count = 1, .reusable = true}, REDUCE(sym_pattern_literal, 2),
  [479] = {.count = 1, .reusable = false}, REDUCE(sym_pattern_literal, 2),
  [481] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1, .production_id = 10),
  [483] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1, .production_id = 10),
  [485] = {.count = 1, .reusable = true}, REDUCE(sym_char_literal, 2),
  [487] = {.count = 1, .reusable = false}, REDUCE(sym_char_literal, 2),
  [489] = {.count = 1, .reusable = true}, REDUCE(sym_str_literal, 2),
  [491] = {.count = 1, .reusable = false}, REDUCE(sym_str_literal, 2),
  [493] = {.count = 1, .reusable = true}, REDUCE(sym_short_quote, 2),
  [495] = {.count = 1, .reusable = false}, REDUCE(sym_short_quote, 2),
  [497] = {.count = 1, .reusable = true}, REDUCE(sym_short_fn_ref, 2),
  [499] = {.count = 1, .reusable = false}, REDUCE(sym_short_fn_ref, 2),
  [501] = {.count = 1, .reusable = true}, REDUCE(sym_short_copy, 2),
  [503] = {.count = 1, .reusable = false}, REDUCE(sym_short_copy, 2),
  [505] = {.count = 1, .reusable = true}, REDUCE(sym_short_ref, 2),
  [507] = {.count = 1, .reusable = false}, REDUCE(sym_short_ref, 2),
  [509] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 2),
  [511] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 2),
  [513] = {.count = 1, .reusable = true}, REDUCE(sym_bool_literal, 1),
  [515] = {.count = 1, .reusable = false}, REDUCE(sym_bool_literal, 1),
  [517] = {.count = 1, .reusable = true}, REDUCE(sym_typed_parameters, 2),
  [519] = {.count = 1, .reusable = false}, REDUCE(sym_typed_parameters, 2),
  [521] = {.count = 1, .reusable = true}, SHIFT(127),
  [523] = {.count = 1, .reusable = false}, SHIFT(108),
  [525] = {.count = 1, .reusable = false}, SHIFT(174),
  [527] = {.count = 1, .reusable = false}, SHIFT(94),
  [529] = {.count = 1, .reusable = true}, REDUCE(sym_typed_parameters, 3),
  [531] = {.count = 1, .reusable = false}, REDUCE(sym_typed_parameters, 3),
  [533] = {.count = 1, .reusable = false}, SHIFT(88),
  [535] = {.count = 1, .reusable = true}, SHIFT(230),
  [537] = {.count = 1, .reusable = false}, SHIFT(89),
  [539] = {.count = 1, .reusable = true}, SHIFT(208),
  [541] = {.count = 1, .reusable = true}, SHIFT(205),
  [543] = {.count = 1, .reusable = true}, SHIFT(218),
  [545] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(96),
  [548] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(88),
  [551] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [553] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 2), SHIFT_REPEAT(89),
  [556] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 1, .production_id = 40),
  [558] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 1, .production_id = 40),
  [560] = {.count = 1, .reusable = true}, SHIFT(90),
  [562] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 1),
  [564] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 1),
  [566] = {.count = 1, .reusable = true}, SHIFT(95),
  [568] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fields_repeat1, 2, .production_id = 40),
  [570] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 2, .production_id = 40),
  [572] = {.count = 1, .reusable = true}, REDUCE(aux_sym_complex_type_repeat1, 2),
  [574] = {.count = 2, .reusable = false}, REDUCE(aux_sym_complex_type_repeat1, 2), SHIFT_REPEAT(108),
  [577] = {.count = 2, .reusable = false}, REDUCE(aux_sym_complex_type_repeat1, 2), SHIFT_REPEAT(91),
  [580] = {.count = 1, .reusable = true}, SHIFT(59),
  [582] = {.count = 1, .reusable = false}, SHIFT(91),
  [584] = {.count = 1, .reusable = true}, SHIFT(138),
  [586] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fields_repeat1, 2),
  [588] = {.count = 1, .reusable = true}, SHIFT(60),
  [590] = {.count = 1, .reusable = false}, SHIFT(92),
  [592] = {.count = 1, .reusable = false}, SHIFT(133),
  [594] = {.count = 1, .reusable = true}, SHIFT(190),
  [596] = {.count = 1, .reusable = true}, SHIFT(63),
  [598] = {.count = 1, .reusable = true}, SHIFT(186),
  [600] = {.count = 1, .reusable = false}, SHIFT(102),
  [602] = {.count = 1, .reusable = true}, SHIFT(77),
  [604] = {.count = 1, .reusable = false}, SHIFT(111),
  [606] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(103),
  [609] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2),
  [611] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(102),
  [614] = {.count = 2, .reusable = false}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(116),
  [617] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(160),
  [620] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(198),
  [623] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(154),
  [626] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(104),
  [629] = {.count = 1, .reusable = true}, SHIFT(109),
  [631] = {.count = 1, .reusable = false}, SHIFT(115),
  [633] = {.count = 1, .reusable = true}, SHIFT(114),
  [635] = {.count = 1, .reusable = true}, SHIFT(68),
  [637] = {.count = 1, .reusable = true}, SHIFT(184),
  [639] = {.count = 1, .reusable = false}, SHIFT(99),
  [641] = {.count = 1, .reusable = true}, REDUCE(aux_sym_complex_type_repeat1, 1, .production_id = 10),
  [643] = {.count = 1, .reusable = false}, REDUCE(aux_sym_complex_type_repeat1, 1, .production_id = 10),
  [645] = {.count = 1, .reusable = true}, SHIFT(183),
  [647] = {.count = 1, .reusable = true}, SHIFT(67),
  [649] = {.count = 1, .reusable = true}, SHIFT(121),
  [651] = {.count = 1, .reusable = true}, SHIFT(101),
  [653] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(103),
  [656] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(133),
  [659] = {.count = 2, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(116),
  [662] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(160),
  [665] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(198),
  [668] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(154),
  [671] = {.count = 2, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31), SHIFT_REPEAT(104),
  [674] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 31),
  [676] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 3, .production_id = 35),
  [678] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 3, .production_id = 35),
  [680] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 1),
  [682] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 1),
  [684] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 3, .production_id = 32),
  [686] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 3, .production_id = 32),
  [688] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 3),
  [690] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 3),
  [692] = {.count = 1, .reusable = true}, REDUCE(sym_let_pairs, 2),
  [694] = {.count = 1, .reusable = false}, REDUCE(sym_let_pairs, 2),
  [696] = {.count = 1, .reusable = false}, SHIFT(142),
  [698] = {.count = 1, .reusable = true}, REDUCE(sym_call_name, 1, .production_id = 1),
  [700] = {.count = 1, .reusable = false}, REDUCE(sym_call_name, 1, .production_id = 1),
  [702] = {.count = 1, .reusable = true}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 6),
  [704] = {.count = 1, .reusable = false}, REDUCE(aux_sym_do_repeat1, 1, .production_id = 6),
  [706] = {.count = 1, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 1, .production_id = 25),
  [708] = {.count = 1, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 1, .production_id = 25),
  [710] = {.count = 1, .reusable = true}, REDUCE(sym_parameters, 2),
  [712] = {.count = 1, .reusable = false}, REDUCE(sym_parameters, 2),
  [714] = {.count = 1, .reusable = true}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 29),
  [716] = {.count = 1, .reusable = false}, REDUCE(aux_sym_map_expression_repeat1, 2, .production_id = 29),
  [718] = {.count = 1, .reusable = true}, SHIFT(131),
  [720] = {.count = 1, .reusable = true}, SHIFT(221),
  [722] = {.count = 1, .reusable = true}, SHIFT(146),
  [724] = {.count = 1, .reusable = true}, SHIFT(141),
  [726] = {.count = 1, .reusable = true}, SHIFT(143),
  [728] = {.count = 1, .reusable = true}, SHIFT(206),
  [730] = {.count = 1, .reusable = true}, SHIFT(168),
  [732] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2),
  [734] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(221),
  [737] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(146),
  [740] = {.count = 1, .reusable = true}, SHIFT(225),
  [742] = {.count = 1, .reusable = true}, REDUCE(sym__deftype2, 1, .production_id = 13),
  [744] = {.count = 1, .reusable = true}, SHIFT(82),
  [746] = {.count = 1, .reusable = false}, SHIFT(157),
  [748] = {.count = 1, .reusable = true}, SHIFT(180),
  [750] = {.count = 1, .reusable = true}, SHIFT(157),
  [752] = {.count = 2, .reusable = false}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(149),
  [755] = {.count = 1, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2),
  [757] = {.count = 2, .reusable = true}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(149),
  [760] = {.count = 1, .reusable = false}, SHIFT(149),
  [762] = {.count = 1, .reusable = true}, SHIFT(66),
  [764] = {.count = 1, .reusable = true}, SHIFT(149),
  [766] = {.count = 1, .reusable = true}, SHIFT(117),
  [768] = {.count = 1, .reusable = false}, SHIFT(159),
  [770] = {.count = 1, .reusable = true}, SHIFT(69),
  [772] = {.count = 1, .reusable = true}, SHIFT(159),
  [774] = {.count = 1, .reusable = true}, SHIFT(119),
  [776] = {.count = 1, .reusable = false}, SHIFT(151),
  [778] = {.count = 1, .reusable = true}, SHIFT(120),
  [780] = {.count = 1, .reusable = true}, SHIFT(151),
  [782] = {.count = 1, .reusable = true}, SHIFT(175),
  [784] = {.count = 1, .reusable = false}, SHIFT(150),
  [786] = {.count = 1, .reusable = true}, SHIFT(72),
  [788] = {.count = 1, .reusable = true}, SHIFT(150),
  [790] = {.count = 1, .reusable = true}, SHIFT(188),
  [792] = {.count = 1, .reusable = false}, SHIFT(155),
  [794] = {.count = 1, .reusable = true}, SHIFT(182),
  [796] = {.count = 1, .reusable = true}, SHIFT(155),
  [798] = {.count = 1, .reusable = true}, SHIFT(64),
  [800] = {.count = 1, .reusable = false}, SHIFT(153),
  [802] = {.count = 1, .reusable = true}, SHIFT(113),
  [804] = {.count = 1, .reusable = true}, SHIFT(153),
  [806] = {.count = 1, .reusable = true}, SHIFT(174),
  [808] = {.count = 1, .reusable = true}, SHIFT(123),
  [810] = {.count = 1, .reusable = true}, SHIFT(45),
  [812] = {.count = 1, .reusable = true}, SHIFT(173),
  [814] = {.count = 1, .reusable = true}, SHIFT(169),
  [816] = {.count = 1, .reusable = true}, REDUCE(aux_sym__name_deftypes_repeat1, 2),
  [818] = {.count = 2, .reusable = true}, REDUCE(aux_sym__name_deftypes_repeat1, 2), SHIFT_REPEAT(164),
  [821] = {.count = 1, .reusable = true}, REDUCE(sym__name_deftypes, 4, .production_id = 43),
  [823] = {.count = 2, .reusable = true}, REDUCE(aux_sym__deftype2_repeat1, 2, .production_id = 41), SHIFT_REPEAT(225),
  [826] = {.count = 1, .reusable = true}, REDUCE(aux_sym__deftype2_repeat1, 2, .production_id = 41),
  [828] = {.count = 1, .reusable = true}, REDUCE(sym__deftype2, 2, .production_id = 28),
  [830] = {.count = 1, .reusable = true}, REDUCE(sym__name_deftypes, 1, .production_id = 1),
  [832] = {.count = 1, .reusable = true}, SHIFT(165),
  [834] = {.count = 1, .reusable = true}, SHIFT(164),
  [836] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 36),
  [838] = {.count = 2, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 36), SHIFT_REPEAT(45),
  [841] = {.count = 1, .reusable = true}, SHIFT(132),
  [843] = {.count = 1, .reusable = true}, REDUCE(sym__name_deftypes, 3, .production_id = 11),
  [845] = {.count = 1, .reusable = true}, SHIFT(21),
  [847] = {.count = 1, .reusable = true}, REDUCE(aux_sym_let_pairs_repeat1, 2, .production_id = 34),
  [849] = {.count = 1, .reusable = true}, SHIFT(84),
  [851] = {.count = 1, .reusable = true}, SHIFT(144),
  [853] = {.count = 1, .reusable = true}, REDUCE(aux_sym__deftype2_repeat1, 4, .production_id = 45),
  [855] = {.count = 1, .reusable = false}, SHIFT(71),
  [857] = {.count = 1, .reusable = true}, SHIFT(71),
  [859] = {.count = 1, .reusable = true}, SHIFT(171),
  [861] = {.count = 1, .reusable = false}, SHIFT(181),
  [863] = {.count = 1, .reusable = true}, SHIFT(181),
  [865] = {.count = 1, .reusable = false}, SHIFT(105),
  [867] = {.count = 1, .reusable = true}, SHIFT(105),
  [869] = {.count = 1, .reusable = true}, REDUCE(sym_let, 3, .production_id = 19),
  [871] = {.count = 1, .reusable = true}, REDUCE(sym_deftype, 2, .production_id = 12),
  [873] = {.count = 1, .reusable = true}, REDUCE(sym_fields, 2),
  [875] = {.count = 1, .reusable = true}, SHIFT(163),
  [877] = {.count = 1, .reusable = true}, SHIFT(161),
  [879] = {.count = 1, .reusable = true}, REDUCE(sym_fields, 3),
  [881] = {.count = 1, .reusable = true}, REDUCE(sym_address, 2, .production_id = 9),
  [883] = {.count = 1, .reusable = true}, REDUCE(sym_ref, 2, .production_id = 9),
  [885] = {.count = 1, .reusable = true}, REDUCE(sym__deftype1, 2, .production_id = 27),
  [887] = {.count = 1, .reusable = true}, SHIFT(129),
  [889] = {.count = 1, .reusable = true}, REDUCE(sym_doc, 3, .production_id = 15),
  [891] = {.count = 1, .reusable = true}, REDUCE(sym_def, 3, .production_id = 16),
  [893] = {.count = 1, .reusable = true}, REDUCE(sym_interface_fn, 3, .production_id = 44),
  [895] = {.count = 1, .reusable = true}, REDUCE(sym_use, 2, .production_id = 3),
  [897] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 3, .production_id = 17),
  [899] = {.count = 1, .reusable = true}, SHIFT(192),
  [901] = {.count = 1, .reusable = true}, REDUCE(sym_definterface, 5, .production_id = 42),
  [903] = {.count = 1, .reusable = true}, SHIFT(172),
  [905] = {.count = 1, .reusable = true}, SHIFT(134),
  [907] = {.count = 1, .reusable = true}, SHIFT(24),
  [909] = {.count = 1, .reusable = true}, REDUCE(sym_register, 5, .production_id = 42),
  [911] = {.count = 1, .reusable = true}, SHIFT(189),
  [913] = {.count = 1, .reusable = true}, REDUCE(sym_while, 3, .production_id = 21),
  [915] = {.count = 1, .reusable = true}, SHIFT(212),
  [917] = {.count = 1, .reusable = true}, SHIFT(136),
  [919] = {.count = 1, .reusable = true}, REDUCE(sym_set, 3, .production_id = 22),
  [921] = {.count = 1, .reusable = true}, REDUCE(sym_the, 3, .production_id = 23),
  [923] = {.count = 1, .reusable = true}, REDUCE(sym_defndynamic, 4, .production_id = 33),
  [925] = {.count = 1, .reusable = true}, SHIFT(13),
  [927] = {.count = 1, .reusable = true}, SHIFT(199),
  [929] = {.count = 1, .reusable = true}, SHIFT(202),
  [931] = {.count = 1, .reusable = true}, REDUCE(sym_defmacro, 4, .production_id = 33),
  [933] = {.count = 1, .reusable = true}, SHIFT(220),
  [935] = {.count = 1, .reusable = true}, REDUCE(sym_register, 4, .production_id = 38),
  [937] = {.count = 1, .reusable = true}, SHIFT(207),
  [939] = {.count = 1, .reusable = true}, SHIFT(200),
  [941] = {.count = 1, .reusable = true}, SHIFT(201),
  [943] = {.count = 1, .reusable = true}, SHIFT(58),
  [945] = {.count = 1, .reusable = true}, SHIFT(224),
  [947] = {.count = 1, .reusable = true}, REDUCE(sym_if, 4, .production_id = 37),
  [949] = {.count = 1, .reusable = true}, SHIFT(51),
  [951] = {.count = 1, .reusable = true}, SHIFT(65),
  [953] = {.count = 1, .reusable = true}, SHIFT(61),
  [955] = {.count = 1, .reusable = true}, REDUCE(sym_defn, 4, .production_id = 33),
  [957] = {.count = 1, .reusable = true}, SHIFT(191),
  [959] = {.count = 1, .reusable = true}, SHIFT(17),
  [961] = {.count = 1, .reusable = true}, SHIFT(30),
  [963] = {.count = 1, .reusable = true}, SHIFT(194),
  [965] = {.count = 1, .reusable = true}, SHIFT(216),
  [967] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_carp(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
