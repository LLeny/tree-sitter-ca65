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

#define LANGUAGE_VERSION 14
#define STATE_COUNT 73
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

enum {
  aux_sym__line_token1 = 1,
  sym_mnemonic = 2,
  anon_sym_COLON_PLUS = 3,
  anon_sym_PLUS = 4,
  anon_sym_COLON_DASH = 5,
  anon_sym_DASH = 6,
  sym_procstart = 7,
  sym_procend = 8,
  anon_sym_COLON = 9,
  anon_sym_near = 10,
  anon_sym_far = 11,
  anon_sym_huge = 12,
  anon_sym_NEAR = 13,
  anon_sym_FAR = 14,
  anon_sym_HUGE = 15,
  sym_macrostart = 16,
  sym_macroend = 17,
  sym_register = 18,
  sym_base = 19,
  sym_operator = 20,
  sym_bracket = 21,
  sym_separator = 22,
  sym_valuetag = 23,
  sym_equal = 24,
  sym_anything = 25,
  sym_label = 26,
  sym_number = 27,
  sym_identifier = 28,
  sym_preproccmd = 29,
  sym_comment = 30,
  sym_string = 31,
  sym_char = 32,
  sym_source_file = 33,
  sym__line = 34,
  sym__statement = 35,
  sym_operand = 36,
  sym_mem_address = 37,
  sym_equ = 38,
  sym_proc = 39,
  sym_macro = 40,
  sym_preprocgen = 41,
  sym__preproc = 42,
  sym_value = 43,
  aux_sym_source_file_repeat1 = 44,
  aux_sym_mem_address_repeat1 = 45,
  aux_sym_mem_address_repeat2 = 46,
  aux_sym_mem_address_repeat3 = 47,
  aux_sym_proc_repeat1 = 48,
  aux_sym_macro_repeat1 = 49,
  aux_sym_preprocgen_repeat1 = 50,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__line_token1] = "_line_token1",
  [sym_mnemonic] = "mnemonic",
  [anon_sym_COLON_PLUS] = ":+",
  [anon_sym_PLUS] = "+",
  [anon_sym_COLON_DASH] = ":-",
  [anon_sym_DASH] = "-",
  [sym_procstart] = "procstart",
  [sym_procend] = "procend",
  [anon_sym_COLON] = ":",
  [anon_sym_near] = "near",
  [anon_sym_far] = "far",
  [anon_sym_huge] = "huge",
  [anon_sym_NEAR] = "NEAR",
  [anon_sym_FAR] = "FAR",
  [anon_sym_HUGE] = "HUGE",
  [sym_macrostart] = "macrostart",
  [sym_macroend] = "macroend",
  [sym_register] = "register",
  [sym_base] = "base",
  [sym_operator] = "operator",
  [sym_bracket] = "bracket",
  [sym_separator] = "separator",
  [sym_valuetag] = "valuetag",
  [sym_equal] = "equal",
  [sym_anything] = "anything",
  [sym_label] = "label",
  [sym_number] = "number",
  [sym_identifier] = "identifier",
  [sym_preproccmd] = "preproccmd",
  [sym_comment] = "comment",
  [sym_string] = "string",
  [sym_char] = "char",
  [sym_source_file] = "source_file",
  [sym__line] = "_line",
  [sym__statement] = "_statement",
  [sym_operand] = "operand",
  [sym_mem_address] = "mem_address",
  [sym_equ] = "equ",
  [sym_proc] = "proc",
  [sym_macro] = "macro",
  [sym_preprocgen] = "preprocgen",
  [sym__preproc] = "_preproc",
  [sym_value] = "value",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_mem_address_repeat1] = "mem_address_repeat1",
  [aux_sym_mem_address_repeat2] = "mem_address_repeat2",
  [aux_sym_mem_address_repeat3] = "mem_address_repeat3",
  [aux_sym_proc_repeat1] = "proc_repeat1",
  [aux_sym_macro_repeat1] = "macro_repeat1",
  [aux_sym_preprocgen_repeat1] = "preprocgen_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__line_token1] = aux_sym__line_token1,
  [sym_mnemonic] = sym_mnemonic,
  [anon_sym_COLON_PLUS] = anon_sym_COLON_PLUS,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_COLON_DASH] = anon_sym_COLON_DASH,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_procstart] = sym_procstart,
  [sym_procend] = sym_procend,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_near] = anon_sym_near,
  [anon_sym_far] = anon_sym_far,
  [anon_sym_huge] = anon_sym_huge,
  [anon_sym_NEAR] = anon_sym_NEAR,
  [anon_sym_FAR] = anon_sym_FAR,
  [anon_sym_HUGE] = anon_sym_HUGE,
  [sym_macrostart] = sym_macrostart,
  [sym_macroend] = sym_macroend,
  [sym_register] = sym_register,
  [sym_base] = sym_base,
  [sym_operator] = sym_operator,
  [sym_bracket] = sym_bracket,
  [sym_separator] = sym_separator,
  [sym_valuetag] = sym_valuetag,
  [sym_equal] = sym_equal,
  [sym_anything] = sym_anything,
  [sym_label] = sym_label,
  [sym_number] = sym_number,
  [sym_identifier] = sym_identifier,
  [sym_preproccmd] = sym_preproccmd,
  [sym_comment] = sym_comment,
  [sym_string] = sym_string,
  [sym_char] = sym_char,
  [sym_source_file] = sym_source_file,
  [sym__line] = sym__line,
  [sym__statement] = sym__statement,
  [sym_operand] = sym_operand,
  [sym_mem_address] = sym_mem_address,
  [sym_equ] = sym_equ,
  [sym_proc] = sym_proc,
  [sym_macro] = sym_macro,
  [sym_preprocgen] = sym_preprocgen,
  [sym__preproc] = sym__preproc,
  [sym_value] = sym_value,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_mem_address_repeat1] = aux_sym_mem_address_repeat1,
  [aux_sym_mem_address_repeat2] = aux_sym_mem_address_repeat2,
  [aux_sym_mem_address_repeat3] = aux_sym_mem_address_repeat3,
  [aux_sym_proc_repeat1] = aux_sym_proc_repeat1,
  [aux_sym_macro_repeat1] = aux_sym_macro_repeat1,
  [aux_sym_preprocgen_repeat1] = aux_sym_preprocgen_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__line_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_mnemonic] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_procstart] = {
    .visible = true,
    .named = true,
  },
  [sym_procend] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_near] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_far] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_huge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NEAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HUGE] = {
    .visible = true,
    .named = false,
  },
  [sym_macrostart] = {
    .visible = true,
    .named = true,
  },
  [sym_macroend] = {
    .visible = true,
    .named = true,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [sym_base] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_bracket] = {
    .visible = true,
    .named = true,
  },
  [sym_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_valuetag] = {
    .visible = true,
    .named = true,
  },
  [sym_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_anything] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_preproccmd] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_operand] = {
    .visible = true,
    .named = true,
  },
  [sym_mem_address] = {
    .visible = true,
    .named = true,
  },
  [sym_equ] = {
    .visible = true,
    .named = true,
  },
  [sym_proc] = {
    .visible = true,
    .named = true,
  },
  [sym_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_preprocgen] = {
    .visible = true,
    .named = true,
  },
  [sym__preproc] = {
    .visible = false,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mem_address_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mem_address_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mem_address_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_proc_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_macro_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_preprocgen_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_constant = 1,
  field_equ = 2,
  field_proc_name = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_constant] = "constant",
  [field_equ] = "equ",
  [field_proc_name] = "proc_name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 3, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_constant, 0},
    {field_equ, 1},
    {field_value, 2},
  [3] =
    {field_proc_name, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 2,
  [7] = 3,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 9,
  [13] = 13,
  [14] = 14,
  [15] = 8,
  [16] = 16,
  [17] = 10,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 11,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 25,
  [39] = 20,
  [40] = 40,
  [41] = 41,
  [42] = 18,
  [43] = 43,
  [44] = 19,
  [45] = 45,
  [46] = 46,
  [47] = 23,
  [48] = 48,
  [49] = 24,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 52,
  [54] = 48,
  [55] = 32,
  [56] = 45,
  [57] = 57,
  [58] = 43,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 46,
  [63] = 41,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(295);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '|') ADVANCE(347);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '#') ADVANCE(350);
      if (lookahead == '$' ||
          lookahead == '%') ADVANCE(346);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(348);
      if (lookahead == '+') ADVANCE(310);
      if (lookahead == ',') ADVANCE(349);
      if (lookahead == '-') ADVANCE(312);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == ';') ADVANCE(647);
      if (lookahead == '=') ADVANCE(351);
      if (lookahead == 'A') ADVANCE(340);
      if (lookahead == 'B') ADVANCE(384);
      if (lookahead == 'C') ADVANCE(387);
      if (lookahead == 'D') ADVANCE(385);
      if (lookahead == 'E') ADVANCE(388);
      if (lookahead == 'H') ADVANCE(184);
      if (lookahead == 'I') ADVANCE(164);
      if (lookahead == 'J') ADVANCE(141);
      if (lookahead == 'L') ADVANCE(130);
      if (lookahead == 'M') ADVANCE(185);
      if (lookahead == 'N') ADVANCE(157);
      if (lookahead == 'O') ADVANCE(180);
      if (lookahead == 'P') ADVANCE(153);
      if (lookahead == 'R') ADVANCE(152);
      if (lookahead == 'S') ADVANCE(131);
      if (lookahead == 'T') ADVANCE(129);
      if (lookahead == 'W') ADVANCE(128);
      if (lookahead == 'X') ADVANCE(339);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(333);
      if (lookahead == 'a') ADVANCE(342);
      if (lookahead == 'b') ADVANCE(392);
      if (lookahead == 'c') ADVANCE(395);
      if (lookahead == 'd') ADVANCE(393);
      if (lookahead == 'e') ADVANCE(396);
      if (lookahead == 'h') ADVANCE(240);
      if (lookahead == 'i') ADVANCE(220);
      if (lookahead == 'j') ADVANCE(200);
      if (lookahead == 'l') ADVANCE(189);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == 'n') ADVANCE(214);
      if (lookahead == 'o') ADVANCE(236);
      if (lookahead == 'p') ADVANCE(210);
      if (lookahead == 'r') ADVANCE(209);
      if (lookahead == 's') ADVANCE(190);
      if (lookahead == 't') ADVANCE(188);
      if (lookahead == 'w') ADVANCE(187);
      if (lookahead == 'x') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(404);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == '.') ADVANCE(162);
      if (lookahead == ':') ADVANCE(359);
      if (lookahead == ';') ADVANCE(646);
      if (lookahead == '@') ADVANCE(126);
      if (lookahead == 'A') ADVANCE(430);
      if (lookahead == 'B') ADVANCE(416);
      if (lookahead == 'C') ADVANCE(440);
      if (lookahead == 'D') ADVANCE(425);
      if (lookahead == 'E') ADVANCE(450);
      if (lookahead == 'I') ADVANCE(444);
      if (lookahead == 'J') ADVANCE(424);
      if (lookahead == 'L') ADVANCE(408);
      if (lookahead == 'M') ADVANCE(466);
      if (lookahead == 'N') ADVANCE(446);
      if (lookahead == 'O') ADVANCE(460);
      if (lookahead == 'P') ADVANCE(433);
      if (lookahead == 'R') ADVANCE(432);
      if (lookahead == 'S') ADVANCE(409);
      if (lookahead == 'T') ADVANCE(407);
      if (lookahead == 'W') ADVANCE(406);
      if (lookahead == 'X') ADVANCE(422);
      if (lookahead == 'a') ADVANCE(494);
      if (lookahead == 'b') ADVANCE(480);
      if (lookahead == 'c') ADVANCE(504);
      if (lookahead == 'd') ADVANCE(489);
      if (lookahead == 'e') ADVANCE(514);
      if (lookahead == 'i') ADVANCE(508);
      if (lookahead == 'j') ADVANCE(488);
      if (lookahead == 'l') ADVANCE(472);
      if (lookahead == 'm') ADVANCE(530);
      if (lookahead == 'n') ADVANCE(510);
      if (lookahead == 'o') ADVANCE(524);
      if (lookahead == 'p') ADVANCE(497);
      if (lookahead == 'r') ADVANCE(496);
      if (lookahead == 's') ADVANCE(473);
      if (lookahead == 't') ADVANCE(471);
      if (lookahead == 'w') ADVANCE(470);
      if (lookahead == 'x') ADVANCE(486);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(296);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '|') ADVANCE(347);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '#') ADVANCE(350);
      if (lookahead == '$' ||
          lookahead == '%') ADVANCE(346);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(348);
      if (lookahead == ',') ADVANCE(349);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == ';') ADVANCE(647);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(344);
      if (lookahead == 'X' ||
          lookahead == 'Y' ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(404);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '\'') ADVANCE(355);
      if (lookahead == ';') ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(352);
      if (lookahead != 0) ADVANCE(356);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(297);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '|') ADVANCE(347);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '$' ||
          lookahead == '%') ADVANCE(346);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(348);
      if (lookahead == ',') ADVANCE(349);
      if (lookahead == ';') ADVANCE(647);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(404);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(298);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '+') ADVANCE(310);
      if (lookahead == ',') ADVANCE(349);
      if (lookahead == '-') ADVANCE(312);
      if (lookahead == ';') ADVANCE(647);
      if (lookahead == 'A') ADVANCE(148);
      if (lookahead == 'B') ADVANCE(139);
      if (lookahead == 'C') ADVANCE(160);
      if (lookahead == 'D') ADVANCE(142);
      if (lookahead == 'E') ADVANCE(170);
      if (lookahead == 'I') ADVANCE(164);
      if (lookahead == 'J') ADVANCE(141);
      if (lookahead == 'L') ADVANCE(130);
      if (lookahead == 'M') ADVANCE(185);
      if (lookahead == 'N') ADVANCE(166);
      if (lookahead == 'O') ADVANCE(180);
      if (lookahead == 'P') ADVANCE(153);
      if (lookahead == 'R') ADVANCE(152);
      if (lookahead == 'S') ADVANCE(131);
      if (lookahead == 'T') ADVANCE(129);
      if (lookahead == 'W') ADVANCE(128);
      if (lookahead == 'X') ADVANCE(140);
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == 'b') ADVANCE(198);
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead == 'd') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead == 'i') ADVANCE(220);
      if (lookahead == 'j') ADVANCE(200);
      if (lookahead == 'l') ADVANCE(189);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == 'n') ADVANCE(222);
      if (lookahead == 'o') ADVANCE(236);
      if (lookahead == 'p') ADVANCE(210);
      if (lookahead == 'r') ADVANCE(209);
      if (lookahead == 's') ADVANCE(190);
      if (lookahead == 't') ADVANCE(188);
      if (lookahead == 'w') ADVANCE(187);
      if (lookahead == 'x') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '+') ADVANCE(310);
      if (lookahead == ',') ADVANCE(349);
      if (lookahead == '-') ADVANCE(312);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == ';') ADVANCE(647);
      if (lookahead == '@') ADVANCE(127);
      if (lookahead == 'A') ADVANCE(28);
      if (lookahead == 'B') ADVANCE(21);
      if (lookahead == 'C') ADVANCE(33);
      if (lookahead == 'D') ADVANCE(26);
      if (lookahead == 'E') ADVANCE(38);
      if (lookahead == 'I') ADVANCE(35);
      if (lookahead == 'J') ADVANCE(25);
      if (lookahead == 'L') ADVANCE(18);
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == 'N') ADVANCE(36);
      if (lookahead == 'O') ADVANCE(43);
      if (lookahead == 'P') ADVANCE(30);
      if (lookahead == 'R') ADVANCE(29);
      if (lookahead == 'S') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(17);
      if (lookahead == 'W') ADVANCE(16);
      if (lookahead == 'X') ADVANCE(24);
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 'b') ADVANCE(53);
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'j') ADVANCE(57);
      if (lookahead == 'l') ADVANCE(50);
      if (lookahead == 'm') ADVANCE(78);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(75);
      if (lookahead == 'p') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 's') ADVANCE(51);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == 'w') ADVANCE(48);
      if (lookahead == 'x') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == ';') ADVANCE(647);
      if (lookahead == '@') ADVANCE(127);
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'B') ADVANCE(421);
      if (lookahead == 'C') ADVANCE(443);
      if (lookahead == 'D') ADVANCE(429);
      if (lookahead == 'E') ADVANCE(451);
      if (lookahead == 'I') ADVANCE(445);
      if (lookahead == 'J') ADVANCE(428);
      if (lookahead == 'L') ADVANCE(414);
      if (lookahead == 'M') ADVANCE(467);
      if (lookahead == 'N') ADVANCE(449);
      if (lookahead == 'O') ADVANCE(461);
      if (lookahead == 'P') ADVANCE(437);
      if (lookahead == 'R') ADVANCE(436);
      if (lookahead == 'S') ADVANCE(415);
      if (lookahead == 'T') ADVANCE(413);
      if (lookahead == 'W') ADVANCE(412);
      if (lookahead == 'X') ADVANCE(423);
      if (lookahead == 'a') ADVANCE(495);
      if (lookahead == 'b') ADVANCE(485);
      if (lookahead == 'c') ADVANCE(507);
      if (lookahead == 'd') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(515);
      if (lookahead == 'i') ADVANCE(509);
      if (lookahead == 'j') ADVANCE(492);
      if (lookahead == 'l') ADVANCE(478);
      if (lookahead == 'm') ADVANCE(531);
      if (lookahead == 'n') ADVANCE(513);
      if (lookahead == 'o') ADVANCE(525);
      if (lookahead == 'p') ADVANCE(501);
      if (lookahead == 'r') ADVANCE(500);
      if (lookahead == 's') ADVANCE(479);
      if (lookahead == 't') ADVANCE(477);
      if (lookahead == 'w') ADVANCE(476);
      if (lookahead == 'x') ADVANCE(487);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == ':') ADVANCE(316);
      if (lookahead == ';') ADVANCE(647);
      if (lookahead == '@') ADVANCE(127);
      if (lookahead == 'A') ADVANCE(28);
      if (lookahead == 'B') ADVANCE(21);
      if (lookahead == 'C') ADVANCE(33);
      if (lookahead == 'D') ADVANCE(26);
      if (lookahead == 'E') ADVANCE(38);
      if (lookahead == 'I') ADVANCE(35);
      if (lookahead == 'J') ADVANCE(25);
      if (lookahead == 'L') ADVANCE(18);
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == 'N') ADVANCE(36);
      if (lookahead == 'O') ADVANCE(43);
      if (lookahead == 'P') ADVANCE(30);
      if (lookahead == 'R') ADVANCE(29);
      if (lookahead == 'S') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(17);
      if (lookahead == 'W') ADVANCE(16);
      if (lookahead == 'X') ADVANCE(24);
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 'b') ADVANCE(53);
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'j') ADVANCE(57);
      if (lookahead == 'l') ADVANCE(50);
      if (lookahead == 'm') ADVANCE(78);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(75);
      if (lookahead == 'p') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 's') ADVANCE(51);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == 'w') ADVANCE(48);
      if (lookahead == 'x') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == ';') ADVANCE(647);
      if (lookahead == 'F') ADVANCE(136);
      if (lookahead == 'H') ADVANCE(184);
      if (lookahead == 'N') ADVANCE(156);
      if (lookahead == 'f') ADVANCE(195);
      if (lookahead == 'h') ADVANCE(240);
      if (lookahead == 'n') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == ';') ADVANCE(647);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(343);
      if (lookahead == 'X' ||
          lookahead == 'Y' ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == ';') ADVANCE(647);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(648);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(649);
      END_STATE();
    case 15:
      if (lookahead == '+') ADVANCE(309);
      if (lookahead == '-') ADVANCE(311);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A') ADVANCE(97);
      if (lookahead == 'C') ADVANCE(82);
      if (lookahead == 'D') ADVANCE(27);
      if (lookahead == 'R') ADVANCE(22);
      if (lookahead == 'S') ADVANCE(112);
      if (lookahead == 'X') ADVANCE(101);
      if (lookahead == 'Y') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A') ADVANCE(87);
      if (lookahead == 'D') ADVANCE(103);
      if (lookahead == 'S') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A') ADVANCE(47);
      if (lookahead == 'B') ADVANCE(27);
      if (lookahead == 'E') ADVANCE(116);
      if (lookahead == 'L') ADVANCE(37);
      if (lookahead == 'M') ADVANCE(23);
      if (lookahead == 'R') ADVANCE(31);
      if (lookahead == 'T') ADVANCE(120);
      if (lookahead == 'U') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'B') ADVANCE(42);
      if (lookahead == 'C') ADVANCE(81);
      if (lookahead == 'E') ADVANCE(40);
      if (lookahead == 'G') ADVANCE(83);
      if (lookahead == 'I') ADVANCE(45);
      if (lookahead == 'L') ADVANCE(83);
      if (lookahead == 'M') ADVANCE(32);
      if (lookahead == 'N') ADVANCE(84);
      if (lookahead == 'P') ADVANCE(34);
      if (lookahead == 'R') ADVANCE(102);
      if (lookahead == 'V') ADVANCE(81);
      if (lookahead == 'Z') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'B') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'B') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'B') ADVANCE(20);
      if (lookahead == 'C') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'C') ADVANCE(81);
      if (lookahead == 'E') ADVANCE(40);
      if (lookahead == 'M') ADVANCE(104);
      if (lookahead == 'N') ADVANCE(31);
      if (lookahead == 'P') ADVANCE(34);
      if (lookahead == 'S') ADVANCE(85);
      if (lookahead == 'V') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'C') ADVANCE(39);
      if (lookahead == 'E') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'C') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'D') ADVANCE(96);
      if (lookahead == 'L') ADVANCE(41);
      if (lookahead == 'N') ADVANCE(96);
      if (lookahead == 'R') ADVANCE(41);
      if (lookahead == 'S') ADVANCE(34);
      if (lookahead == 'X') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'E') ADVANCE(39);
      if (lookahead == 'L') ADVANCE(20);
      if (lookahead == 'M') ADVANCE(23);
      if (lookahead == 'O') ADVANCE(85);
      if (lookahead == 'R') ADVANCE(20);
      if (lookahead == 'T') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'E') ADVANCE(100);
      if (lookahead == 'H') ADVANCE(124);
      if (lookahead == 'L') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'E') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'I') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'L') ADVANCE(117);
      if (lookahead == 'M') ADVANCE(39);
      if (lookahead == 'O') ADVANCE(39);
      if (lookahead == 'P') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'L') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'N') ADVANCE(114);
      if (lookahead == 'S') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'O') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'O') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'O') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'P') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'Q') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'R') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'R') ADVANCE(302);
      if (lookahead == 'S') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'R') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'S') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'T') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'V') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'X') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(54);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == 'x') ADVANCE(107);
      if (lookahead == 'y') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 's') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == 'b') ADVANCE(59);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead == 'm') ADVANCE(55);
      if (lookahead == 'r') ADVANCE(63);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == 'u') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'b') ADVANCE(74);
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == 'g') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'l') ADVANCE(91);
      if (lookahead == 'm') ADVANCE(64);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == 'p') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(108);
      if (lookahead == 'v') ADVANCE(89);
      if (lookahead == 'z') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(127);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'b') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'b') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'b') ADVANCE(52);
      if (lookahead == 'c') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == 'm') ADVANCE(110);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 'p') ADVANCE(66);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == 'v') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'c') ADVANCE(71);
      if (lookahead == 'e') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'c') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'd') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == 's') ADVANCE(66);
      if (lookahead == 'x') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead == 'm') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(52);
      if (lookahead == 't') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == 'h') ADVANCE(125);
      if (lookahead == 'l') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'e') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'i') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'l') ADVANCE(119);
      if (lookahead == 'm') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(71);
      if (lookahead == 'p') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'l') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead == 's') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'o') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'o') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'o') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'p') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'q') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'r') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'r') ADVANCE(302);
      if (lookahead == 's') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'r') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 's') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 't') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 78:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'v') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 79:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'x') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 80:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'X') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 81:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'C' ||
          lookahead == 'S') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 82:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'D' ||
          lookahead == 'S') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 83:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'E' ||
          lookahead == 'T') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'E' ||
          lookahead == 'Z') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'L' ||
          lookahead == 'R') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'N' ||
          lookahead == 'P') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'S' ||
          lookahead == 'X') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a' ||
          lookahead == 'x') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'c' ||
          lookahead == 's') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'd' ||
          lookahead == 's') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'e' ||
          lookahead == 't') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'e' ||
          lookahead == 'z') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(127);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'l' ||
          lookahead == 'r') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'n' ||
          lookahead == 'p') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 's' ||
          lookahead == 'x') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'C' ||
          lookahead == 'D') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'X' ||
          lookahead == 'Y') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'c' ||
          lookahead == 'd') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 99:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 100:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'I' ||
          lookahead == 'R') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 101:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'S' ||
          lookahead == 'Y') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 102:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'K' ||
          lookahead == 'L') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 103:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'X' ||
          lookahead == 'Y') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 104:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'P') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 105:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'S') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 106:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a' ||
          lookahead == 'i' ||
          lookahead == 'r') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 107:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a' ||
          lookahead == 's' ||
          lookahead == 'y') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 108:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a' ||
          lookahead == 'k' ||
          lookahead == 'l') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 109:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a' ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 110:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'p') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 111:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 112:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'B' ||
          lookahead == 'C' ||
          lookahead == 'X') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 113:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'b' ||
          lookahead == 'c' ||
          lookahead == 'x') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 114:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'X' ||
          lookahead == 'Y') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 115:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a' ||
          lookahead == 'c' ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 116:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'P') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 117:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'V') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 118:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'p') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 119:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'v') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 120:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'P' ||
          ('X' <= lookahead && lookahead <= 'Z')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'W') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 121:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a' ||
          lookahead == 'p' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'w')) ADVANCE(127);
      END_STATE();
    case 122:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'P' ||
          lookahead == 'X' ||
          lookahead == 'Y') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 123:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'p' ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 124:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'K' ||
          lookahead == 'P' ||
          lookahead == 'X' ||
          lookahead == 'Y') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 125:
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'k' ||
          lookahead == 'p' ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 126:
      if (lookahead == ':') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(631);
      END_STATE();
    case 127:
      if (lookahead == ':') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 128:
      if (lookahead == 'A') ADVANCE(159);
      END_STATE();
    case 129:
      if (lookahead == 'A') ADVANCE(260);
      if (lookahead == 'C') ADVANCE(245);
      if (lookahead == 'D') ADVANCE(143);
      if (lookahead == 'R') ADVANCE(137);
      if (lookahead == 'S') ADVANCE(275);
      if (lookahead == 'X') ADVANCE(264);
      if (lookahead == 'Y') ADVANCE(243);
      END_STATE();
    case 130:
      if (lookahead == 'A') ADVANCE(250);
      if (lookahead == 'D') ADVANCE(266);
      if (lookahead == 'S') ADVANCE(175);
      END_STATE();
    case 131:
      if (lookahead == 'A') ADVANCE(186);
      if (lookahead == 'B') ADVANCE(143);
      if (lookahead == 'E') ADVANCE(279);
      if (lookahead == 'L') ADVANCE(167);
      if (lookahead == 'M') ADVANCE(138);
      if (lookahead == 'R') ADVANCE(154);
      if (lookahead == 'T') ADVANCE(283);
      if (lookahead == 'U') ADVANCE(137);
      END_STATE();
    case 132:
      if (lookahead == 'A') ADVANCE(299);
      END_STATE();
    case 133:
      if (lookahead == 'A') ADVANCE(144);
      END_STATE();
    case 134:
      if (lookahead == 'A') ADVANCE(177);
      END_STATE();
    case 135:
      if (lookahead == 'A') ADVANCE(146);
      END_STATE();
    case 136:
      if (lookahead == 'A') ADVANCE(178);
      END_STATE();
    case 137:
      if (lookahead == 'B') ADVANCE(299);
      END_STATE();
    case 138:
      if (lookahead == 'B') ADVANCE(307);
      END_STATE();
    case 139:
      if (lookahead == 'B') ADVANCE(176);
      if (lookahead == 'C') ADVANCE(244);
      if (lookahead == 'E') ADVANCE(174);
      if (lookahead == 'G') ADVANCE(246);
      if (lookahead == 'I') ADVANCE(183);
      if (lookahead == 'L') ADVANCE(246);
      if (lookahead == 'M') ADVANCE(159);
      if (lookahead == 'N') ADVANCE(247);
      if (lookahead == 'P') ADVANCE(161);
      if (lookahead == 'R') ADVANCE(265);
      if (lookahead == 'V') ADVANCE(244);
      if (lookahead == 'Z') ADVANCE(154);
      END_STATE();
    case 140:
      if (lookahead == 'B') ADVANCE(132);
      if (lookahead == 'C') ADVANCE(154);
      END_STATE();
    case 141:
      if (lookahead == 'C') ADVANCE(244);
      if (lookahead == 'E') ADVANCE(174);
      if (lookahead == 'M') ADVANCE(267);
      if (lookahead == 'N') ADVANCE(154);
      if (lookahead == 'P') ADVANCE(161);
      if (lookahead == 'S') ADVANCE(248);
      if (lookahead == 'V') ADVANCE(244);
      END_STATE();
    case 142:
      if (lookahead == 'C') ADVANCE(173);
      if (lookahead == 'E') ADVANCE(277);
      END_STATE();
    case 143:
      if (lookahead == 'C') ADVANCE(299);
      END_STATE();
    case 144:
      if (lookahead == 'C') ADVANCE(326);
      END_STATE();
    case 145:
      if (lookahead == 'C') ADVANCE(313);
      END_STATE();
    case 146:
      if (lookahead == 'C') ADVANCE(331);
      END_STATE();
    case 147:
      if (lookahead == 'C') ADVANCE(315);
      END_STATE();
    case 148:
      if (lookahead == 'D') ADVANCE(259);
      if (lookahead == 'L') ADVANCE(175);
      if (lookahead == 'N') ADVANCE(259);
      if (lookahead == 'R') ADVANCE(175);
      if (lookahead == 'S') ADVANCE(161);
      if (lookahead == 'X') ADVANCE(182);
      END_STATE();
    case 149:
      if (lookahead == 'D') ADVANCE(163);
      END_STATE();
    case 150:
      if (lookahead == 'E') ADVANCE(165);
      if (lookahead == 'M') ADVANCE(133);
      if (lookahead == 'P') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == 'm') ADVANCE(192);
      if (lookahead == 'p') ADVANCE(235);
      END_STATE();
    case 151:
      if (lookahead == 'E') ADVANCE(165);
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 152:
      if (lookahead == 'E') ADVANCE(173);
      if (lookahead == 'L') ADVANCE(132);
      if (lookahead == 'M') ADVANCE(138);
      if (lookahead == 'O') ADVANCE(248);
      if (lookahead == 'R') ADVANCE(132);
      if (lookahead == 'T') ADVANCE(268);
      END_STATE();
    case 153:
      if (lookahead == 'E') ADVANCE(263);
      if (lookahead == 'H') ADVANCE(287);
      if (lookahead == 'L') ADVANCE(285);
      END_STATE();
    case 154:
      if (lookahead == 'E') ADVANCE(299);
      END_STATE();
    case 155:
      if (lookahead == 'E') ADVANCE(323);
      END_STATE();
    case 156:
      if (lookahead == 'E') ADVANCE(134);
      END_STATE();
    case 157:
      if (lookahead == 'E') ADVANCE(134);
      if (lookahead == 'O') ADVANCE(173);
      END_STATE();
    case 158:
      if (lookahead == 'G') ADVANCE(155);
      END_STATE();
    case 159:
      if (lookahead == 'I') ADVANCE(299);
      END_STATE();
    case 160:
      if (lookahead == 'L') ADVANCE(280);
      if (lookahead == 'M') ADVANCE(173);
      if (lookahead == 'O') ADVANCE(173);
      if (lookahead == 'P') ADVANCE(260);
      END_STATE();
    case 161:
      if (lookahead == 'L') ADVANCE(299);
      END_STATE();
    case 162:
      if (lookahead == 'M') ADVANCE(632);
      if (lookahead == 'P') ADVANCE(637);
      if (lookahead == 'm') ADVANCE(638);
      if (lookahead == 'p') ADVANCE(643);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 163:
      if (lookahead == 'M') ADVANCE(135);
      if (lookahead == 'P') ADVANCE(181);
      END_STATE();
    case 164:
      if (lookahead == 'N') ADVANCE(277);
      if (lookahead == 'S') ADVANCE(143);
      END_STATE();
    case 165:
      if (lookahead == 'N') ADVANCE(149);
      END_STATE();
    case 166:
      if (lookahead == 'O') ADVANCE(173);
      END_STATE();
    case 167:
      if (lookahead == 'O') ADVANCE(299);
      END_STATE();
    case 168:
      if (lookahead == 'O') ADVANCE(324);
      END_STATE();
    case 169:
      if (lookahead == 'O') ADVANCE(330);
      END_STATE();
    case 170:
      if (lookahead == 'O') ADVANCE(175);
      END_STATE();
    case 171:
      if (lookahead == 'O') ADVANCE(145);
      END_STATE();
    case 172:
      if (lookahead == 'O') ADVANCE(147);
      END_STATE();
    case 173:
      if (lookahead == 'P') ADVANCE(299);
      END_STATE();
    case 174:
      if (lookahead == 'Q') ADVANCE(299);
      END_STATE();
    case 175:
      if (lookahead == 'R') ADVANCE(299);
      END_STATE();
    case 176:
      if (lookahead == 'R') ADVANCE(307);
      if (lookahead == 'S') ADVANCE(307);
      END_STATE();
    case 177:
      if (lookahead == 'R') ADVANCE(321);
      END_STATE();
    case 178:
      if (lookahead == 'R') ADVANCE(322);
      END_STATE();
    case 179:
      if (lookahead == 'R') ADVANCE(171);
      END_STATE();
    case 180:
      if (lookahead == 'R') ADVANCE(132);
      END_STATE();
    case 181:
      if (lookahead == 'R') ADVANCE(172);
      END_STATE();
    case 182:
      if (lookahead == 'S') ADVANCE(299);
      END_STATE();
    case 183:
      if (lookahead == 'T') ADVANCE(299);
      END_STATE();
    case 184:
      if (lookahead == 'U') ADVANCE(158);
      END_STATE();
    case 185:
      if (lookahead == 'V') ADVANCE(249);
      END_STATE();
    case 186:
      if (lookahead == 'X') ADVANCE(299);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(262);
      if (lookahead == 'c') ADVANCE(253);
      if (lookahead == 'd') ADVANCE(202);
      if (lookahead == 'r') ADVANCE(196);
      if (lookahead == 's') ADVANCE(276);
      if (lookahead == 'x') ADVANCE(270);
      if (lookahead == 'y') ADVANCE(251);
      END_STATE();
    case 189:
      if (lookahead == 'a') ADVANCE(258);
      if (lookahead == 'd') ADVANCE(272);
      if (lookahead == 's') ADVANCE(231);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(242);
      if (lookahead == 'b') ADVANCE(202);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == 'l') ADVANCE(223);
      if (lookahead == 'm') ADVANCE(197);
      if (lookahead == 'r') ADVANCE(211);
      if (lookahead == 't') ADVANCE(284);
      if (lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(203);
      END_STATE();
    case 193:
      if (lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 194:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 195:
      if (lookahead == 'a') ADVANCE(234);
      END_STATE();
    case 196:
      if (lookahead == 'b') ADVANCE(299);
      END_STATE();
    case 197:
      if (lookahead == 'b') ADVANCE(307);
      END_STATE();
    case 198:
      if (lookahead == 'b') ADVANCE(232);
      if (lookahead == 'c') ADVANCE(252);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == 'g') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(239);
      if (lookahead == 'l') ADVANCE(254);
      if (lookahead == 'm') ADVANCE(216);
      if (lookahead == 'n') ADVANCE(255);
      if (lookahead == 'p') ADVANCE(218);
      if (lookahead == 'r') ADVANCE(271);
      if (lookahead == 'v') ADVANCE(252);
      if (lookahead == 'z') ADVANCE(211);
      END_STATE();
    case 199:
      if (lookahead == 'b') ADVANCE(191);
      if (lookahead == 'c') ADVANCE(211);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(252);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == 'm') ADVANCE(273);
      if (lookahead == 'n') ADVANCE(211);
      if (lookahead == 'p') ADVANCE(218);
      if (lookahead == 's') ADVANCE(256);
      if (lookahead == 'v') ADVANCE(252);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(229);
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 202:
      if (lookahead == 'c') ADVANCE(299);
      END_STATE();
    case 203:
      if (lookahead == 'c') ADVANCE(328);
      END_STATE();
    case 204:
      if (lookahead == 'c') ADVANCE(313);
      END_STATE();
    case 205:
      if (lookahead == 'c') ADVANCE(332);
      END_STATE();
    case 206:
      if (lookahead == 'c') ADVANCE(315);
      END_STATE();
    case 207:
      if (lookahead == 'd') ADVANCE(261);
      if (lookahead == 'l') ADVANCE(231);
      if (lookahead == 'n') ADVANCE(261);
      if (lookahead == 'r') ADVANCE(231);
      if (lookahead == 's') ADVANCE(218);
      if (lookahead == 'x') ADVANCE(238);
      END_STATE();
    case 208:
      if (lookahead == 'd') ADVANCE(219);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead == 'l') ADVANCE(191);
      if (lookahead == 'm') ADVANCE(197);
      if (lookahead == 'o') ADVANCE(256);
      if (lookahead == 'r') ADVANCE(191);
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == 'h') ADVANCE(288);
      if (lookahead == 'l') ADVANCE(286);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(193);
      if (lookahead == 'o') ADVANCE(229);
      END_STATE();
    case 215:
      if (lookahead == 'g') ADVANCE(212);
      END_STATE();
    case 216:
      if (lookahead == 'i') ADVANCE(299);
      END_STATE();
    case 217:
      if (lookahead == 'l') ADVANCE(282);
      if (lookahead == 'm') ADVANCE(229);
      if (lookahead == 'o') ADVANCE(229);
      if (lookahead == 'p') ADVANCE(262);
      END_STATE();
    case 218:
      if (lookahead == 'l') ADVANCE(299);
      END_STATE();
    case 219:
      if (lookahead == 'm') ADVANCE(194);
      if (lookahead == 'p') ADVANCE(237);
      END_STATE();
    case 220:
      if (lookahead == 'n') ADVANCE(278);
      if (lookahead == 's') ADVANCE(202);
      END_STATE();
    case 221:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 222:
      if (lookahead == 'o') ADVANCE(229);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(299);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(324);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(330);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(231);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 229:
      if (lookahead == 'p') ADVANCE(299);
      END_STATE();
    case 230:
      if (lookahead == 'q') ADVANCE(299);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(299);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(307);
      if (lookahead == 's') ADVANCE(307);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(319);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 238:
      if (lookahead == 's') ADVANCE(299);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 240:
      if (lookahead == 'u') ADVANCE(215);
      END_STATE();
    case 241:
      if (lookahead == 'v') ADVANCE(257);
      END_STATE();
    case 242:
      if (lookahead == 'x') ADVANCE(299);
      END_STATE();
    case 243:
      if (lookahead == 'A' ||
          lookahead == 'X') ADVANCE(299);
      END_STATE();
    case 244:
      if (lookahead == 'C' ||
          lookahead == 'S') ADVANCE(299);
      END_STATE();
    case 245:
      if (lookahead == 'D' ||
          lookahead == 'S') ADVANCE(299);
      END_STATE();
    case 246:
      if (lookahead == 'E' ||
          lookahead == 'T') ADVANCE(299);
      END_STATE();
    case 247:
      if (lookahead == 'E' ||
          lookahead == 'Z') ADVANCE(299);
      END_STATE();
    case 248:
      if (lookahead == 'L' ||
          lookahead == 'R') ADVANCE(299);
      END_STATE();
    case 249:
      if (lookahead == 'N' ||
          lookahead == 'P') ADVANCE(299);
      END_STATE();
    case 250:
      if (lookahead == 'S' ||
          lookahead == 'X') ADVANCE(299);
      END_STATE();
    case 251:
      if (lookahead == 'a' ||
          lookahead == 'x') ADVANCE(299);
      END_STATE();
    case 252:
      if (lookahead == 'c' ||
          lookahead == 's') ADVANCE(299);
      END_STATE();
    case 253:
      if (lookahead == 'd' ||
          lookahead == 's') ADVANCE(299);
      END_STATE();
    case 254:
      if (lookahead == 'e' ||
          lookahead == 't') ADVANCE(299);
      END_STATE();
    case 255:
      if (lookahead == 'e' ||
          lookahead == 'z') ADVANCE(299);
      END_STATE();
    case 256:
      if (lookahead == 'l' ||
          lookahead == 'r') ADVANCE(299);
      END_STATE();
    case 257:
      if (lookahead == 'n' ||
          lookahead == 'p') ADVANCE(299);
      END_STATE();
    case 258:
      if (lookahead == 's' ||
          lookahead == 'x') ADVANCE(299);
      END_STATE();
    case 259:
      if (lookahead == 'C' ||
          lookahead == 'D') ADVANCE(299);
      END_STATE();
    case 260:
      if (lookahead == 'X' ||
          lookahead == 'Y') ADVANCE(299);
      END_STATE();
    case 261:
      if (lookahead == 'c' ||
          lookahead == 'd') ADVANCE(299);
      END_STATE();
    case 262:
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(299);
      END_STATE();
    case 263:
      if (lookahead == 'A' ||
          lookahead == 'I' ||
          lookahead == 'R') ADVANCE(299);
      END_STATE();
    case 264:
      if (lookahead == 'A' ||
          lookahead == 'S' ||
          lookahead == 'Y') ADVANCE(299);
      END_STATE();
    case 265:
      if (lookahead == 'A' ||
          lookahead == 'K' ||
          lookahead == 'L') ADVANCE(299);
      END_STATE();
    case 266:
      if (lookahead == 'A' ||
          lookahead == 'X' ||
          lookahead == 'Y') ADVANCE(299);
      END_STATE();
    case 267:
      if (lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'P') ADVANCE(299);
      END_STATE();
    case 268:
      if (lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'S') ADVANCE(299);
      END_STATE();
    case 269:
      if (lookahead == 'a' ||
          lookahead == 'i' ||
          lookahead == 'r') ADVANCE(299);
      END_STATE();
    case 270:
      if (lookahead == 'a' ||
          lookahead == 's' ||
          lookahead == 'y') ADVANCE(299);
      END_STATE();
    case 271:
      if (lookahead == 'a' ||
          lookahead == 'k' ||
          lookahead == 'l') ADVANCE(299);
      END_STATE();
    case 272:
      if (lookahead == 'a' ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(299);
      END_STATE();
    case 273:
      if (lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'p') ADVANCE(299);
      END_STATE();
    case 274:
      if (lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(299);
      END_STATE();
    case 275:
      if (lookahead == 'B' ||
          lookahead == 'C' ||
          lookahead == 'X') ADVANCE(299);
      END_STATE();
    case 276:
      if (lookahead == 'b' ||
          lookahead == 'c' ||
          lookahead == 'x') ADVANCE(299);
      END_STATE();
    case 277:
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'X' ||
          lookahead == 'Y') ADVANCE(299);
      END_STATE();
    case 278:
      if (lookahead == 'a' ||
          lookahead == 'c' ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(299);
      END_STATE();
    case 279:
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'P') ADVANCE(299);
      END_STATE();
    case 280:
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'V') ADVANCE(299);
      END_STATE();
    case 281:
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'p') ADVANCE(299);
      END_STATE();
    case 282:
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'v') ADVANCE(299);
      END_STATE();
    case 283:
      if (lookahead == 'A' ||
          lookahead == 'P' ||
          ('X' <= lookahead && lookahead <= 'Z')) ADVANCE(299);
      END_STATE();
    case 284:
      if (lookahead == 'a' ||
          lookahead == 'p' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 285:
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'P' ||
          lookahead == 'X' ||
          lookahead == 'Y') ADVANCE(299);
      END_STATE();
    case 286:
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'p' ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(299);
      END_STATE();
    case 287:
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'K' ||
          lookahead == 'P' ||
          lookahead == 'X' ||
          lookahead == 'Y') ADVANCE(299);
      END_STATE();
    case 288:
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'k' ||
          lookahead == 'p' ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(299);
      END_STATE();
    case 289:
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '|') ADVANCE(347);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '#') ADVANCE(350);
      if (lookahead == '$' ||
          lookahead == '%') ADVANCE(346);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(348);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == ':') ADVANCE(358);
      if (lookahead == ';') ADVANCE(647);
      if (lookahead == '@') ADVANCE(127);
      if (lookahead == 'A') ADVANCE(335);
      if (lookahead == 'B') ADVANCE(360);
      if (lookahead == 'C') ADVANCE(364);
      if (lookahead == 'D') ADVANCE(361);
      if (lookahead == 'E') ADVANCE(365);
      if (lookahead == 'I') ADVANCE(445);
      if (lookahead == 'J') ADVANCE(428);
      if (lookahead == 'L') ADVANCE(414);
      if (lookahead == 'M') ADVANCE(467);
      if (lookahead == 'N') ADVANCE(449);
      if (lookahead == 'O') ADVANCE(461);
      if (lookahead == 'P') ADVANCE(437);
      if (lookahead == 'R') ADVANCE(436);
      if (lookahead == 'S') ADVANCE(415);
      if (lookahead == 'T') ADVANCE(413);
      if (lookahead == 'W') ADVANCE(412);
      if (lookahead == 'X') ADVANCE(334);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(338);
      if (lookahead == 'a') ADVANCE(337);
      if (lookahead == 'b') ADVANCE(369);
      if (lookahead == 'c') ADVANCE(373);
      if (lookahead == 'd') ADVANCE(370);
      if (lookahead == 'e') ADVANCE(374);
      if (lookahead == 'i') ADVANCE(509);
      if (lookahead == 'j') ADVANCE(492);
      if (lookahead == 'l') ADVANCE(478);
      if (lookahead == 'm') ADVANCE(531);
      if (lookahead == 'n') ADVANCE(513);
      if (lookahead == 'o') ADVANCE(525);
      if (lookahead == 'p') ADVANCE(501);
      if (lookahead == 'r') ADVANCE(500);
      if (lookahead == 's') ADVANCE(479);
      if (lookahead == 't') ADVANCE(477);
      if (lookahead == 'w') ADVANCE(476);
      if (lookahead == 'x') ADVANCE(336);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(289)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(383);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 290:
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '|') ADVANCE(347);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '$' ||
          lookahead == '%') ADVANCE(346);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(348);
      if (lookahead == ',') ADVANCE(349);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == ';') ADVANCE(647);
      if (lookahead == '@') ADVANCE(127);
      if (lookahead == 'A') ADVANCE(363);
      if (lookahead == 'B') ADVANCE(360);
      if (lookahead == 'C') ADVANCE(364);
      if (lookahead == 'D') ADVANCE(361);
      if (lookahead == 'E') ADVANCE(365);
      if (lookahead == 'I') ADVANCE(445);
      if (lookahead == 'J') ADVANCE(428);
      if (lookahead == 'L') ADVANCE(414);
      if (lookahead == 'M') ADVANCE(467);
      if (lookahead == 'N') ADVANCE(449);
      if (lookahead == 'O') ADVANCE(461);
      if (lookahead == 'P') ADVANCE(437);
      if (lookahead == 'R') ADVANCE(436);
      if (lookahead == 'S') ADVANCE(415);
      if (lookahead == 'T') ADVANCE(413);
      if (lookahead == 'W') ADVANCE(412);
      if (lookahead == 'X') ADVANCE(423);
      if (lookahead == 'a') ADVANCE(372);
      if (lookahead == 'b') ADVANCE(369);
      if (lookahead == 'c') ADVANCE(373);
      if (lookahead == 'd') ADVANCE(370);
      if (lookahead == 'e') ADVANCE(374);
      if (lookahead == 'i') ADVANCE(509);
      if (lookahead == 'j') ADVANCE(492);
      if (lookahead == 'l') ADVANCE(478);
      if (lookahead == 'm') ADVANCE(531);
      if (lookahead == 'n') ADVANCE(513);
      if (lookahead == 'o') ADVANCE(525);
      if (lookahead == 'p') ADVANCE(501);
      if (lookahead == 'r') ADVANCE(500);
      if (lookahead == 's') ADVANCE(479);
      if (lookahead == 't') ADVANCE(477);
      if (lookahead == 'w') ADVANCE(476);
      if (lookahead == 'x') ADVANCE(487);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(290)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(383);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 291:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 292:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 293:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 294:
      if (eof) ADVANCE(295);
      if (lookahead == '\n') SKIP(294)
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == '.') ADVANCE(162);
      if (lookahead == ':') ADVANCE(359);
      if (lookahead == ';') ADVANCE(646);
      if (lookahead == '@') ADVANCE(126);
      if (lookahead == 'A') ADVANCE(430);
      if (lookahead == 'B') ADVANCE(416);
      if (lookahead == 'C') ADVANCE(440);
      if (lookahead == 'D') ADVANCE(425);
      if (lookahead == 'E') ADVANCE(450);
      if (lookahead == 'I') ADVANCE(444);
      if (lookahead == 'J') ADVANCE(424);
      if (lookahead == 'L') ADVANCE(408);
      if (lookahead == 'M') ADVANCE(466);
      if (lookahead == 'N') ADVANCE(446);
      if (lookahead == 'O') ADVANCE(460);
      if (lookahead == 'P') ADVANCE(433);
      if (lookahead == 'R') ADVANCE(432);
      if (lookahead == 'S') ADVANCE(409);
      if (lookahead == 'T') ADVANCE(407);
      if (lookahead == 'W') ADVANCE(406);
      if (lookahead == 'X') ADVANCE(422);
      if (lookahead == 'a') ADVANCE(494);
      if (lookahead == 'b') ADVANCE(480);
      if (lookahead == 'c') ADVANCE(504);
      if (lookahead == 'd') ADVANCE(489);
      if (lookahead == 'e') ADVANCE(514);
      if (lookahead == 'i') ADVANCE(508);
      if (lookahead == 'j') ADVANCE(488);
      if (lookahead == 'l') ADVANCE(472);
      if (lookahead == 'm') ADVANCE(530);
      if (lookahead == 'n') ADVANCE(510);
      if (lookahead == 'o') ADVANCE(524);
      if (lookahead == 'p') ADVANCE(497);
      if (lookahead == 'r') ADVANCE(496);
      if (lookahead == 's') ADVANCE(473);
      if (lookahead == 't') ADVANCE(471);
      if (lookahead == 'w') ADVANCE(470);
      if (lookahead == 'x') ADVANCE(486);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\n') ADVANCE(296);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\n') ADVANCE(297);
      if (lookahead == '\r') ADVANCE(4);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\n') ADVANCE(298);
      if (lookahead == '\r') ADVANCE(5);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_mnemonic);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == ':') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(306);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == ':') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(305);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == ':') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == ':') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == ':') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == ':') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_mnemonic);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(299);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_mnemonic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_procstart);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_procstart);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_procend);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '+') ADVANCE(309);
      if (lookahead == '-') ADVANCE(311);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_near);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_far);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_huge);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_NEAR);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_FAR);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_HUGE);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_macrostart);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_macrostart);
      if (lookahead == 'R') ADVANCE(635);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_macrostart);
      if (lookahead == 'R') ADVANCE(168);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_macrostart);
      if (lookahead == 'r') ADVANCE(641);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_macrostart);
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_macrostart);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_macroend);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_macroend);
      if (lookahead == 'R') ADVANCE(169);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_macroend);
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'B') ADVANCE(411);
      if (lookahead == 'C') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'D') ADVANCE(380);
      if (lookahead == 'L') ADVANCE(458);
      if (lookahead == 'N') ADVANCE(567);
      if (lookahead == 'R') ADVANCE(458);
      if (lookahead == 'S') ADVANCE(442);
      if (lookahead == 'X') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'b') ADVANCE(475);
      if (lookahead == 'c') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'd') ADVANCE(381);
      if (lookahead == 'l') ADVANCE(522);
      if (lookahead == 'n') ADVANCE(571);
      if (lookahead == 'r') ADVANCE(522);
      if (lookahead == 's') ADVANCE(506);
      if (lookahead == 'x') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'B') ADVANCE(132);
      if (lookahead == 'C') ADVANCE(154);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'D') ADVANCE(402);
      if (lookahead == 'L') ADVANCE(175);
      if (lookahead == 'N') ADVANCE(259);
      if (lookahead == 'R') ADVANCE(175);
      if (lookahead == 'S') ADVANCE(161);
      if (lookahead == 'X') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'b') ADVANCE(191);
      if (lookahead == 'c') ADVANCE(211);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'd') ADVANCE(403);
      if (lookahead == 'l') ADVANCE(231);
      if (lookahead == 'n') ADVANCE(261);
      if (lookahead == 'r') ADVANCE(231);
      if (lookahead == 's') ADVANCE(218);
      if (lookahead == 'x') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_base);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_operator);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_bracket);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_separator);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_valuetag);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_equal);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_anything);
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '\'') ADVANCE(355);
      if (lookahead == ';') ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(356);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_anything);
      if (lookahead == '"') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_anything);
      if (lookahead == '\'') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(356);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_anything);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(354);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_anything);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == '+') ADVANCE(309);
      if (lookahead == '-') ADVANCE(311);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_label);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'B') ADVANCE(368);
      if (lookahead == 'C') ADVANCE(362);
      if (lookahead == 'E') ADVANCE(367);
      if (lookahead == 'G') ADVANCE(541);
      if (lookahead == 'I') ADVANCE(465);
      if (lookahead == 'L') ADVANCE(541);
      if (lookahead == 'M') ADVANCE(439);
      if (lookahead == 'N') ADVANCE(543);
      if (lookahead == 'P') ADVANCE(442);
      if (lookahead == 'R') ADVANCE(579);
      if (lookahead == 'V') ADVANCE(537);
      if (lookahead == 'Z') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      if (('H' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'C') ADVANCE(366);
      if (lookahead == 'E') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'C') ADVANCE(304);
      if (lookahead == 'S') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'D') ADVANCE(380);
      if (lookahead == 'L') ADVANCE(458);
      if (lookahead == 'N') ADVANCE(567);
      if (lookahead == 'R') ADVANCE(458);
      if (lookahead == 'S') ADVANCE(442);
      if (lookahead == 'X') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'L') ADVANCE(609);
      if (lookahead == 'M') ADVANCE(453);
      if (lookahead == 'O') ADVANCE(453);
      if (lookahead == 'P') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'O') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'P') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'Q') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'R') ADVANCE(301);
      if (lookahead == 'S') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'b') ADVANCE(377);
      if (lookahead == 'c') ADVANCE(371);
      if (lookahead == 'e') ADVANCE(376);
      if (lookahead == 'g') ADVANCE(557);
      if (lookahead == 'i') ADVANCE(529);
      if (lookahead == 'l') ADVANCE(557);
      if (lookahead == 'm') ADVANCE(503);
      if (lookahead == 'n') ADVANCE(559);
      if (lookahead == 'p') ADVANCE(506);
      if (lookahead == 'r') ADVANCE(591);
      if (lookahead == 'v') ADVANCE(553);
      if (lookahead == 'z') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'y')) ADVANCE(627);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'c') ADVANCE(375);
      if (lookahead == 'e') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'c') ADVANCE(304);
      if (lookahead == 's') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'd') ADVANCE(381);
      if (lookahead == 'l') ADVANCE(522);
      if (lookahead == 'n') ADVANCE(571);
      if (lookahead == 'r') ADVANCE(522);
      if (lookahead == 's') ADVANCE(506);
      if (lookahead == 'x') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'l') ADVANCE(613);
      if (lookahead == 'm') ADVANCE(517);
      if (lookahead == 'o') ADVANCE(517);
      if (lookahead == 'p') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'o') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'p') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'q') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'r') ADVANCE(301);
      if (lookahead == 's') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'C') ADVANCE(304);
      if (lookahead == 'X' ||
          lookahead == 'Y') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a' ||
          lookahead == 'c') ADVANCE(304);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'C' ||
          lookahead == 'D') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'c' ||
          lookahead == 'd') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(383);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'B') ADVANCE(391);
      if (lookahead == 'C') ADVANCE(386);
      if (lookahead == 'E') ADVANCE(390);
      if (lookahead == 'G') ADVANCE(246);
      if (lookahead == 'I') ADVANCE(183);
      if (lookahead == 'L') ADVANCE(246);
      if (lookahead == 'M') ADVANCE(159);
      if (lookahead == 'N') ADVANCE(247);
      if (lookahead == 'P') ADVANCE(161);
      if (lookahead == 'R') ADVANCE(265);
      if (lookahead == 'V') ADVANCE(244);
      if (lookahead == 'Z') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'C') ADVANCE(389);
      if (lookahead == 'E') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'C') ADVANCE(308);
      if (lookahead == 'S') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'L') ADVANCE(280);
      if (lookahead == 'M') ADVANCE(173);
      if (lookahead == 'O') ADVANCE(173);
      if (lookahead == 'P') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'O') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'P') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'Q') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'R') ADVANCE(307);
      if (lookahead == 'S') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'b') ADVANCE(399);
      if (lookahead == 'c') ADVANCE(394);
      if (lookahead == 'e') ADVANCE(398);
      if (lookahead == 'g') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(239);
      if (lookahead == 'l') ADVANCE(254);
      if (lookahead == 'm') ADVANCE(216);
      if (lookahead == 'n') ADVANCE(255);
      if (lookahead == 'p') ADVANCE(218);
      if (lookahead == 'r') ADVANCE(271);
      if (lookahead == 'v') ADVANCE(252);
      if (lookahead == 'z') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'c') ADVANCE(397);
      if (lookahead == 'e') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'c') ADVANCE(308);
      if (lookahead == 's') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'l') ADVANCE(282);
      if (lookahead == 'm') ADVANCE(229);
      if (lookahead == 'o') ADVANCE(229);
      if (lookahead == 'p') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'o') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'p') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'q') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'r') ADVANCE(307);
      if (lookahead == 's') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'A' ||
          lookahead == 'C') ADVANCE(308);
      if (lookahead == 'X' ||
          lookahead == 'Y') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'a' ||
          lookahead == 'c') ADVANCE(308);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'C' ||
          lookahead == 'D') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'c' ||
          lookahead == 'd') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A') ADVANCE(568);
      if (lookahead == 'C') ADVANCE(538);
      if (lookahead == 'D') ADVANCE(426);
      if (lookahead == 'R') ADVANCE(417);
      if (lookahead == 'S') ADVANCE(598);
      if (lookahead == 'X') ADVANCE(576);
      if (lookahead == 'Y') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'D') ADVANCE(580);
      if (lookahead == 'S') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A') ADVANCE(468);
      if (lookahead == 'B') ADVANCE(426);
      if (lookahead == 'E') ADVANCE(606);
      if (lookahead == 'L') ADVANCE(447);
      if (lookahead == 'M') ADVANCE(418);
      if (lookahead == 'R') ADVANCE(434);
      if (lookahead == 'T') ADVANCE(614);
      if (lookahead == 'U') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A') ADVANCE(569);
      if (lookahead == 'C') ADVANCE(539);
      if (lookahead == 'D') ADVANCE(427);
      if (lookahead == 'R') ADVANCE(419);
      if (lookahead == 'S') ADVANCE(599);
      if (lookahead == 'X') ADVANCE(577);
      if (lookahead == 'Y') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A') ADVANCE(549);
      if (lookahead == 'D') ADVANCE(581);
      if (lookahead == 'S') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A') ADVANCE(469);
      if (lookahead == 'B') ADVANCE(427);
      if (lookahead == 'E') ADVANCE(607);
      if (lookahead == 'L') ADVANCE(448);
      if (lookahead == 'M') ADVANCE(420);
      if (lookahead == 'R') ADVANCE(435);
      if (lookahead == 'T') ADVANCE(615);
      if (lookahead == 'U') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'B') ADVANCE(457);
      if (lookahead == 'C') ADVANCE(536);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead == 'G') ADVANCE(540);
      if (lookahead == 'I') ADVANCE(464);
      if (lookahead == 'L') ADVANCE(540);
      if (lookahead == 'M') ADVANCE(438);
      if (lookahead == 'N') ADVANCE(542);
      if (lookahead == 'P') ADVANCE(441);
      if (lookahead == 'R') ADVANCE(578);
      if (lookahead == 'V') ADVANCE(536);
      if (lookahead == 'Z') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'B') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'B') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'B') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'B') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'B') ADVANCE(459);
      if (lookahead == 'C') ADVANCE(537);
      if (lookahead == 'E') ADVANCE(455);
      if (lookahead == 'G') ADVANCE(541);
      if (lookahead == 'I') ADVANCE(465);
      if (lookahead == 'L') ADVANCE(541);
      if (lookahead == 'M') ADVANCE(439);
      if (lookahead == 'N') ADVANCE(543);
      if (lookahead == 'P') ADVANCE(442);
      if (lookahead == 'R') ADVANCE(579);
      if (lookahead == 'V') ADVANCE(537);
      if (lookahead == 'Z') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'B') ADVANCE(410);
      if (lookahead == 'C') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'B') ADVANCE(411);
      if (lookahead == 'C') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'C') ADVANCE(536);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead == 'M') ADVANCE(582);
      if (lookahead == 'N') ADVANCE(434);
      if (lookahead == 'P') ADVANCE(441);
      if (lookahead == 'S') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'C') ADVANCE(452);
      if (lookahead == 'E') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'C') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'C') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'C') ADVANCE(537);
      if (lookahead == 'E') ADVANCE(455);
      if (lookahead == 'M') ADVANCE(583);
      if (lookahead == 'N') ADVANCE(435);
      if (lookahead == 'P') ADVANCE(442);
      if (lookahead == 'S') ADVANCE(545);
      if (lookahead == 'V') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == 'E') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'D') ADVANCE(566);
      if (lookahead == 'L') ADVANCE(456);
      if (lookahead == 'N') ADVANCE(566);
      if (lookahead == 'R') ADVANCE(456);
      if (lookahead == 'S') ADVANCE(441);
      if (lookahead == 'X') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'D') ADVANCE(567);
      if (lookahead == 'L') ADVANCE(458);
      if (lookahead == 'N') ADVANCE(567);
      if (lookahead == 'R') ADVANCE(458);
      if (lookahead == 'S') ADVANCE(442);
      if (lookahead == 'X') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'E') ADVANCE(452);
      if (lookahead == 'L') ADVANCE(410);
      if (lookahead == 'M') ADVANCE(418);
      if (lookahead == 'O') ADVANCE(544);
      if (lookahead == 'R') ADVANCE(410);
      if (lookahead == 'T') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'E') ADVANCE(574);
      if (lookahead == 'H') ADVANCE(622);
      if (lookahead == 'L') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'E') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'E') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'E') ADVANCE(453);
      if (lookahead == 'L') ADVANCE(411);
      if (lookahead == 'M') ADVANCE(420);
      if (lookahead == 'O') ADVANCE(545);
      if (lookahead == 'R') ADVANCE(411);
      if (lookahead == 'T') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'E') ADVANCE(575);
      if (lookahead == 'H') ADVANCE(623);
      if (lookahead == 'L') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'I') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'I') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'L') ADVANCE(608);
      if (lookahead == 'M') ADVANCE(452);
      if (lookahead == 'O') ADVANCE(452);
      if (lookahead == 'P') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'L') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'L') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'L') ADVANCE(609);
      if (lookahead == 'M') ADVANCE(453);
      if (lookahead == 'O') ADVANCE(453);
      if (lookahead == 'P') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'N') ADVANCE(602);
      if (lookahead == 'S') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'N') ADVANCE(603);
      if (lookahead == 'S') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'O') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'O') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'O') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'O') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'O') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'O') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'P') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'P') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'Q') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'Q') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'R') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'R') ADVANCE(300);
      if (lookahead == 'S') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'R') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'R') ADVANCE(301);
      if (lookahead == 'S') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'R') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'R') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'S') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'S') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'T') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'T') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'V') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'V') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'X') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'X') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a') ADVANCE(572);
      if (lookahead == 'c') ADVANCE(554);
      if (lookahead == 'd') ADVANCE(490);
      if (lookahead == 'r') ADVANCE(481);
      if (lookahead == 's') ADVANCE(600);
      if (lookahead == 'x') ADVANCE(588);
      if (lookahead == 'y') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a') ADVANCE(564);
      if (lookahead == 'd') ADVANCE(592);
      if (lookahead == 's') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a') ADVANCE(532);
      if (lookahead == 'b') ADVANCE(490);
      if (lookahead == 'e') ADVANCE(610);
      if (lookahead == 'l') ADVANCE(511);
      if (lookahead == 'm') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(498);
      if (lookahead == 't') ADVANCE(616);
      if (lookahead == 'u') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a') ADVANCE(573);
      if (lookahead == 'c') ADVANCE(555);
      if (lookahead == 'd') ADVANCE(491);
      if (lookahead == 'r') ADVANCE(483);
      if (lookahead == 's') ADVANCE(601);
      if (lookahead == 'x') ADVANCE(589);
      if (lookahead == 'y') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a') ADVANCE(565);
      if (lookahead == 'd') ADVANCE(593);
      if (lookahead == 's') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a') ADVANCE(533);
      if (lookahead == 'b') ADVANCE(491);
      if (lookahead == 'e') ADVANCE(611);
      if (lookahead == 'l') ADVANCE(512);
      if (lookahead == 'm') ADVANCE(484);
      if (lookahead == 'r') ADVANCE(499);
      if (lookahead == 't') ADVANCE(617);
      if (lookahead == 'u') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'b') ADVANCE(521);
      if (lookahead == 'c') ADVANCE(552);
      if (lookahead == 'e') ADVANCE(518);
      if (lookahead == 'g') ADVANCE(556);
      if (lookahead == 'i') ADVANCE(528);
      if (lookahead == 'l') ADVANCE(556);
      if (lookahead == 'm') ADVANCE(502);
      if (lookahead == 'n') ADVANCE(558);
      if (lookahead == 'p') ADVANCE(505);
      if (lookahead == 'r') ADVANCE(590);
      if (lookahead == 'v') ADVANCE(552);
      if (lookahead == 'z') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(626);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'b') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'b') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'b') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'b') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'b') ADVANCE(523);
      if (lookahead == 'c') ADVANCE(553);
      if (lookahead == 'e') ADVANCE(519);
      if (lookahead == 'g') ADVANCE(557);
      if (lookahead == 'i') ADVANCE(529);
      if (lookahead == 'l') ADVANCE(557);
      if (lookahead == 'm') ADVANCE(503);
      if (lookahead == 'n') ADVANCE(559);
      if (lookahead == 'p') ADVANCE(506);
      if (lookahead == 'r') ADVANCE(591);
      if (lookahead == 'v') ADVANCE(553);
      if (lookahead == 'z') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(627);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'b') ADVANCE(474);
      if (lookahead == 'c') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'b') ADVANCE(475);
      if (lookahead == 'c') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'c') ADVANCE(552);
      if (lookahead == 'e') ADVANCE(518);
      if (lookahead == 'm') ADVANCE(594);
      if (lookahead == 'n') ADVANCE(498);
      if (lookahead == 'p') ADVANCE(505);
      if (lookahead == 's') ADVANCE(560);
      if (lookahead == 'v') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'c') ADVANCE(516);
      if (lookahead == 'e') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'c') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'c') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'c') ADVANCE(553);
      if (lookahead == 'e') ADVANCE(519);
      if (lookahead == 'm') ADVANCE(595);
      if (lookahead == 'n') ADVANCE(499);
      if (lookahead == 'p') ADVANCE(506);
      if (lookahead == 's') ADVANCE(561);
      if (lookahead == 'v') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'c') ADVANCE(517);
      if (lookahead == 'e') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'd') ADVANCE(570);
      if (lookahead == 'l') ADVANCE(520);
      if (lookahead == 'n') ADVANCE(570);
      if (lookahead == 'r') ADVANCE(520);
      if (lookahead == 's') ADVANCE(505);
      if (lookahead == 'x') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'd') ADVANCE(571);
      if (lookahead == 'l') ADVANCE(522);
      if (lookahead == 'n') ADVANCE(571);
      if (lookahead == 'r') ADVANCE(522);
      if (lookahead == 's') ADVANCE(506);
      if (lookahead == 'x') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'e') ADVANCE(516);
      if (lookahead == 'l') ADVANCE(474);
      if (lookahead == 'm') ADVANCE(482);
      if (lookahead == 'o') ADVANCE(560);
      if (lookahead == 'r') ADVANCE(474);
      if (lookahead == 't') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'e') ADVANCE(586);
      if (lookahead == 'h') ADVANCE(624);
      if (lookahead == 'l') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'e') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'e') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'e') ADVANCE(517);
      if (lookahead == 'l') ADVANCE(475);
      if (lookahead == 'm') ADVANCE(484);
      if (lookahead == 'o') ADVANCE(561);
      if (lookahead == 'r') ADVANCE(475);
      if (lookahead == 't') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'e') ADVANCE(587);
      if (lookahead == 'h') ADVANCE(625);
      if (lookahead == 'l') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'i') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'i') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'l') ADVANCE(612);
      if (lookahead == 'm') ADVANCE(516);
      if (lookahead == 'o') ADVANCE(516);
      if (lookahead == 'p') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'l') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'l') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'l') ADVANCE(613);
      if (lookahead == 'm') ADVANCE(517);
      if (lookahead == 'o') ADVANCE(517);
      if (lookahead == 'p') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'n') ADVANCE(604);
      if (lookahead == 's') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'n') ADVANCE(605);
      if (lookahead == 's') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'o') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'o') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'o') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'o') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'o') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'o') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'p') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'p') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'q') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'q') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'r') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'r') ADVANCE(300);
      if (lookahead == 's') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'r') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'r') ADVANCE(301);
      if (lookahead == 's') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'r') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'r') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 's') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 's') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 't') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 't') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'v') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'v') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'x') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'x') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'X') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'X') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'C' ||
          lookahead == 'S') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'C' ||
          lookahead == 'S') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'D' ||
          lookahead == 'S') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'D' ||
          lookahead == 'S') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'E' ||
          lookahead == 'T') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'E' ||
          lookahead == 'T') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'E' ||
          lookahead == 'Z') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'E' ||
          lookahead == 'Z') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'L' ||
          lookahead == 'R') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'L' ||
          lookahead == 'R') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'N' ||
          lookahead == 'P') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'N' ||
          lookahead == 'P') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'S' ||
          lookahead == 'X') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'S' ||
          lookahead == 'X') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a' ||
          lookahead == 'x') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a' ||
          lookahead == 'x') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'c' ||
          lookahead == 's') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'c' ||
          lookahead == 's') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'd' ||
          lookahead == 's') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'd' ||
          lookahead == 's') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'e' ||
          lookahead == 't') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'e' ||
          lookahead == 't') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'e' ||
          lookahead == 'z') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(626);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'e' ||
          lookahead == 'z') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(627);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'l' ||
          lookahead == 'r') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'l' ||
          lookahead == 'r') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'n' ||
          lookahead == 'p') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'n' ||
          lookahead == 'p') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 's' ||
          lookahead == 'x') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 's' ||
          lookahead == 'x') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'C' ||
          lookahead == 'D') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'C' ||
          lookahead == 'D') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'X' ||
          lookahead == 'Y') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'X' ||
          lookahead == 'Y') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'c' ||
          lookahead == 'd') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'c' ||
          lookahead == 'd') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'I' ||
          lookahead == 'R') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'I' ||
          lookahead == 'R') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'S' ||
          lookahead == 'Y') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'S' ||
          lookahead == 'Y') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'K' ||
          lookahead == 'L') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'K' ||
          lookahead == 'L') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'X' ||
          lookahead == 'Y') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'X' ||
          lookahead == 'Y') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'P') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'P') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'S') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'I' ||
          lookahead == 'L' ||
          lookahead == 'S') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a' ||
          lookahead == 'i' ||
          lookahead == 'r') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a' ||
          lookahead == 'i' ||
          lookahead == 'r') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a' ||
          lookahead == 's' ||
          lookahead == 'y') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a' ||
          lookahead == 's' ||
          lookahead == 'y') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a' ||
          lookahead == 'k' ||
          lookahead == 'l') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a' ||
          lookahead == 'k' ||
          lookahead == 'l') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a' ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a' ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'p') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'p') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'B' ||
          lookahead == 'C' ||
          lookahead == 'X') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'B' ||
          lookahead == 'C' ||
          lookahead == 'X') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'b' ||
          lookahead == 'c' ||
          lookahead == 'x') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'b' ||
          lookahead == 'c' ||
          lookahead == 'x') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'X' ||
          lookahead == 'Y') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'X' ||
          lookahead == 'Y') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a' ||
          lookahead == 'c' ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a' ||
          lookahead == 'c' ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'P') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'P') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'V') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'I' ||
          lookahead == 'V') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'p') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'p') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'v') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'v') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'P' ||
          ('X' <= lookahead && lookahead <= 'Z')) ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('B' <= lookahead && lookahead <= 'W') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'P' ||
          ('X' <= lookahead && lookahead <= 'Z')) ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'W') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a' ||
          lookahead == 'p' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'w')) ADVANCE(626);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a' ||
          lookahead == 'p' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'w')) ADVANCE(627);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'P' ||
          lookahead == 'X' ||
          lookahead == 'Y') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'P' ||
          lookahead == 'X' ||
          lookahead == 'Y') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'p' ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'p' ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'K' ||
          lookahead == 'P' ||
          lookahead == 'X' ||
          lookahead == 'Y') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'K' ||
          lookahead == 'P' ||
          lookahead == 'X' ||
          lookahead == 'Y') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'k' ||
          lookahead == 'p' ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'k' ||
          lookahead == 'p' ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_preproccmd);
      if (lookahead == '"') ADVANCE(648);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_preproccmd);
      if (lookahead == '\'') ADVANCE(649);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_preproccmd);
      if (lookahead == ':') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(631);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_preproccmd);
      if (lookahead == 'A') ADVANCE(633);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_preproccmd);
      if (lookahead == 'C') ADVANCE(325);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_preproccmd);
      if (lookahead == 'C') ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_preproccmd);
      if (lookahead == 'O') ADVANCE(329);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_preproccmd);
      if (lookahead == 'O') ADVANCE(634);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_preproccmd);
      if (lookahead == 'R') ADVANCE(636);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_preproccmd);
      if (lookahead == 'a') ADVANCE(639);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_preproccmd);
      if (lookahead == 'c') ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_preproccmd);
      if (lookahead == 'c') ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_preproccmd);
      if (lookahead == 'o') ADVANCE(329);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_preproccmd);
      if (lookahead == 'o') ADVANCE(640);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_preproccmd);
      if (lookahead == 'r') ADVANCE(642);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_preproccmd);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_preproccmd);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_comment);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 294},
  [2] = {.lex_state = 289},
  [3] = {.lex_state = 289},
  [4] = {.lex_state = 294},
  [5] = {.lex_state = 294},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 290},
  [9] = {.lex_state = 290},
  [10] = {.lex_state = 290},
  [11] = {.lex_state = 290},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 294},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_mnemonic] = ACTIONS(1),
    [anon_sym_COLON_PLUS] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COLON_DASH] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_procstart] = ACTIONS(1),
    [sym_procend] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_near] = ACTIONS(1),
    [anon_sym_huge] = ACTIONS(1),
    [anon_sym_NEAR] = ACTIONS(1),
    [anon_sym_HUGE] = ACTIONS(1),
    [sym_macrostart] = ACTIONS(1),
    [sym_macroend] = ACTIONS(1),
    [sym_register] = ACTIONS(1),
    [sym_base] = ACTIONS(1),
    [sym_operator] = ACTIONS(1),
    [sym_bracket] = ACTIONS(1),
    [sym_separator] = ACTIONS(1),
    [sym_valuetag] = ACTIONS(1),
    [sym_equal] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(3),
    [sym_char] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(66),
    [sym__line] = STATE(4),
    [sym__statement] = STATE(65),
    [sym_equ] = STATE(65),
    [sym_proc] = STATE(65),
    [sym_macro] = STATE(65),
    [sym_preprocgen] = STATE(65),
    [sym__preproc] = STATE(65),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_mnemonic] = ACTIONS(7),
    [sym_procstart] = ACTIONS(9),
    [sym_macrostart] = ACTIONS(11),
    [sym_label] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_preproccmd] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
    [sym_string] = ACTIONS(3),
    [sym_char] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(23), 1,
      anon_sym_COLON_PLUS,
    ACTIONS(25), 1,
      anon_sym_COLON_DASH,
    ACTIONS(29), 1,
      sym_register,
    ACTIONS(33), 1,
      sym_valuetag,
    STATE(9), 1,
      aux_sym_mem_address_repeat3,
    STATE(32), 1,
      sym_mem_address,
    STATE(45), 1,
      sym_operand,
    STATE(46), 1,
      sym_value,
    ACTIONS(21), 2,
      sym_mnemonic,
      sym_label,
    ACTIONS(27), 2,
      sym_procend,
      sym_macroend,
    ACTIONS(35), 2,
      sym_number,
      sym_identifier,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
    ACTIONS(31), 3,
      sym_base,
      sym_operator,
      sym_bracket,
  [47] = 13,
    ACTIONS(23), 1,
      anon_sym_COLON_PLUS,
    ACTIONS(25), 1,
      anon_sym_COLON_DASH,
    ACTIONS(29), 1,
      sym_register,
    ACTIONS(33), 1,
      sym_valuetag,
    STATE(9), 1,
      aux_sym_mem_address_repeat3,
    STATE(32), 1,
      sym_mem_address,
    STATE(43), 1,
      sym_operand,
    STATE(46), 1,
      sym_value,
    ACTIONS(35), 2,
      sym_number,
      sym_identifier,
    ACTIONS(37), 2,
      sym_mnemonic,
      sym_label,
    ACTIONS(39), 2,
      sym_procend,
      sym_macroend,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
    ACTIONS(31), 3,
      sym_base,
      sym_operator,
      sym_bracket,
  [94] = 11,
    ACTIONS(7), 1,
      sym_mnemonic,
    ACTIONS(9), 1,
      sym_procstart,
    ACTIONS(11), 1,
      sym_macrostart,
    ACTIONS(13), 1,
      sym_label,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      sym_preproccmd,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_string,
      sym_char,
    STATE(5), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(65), 6,
      sym__statement,
      sym_equ,
      sym_proc,
      sym_macro,
      sym_preprocgen,
      sym__preproc,
  [135] = 11,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      sym_mnemonic,
    ACTIONS(48), 1,
      sym_procstart,
    ACTIONS(51), 1,
      sym_macrostart,
    ACTIONS(54), 1,
      sym_label,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(60), 1,
      sym_preproccmd,
    ACTIONS(3), 2,
      sym_string,
      sym_char,
    STATE(5), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(65), 6,
      sym__statement,
      sym_equ,
      sym_proc,
      sym_macro,
      sym_preprocgen,
      sym__preproc,
  [176] = 11,
    ACTIONS(27), 1,
      aux_sym__line_token1,
    ACTIONS(63), 1,
      anon_sym_COLON_PLUS,
    ACTIONS(65), 1,
      anon_sym_COLON_DASH,
    ACTIONS(67), 1,
      sym_register,
    ACTIONS(71), 1,
      sym_valuetag,
    STATE(12), 1,
      aux_sym_mem_address_repeat3,
    STATE(55), 1,
      sym_mem_address,
    STATE(56), 1,
      sym_operand,
    STATE(62), 1,
      sym_value,
    ACTIONS(19), 3,
      sym_comment,
      sym_string,
      sym_char,
    ACTIONS(69), 5,
      sym_base,
      sym_operator,
      sym_bracket,
      sym_number,
      sym_identifier,
  [216] = 11,
    ACTIONS(39), 1,
      aux_sym__line_token1,
    ACTIONS(63), 1,
      anon_sym_COLON_PLUS,
    ACTIONS(65), 1,
      anon_sym_COLON_DASH,
    ACTIONS(67), 1,
      sym_register,
    ACTIONS(71), 1,
      sym_valuetag,
    STATE(12), 1,
      aux_sym_mem_address_repeat3,
    STATE(55), 1,
      sym_mem_address,
    STATE(58), 1,
      sym_operand,
    STATE(62), 1,
      sym_value,
    ACTIONS(19), 3,
      sym_comment,
      sym_string,
      sym_char,
    ACTIONS(69), 5,
      sym_base,
      sym_operator,
      sym_bracket,
      sym_number,
      sym_identifier,
  [256] = 6,
    ACTIONS(73), 1,
      sym_mnemonic,
    STATE(8), 1,
      aux_sym_mem_address_repeat3,
    ACTIONS(80), 2,
      sym_number,
      sym_identifier,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
    ACTIONS(77), 3,
      sym_base,
      sym_operator,
      sym_bracket,
    ACTIONS(75), 4,
      sym_procend,
      sym_macroend,
      sym_separator,
      sym_label,
  [283] = 6,
    ACTIONS(83), 1,
      sym_mnemonic,
    STATE(8), 1,
      aux_sym_mem_address_repeat3,
    ACTIONS(89), 2,
      sym_number,
      sym_identifier,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
    ACTIONS(87), 3,
      sym_base,
      sym_operator,
      sym_bracket,
    ACTIONS(85), 4,
      sym_procend,
      sym_macroend,
      sym_separator,
      sym_label,
  [310] = 6,
    ACTIONS(91), 1,
      sym_mnemonic,
    STATE(8), 1,
      aux_sym_mem_address_repeat3,
    ACTIONS(89), 2,
      sym_number,
      sym_identifier,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
    ACTIONS(87), 3,
      sym_base,
      sym_operator,
      sym_bracket,
    ACTIONS(93), 3,
      sym_procend,
      sym_macroend,
      sym_label,
  [336] = 6,
    ACTIONS(95), 1,
      sym_mnemonic,
    STATE(10), 1,
      aux_sym_mem_address_repeat3,
    ACTIONS(101), 2,
      sym_number,
      sym_identifier,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
    ACTIONS(97), 3,
      sym_procend,
      sym_macroend,
      sym_label,
    ACTIONS(99), 3,
      sym_base,
      sym_operator,
      sym_bracket,
  [362] = 5,
    ACTIONS(83), 1,
      sym_separator,
    ACTIONS(85), 1,
      aux_sym__line_token1,
    STATE(15), 1,
      aux_sym_mem_address_repeat3,
    ACTIONS(19), 3,
      sym_comment,
      sym_string,
      sym_char,
    ACTIONS(103), 5,
      sym_base,
      sym_operator,
      sym_bracket,
      sym_number,
      sym_identifier,
  [384] = 4,
    ACTIONS(105), 1,
      aux_sym__line_token1,
    STATE(13), 1,
      aux_sym_preprocgen_repeat1,
    ACTIONS(19), 2,
      sym_comment,
      sym_char,
    ACTIONS(107), 7,
      sym_base,
      sym_operator,
      sym_bracket,
      sym_separator,
      sym_number,
      sym_identifier,
      sym_string,
  [404] = 4,
    ACTIONS(110), 1,
      aux_sym__line_token1,
    STATE(16), 1,
      aux_sym_preprocgen_repeat1,
    ACTIONS(19), 2,
      sym_comment,
      sym_char,
    ACTIONS(112), 7,
      sym_base,
      sym_operator,
      sym_bracket,
      sym_separator,
      sym_number,
      sym_identifier,
      sym_string,
  [424] = 5,
    ACTIONS(73), 1,
      sym_separator,
    ACTIONS(75), 1,
      aux_sym__line_token1,
    STATE(15), 1,
      aux_sym_mem_address_repeat3,
    ACTIONS(19), 3,
      sym_comment,
      sym_string,
      sym_char,
    ACTIONS(114), 5,
      sym_base,
      sym_operator,
      sym_bracket,
      sym_number,
      sym_identifier,
  [446] = 4,
    ACTIONS(117), 1,
      aux_sym__line_token1,
    STATE(13), 1,
      aux_sym_preprocgen_repeat1,
    ACTIONS(19), 2,
      sym_comment,
      sym_char,
    ACTIONS(119), 7,
      sym_base,
      sym_operator,
      sym_bracket,
      sym_separator,
      sym_number,
      sym_identifier,
      sym_string,
  [466] = 4,
    ACTIONS(93), 1,
      aux_sym__line_token1,
    STATE(15), 1,
      aux_sym_mem_address_repeat3,
    ACTIONS(19), 3,
      sym_comment,
      sym_string,
      sym_char,
    ACTIONS(103), 5,
      sym_base,
      sym_operator,
      sym_bracket,
      sym_number,
      sym_identifier,
  [485] = 5,
    ACTIONS(121), 1,
      sym_mnemonic,
    ACTIONS(123), 1,
      anon_sym_DASH,
    STATE(18), 1,
      aux_sym_mem_address_repeat2,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
    ACTIONS(126), 4,
      sym_procend,
      sym_macroend,
      sym_separator,
      sym_label,
  [506] = 5,
    ACTIONS(83), 1,
      sym_mnemonic,
    ACTIONS(128), 1,
      anon_sym_PLUS,
    STATE(23), 1,
      aux_sym_mem_address_repeat1,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
    ACTIONS(85), 4,
      sym_procend,
      sym_macroend,
      sym_separator,
      sym_label,
  [527] = 5,
    ACTIONS(83), 1,
      sym_mnemonic,
    ACTIONS(130), 1,
      anon_sym_DASH,
    STATE(24), 1,
      aux_sym_mem_address_repeat2,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
    ACTIONS(85), 4,
      sym_procend,
      sym_macroend,
      sym_separator,
      sym_label,
  [548] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_string,
      sym_char,
    ACTIONS(134), 6,
      sym_mnemonic,
      sym_procstart,
      sym_macrostart,
      sym_label,
      sym_identifier,
      sym_preproccmd,
  [567] = 4,
    ACTIONS(97), 1,
      aux_sym__line_token1,
    STATE(17), 1,
      aux_sym_mem_address_repeat3,
    ACTIONS(19), 3,
      sym_comment,
      sym_string,
      sym_char,
    ACTIONS(136), 5,
      sym_base,
      sym_operator,
      sym_bracket,
      sym_number,
      sym_identifier,
  [586] = 5,
    ACTIONS(138), 1,
      sym_mnemonic,
    ACTIONS(140), 1,
      anon_sym_PLUS,
    STATE(25), 1,
      aux_sym_mem_address_repeat1,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
    ACTIONS(142), 4,
      sym_procend,
      sym_macroend,
      sym_separator,
      sym_label,
  [607] = 5,
    ACTIONS(138), 1,
      sym_mnemonic,
    ACTIONS(144), 1,
      anon_sym_DASH,
    STATE(18), 1,
      aux_sym_mem_address_repeat2,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
    ACTIONS(142), 4,
      sym_procend,
      sym_macroend,
      sym_separator,
      sym_label,
  [628] = 5,
    ACTIONS(146), 1,
      sym_mnemonic,
    ACTIONS(148), 1,
      anon_sym_PLUS,
    STATE(25), 1,
      aux_sym_mem_address_repeat1,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
    ACTIONS(151), 4,
      sym_procend,
      sym_macroend,
      sym_separator,
      sym_label,
  [649] = 5,
    ACTIONS(153), 1,
      sym_mnemonic,
    ACTIONS(158), 1,
      sym_label,
    ACTIONS(156), 2,
      sym_procend,
      sym_macroend,
    STATE(26), 2,
      sym__statement,
      aux_sym_proc_repeat1,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
  [669] = 2,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
    ACTIONS(161), 6,
      anon_sym_near,
      anon_sym_far,
      anon_sym_huge,
      anon_sym_NEAR,
      anon_sym_FAR,
      anon_sym_HUGE,
  [683] = 6,
    ACTIONS(163), 1,
      sym_mnemonic,
    ACTIONS(165), 1,
      sym_separator,
    ACTIONS(167), 1,
      sym_label,
    STATE(29), 1,
      aux_sym_macro_repeat1,
    STATE(37), 2,
      sym__statement,
      aux_sym_proc_repeat1,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
  [705] = 6,
    ACTIONS(163), 1,
      sym_mnemonic,
    ACTIONS(165), 1,
      sym_separator,
    ACTIONS(167), 1,
      sym_label,
    STATE(50), 1,
      aux_sym_macro_repeat1,
    STATE(33), 2,
      sym__statement,
      aux_sym_proc_repeat1,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
  [727] = 5,
    ACTIONS(163), 1,
      sym_mnemonic,
    ACTIONS(169), 1,
      anon_sym_COLON,
    ACTIONS(171), 1,
      sym_label,
    STATE(35), 2,
      sym__statement,
      aux_sym_proc_repeat1,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
  [746] = 5,
    ACTIONS(163), 1,
      sym_mnemonic,
    ACTIONS(167), 1,
      sym_label,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(36), 2,
      sym__statement,
      aux_sym_proc_repeat1,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
  [765] = 4,
    ACTIONS(175), 1,
      sym_mnemonic,
    ACTIONS(179), 1,
      sym_separator,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
    ACTIONS(177), 3,
      sym_procend,
      sym_macroend,
      sym_label,
  [782] = 5,
    ACTIONS(163), 1,
      sym_mnemonic,
    ACTIONS(167), 1,
      sym_label,
    ACTIONS(181), 1,
      sym_macroend,
    STATE(26), 2,
      sym__statement,
      aux_sym_proc_repeat1,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
  [801] = 5,
    ACTIONS(163), 1,
      sym_mnemonic,
    ACTIONS(167), 1,
      sym_label,
    ACTIONS(183), 1,
      sym_procend,
    STATE(26), 2,
      sym__statement,
      aux_sym_proc_repeat1,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
  [820] = 5,
    ACTIONS(163), 1,
      sym_mnemonic,
    ACTIONS(167), 1,
      sym_label,
    ACTIONS(185), 1,
      sym_procend,
    STATE(26), 2,
      sym__statement,
      aux_sym_proc_repeat1,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
  [839] = 5,
    ACTIONS(163), 1,
      sym_mnemonic,
    ACTIONS(167), 1,
      sym_label,
    ACTIONS(187), 1,
      sym_macroend,
    STATE(26), 2,
      sym__statement,
      aux_sym_proc_repeat1,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
  [858] = 5,
    ACTIONS(163), 1,
      sym_mnemonic,
    ACTIONS(167), 1,
      sym_label,
    ACTIONS(189), 1,
      sym_macroend,
    STATE(26), 2,
      sym__statement,
      aux_sym_proc_repeat1,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
  [877] = 5,
    ACTIONS(146), 1,
      sym_separator,
    ACTIONS(151), 1,
      aux_sym__line_token1,
    ACTIONS(191), 1,
      anon_sym_PLUS,
    STATE(38), 1,
      aux_sym_mem_address_repeat1,
    ACTIONS(19), 3,
      sym_comment,
      sym_string,
      sym_char,
  [895] = 5,
    ACTIONS(83), 1,
      sym_separator,
    ACTIONS(85), 1,
      aux_sym__line_token1,
    ACTIONS(194), 1,
      anon_sym_DASH,
    STATE(49), 1,
      aux_sym_mem_address_repeat2,
    ACTIONS(19), 3,
      sym_comment,
      sym_string,
      sym_char,
  [913] = 4,
    ACTIONS(163), 1,
      sym_mnemonic,
    ACTIONS(167), 1,
      sym_label,
    STATE(34), 2,
      sym__statement,
      aux_sym_proc_repeat1,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
  [929] = 3,
    ACTIONS(196), 1,
      sym_mnemonic,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
    ACTIONS(198), 3,
      sym_procend,
      sym_macroend,
      sym_label,
  [943] = 5,
    ACTIONS(121), 1,
      sym_separator,
    ACTIONS(126), 1,
      aux_sym__line_token1,
    ACTIONS(200), 1,
      anon_sym_DASH,
    STATE(42), 1,
      aux_sym_mem_address_repeat2,
    ACTIONS(19), 3,
      sym_comment,
      sym_string,
      sym_char,
  [961] = 3,
    ACTIONS(203), 1,
      sym_mnemonic,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
    ACTIONS(205), 3,
      sym_procend,
      sym_macroend,
      sym_label,
  [975] = 5,
    ACTIONS(83), 1,
      sym_separator,
    ACTIONS(85), 1,
      aux_sym__line_token1,
    ACTIONS(207), 1,
      anon_sym_PLUS,
    STATE(47), 1,
      aux_sym_mem_address_repeat1,
    ACTIONS(19), 3,
      sym_comment,
      sym_string,
      sym_char,
  [993] = 3,
    ACTIONS(37), 1,
      sym_mnemonic,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
    ACTIONS(39), 3,
      sym_procend,
      sym_macroend,
      sym_label,
  [1007] = 3,
    ACTIONS(175), 1,
      sym_mnemonic,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
    ACTIONS(177), 3,
      sym_procend,
      sym_macroend,
      sym_label,
  [1021] = 5,
    ACTIONS(138), 1,
      sym_separator,
    ACTIONS(142), 1,
      aux_sym__line_token1,
    ACTIONS(209), 1,
      anon_sym_PLUS,
    STATE(38), 1,
      aux_sym_mem_address_repeat1,
    ACTIONS(19), 3,
      sym_comment,
      sym_string,
      sym_char,
  [1039] = 3,
    ACTIONS(211), 1,
      sym_mnemonic,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
    ACTIONS(27), 3,
      sym_procend,
      sym_macroend,
      sym_label,
  [1053] = 5,
    ACTIONS(138), 1,
      sym_separator,
    ACTIONS(142), 1,
      aux_sym__line_token1,
    ACTIONS(213), 1,
      anon_sym_DASH,
    STATE(42), 1,
      aux_sym_mem_address_repeat2,
    ACTIONS(19), 3,
      sym_comment,
      sym_string,
      sym_char,
  [1071] = 5,
    ACTIONS(215), 1,
      sym_mnemonic,
    ACTIONS(217), 1,
      sym_separator,
    ACTIONS(220), 1,
      sym_label,
    STATE(50), 1,
      aux_sym_macro_repeat1,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
  [1089] = 3,
    ACTIONS(215), 1,
      sym_mnemonic,
    ACTIONS(220), 2,
      sym_separator,
      sym_label,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
  [1102] = 2,
    ACTIONS(222), 2,
      sym_register,
      sym_number,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
  [1112] = 2,
    ACTIONS(224), 2,
      sym_register,
      sym_number,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
  [1122] = 3,
    ACTIONS(27), 1,
      aux_sym__line_token1,
    ACTIONS(226), 1,
      sym_mnemonic,
    ACTIONS(19), 3,
      sym_comment,
      sym_string,
      sym_char,
  [1134] = 3,
    ACTIONS(177), 1,
      aux_sym__line_token1,
    ACTIONS(228), 1,
      sym_separator,
    ACTIONS(19), 3,
      sym_comment,
      sym_string,
      sym_char,
  [1146] = 2,
    ACTIONS(39), 1,
      aux_sym__line_token1,
    ACTIONS(19), 3,
      sym_comment,
      sym_string,
      sym_char,
  [1155] = 2,
    ACTIONS(230), 1,
      aux_sym__line_token1,
    ACTIONS(19), 3,
      sym_comment,
      sym_string,
      sym_char,
  [1164] = 2,
    ACTIONS(205), 1,
      aux_sym__line_token1,
    ACTIONS(19), 3,
      sym_comment,
      sym_string,
      sym_char,
  [1173] = 2,
    ACTIONS(232), 1,
      sym_anything,
    ACTIONS(19), 3,
      sym_comment,
      sym_string,
      sym_char,
  [1182] = 2,
    ACTIONS(234), 1,
      aux_sym__line_token1,
    ACTIONS(19), 3,
      sym_comment,
      sym_string,
      sym_char,
  [1191] = 2,
    ACTIONS(236), 1,
      aux_sym__line_token1,
    ACTIONS(19), 3,
      sym_comment,
      sym_string,
      sym_char,
  [1200] = 2,
    ACTIONS(177), 1,
      aux_sym__line_token1,
    ACTIONS(19), 3,
      sym_comment,
      sym_string,
      sym_char,
  [1209] = 2,
    ACTIONS(198), 1,
      aux_sym__line_token1,
    ACTIONS(19), 3,
      sym_comment,
      sym_string,
      sym_char,
  [1218] = 2,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
  [1227] = 2,
    ACTIONS(240), 1,
      aux_sym__line_token1,
    ACTIONS(19), 3,
      sym_comment,
      sym_string,
      sym_char,
  [1236] = 2,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
  [1245] = 2,
    ACTIONS(244), 1,
      sym_equal,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
  [1254] = 2,
    ACTIONS(246), 1,
      sym_identifier,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
  [1263] = 2,
    ACTIONS(248), 1,
      aux_sym__line_token1,
    ACTIONS(19), 3,
      sym_comment,
      sym_string,
      sym_char,
  [1272] = 2,
    ACTIONS(250), 1,
      sym_identifier,
    ACTIONS(3), 3,
      sym_comment,
      sym_string,
      sym_char,
  [1281] = 2,
    ACTIONS(252), 1,
      aux_sym__line_token1,
    ACTIONS(19), 3,
      sym_comment,
      sym_string,
      sym_char,
  [1290] = 2,
    ACTIONS(254), 1,
      aux_sym__line_token1,
    ACTIONS(19), 3,
      sym_comment,
      sym_string,
      sym_char,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 135,
  [SMALL_STATE(6)] = 176,
  [SMALL_STATE(7)] = 216,
  [SMALL_STATE(8)] = 256,
  [SMALL_STATE(9)] = 283,
  [SMALL_STATE(10)] = 310,
  [SMALL_STATE(11)] = 336,
  [SMALL_STATE(12)] = 362,
  [SMALL_STATE(13)] = 384,
  [SMALL_STATE(14)] = 404,
  [SMALL_STATE(15)] = 424,
  [SMALL_STATE(16)] = 446,
  [SMALL_STATE(17)] = 466,
  [SMALL_STATE(18)] = 485,
  [SMALL_STATE(19)] = 506,
  [SMALL_STATE(20)] = 527,
  [SMALL_STATE(21)] = 548,
  [SMALL_STATE(22)] = 567,
  [SMALL_STATE(23)] = 586,
  [SMALL_STATE(24)] = 607,
  [SMALL_STATE(25)] = 628,
  [SMALL_STATE(26)] = 649,
  [SMALL_STATE(27)] = 669,
  [SMALL_STATE(28)] = 683,
  [SMALL_STATE(29)] = 705,
  [SMALL_STATE(30)] = 727,
  [SMALL_STATE(31)] = 746,
  [SMALL_STATE(32)] = 765,
  [SMALL_STATE(33)] = 782,
  [SMALL_STATE(34)] = 801,
  [SMALL_STATE(35)] = 820,
  [SMALL_STATE(36)] = 839,
  [SMALL_STATE(37)] = 858,
  [SMALL_STATE(38)] = 877,
  [SMALL_STATE(39)] = 895,
  [SMALL_STATE(40)] = 913,
  [SMALL_STATE(41)] = 929,
  [SMALL_STATE(42)] = 943,
  [SMALL_STATE(43)] = 961,
  [SMALL_STATE(44)] = 975,
  [SMALL_STATE(45)] = 993,
  [SMALL_STATE(46)] = 1007,
  [SMALL_STATE(47)] = 1021,
  [SMALL_STATE(48)] = 1039,
  [SMALL_STATE(49)] = 1053,
  [SMALL_STATE(50)] = 1071,
  [SMALL_STATE(51)] = 1089,
  [SMALL_STATE(52)] = 1102,
  [SMALL_STATE(53)] = 1112,
  [SMALL_STATE(54)] = 1122,
  [SMALL_STATE(55)] = 1134,
  [SMALL_STATE(56)] = 1146,
  [SMALL_STATE(57)] = 1155,
  [SMALL_STATE(58)] = 1164,
  [SMALL_STATE(59)] = 1173,
  [SMALL_STATE(60)] = 1182,
  [SMALL_STATE(61)] = 1191,
  [SMALL_STATE(62)] = 1200,
  [SMALL_STATE(63)] = 1209,
  [SMALL_STATE(64)] = 1218,
  [SMALL_STATE(65)] = 1227,
  [SMALL_STATE(66)] = 1236,
  [SMALL_STATE(67)] = 1245,
  [SMALL_STATE(68)] = 1254,
  [SMALL_STATE(69)] = 1263,
  [SMALL_STATE(70)] = 1272,
  [SMALL_STATE(71)] = 1281,
  [SMALL_STATE(72)] = 1290,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mem_address_repeat3, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mem_address_repeat3, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mem_address_repeat3, 2), SHIFT_REPEAT(8),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mem_address_repeat3, 2), SHIFT_REPEAT(8),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mem_address, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mem_address, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_preprocgen_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_preprocgen_repeat1, 2), SHIFT_REPEAT(13),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocgen, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mem_address_repeat3, 2), SHIFT_REPEAT(15),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocgen, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mem_address_repeat2, 2),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mem_address_repeat2, 2), SHIFT_REPEAT(18),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mem_address_repeat2, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mem_address, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mem_address, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mem_address_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mem_address_repeat1, 2), SHIFT_REPEAT(25),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mem_address_repeat1, 2),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_proc_repeat1, 2), SHIFT_REPEAT(2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proc_repeat1, 2),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_proc_repeat1, 2), SHIFT_REPEAT(48),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mem_address_repeat1, 2), SHIFT_REPEAT(38),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 3),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mem_address_repeat2, 2), SHIFT_REPEAT(42),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_repeat1, 2),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(68),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_repeat1, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 5),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 4),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equ, 3, .production_id = 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [242] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc, 6, .production_id = 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc, 4, .production_id = 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 6),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ca65(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
