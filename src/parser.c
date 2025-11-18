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
#define STATE_COUNT 888
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 305
#define ALIAS_COUNT 0
#define TOKEN_COUNT 175
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 27
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 61

enum {
  anon_sym_LPAREN_STAR_DASH_STAR_DASHtuareg_DASH_STAR_DASH_STAR_RPAREN = 1,
  aux_sym_ocaml_syntax_token1 = 2,
  anon_sym_DQUOTE = 3,
  sym_multiline_string = 4,
  sym__quoted_string_char = 5,
  sym__atom = 6,
  sym_named_variable = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  sym_comment = 10,
  anon_sym_vendored_dirs = 11,
  anon_sym_ocamllex = 12,
  anon_sym_ocamlyacc = 13,
  anon_sym_include_subdirs = 14,
  anon_sym_data_only_dirs = 15,
  anon_sym_dirs = 16,
  anon_sym_documentation = 17,
  anon_sym_modules = 18,
  anon_sym_alias = 19,
  anon_sym_name = 20,
  anon_sym_action = 21,
  anon_sym_subdir = 22,
  anon_sym_executable = 23,
  anon_sym_executables = 24,
  anon_sym_test = 25,
  anon_sym_tests = 26,
  anon_sym_build_if = 27,
  anon_sym_names = 28,
  anon_sym_public_names = 29,
  anon_sym_libraries = 30,
  anon_sym_enabled_if = 31,
  anon_sym_public_name = 32,
  anon_sym_re_export = 33,
  anon_sym_select = 34,
  anon_sym_rule = 35,
  anon_sym_mode = 36,
  anon_sym_target = 37,
  anon_sym_targets = 38,
  anon_sym_package = 39,
  anon_sym_fallback = 40,
  anon_sym_locks = 41,
  anon_sym_deps = 42,
  anon_sym_universe = 43,
  anon_sym_sandbox = 44,
  anon_sym_env_var = 45,
  anon_sym_alias_rec = 46,
  anon_sym_source_tree = 47,
  anon_sym_glob_files = 48,
  anon_sym_dir = 49,
  anon_sym_true = 50,
  anon_sym_false = 51,
  anon_sym_promote = 52,
  anon_sym_promote_DASHinto = 53,
  anon_sym_only = 54,
  anon_sym_into = 55,
  anon_sym_EQ = 56,
  anon_sym_LT_GT = 57,
  anon_sym_GT = 58,
  anon_sym_LT = 59,
  anon_sym_GT_EQ = 60,
  anon_sym_LT_EQ = 61,
  anon_sym_or = 62,
  anon_sym_and = 63,
  anon_sym_bash = 64,
  anon_sym_cat = 65,
  anon_sym_cmp = 66,
  anon_sym_chdir = 67,
  anon_sym_copy = 68,
  anon_sym_copy_POUND = 69,
  anon_sym_diff = 70,
  anon_sym_diff_QMARK = 71,
  anon_sym_echo = 72,
  anon_sym_ignore_DASHstdout = 73,
  anon_sym_no_DASHinfer = 74,
  anon_sym_pipe_DASHoutputs = 75,
  anon_sym_progn = 76,
  anon_sym_run = 77,
  anon_sym_setenv = 78,
  anon_sym_system = 79,
  anon_sym_with_DASHaccepted_DASHexit_DASHcodes = 80,
  anon_sym_with_DASHoutputs_DASHto = 81,
  anon_sym_with_DASHstderr_DASHto = 82,
  anon_sym_with_DASHstdout_DASHto = 83,
  anon_sym_write_DASHfile = 84,
  anon_sym_library = 85,
  anon_sym_synopsis = 86,
  anon_sym_instrumentation = 87,
  anon_sym_wrapped = 88,
  anon_sym_transition = 89,
  anon_sym_kind = 90,
  anon_sym_ppx_DOTdriver = 91,
  anon_sym_toplevel = 92,
  anon_sym_install = 93,
  anon_sym_section = 94,
  anon_sym_files = 95,
  anon_sym_cram = 96,
  anon_sym_applies_to = 97,
  anon_sym_env = 98,
  anon_sym_lang = 99,
  anon_sym_version = 100,
  anon_sym_generate_opam_files = 101,
  anon_sym_source = 102,
  anon_sym_github = 103,
  anon_sym_git = 104,
  anon_sym_uri = 105,
  anon_sym_authors = 106,
  anon_sym_maintainers = 107,
  anon_sym_license = 108,
  anon_sym_homepage = 109,
  anon_sym_bug_reports = 110,
  anon_sym_using = 111,
  anon_sym_formatting = 112,
  anon_sym_enabled_for = 113,
  anon_sym_dialect = 114,
  anon_sym_explicit_js_mode = 115,
  anon_sym_description = 116,
  anon_sym_depends = 117,
  anon_sym_conflicts = 118,
  anon_sym_depopts = 119,
  anon_sym_tags = 120,
  anon_sym_deprecated_package_names = 121,
  anon_sym_sites = 122,
  anon_sym_allow_empty = 123,
  anon_sym_context = 124,
  anon_sym_default = 125,
  anon_sym_opam = 126,
  anon_sym_switch = 127,
  anon_sym_profile = 128,
  anon_sym_toolchain = 129,
  anon_sym_host = 130,
  anon_sym_merlin = 131,
  anon_sym_generate_merlin_rules = 132,
  anon_sym_disable_dynamically_linked_foreign_archives = 133,
  anon_sym_root = 134,
  anon_sym_lock_dir = 135,
  anon_sym_paths = 136,
  anon_sym_fdo = 137,
  anon_sym_copy_files = 138,
  anon_sym_only_sources = 139,
  anon_sym_menhir = 140,
  anon_sym_merge_into = 141,
  anon_sym_flags = 142,
  anon_sym_infer = 143,
  anon_sym_explain = 144,
  anon_sym_include = 145,
  anon_sym_foreign_library = 146,
  anon_sym_archive_name = 147,
  anon_sym_language = 148,
  anon_sym_include_dirs = 149,
  anon_sym_plugin = 150,
  anon_sym_optional = 151,
  anon_sym_site = 152,
  anon_sym_mdx = 153,
  anon_sym_packages = 154,
  anon_sym_preludes = 155,
  anon_sym_coq_DOTtheory = 156,
  anon_sym_theories = 157,
  anon_sym_plugins = 158,
  anon_sym_deprecated_library_name = 159,
  anon_sym_ignored_subdirs = 160,
  anon_sym_pin = 161,
  anon_sym_warnings = 162,
  anon_sym_accept_alternative_dune_file_name = 163,
  anon_sym_executables_implicit_empty_intf = 164,
  anon_sym_expand_aliases_in_sandbox = 165,
  anon_sym_implicit_transitive_deps = 166,
  anon_sym_map_workspace_root = 167,
  anon_sym_opam_file_location = 168,
  anon_sym_subst = 169,
  anon_sym_use_standard_c_and_cxx_flags = 170,
  anon_sym_wrapped_executables = 171,
  anon_sym_maintenance_intent = 172,
  anon_sym_config = 173,
  anon_sym_repository = 174,
  sym_source_file = 175,
  sym_ocaml_syntax = 176,
  sym_sexp = 177,
  sym_sexps1 = 178,
  sym__atom_or_qs = 179,
  sym_quoted_string = 180,
  sym__list = 181,
  sym_stanza = 182,
  sym__field_modules_maybe_inline = 183,
  sym__stanza_alias = 184,
  sym__stanza_subdir = 185,
  sym__stanza_executable = 186,
  sym__stanza_executables = 187,
  sym__stanza_test = 188,
  sym__stanza_tests = 189,
  sym__field_test = 190,
  sym__field_buildable_multi = 191,
  sym__field_buildable = 192,
  sym__modules_osl = 193,
  sym__lib_dep = 194,
  sym_library_name = 195,
  sym_public_name = 196,
  sym_module_name = 197,
  sym_file_name = 198,
  sym_file_name_dep = 199,
  sym_file_name_target = 200,
  sym_package_name = 201,
  sym_lock_name = 202,
  sym_shell_command = 203,
  sym__stanza_rule = 204,
  sym__deps_field = 205,
  sym__dep = 206,
  sym__target = 207,
  sym__bool = 208,
  sym__rule_mode = 209,
  sym__rule_mode_promote_field = 210,
  sym_blang = 211,
  sym_blang_op = 212,
  sym_alias_name = 213,
  sym_action = 214,
  sym__stanza_library = 215,
  sym__stanza_toplevel = 216,
  sym__stanza_install = 217,
  sym__stanza_cram = 218,
  sym__stanza_env = 219,
  sym__stanza_lang = 220,
  sym__stanza_name = 221,
  sym__stanza_version = 222,
  sym__stanza_generate_opam_files = 223,
  sym__stanza_source = 224,
  sym__stanza_authors = 225,
  sym__stanza_maintainers = 226,
  sym__stanza_license = 227,
  sym__stanza_homepage = 228,
  sym__stanza_documentation_url = 229,
  sym__stanza_bug_reports = 230,
  sym__stanza_using = 231,
  sym__stanza_formatting = 232,
  sym__stanza_dialect = 233,
  sym__stanza_explicit_js_mode = 234,
  sym__stanza_package = 235,
  sym__package_dep = 236,
  sym__version_constraint = 237,
  sym__stanza_context = 238,
  sym__context_opam = 239,
  sym__stanza_profile = 240,
  sym__stanza_copy_files = 241,
  sym__stanza_menhir = 242,
  sym__stanza_include = 243,
  sym__stanza_foreign_library = 244,
  sym__stanza_plugin = 245,
  sym__stanza_mdx = 246,
  sym__stanza_coq_theory = 247,
  sym__stanza_deprecated_library_name = 248,
  sym__stanza_ignored_subdirs = 249,
  sym__stanza_pin = 250,
  sym__stanza_warnings = 251,
  sym__stanza_accept_alternative_dune_file_name = 252,
  sym__stanza_executables_implicit_empty_intf = 253,
  sym__stanza_expand_aliases_in_sandbox = 254,
  sym__stanza_implicit_transitive_deps = 255,
  sym__stanza_map_workspace_root = 256,
  sym__stanza_opam_file_location = 257,
  sym__stanza_subst = 258,
  sym__stanza_use_standard_c_and_cxx_flags = 259,
  sym__stanza_wrapped_executables = 260,
  sym__stanza_maintenance_intent = 261,
  sym__stanza_config = 262,
  sym__stanza_lock_dir = 263,
  sym__stanza_repository = 264,
  aux_sym_source_file_repeat1 = 265,
  aux_sym_ocaml_syntax_repeat1 = 266,
  aux_sym_sexps1_repeat1 = 267,
  aux_sym_quoted_string_repeat1 = 268,
  aux_sym_stanza_repeat1 = 269,
  aux_sym_stanza_repeat2 = 270,
  aux_sym__field_modules_maybe_inline_repeat1 = 271,
  aux_sym__stanza_alias_repeat1 = 272,
  aux_sym__stanza_executable_repeat1 = 273,
  aux_sym__stanza_executables_repeat1 = 274,
  aux_sym__stanza_test_repeat1 = 275,
  aux_sym__stanza_tests_repeat1 = 276,
  aux_sym__field_buildable_multi_repeat1 = 277,
  aux_sym__field_buildable_multi_repeat2 = 278,
  aux_sym__stanza_rule_repeat1 = 279,
  aux_sym__stanza_rule_repeat2 = 280,
  aux_sym__stanza_rule_repeat3 = 281,
  aux_sym__stanza_rule_repeat4 = 282,
  aux_sym__deps_field_repeat1 = 283,
  aux_sym__dep_repeat1 = 284,
  aux_sym_blang_repeat1 = 285,
  aux_sym_action_repeat1 = 286,
  aux_sym__stanza_library_repeat1 = 287,
  aux_sym__stanza_toplevel_repeat1 = 288,
  aux_sym__stanza_install_repeat1 = 289,
  aux_sym__stanza_cram_repeat1 = 290,
  aux_sym__stanza_authors_repeat1 = 291,
  aux_sym__stanza_maintainers_repeat1 = 292,
  aux_sym__stanza_package_repeat1 = 293,
  aux_sym__stanza_package_repeat2 = 294,
  aux_sym__stanza_package_repeat3 = 295,
  aux_sym__package_dep_repeat1 = 296,
  aux_sym__context_opam_repeat1 = 297,
  aux_sym__stanza_copy_files_repeat1 = 298,
  aux_sym__stanza_menhir_repeat1 = 299,
  aux_sym__stanza_foreign_library_repeat1 = 300,
  aux_sym__stanza_plugin_repeat1 = 301,
  aux_sym__stanza_mdx_repeat1 = 302,
  aux_sym__stanza_coq_theory_repeat1 = 303,
  aux_sym__stanza_pin_repeat1 = 304,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN_STAR_DASH_STAR_DASHtuareg_DASH_STAR_DASH_STAR_RPAREN] = "(* -*- tuareg -*- *)",
  [aux_sym_ocaml_syntax_token1] = "ocaml_syntax_token1",
  [anon_sym_DQUOTE] = "\"",
  [sym_multiline_string] = "multiline_string",
  [sym__quoted_string_char] = "_quoted_string_char",
  [sym__atom] = "_atom",
  [sym_named_variable] = "named_variable",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_comment] = "comment",
  [anon_sym_vendored_dirs] = "stanza_name",
  [anon_sym_ocamllex] = "stanza_name",
  [anon_sym_ocamlyacc] = "stanza_name",
  [anon_sym_include_subdirs] = "stanza_name",
  [anon_sym_data_only_dirs] = "stanza_name",
  [anon_sym_dirs] = "stanza_name",
  [anon_sym_documentation] = "stanza_name",
  [anon_sym_modules] = "field_name",
  [anon_sym_alias] = "alias",
  [anon_sym_name] = "name",
  [anon_sym_action] = "field_name",
  [anon_sym_subdir] = "stanza_name",
  [anon_sym_executable] = "stanza_name",
  [anon_sym_executables] = "stanza_name",
  [anon_sym_test] = "stanza_name",
  [anon_sym_tests] = "stanza_name",
  [anon_sym_build_if] = "field_name",
  [anon_sym_names] = "field_name",
  [anon_sym_public_names] = "field_name",
  [anon_sym_libraries] = "field_name",
  [anon_sym_enabled_if] = "field_name",
  [anon_sym_public_name] = "field_name",
  [anon_sym_re_export] = "field_name",
  [anon_sym_select] = "field_name",
  [anon_sym_rule] = "stanza_name",
  [anon_sym_mode] = "field_name",
  [anon_sym_target] = "target",
  [anon_sym_targets] = "targets",
  [anon_sym_package] = "package",
  [anon_sym_fallback] = "fallback",
  [anon_sym_locks] = "field_name",
  [anon_sym_deps] = "field_name",
  [anon_sym_universe] = "universe",
  [anon_sym_sandbox] = "sandbox",
  [anon_sym_env_var] = "env_var",
  [anon_sym_alias_rec] = "alias_rec",
  [anon_sym_source_tree] = "source_tree",
  [anon_sym_glob_files] = "glob_files",
  [anon_sym_dir] = "dir",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_promote] = "promote",
  [anon_sym_promote_DASHinto] = "field_name",
  [anon_sym_only] = "field_name",
  [anon_sym_into] = "field_name",
  [anon_sym_EQ] = "=",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_or] = "or",
  [anon_sym_and] = "and",
  [anon_sym_bash] = "action_name",
  [anon_sym_cat] = "action_name",
  [anon_sym_cmp] = "action_name",
  [anon_sym_chdir] = "action_name",
  [anon_sym_copy] = "action_name",
  [anon_sym_copy_POUND] = "action_name",
  [anon_sym_diff] = "action_name",
  [anon_sym_diff_QMARK] = "action_name",
  [anon_sym_echo] = "action_name",
  [anon_sym_ignore_DASHstdout] = "action_name",
  [anon_sym_no_DASHinfer] = "action_name",
  [anon_sym_pipe_DASHoutputs] = "action_name",
  [anon_sym_progn] = "action_name",
  [anon_sym_run] = "action_name",
  [anon_sym_setenv] = "action_name",
  [anon_sym_system] = "action_name",
  [anon_sym_with_DASHaccepted_DASHexit_DASHcodes] = "action_name",
  [anon_sym_with_DASHoutputs_DASHto] = "action_name",
  [anon_sym_with_DASHstderr_DASHto] = "action_name",
  [anon_sym_with_DASHstdout_DASHto] = "action_name",
  [anon_sym_write_DASHfile] = "action_name",
  [anon_sym_library] = "stanza_name",
  [anon_sym_synopsis] = "field_name",
  [anon_sym_instrumentation] = "field_name",
  [anon_sym_wrapped] = "field_name",
  [anon_sym_transition] = "field_name",
  [anon_sym_kind] = "field_name",
  [anon_sym_ppx_DOTdriver] = "field_name",
  [anon_sym_toplevel] = "stanza_name",
  [anon_sym_install] = "stanza_name",
  [anon_sym_section] = "field_name",
  [anon_sym_files] = "field_name",
  [anon_sym_cram] = "stanza_name",
  [anon_sym_applies_to] = "field_name",
  [anon_sym_env] = "env",
  [anon_sym_lang] = "stanza_name",
  [anon_sym_version] = "stanza_name",
  [anon_sym_generate_opam_files] = "stanza_name",
  [anon_sym_source] = "stanza_name",
  [anon_sym_github] = "github",
  [anon_sym_git] = "git",
  [anon_sym_uri] = "uri",
  [anon_sym_authors] = "stanza_name",
  [anon_sym_maintainers] = "stanza_name",
  [anon_sym_license] = "stanza_name",
  [anon_sym_homepage] = "stanza_name",
  [anon_sym_bug_reports] = "stanza_name",
  [anon_sym_using] = "stanza_name",
  [anon_sym_formatting] = "stanza_name",
  [anon_sym_enabled_for] = "enabled_for",
  [anon_sym_dialect] = "stanza_name",
  [anon_sym_explicit_js_mode] = "stanza_name",
  [anon_sym_description] = "field_name",
  [anon_sym_depends] = "field_name",
  [anon_sym_conflicts] = "field_name",
  [anon_sym_depopts] = "field_name",
  [anon_sym_tags] = "field_name",
  [anon_sym_deprecated_package_names] = "field_name",
  [anon_sym_sites] = "field_name",
  [anon_sym_allow_empty] = "field_name",
  [anon_sym_context] = "stanza_name",
  [anon_sym_default] = "default",
  [anon_sym_opam] = "opam",
  [anon_sym_switch] = "switch",
  [anon_sym_profile] = "profile",
  [anon_sym_toolchain] = "toolchain",
  [anon_sym_host] = "host",
  [anon_sym_merlin] = "merlin",
  [anon_sym_generate_merlin_rules] = "generate_merlin_rules",
  [anon_sym_disable_dynamically_linked_foreign_archives] = "disable_dynamically_linked_foreign_archives",
  [anon_sym_root] = "root",
  [anon_sym_lock_dir] = "lock_dir",
  [anon_sym_paths] = "paths",
  [anon_sym_fdo] = "fdo",
  [anon_sym_copy_files] = "stanza_name",
  [anon_sym_only_sources] = "field_name",
  [anon_sym_menhir] = "stanza_name",
  [anon_sym_merge_into] = "field_name",
  [anon_sym_flags] = "field_name",
  [anon_sym_infer] = "field_name",
  [anon_sym_explain] = "field_name",
  [anon_sym_include] = "stanza_name",
  [anon_sym_foreign_library] = "stanza_name",
  [anon_sym_archive_name] = "field_name",
  [anon_sym_language] = "field_name",
  [anon_sym_include_dirs] = "field_name",
  [anon_sym_plugin] = "stanza_name",
  [anon_sym_optional] = "field_name",
  [anon_sym_site] = "field_name",
  [anon_sym_mdx] = "stanza_name",
  [anon_sym_packages] = "field_name",
  [anon_sym_preludes] = "field_name",
  [anon_sym_coq_DOTtheory] = "stanza_name",
  [anon_sym_theories] = "field_name",
  [anon_sym_plugins] = "field_name",
  [anon_sym_deprecated_library_name] = "stanza_name",
  [anon_sym_ignored_subdirs] = "stanza_name",
  [anon_sym_pin] = "stanza_name",
  [anon_sym_warnings] = "stanza_name",
  [anon_sym_accept_alternative_dune_file_name] = "stanza_name",
  [anon_sym_executables_implicit_empty_intf] = "stanza_name",
  [anon_sym_expand_aliases_in_sandbox] = "stanza_name",
  [anon_sym_implicit_transitive_deps] = "stanza_name",
  [anon_sym_map_workspace_root] = "stanza_name",
  [anon_sym_opam_file_location] = "stanza_name",
  [anon_sym_subst] = "stanza_name",
  [anon_sym_use_standard_c_and_cxx_flags] = "stanza_name",
  [anon_sym_wrapped_executables] = "stanza_name",
  [anon_sym_maintenance_intent] = "stanza_name",
  [anon_sym_config] = "stanza_name",
  [anon_sym_repository] = "stanza_name",
  [sym_source_file] = "source_file",
  [sym_ocaml_syntax] = "ocaml_syntax",
  [sym_sexp] = "sexp",
  [sym_sexps1] = "sexps1",
  [sym__atom_or_qs] = "_atom_or_qs",
  [sym_quoted_string] = "quoted_string",
  [sym__list] = "_list",
  [sym_stanza] = "stanza",
  [sym__field_modules_maybe_inline] = "_field_modules_maybe_inline",
  [sym__stanza_alias] = "_stanza_alias",
  [sym__stanza_subdir] = "_stanza_subdir",
  [sym__stanza_executable] = "_stanza_executable",
  [sym__stanza_executables] = "_stanza_executables",
  [sym__stanza_test] = "_stanza_test",
  [sym__stanza_tests] = "_stanza_tests",
  [sym__field_test] = "_field_test",
  [sym__field_buildable_multi] = "_field_buildable_multi",
  [sym__field_buildable] = "_field_buildable",
  [sym__modules_osl] = "_modules_osl",
  [sym__lib_dep] = "_lib_dep",
  [sym_library_name] = "library_name",
  [sym_public_name] = "public_name",
  [sym_module_name] = "module_name",
  [sym_file_name] = "file_name",
  [sym_file_name_dep] = "file_name_dep",
  [sym_file_name_target] = "file_name_target",
  [sym_package_name] = "package_name",
  [sym_lock_name] = "lock_name",
  [sym_shell_command] = "shell_command",
  [sym__stanza_rule] = "_stanza_rule",
  [sym__deps_field] = "_deps_field",
  [sym__dep] = "_dep",
  [sym__target] = "_target",
  [sym__bool] = "_bool",
  [sym__rule_mode] = "_rule_mode",
  [sym__rule_mode_promote_field] = "_rule_mode_promote_field",
  [sym_blang] = "blang",
  [sym_blang_op] = "blang_op",
  [sym_alias_name] = "alias_name",
  [sym_action] = "action",
  [sym__stanza_library] = "_stanza_library",
  [sym__stanza_toplevel] = "_stanza_toplevel",
  [sym__stanza_install] = "_stanza_install",
  [sym__stanza_cram] = "_stanza_cram",
  [sym__stanza_env] = "_stanza_env",
  [sym__stanza_lang] = "_stanza_lang",
  [sym__stanza_name] = "_stanza_name",
  [sym__stanza_version] = "_stanza_version",
  [sym__stanza_generate_opam_files] = "_stanza_generate_opam_files",
  [sym__stanza_source] = "_stanza_source",
  [sym__stanza_authors] = "_stanza_authors",
  [sym__stanza_maintainers] = "_stanza_maintainers",
  [sym__stanza_license] = "_stanza_license",
  [sym__stanza_homepage] = "_stanza_homepage",
  [sym__stanza_documentation_url] = "_stanza_documentation_url",
  [sym__stanza_bug_reports] = "_stanza_bug_reports",
  [sym__stanza_using] = "_stanza_using",
  [sym__stanza_formatting] = "_stanza_formatting",
  [sym__stanza_dialect] = "_stanza_dialect",
  [sym__stanza_explicit_js_mode] = "_stanza_explicit_js_mode",
  [sym__stanza_package] = "_stanza_package",
  [sym__package_dep] = "_package_dep",
  [sym__version_constraint] = "_version_constraint",
  [sym__stanza_context] = "_stanza_context",
  [sym__context_opam] = "_context_opam",
  [sym__stanza_profile] = "_stanza_profile",
  [sym__stanza_copy_files] = "_stanza_copy_files",
  [sym__stanza_menhir] = "_stanza_menhir",
  [sym__stanza_include] = "_stanza_include",
  [sym__stanza_foreign_library] = "_stanza_foreign_library",
  [sym__stanza_plugin] = "_stanza_plugin",
  [sym__stanza_mdx] = "_stanza_mdx",
  [sym__stanza_coq_theory] = "_stanza_coq_theory",
  [sym__stanza_deprecated_library_name] = "_stanza_deprecated_library_name",
  [sym__stanza_ignored_subdirs] = "_stanza_ignored_subdirs",
  [sym__stanza_pin] = "_stanza_pin",
  [sym__stanza_warnings] = "_stanza_warnings",
  [sym__stanza_accept_alternative_dune_file_name] = "_stanza_accept_alternative_dune_file_name",
  [sym__stanza_executables_implicit_empty_intf] = "_stanza_executables_implicit_empty_intf",
  [sym__stanza_expand_aliases_in_sandbox] = "_stanza_expand_aliases_in_sandbox",
  [sym__stanza_implicit_transitive_deps] = "_stanza_implicit_transitive_deps",
  [sym__stanza_map_workspace_root] = "_stanza_map_workspace_root",
  [sym__stanza_opam_file_location] = "_stanza_opam_file_location",
  [sym__stanza_subst] = "_stanza_subst",
  [sym__stanza_use_standard_c_and_cxx_flags] = "_stanza_use_standard_c_and_cxx_flags",
  [sym__stanza_wrapped_executables] = "_stanza_wrapped_executables",
  [sym__stanza_maintenance_intent] = "_stanza_maintenance_intent",
  [sym__stanza_config] = "_stanza_config",
  [sym__stanza_lock_dir] = "_stanza_lock_dir",
  [sym__stanza_repository] = "_stanza_repository",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_ocaml_syntax_repeat1] = "ocaml_syntax_repeat1",
  [aux_sym_sexps1_repeat1] = "sexps1_repeat1",
  [aux_sym_quoted_string_repeat1] = "quoted_string_repeat1",
  [aux_sym_stanza_repeat1] = "stanza_repeat1",
  [aux_sym_stanza_repeat2] = "stanza_repeat2",
  [aux_sym__field_modules_maybe_inline_repeat1] = "_field_modules_maybe_inline_repeat1",
  [aux_sym__stanza_alias_repeat1] = "_stanza_alias_repeat1",
  [aux_sym__stanza_executable_repeat1] = "_stanza_executable_repeat1",
  [aux_sym__stanza_executables_repeat1] = "_stanza_executables_repeat1",
  [aux_sym__stanza_test_repeat1] = "_stanza_test_repeat1",
  [aux_sym__stanza_tests_repeat1] = "_stanza_tests_repeat1",
  [aux_sym__field_buildable_multi_repeat1] = "_field_buildable_multi_repeat1",
  [aux_sym__field_buildable_multi_repeat2] = "_field_buildable_multi_repeat2",
  [aux_sym__stanza_rule_repeat1] = "_stanza_rule_repeat1",
  [aux_sym__stanza_rule_repeat2] = "_stanza_rule_repeat2",
  [aux_sym__stanza_rule_repeat3] = "_stanza_rule_repeat3",
  [aux_sym__stanza_rule_repeat4] = "_stanza_rule_repeat4",
  [aux_sym__deps_field_repeat1] = "_deps_field_repeat1",
  [aux_sym__dep_repeat1] = "_dep_repeat1",
  [aux_sym_blang_repeat1] = "blang_repeat1",
  [aux_sym_action_repeat1] = "action_repeat1",
  [aux_sym__stanza_library_repeat1] = "_stanza_library_repeat1",
  [aux_sym__stanza_toplevel_repeat1] = "_stanza_toplevel_repeat1",
  [aux_sym__stanza_install_repeat1] = "_stanza_install_repeat1",
  [aux_sym__stanza_cram_repeat1] = "_stanza_cram_repeat1",
  [aux_sym__stanza_authors_repeat1] = "_stanza_authors_repeat1",
  [aux_sym__stanza_maintainers_repeat1] = "_stanza_maintainers_repeat1",
  [aux_sym__stanza_package_repeat1] = "_stanza_package_repeat1",
  [aux_sym__stanza_package_repeat2] = "_stanza_package_repeat2",
  [aux_sym__stanza_package_repeat3] = "_stanza_package_repeat3",
  [aux_sym__package_dep_repeat1] = "_package_dep_repeat1",
  [aux_sym__context_opam_repeat1] = "_context_opam_repeat1",
  [aux_sym__stanza_copy_files_repeat1] = "_stanza_copy_files_repeat1",
  [aux_sym__stanza_menhir_repeat1] = "_stanza_menhir_repeat1",
  [aux_sym__stanza_foreign_library_repeat1] = "_stanza_foreign_library_repeat1",
  [aux_sym__stanza_plugin_repeat1] = "_stanza_plugin_repeat1",
  [aux_sym__stanza_mdx_repeat1] = "_stanza_mdx_repeat1",
  [aux_sym__stanza_coq_theory_repeat1] = "_stanza_coq_theory_repeat1",
  [aux_sym__stanza_pin_repeat1] = "_stanza_pin_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN_STAR_DASH_STAR_DASHtuareg_DASH_STAR_DASH_STAR_RPAREN] = anon_sym_LPAREN_STAR_DASH_STAR_DASHtuareg_DASH_STAR_DASH_STAR_RPAREN,
  [aux_sym_ocaml_syntax_token1] = aux_sym_ocaml_syntax_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_multiline_string] = sym_multiline_string,
  [sym__quoted_string_char] = sym__quoted_string_char,
  [sym__atom] = sym__atom,
  [sym_named_variable] = sym_named_variable,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_comment] = sym_comment,
  [anon_sym_vendored_dirs] = anon_sym_vendored_dirs,
  [anon_sym_ocamllex] = anon_sym_vendored_dirs,
  [anon_sym_ocamlyacc] = anon_sym_vendored_dirs,
  [anon_sym_include_subdirs] = anon_sym_vendored_dirs,
  [anon_sym_data_only_dirs] = anon_sym_vendored_dirs,
  [anon_sym_dirs] = anon_sym_vendored_dirs,
  [anon_sym_documentation] = anon_sym_vendored_dirs,
  [anon_sym_modules] = anon_sym_modules,
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_action] = anon_sym_modules,
  [anon_sym_subdir] = anon_sym_vendored_dirs,
  [anon_sym_executable] = anon_sym_vendored_dirs,
  [anon_sym_executables] = anon_sym_vendored_dirs,
  [anon_sym_test] = anon_sym_vendored_dirs,
  [anon_sym_tests] = anon_sym_vendored_dirs,
  [anon_sym_build_if] = anon_sym_modules,
  [anon_sym_names] = anon_sym_modules,
  [anon_sym_public_names] = anon_sym_modules,
  [anon_sym_libraries] = anon_sym_modules,
  [anon_sym_enabled_if] = anon_sym_modules,
  [anon_sym_public_name] = anon_sym_modules,
  [anon_sym_re_export] = anon_sym_modules,
  [anon_sym_select] = anon_sym_modules,
  [anon_sym_rule] = anon_sym_vendored_dirs,
  [anon_sym_mode] = anon_sym_modules,
  [anon_sym_target] = anon_sym_target,
  [anon_sym_targets] = anon_sym_targets,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_fallback] = anon_sym_fallback,
  [anon_sym_locks] = anon_sym_modules,
  [anon_sym_deps] = anon_sym_modules,
  [anon_sym_universe] = anon_sym_universe,
  [anon_sym_sandbox] = anon_sym_sandbox,
  [anon_sym_env_var] = anon_sym_env_var,
  [anon_sym_alias_rec] = anon_sym_alias_rec,
  [anon_sym_source_tree] = anon_sym_source_tree,
  [anon_sym_glob_files] = anon_sym_glob_files,
  [anon_sym_dir] = anon_sym_dir,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_promote] = anon_sym_promote,
  [anon_sym_promote_DASHinto] = anon_sym_modules,
  [anon_sym_only] = anon_sym_modules,
  [anon_sym_into] = anon_sym_modules,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_bash] = anon_sym_bash,
  [anon_sym_cat] = anon_sym_bash,
  [anon_sym_cmp] = anon_sym_bash,
  [anon_sym_chdir] = anon_sym_bash,
  [anon_sym_copy] = anon_sym_bash,
  [anon_sym_copy_POUND] = anon_sym_bash,
  [anon_sym_diff] = anon_sym_bash,
  [anon_sym_diff_QMARK] = anon_sym_bash,
  [anon_sym_echo] = anon_sym_bash,
  [anon_sym_ignore_DASHstdout] = anon_sym_bash,
  [anon_sym_no_DASHinfer] = anon_sym_bash,
  [anon_sym_pipe_DASHoutputs] = anon_sym_bash,
  [anon_sym_progn] = anon_sym_bash,
  [anon_sym_run] = anon_sym_bash,
  [anon_sym_setenv] = anon_sym_bash,
  [anon_sym_system] = anon_sym_bash,
  [anon_sym_with_DASHaccepted_DASHexit_DASHcodes] = anon_sym_bash,
  [anon_sym_with_DASHoutputs_DASHto] = anon_sym_bash,
  [anon_sym_with_DASHstderr_DASHto] = anon_sym_bash,
  [anon_sym_with_DASHstdout_DASHto] = anon_sym_bash,
  [anon_sym_write_DASHfile] = anon_sym_bash,
  [anon_sym_library] = anon_sym_vendored_dirs,
  [anon_sym_synopsis] = anon_sym_modules,
  [anon_sym_instrumentation] = anon_sym_modules,
  [anon_sym_wrapped] = anon_sym_modules,
  [anon_sym_transition] = anon_sym_modules,
  [anon_sym_kind] = anon_sym_modules,
  [anon_sym_ppx_DOTdriver] = anon_sym_modules,
  [anon_sym_toplevel] = anon_sym_vendored_dirs,
  [anon_sym_install] = anon_sym_vendored_dirs,
  [anon_sym_section] = anon_sym_modules,
  [anon_sym_files] = anon_sym_modules,
  [anon_sym_cram] = anon_sym_vendored_dirs,
  [anon_sym_applies_to] = anon_sym_modules,
  [anon_sym_env] = anon_sym_env,
  [anon_sym_lang] = anon_sym_vendored_dirs,
  [anon_sym_version] = anon_sym_vendored_dirs,
  [anon_sym_generate_opam_files] = anon_sym_vendored_dirs,
  [anon_sym_source] = anon_sym_vendored_dirs,
  [anon_sym_github] = anon_sym_github,
  [anon_sym_git] = anon_sym_git,
  [anon_sym_uri] = anon_sym_uri,
  [anon_sym_authors] = anon_sym_vendored_dirs,
  [anon_sym_maintainers] = anon_sym_vendored_dirs,
  [anon_sym_license] = anon_sym_vendored_dirs,
  [anon_sym_homepage] = anon_sym_vendored_dirs,
  [anon_sym_bug_reports] = anon_sym_vendored_dirs,
  [anon_sym_using] = anon_sym_vendored_dirs,
  [anon_sym_formatting] = anon_sym_vendored_dirs,
  [anon_sym_enabled_for] = anon_sym_enabled_for,
  [anon_sym_dialect] = anon_sym_vendored_dirs,
  [anon_sym_explicit_js_mode] = anon_sym_vendored_dirs,
  [anon_sym_description] = anon_sym_modules,
  [anon_sym_depends] = anon_sym_modules,
  [anon_sym_conflicts] = anon_sym_modules,
  [anon_sym_depopts] = anon_sym_modules,
  [anon_sym_tags] = anon_sym_modules,
  [anon_sym_deprecated_package_names] = anon_sym_modules,
  [anon_sym_sites] = anon_sym_modules,
  [anon_sym_allow_empty] = anon_sym_modules,
  [anon_sym_context] = anon_sym_vendored_dirs,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_opam] = anon_sym_opam,
  [anon_sym_switch] = anon_sym_switch,
  [anon_sym_profile] = anon_sym_profile,
  [anon_sym_toolchain] = anon_sym_toolchain,
  [anon_sym_host] = anon_sym_host,
  [anon_sym_merlin] = anon_sym_merlin,
  [anon_sym_generate_merlin_rules] = anon_sym_generate_merlin_rules,
  [anon_sym_disable_dynamically_linked_foreign_archives] = anon_sym_disable_dynamically_linked_foreign_archives,
  [anon_sym_root] = anon_sym_root,
  [anon_sym_lock_dir] = anon_sym_lock_dir,
  [anon_sym_paths] = anon_sym_paths,
  [anon_sym_fdo] = anon_sym_fdo,
  [anon_sym_copy_files] = anon_sym_vendored_dirs,
  [anon_sym_only_sources] = anon_sym_modules,
  [anon_sym_menhir] = anon_sym_vendored_dirs,
  [anon_sym_merge_into] = anon_sym_modules,
  [anon_sym_flags] = anon_sym_modules,
  [anon_sym_infer] = anon_sym_modules,
  [anon_sym_explain] = anon_sym_modules,
  [anon_sym_include] = anon_sym_vendored_dirs,
  [anon_sym_foreign_library] = anon_sym_vendored_dirs,
  [anon_sym_archive_name] = anon_sym_modules,
  [anon_sym_language] = anon_sym_modules,
  [anon_sym_include_dirs] = anon_sym_modules,
  [anon_sym_plugin] = anon_sym_vendored_dirs,
  [anon_sym_optional] = anon_sym_modules,
  [anon_sym_site] = anon_sym_modules,
  [anon_sym_mdx] = anon_sym_vendored_dirs,
  [anon_sym_packages] = anon_sym_modules,
  [anon_sym_preludes] = anon_sym_modules,
  [anon_sym_coq_DOTtheory] = anon_sym_vendored_dirs,
  [anon_sym_theories] = anon_sym_modules,
  [anon_sym_plugins] = anon_sym_modules,
  [anon_sym_deprecated_library_name] = anon_sym_vendored_dirs,
  [anon_sym_ignored_subdirs] = anon_sym_vendored_dirs,
  [anon_sym_pin] = anon_sym_vendored_dirs,
  [anon_sym_warnings] = anon_sym_vendored_dirs,
  [anon_sym_accept_alternative_dune_file_name] = anon_sym_vendored_dirs,
  [anon_sym_executables_implicit_empty_intf] = anon_sym_vendored_dirs,
  [anon_sym_expand_aliases_in_sandbox] = anon_sym_vendored_dirs,
  [anon_sym_implicit_transitive_deps] = anon_sym_vendored_dirs,
  [anon_sym_map_workspace_root] = anon_sym_vendored_dirs,
  [anon_sym_opam_file_location] = anon_sym_vendored_dirs,
  [anon_sym_subst] = anon_sym_vendored_dirs,
  [anon_sym_use_standard_c_and_cxx_flags] = anon_sym_vendored_dirs,
  [anon_sym_wrapped_executables] = anon_sym_vendored_dirs,
  [anon_sym_maintenance_intent] = anon_sym_vendored_dirs,
  [anon_sym_config] = anon_sym_vendored_dirs,
  [anon_sym_repository] = anon_sym_vendored_dirs,
  [sym_source_file] = sym_source_file,
  [sym_ocaml_syntax] = sym_ocaml_syntax,
  [sym_sexp] = sym_sexp,
  [sym_sexps1] = sym_sexps1,
  [sym__atom_or_qs] = sym__atom_or_qs,
  [sym_quoted_string] = sym_quoted_string,
  [sym__list] = sym__list,
  [sym_stanza] = sym_stanza,
  [sym__field_modules_maybe_inline] = sym__field_modules_maybe_inline,
  [sym__stanza_alias] = sym__stanza_alias,
  [sym__stanza_subdir] = sym__stanza_subdir,
  [sym__stanza_executable] = sym__stanza_executable,
  [sym__stanza_executables] = sym__stanza_executables,
  [sym__stanza_test] = sym__stanza_test,
  [sym__stanza_tests] = sym__stanza_tests,
  [sym__field_test] = sym__field_test,
  [sym__field_buildable_multi] = sym__field_buildable_multi,
  [sym__field_buildable] = sym__field_buildable,
  [sym__modules_osl] = sym__modules_osl,
  [sym__lib_dep] = sym__lib_dep,
  [sym_library_name] = sym_library_name,
  [sym_public_name] = sym_public_name,
  [sym_module_name] = sym_module_name,
  [sym_file_name] = sym_file_name,
  [sym_file_name_dep] = sym_file_name_dep,
  [sym_file_name_target] = sym_file_name_target,
  [sym_package_name] = sym_package_name,
  [sym_lock_name] = sym_lock_name,
  [sym_shell_command] = sym_shell_command,
  [sym__stanza_rule] = sym__stanza_rule,
  [sym__deps_field] = sym__deps_field,
  [sym__dep] = sym__dep,
  [sym__target] = sym__target,
  [sym__bool] = sym__bool,
  [sym__rule_mode] = sym__rule_mode,
  [sym__rule_mode_promote_field] = sym__rule_mode_promote_field,
  [sym_blang] = sym_blang,
  [sym_blang_op] = sym_blang_op,
  [sym_alias_name] = sym_alias_name,
  [sym_action] = sym_action,
  [sym__stanza_library] = sym__stanza_library,
  [sym__stanza_toplevel] = sym__stanza_toplevel,
  [sym__stanza_install] = sym__stanza_install,
  [sym__stanza_cram] = sym__stanza_cram,
  [sym__stanza_env] = sym__stanza_env,
  [sym__stanza_lang] = sym__stanza_lang,
  [sym__stanza_name] = sym__stanza_name,
  [sym__stanza_version] = sym__stanza_version,
  [sym__stanza_generate_opam_files] = sym__stanza_generate_opam_files,
  [sym__stanza_source] = sym__stanza_source,
  [sym__stanza_authors] = sym__stanza_authors,
  [sym__stanza_maintainers] = sym__stanza_maintainers,
  [sym__stanza_license] = sym__stanza_license,
  [sym__stanza_homepage] = sym__stanza_homepage,
  [sym__stanza_documentation_url] = sym__stanza_documentation_url,
  [sym__stanza_bug_reports] = sym__stanza_bug_reports,
  [sym__stanza_using] = sym__stanza_using,
  [sym__stanza_formatting] = sym__stanza_formatting,
  [sym__stanza_dialect] = sym__stanza_dialect,
  [sym__stanza_explicit_js_mode] = sym__stanza_explicit_js_mode,
  [sym__stanza_package] = sym__stanza_package,
  [sym__package_dep] = sym__package_dep,
  [sym__version_constraint] = sym__version_constraint,
  [sym__stanza_context] = sym__stanza_context,
  [sym__context_opam] = sym__context_opam,
  [sym__stanza_profile] = sym__stanza_profile,
  [sym__stanza_copy_files] = sym__stanza_copy_files,
  [sym__stanza_menhir] = sym__stanza_menhir,
  [sym__stanza_include] = sym__stanza_include,
  [sym__stanza_foreign_library] = sym__stanza_foreign_library,
  [sym__stanza_plugin] = sym__stanza_plugin,
  [sym__stanza_mdx] = sym__stanza_mdx,
  [sym__stanza_coq_theory] = sym__stanza_coq_theory,
  [sym__stanza_deprecated_library_name] = sym__stanza_deprecated_library_name,
  [sym__stanza_ignored_subdirs] = sym__stanza_ignored_subdirs,
  [sym__stanza_pin] = sym__stanza_pin,
  [sym__stanza_warnings] = sym__stanza_warnings,
  [sym__stanza_accept_alternative_dune_file_name] = sym__stanza_accept_alternative_dune_file_name,
  [sym__stanza_executables_implicit_empty_intf] = sym__stanza_executables_implicit_empty_intf,
  [sym__stanza_expand_aliases_in_sandbox] = sym__stanza_expand_aliases_in_sandbox,
  [sym__stanza_implicit_transitive_deps] = sym__stanza_implicit_transitive_deps,
  [sym__stanza_map_workspace_root] = sym__stanza_map_workspace_root,
  [sym__stanza_opam_file_location] = sym__stanza_opam_file_location,
  [sym__stanza_subst] = sym__stanza_subst,
  [sym__stanza_use_standard_c_and_cxx_flags] = sym__stanza_use_standard_c_and_cxx_flags,
  [sym__stanza_wrapped_executables] = sym__stanza_wrapped_executables,
  [sym__stanza_maintenance_intent] = sym__stanza_maintenance_intent,
  [sym__stanza_config] = sym__stanza_config,
  [sym__stanza_lock_dir] = sym__stanza_lock_dir,
  [sym__stanza_repository] = sym__stanza_repository,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_ocaml_syntax_repeat1] = aux_sym_ocaml_syntax_repeat1,
  [aux_sym_sexps1_repeat1] = aux_sym_sexps1_repeat1,
  [aux_sym_quoted_string_repeat1] = aux_sym_quoted_string_repeat1,
  [aux_sym_stanza_repeat1] = aux_sym_stanza_repeat1,
  [aux_sym_stanza_repeat2] = aux_sym_stanza_repeat2,
  [aux_sym__field_modules_maybe_inline_repeat1] = aux_sym__field_modules_maybe_inline_repeat1,
  [aux_sym__stanza_alias_repeat1] = aux_sym__stanza_alias_repeat1,
  [aux_sym__stanza_executable_repeat1] = aux_sym__stanza_executable_repeat1,
  [aux_sym__stanza_executables_repeat1] = aux_sym__stanza_executables_repeat1,
  [aux_sym__stanza_test_repeat1] = aux_sym__stanza_test_repeat1,
  [aux_sym__stanza_tests_repeat1] = aux_sym__stanza_tests_repeat1,
  [aux_sym__field_buildable_multi_repeat1] = aux_sym__field_buildable_multi_repeat1,
  [aux_sym__field_buildable_multi_repeat2] = aux_sym__field_buildable_multi_repeat2,
  [aux_sym__stanza_rule_repeat1] = aux_sym__stanza_rule_repeat1,
  [aux_sym__stanza_rule_repeat2] = aux_sym__stanza_rule_repeat2,
  [aux_sym__stanza_rule_repeat3] = aux_sym__stanza_rule_repeat3,
  [aux_sym__stanza_rule_repeat4] = aux_sym__stanza_rule_repeat4,
  [aux_sym__deps_field_repeat1] = aux_sym__deps_field_repeat1,
  [aux_sym__dep_repeat1] = aux_sym__dep_repeat1,
  [aux_sym_blang_repeat1] = aux_sym_blang_repeat1,
  [aux_sym_action_repeat1] = aux_sym_action_repeat1,
  [aux_sym__stanza_library_repeat1] = aux_sym__stanza_library_repeat1,
  [aux_sym__stanza_toplevel_repeat1] = aux_sym__stanza_toplevel_repeat1,
  [aux_sym__stanza_install_repeat1] = aux_sym__stanza_install_repeat1,
  [aux_sym__stanza_cram_repeat1] = aux_sym__stanza_cram_repeat1,
  [aux_sym__stanza_authors_repeat1] = aux_sym__stanza_authors_repeat1,
  [aux_sym__stanza_maintainers_repeat1] = aux_sym__stanza_maintainers_repeat1,
  [aux_sym__stanza_package_repeat1] = aux_sym__stanza_package_repeat1,
  [aux_sym__stanza_package_repeat2] = aux_sym__stanza_package_repeat2,
  [aux_sym__stanza_package_repeat3] = aux_sym__stanza_package_repeat3,
  [aux_sym__package_dep_repeat1] = aux_sym__package_dep_repeat1,
  [aux_sym__context_opam_repeat1] = aux_sym__context_opam_repeat1,
  [aux_sym__stanza_copy_files_repeat1] = aux_sym__stanza_copy_files_repeat1,
  [aux_sym__stanza_menhir_repeat1] = aux_sym__stanza_menhir_repeat1,
  [aux_sym__stanza_foreign_library_repeat1] = aux_sym__stanza_foreign_library_repeat1,
  [aux_sym__stanza_plugin_repeat1] = aux_sym__stanza_plugin_repeat1,
  [aux_sym__stanza_mdx_repeat1] = aux_sym__stanza_mdx_repeat1,
  [aux_sym__stanza_coq_theory_repeat1] = aux_sym__stanza_coq_theory_repeat1,
  [aux_sym__stanza_pin_repeat1] = aux_sym__stanza_pin_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN_STAR_DASH_STAR_DASHtuareg_DASH_STAR_DASH_STAR_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ocaml_syntax_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_multiline_string] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_string_char] = {
    .visible = false,
    .named = true,
  },
  [sym__atom] = {
    .visible = false,
    .named = true,
  },
  [sym_named_variable] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_vendored_dirs] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ocamllex] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ocamlyacc] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_include_subdirs] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_data_only_dirs] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_dirs] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_documentation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_modules] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_action] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_subdir] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_executable] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_executables] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_test] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_tests] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_build_if] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_names] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_public_names] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_libraries] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_enabled_if] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_public_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_re_export] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_select] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_rule] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mode] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_target] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_targets] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fallback] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_locks] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_deps] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_universe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sandbox] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_env_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alias_rec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_source_tree] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_glob_files] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_promote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_promote_DASHinto] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_only] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_into] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bash] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_cat] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_cmp] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_chdir] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_copy] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_copy_POUND] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_diff] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_diff_QMARK] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_echo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ignore_DASHstdout] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_no_DASHinfer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_pipe_DASHoutputs] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_progn] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_run] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_setenv] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_system] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_with_DASHaccepted_DASHexit_DASHcodes] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_with_DASHoutputs_DASHto] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_with_DASHstderr_DASHto] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_with_DASHstdout_DASHto] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_write_DASHfile] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_library] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_synopsis] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_instrumentation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_wrapped] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_transition] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_kind] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ppx_DOTdriver] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_toplevel] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_install] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_section] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_files] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_cram] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_applies_to] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_env] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lang] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_version] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_generate_opam_files] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_source] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_github] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_git] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uri] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_authors] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_maintainers] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_license] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_homepage] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_bug_reports] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_formatting] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_enabled_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dialect] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_explicit_js_mode] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_description] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_depends] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_conflicts] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_depopts] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_tags] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_deprecated_package_names] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_sites] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_allow_empty] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_context] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_opam] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_switch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_profile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_toolchain] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_host] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_merlin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_generate_merlin_rules] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disable_dynamically_linked_foreign_archives] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_root] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lock_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_paths] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fdo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_copy_files] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_only_sources] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_menhir] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_merge_into] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_flags] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_infer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_explain] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_foreign_library] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_archive_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_language] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_include_dirs] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_plugin] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_optional] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_site] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mdx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_packages] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_preludes] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_coq_DOTtheory] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_theories] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_plugins] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_deprecated_library_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ignored_subdirs] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_pin] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_warnings] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_accept_alternative_dune_file_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_executables_implicit_empty_intf] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_expand_aliases_in_sandbox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_implicit_transitive_deps] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_map_workspace_root] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_opam_file_location] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_subst] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_use_standard_c_and_cxx_flags] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_wrapped_executables] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_maintenance_intent] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_config] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_repository] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_ocaml_syntax] = {
    .visible = true,
    .named = true,
  },
  [sym_sexp] = {
    .visible = true,
    .named = true,
  },
  [sym_sexps1] = {
    .visible = true,
    .named = true,
  },
  [sym__atom_or_qs] = {
    .visible = false,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym__list] = {
    .visible = false,
    .named = true,
  },
  [sym_stanza] = {
    .visible = true,
    .named = true,
  },
  [sym__field_modules_maybe_inline] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_alias] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_subdir] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_executable] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_executables] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_test] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_tests] = {
    .visible = false,
    .named = true,
  },
  [sym__field_test] = {
    .visible = false,
    .named = true,
  },
  [sym__field_buildable_multi] = {
    .visible = false,
    .named = true,
  },
  [sym__field_buildable] = {
    .visible = false,
    .named = true,
  },
  [sym__modules_osl] = {
    .visible = false,
    .named = true,
  },
  [sym__lib_dep] = {
    .visible = false,
    .named = true,
  },
  [sym_library_name] = {
    .visible = true,
    .named = true,
  },
  [sym_public_name] = {
    .visible = true,
    .named = true,
  },
  [sym_module_name] = {
    .visible = true,
    .named = true,
  },
  [sym_file_name] = {
    .visible = true,
    .named = true,
  },
  [sym_file_name_dep] = {
    .visible = true,
    .named = true,
  },
  [sym_file_name_target] = {
    .visible = true,
    .named = true,
  },
  [sym_package_name] = {
    .visible = true,
    .named = true,
  },
  [sym_lock_name] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_command] = {
    .visible = true,
    .named = true,
  },
  [sym__stanza_rule] = {
    .visible = false,
    .named = true,
  },
  [sym__deps_field] = {
    .visible = false,
    .named = true,
  },
  [sym__dep] = {
    .visible = false,
    .named = true,
  },
  [sym__target] = {
    .visible = false,
    .named = true,
  },
  [sym__bool] = {
    .visible = false,
    .named = true,
  },
  [sym__rule_mode] = {
    .visible = false,
    .named = true,
  },
  [sym__rule_mode_promote_field] = {
    .visible = false,
    .named = true,
  },
  [sym_blang] = {
    .visible = true,
    .named = true,
  },
  [sym_blang_op] = {
    .visible = true,
    .named = true,
  },
  [sym_alias_name] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym__stanza_library] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_toplevel] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_install] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_cram] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_env] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_lang] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_name] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_version] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_generate_opam_files] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_source] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_authors] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_maintainers] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_license] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_homepage] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_documentation_url] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_bug_reports] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_using] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_formatting] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_dialect] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_explicit_js_mode] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_package] = {
    .visible = false,
    .named = true,
  },
  [sym__package_dep] = {
    .visible = false,
    .named = true,
  },
  [sym__version_constraint] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_context] = {
    .visible = false,
    .named = true,
  },
  [sym__context_opam] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_profile] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_copy_files] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_menhir] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_include] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_foreign_library] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_plugin] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_mdx] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_coq_theory] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_deprecated_library_name] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_ignored_subdirs] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_pin] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_warnings] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_accept_alternative_dune_file_name] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_executables_implicit_empty_intf] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_expand_aliases_in_sandbox] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_implicit_transitive_deps] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_map_workspace_root] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_opam_file_location] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_subst] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_use_standard_c_and_cxx_flags] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_wrapped_executables] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_maintenance_intent] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_config] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_lock_dir] = {
    .visible = false,
    .named = true,
  },
  [sym__stanza_repository] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ocaml_syntax_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sexps1_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stanza_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stanza_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__field_modules_maybe_inline_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_alias_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_executable_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_executables_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_test_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_tests_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__field_buildable_multi_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__field_buildable_multi_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_rule_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_rule_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_rule_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__deps_field_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__dep_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_blang_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_action_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_library_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_toplevel_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_install_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_cram_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_authors_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_maintainers_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_package_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_package_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_package_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__package_dep_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__context_opam_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_copy_files_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_menhir_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_foreign_library_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_plugin_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_mdx_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_coq_theory_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_pin_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_arguments = 1,
  field_author = 2,
  field_context_name = 3,
  field_directory = 4,
  field_enabled = 5,
  field_extension = 6,
  field_host_context = 7,
  field_language = 8,
  field_license = 9,
  field_lock_dir = 10,
  field_maintainer = 11,
  field_new_name = 12,
  field_old_name = 13,
  field_opam_root = 14,
  field_path = 15,
  field_profile = 16,
  field_profile_name = 17,
  field_project_name = 18,
  field_repo = 19,
  field_stanzas = 20,
  field_switch = 21,
  field_target_exe = 22,
  field_target_triple = 23,
  field_toolchain = 24,
  field_url = 25,
  field_value = 26,
  field_version = 27,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_author] = "author",
  [field_context_name] = "context_name",
  [field_directory] = "directory",
  [field_enabled] = "enabled",
  [field_extension] = "extension",
  [field_host_context] = "host_context",
  [field_language] = "language",
  [field_license] = "license",
  [field_lock_dir] = "lock_dir",
  [field_maintainer] = "maintainer",
  [field_new_name] = "new_name",
  [field_old_name] = "old_name",
  [field_opam_root] = "opam_root",
  [field_path] = "path",
  [field_profile] = "profile",
  [field_profile_name] = "profile_name",
  [field_project_name] = "project_name",
  [field_repo] = "repo",
  [field_stanzas] = "stanzas",
  [field_switch] = "switch",
  [field_target_exe] = "target_exe",
  [field_target_triple] = "target_triple",
  [field_toolchain] = "toolchain",
  [field_url] = "url",
  [field_value] = "value",
  [field_version] = "version",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 1},
  [9] = {.index = 11, .length = 1},
  [10] = {.index = 12, .length = 1},
  [11] = {.index = 13, .length = 1},
  [12] = {.index = 14, .length = 2},
  [13] = {.index = 16, .length = 9},
  [14] = {.index = 25, .length = 1},
  [15] = {.index = 26, .length = 2},
  [16] = {.index = 28, .length = 1},
  [18] = {.index = 29, .length = 1},
  [19] = {.index = 30, .length = 1},
  [20] = {.index = 31, .length = 1},
  [21] = {.index = 32, .length = 2},
  [22] = {.index = 34, .length = 1},
  [23] = {.index = 31, .length = 1},
  [24] = {.index = 35, .length = 1},
  [25] = {.index = 36, .length = 1},
  [26] = {.index = 37, .length = 1},
  [27] = {.index = 38, .length = 1},
  [28] = {.index = 39, .length = 2},
  [29] = {.index = 41, .length = 1},
  [30] = {.index = 42, .length = 2},
  [31] = {.index = 44, .length = 1},
  [32] = {.index = 45, .length = 9},
  [33] = {.index = 54, .length = 1},
  [34] = {.index = 55, .length = 1},
  [35] = {.index = 56, .length = 2},
  [37] = {.index = 58, .length = 2},
  [38] = {.index = 60, .length = 2},
  [39] = {.index = 62, .length = 2},
  [40] = {.index = 64, .length = 1},
  [41] = {.index = 64, .length = 1},
  [42] = {.index = 65, .length = 2},
  [43] = {.index = 65, .length = 2},
  [44] = {.index = 67, .length = 1},
  [45] = {.index = 68, .length = 18},
  [46] = {.index = 86, .length = 2},
  [47] = {.index = 88, .length = 1},
  [48] = {.index = 89, .length = 1},
  [49] = {.index = 90, .length = 3},
  [50] = {.index = 93, .length = 1},
  [51] = {.index = 94, .length = 1},
  [52] = {.index = 95, .length = 1},
  [53] = {.index = 96, .length = 1},
  [54] = {.index = 97, .length = 1},
  [55] = {.index = 98, .length = 1},
  [56] = {.index = 99, .length = 1},
  [57] = {.index = 100, .length = 1},
  [58] = {.index = 101, .length = 1},
  [59] = {.index = 102, .length = 4},
  [60] = {.index = 102, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_value, 0, .inherited = true},
  [1] =
    {field_directory, 0, .inherited = true},
    {field_stanzas, 0, .inherited = true},
  [3] =
    {field_language, 0, .inherited = true},
    {field_version, 0, .inherited = true},
  [5] =
    {field_project_name, 0, .inherited = true},
  [6] =
    {field_version, 0, .inherited = true},
  [7] =
    {field_enabled, 0, .inherited = true},
  [8] =
    {field_repo, 0, .inherited = true},
    {field_url, 0, .inherited = true},
  [10] =
    {field_author, 0, .inherited = true},
  [11] =
    {field_maintainer, 0, .inherited = true},
  [12] =
    {field_license, 0, .inherited = true},
  [13] =
    {field_url, 0, .inherited = true},
  [14] =
    {field_extension, 0, .inherited = true},
    {field_version, 0, .inherited = true},
  [16] =
    {field_context_name, 0, .inherited = true},
    {field_host_context, 0, .inherited = true},
    {field_lock_dir, 0, .inherited = true},
    {field_opam_root, 0, .inherited = true},
    {field_profile, 0, .inherited = true},
    {field_switch, 0, .inherited = true},
    {field_target_exe, 0, .inherited = true},
    {field_target_triple, 0, .inherited = true},
    {field_toolchain, 0, .inherited = true},
  [25] =
    {field_profile_name, 0, .inherited = true},
  [26] =
    {field_new_name, 0, .inherited = true},
    {field_old_name, 0, .inherited = true},
  [28] =
    {field_path, 0, .inherited = true},
  [29] =
    {field_author, 0},
  [30] =
    {field_maintainer, 0},
  [31] =
    {field_value, 2, .inherited = true},
  [32] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [34] =
    {field_url, 2},
  [35] =
    {field_project_name, 2},
  [36] =
    {field_version, 2},
  [37] =
    {field_enabled, 2},
  [38] =
    {field_author, 2, .inherited = true},
  [39] =
    {field_author, 0, .inherited = true},
    {field_author, 1, .inherited = true},
  [41] =
    {field_maintainer, 2, .inherited = true},
  [42] =
    {field_maintainer, 0, .inherited = true},
    {field_maintainer, 1, .inherited = true},
  [44] =
    {field_license, 2},
  [45] =
    {field_context_name, 2, .inherited = true},
    {field_host_context, 2, .inherited = true},
    {field_lock_dir, 2, .inherited = true},
    {field_opam_root, 2, .inherited = true},
    {field_profile, 2, .inherited = true},
    {field_switch, 2, .inherited = true},
    {field_target_exe, 2, .inherited = true},
    {field_target_triple, 2, .inherited = true},
    {field_toolchain, 2, .inherited = true},
  [54] =
    {field_profile_name, 2},
  [55] =
    {field_path, 2},
  [56] =
    {field_directory, 2},
    {field_stanzas, 3},
  [58] =
    {field_language, 2},
    {field_version, 3},
  [60] =
    {field_extension, 2},
    {field_version, 3},
  [62] =
    {field_new_name, 3},
    {field_old_name, 2},
  [64] =
    {field_value, 2},
  [65] =
    {field_value, 2},
    {field_value, 2, .inherited = true},
  [67] =
    {field_arguments, 2},
  [68] =
    {field_context_name, 0, .inherited = true},
    {field_context_name, 1, .inherited = true},
    {field_host_context, 0, .inherited = true},
    {field_host_context, 1, .inherited = true},
    {field_lock_dir, 0, .inherited = true},
    {field_lock_dir, 1, .inherited = true},
    {field_opam_root, 0, .inherited = true},
    {field_opam_root, 1, .inherited = true},
    {field_profile, 0, .inherited = true},
    {field_profile, 1, .inherited = true},
    {field_switch, 0, .inherited = true},
    {field_switch, 1, .inherited = true},
    {field_target_exe, 0, .inherited = true},
    {field_target_exe, 1, .inherited = true},
    {field_target_triple, 0, .inherited = true},
    {field_target_triple, 1, .inherited = true},
    {field_toolchain, 0, .inherited = true},
    {field_toolchain, 1, .inherited = true},
  [86] =
    {field_arguments, 2},
    {field_arguments, 3},
  [88] =
    {field_repo, 4},
  [89] =
    {field_url, 4},
  [90] =
    {field_arguments, 2},
    {field_arguments, 3},
    {field_arguments, 4},
  [93] =
    {field_context_name, 2},
  [94] =
    {field_target_triple, 2},
  [95] =
    {field_switch, 2},
  [96] =
    {field_profile, 2},
  [97] =
    {field_toolchain, 2},
  [98] =
    {field_host_context, 2},
  [99] =
    {field_opam_root, 2},
  [100] =
    {field_lock_dir, 2},
  [101] =
    {field_target_exe, 2},
  [102] =
    {field_value, 2},
    {field_value, 3},
    {field_value, 4},
    {field_value, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [17] = {
    [1] = anon_sym_vendored_dirs,
  },
  [23] = {
    [1] = anon_sym_vendored_dirs,
  },
  [24] = {
    [1] = anon_sym_vendored_dirs,
  },
  [33] = {
    [1] = anon_sym_vendored_dirs,
  },
  [34] = {
    [1] = anon_sym_vendored_dirs,
  },
  [36] = {
    [1] = anon_sym_modules,
  },
  [41] = {
    [1] = anon_sym_modules,
  },
  [42] = {
    [1] = anon_sym_modules,
  },
  [60] = {
    [1] = anon_sym_modules,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 6,
  [9] = 9,
  [10] = 9,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
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
  [34] = 28,
  [35] = 35,
  [36] = 31,
  [37] = 32,
  [38] = 38,
  [39] = 35,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 48,
  [52] = 52,
  [53] = 49,
  [54] = 43,
  [55] = 42,
  [56] = 47,
  [57] = 40,
  [58] = 58,
  [59] = 45,
  [60] = 60,
  [61] = 61,
  [62] = 46,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 80,
  [89] = 79,
  [90] = 78,
  [91] = 91,
  [92] = 87,
  [93] = 77,
  [94] = 76,
  [95] = 84,
  [96] = 83,
  [97] = 97,
  [98] = 82,
  [99] = 81,
  [100] = 75,
  [101] = 73,
  [102] = 102,
  [103] = 103,
  [104] = 72,
  [105] = 105,
  [106] = 70,
  [107] = 69,
  [108] = 67,
  [109] = 109,
  [110] = 66,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 111,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 112,
  [134] = 117,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 121,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 131,
  [147] = 147,
  [148] = 148,
  [149] = 132,
  [150] = 142,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 145,
  [156] = 156,
  [157] = 143,
  [158] = 158,
  [159] = 147,
  [160] = 144,
  [161] = 161,
  [162] = 162,
  [163] = 148,
  [164] = 164,
  [165] = 151,
  [166] = 64,
  [167] = 167,
  [168] = 152,
  [169] = 161,
  [170] = 170,
  [171] = 171,
  [172] = 156,
  [173] = 173,
  [174] = 174,
  [175] = 130,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 202,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 188,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 210,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 234,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 231,
  [252] = 238,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 243,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 285,
  [292] = 292,
  [293] = 269,
  [294] = 281,
  [295] = 295,
  [296] = 296,
  [297] = 296,
  [298] = 283,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 288,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 289,
  [308] = 308,
  [309] = 309,
  [310] = 275,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 319,
  [325] = 316,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 407,
  [464] = 464,
  [465] = 333,
  [466] = 404,
  [467] = 400,
  [468] = 395,
  [469] = 394,
  [470] = 470,
  [471] = 321,
  [472] = 472,
  [473] = 473,
  [474] = 377,
  [475] = 368,
  [476] = 476,
  [477] = 477,
  [478] = 464,
  [479] = 361,
  [480] = 480,
  [481] = 344,
  [482] = 352,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 487,
  [489] = 489,
  [490] = 461,
  [491] = 491,
  [492] = 458,
  [493] = 399,
  [494] = 391,
  [495] = 390,
  [496] = 496,
  [497] = 389,
  [498] = 347,
  [499] = 499,
  [500] = 500,
  [501] = 388,
  [502] = 387,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 386,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 385,
  [515] = 515,
  [516] = 384,
  [517] = 439,
  [518] = 383,
  [519] = 381,
  [520] = 520,
  [521] = 521,
  [522] = 378,
  [523] = 375,
  [524] = 524,
  [525] = 370,
  [526] = 526,
  [527] = 365,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 359,
  [539] = 355,
  [540] = 353,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 351,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 346,
  [550] = 341,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 340,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 339,
  [566] = 566,
  [567] = 338,
  [568] = 568,
  [569] = 336,
  [570] = 335,
  [571] = 332,
  [572] = 572,
  [573] = 331,
  [574] = 330,
  [575] = 328,
  [576] = 326,
  [577] = 323,
  [578] = 322,
  [579] = 579,
  [580] = 454,
  [581] = 320,
  [582] = 486,
  [583] = 485,
  [584] = 484,
  [585] = 318,
  [586] = 367,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 357,
  [591] = 350,
  [592] = 342,
  [593] = 362,
  [594] = 329,
  [595] = 360,
  [596] = 334,
  [597] = 369,
  [598] = 371,
  [599] = 599,
  [600] = 600,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 372,
  [605] = 376,
  [606] = 393,
  [607] = 607,
  [608] = 396,
  [609] = 609,
  [610] = 610,
  [611] = 611,
  [612] = 287,
  [613] = 397,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 619,
  [620] = 620,
  [621] = 621,
  [622] = 622,
  [623] = 623,
  [624] = 398,
  [625] = 406,
  [626] = 412,
  [627] = 413,
  [628] = 628,
  [629] = 629,
  [630] = 423,
  [631] = 631,
  [632] = 337,
  [633] = 274,
  [634] = 343,
  [635] = 349,
  [636] = 363,
  [637] = 364,
  [638] = 382,
  [639] = 402,
  [640] = 403,
  [641] = 409,
  [642] = 411,
  [643] = 414,
  [644] = 415,
  [645] = 416,
  [646] = 417,
  [647] = 418,
  [648] = 419,
  [649] = 420,
  [650] = 421,
  [651] = 424,
  [652] = 425,
  [653] = 426,
  [654] = 427,
  [655] = 428,
  [656] = 430,
  [657] = 433,
  [658] = 434,
  [659] = 438,
  [660] = 440,
  [661] = 445,
  [662] = 446,
  [663] = 449,
  [664] = 453,
  [665] = 459,
  [666] = 460,
  [667] = 462,
  [668] = 312,
  [669] = 313,
  [670] = 429,
  [671] = 282,
  [672] = 610,
  [673] = 579,
  [674] = 566,
  [675] = 504,
  [676] = 531,
  [677] = 526,
  [678] = 520,
  [679] = 515,
  [680] = 511,
  [681] = 507,
  [682] = 505,
  [683] = 374,
  [684] = 500,
  [685] = 477,
  [686] = 472,
  [687] = 457,
  [688] = 455,
  [689] = 451,
  [690] = 448,
  [691] = 444,
  [692] = 443,
  [693] = 441,
  [694] = 435,
  [695] = 432,
  [696] = 431,
  [697] = 697,
  [698] = 698,
  [699] = 699,
  [700] = 700,
  [701] = 701,
  [702] = 702,
  [703] = 703,
  [704] = 704,
  [705] = 705,
  [706] = 706,
  [707] = 700,
  [708] = 708,
  [709] = 709,
  [710] = 705,
  [711] = 697,
  [712] = 712,
  [713] = 709,
  [714] = 714,
  [715] = 715,
  [716] = 716,
  [717] = 717,
  [718] = 718,
  [719] = 719,
  [720] = 720,
  [721] = 721,
  [722] = 722,
  [723] = 723,
  [724] = 724,
  [725] = 725,
  [726] = 726,
  [727] = 727,
  [728] = 728,
  [729] = 729,
  [730] = 730,
  [731] = 726,
  [732] = 729,
  [733] = 733,
  [734] = 734,
  [735] = 728,
  [736] = 736,
  [737] = 719,
  [738] = 738,
  [739] = 725,
  [740] = 722,
  [741] = 723,
  [742] = 742,
  [743] = 743,
  [744] = 744,
  [745] = 745,
  [746] = 746,
  [747] = 747,
  [748] = 748,
  [749] = 749,
  [750] = 750,
  [751] = 751,
  [752] = 752,
  [753] = 753,
  [754] = 754,
  [755] = 755,
  [756] = 756,
  [757] = 757,
  [758] = 758,
  [759] = 759,
  [760] = 760,
  [761] = 761,
  [762] = 762,
  [763] = 763,
  [764] = 764,
  [765] = 765,
  [766] = 766,
  [767] = 767,
  [768] = 768,
  [769] = 769,
  [770] = 770,
  [771] = 771,
  [772] = 772,
  [773] = 773,
  [774] = 774,
  [775] = 775,
  [776] = 776,
  [777] = 777,
  [778] = 778,
  [779] = 779,
  [780] = 780,
  [781] = 781,
  [782] = 782,
  [783] = 783,
  [784] = 784,
  [785] = 785,
  [786] = 782,
  [787] = 787,
  [788] = 788,
  [789] = 789,
  [790] = 790,
  [791] = 791,
  [792] = 777,
  [793] = 776,
  [794] = 775,
  [795] = 795,
  [796] = 773,
  [797] = 797,
  [798] = 798,
  [799] = 799,
  [800] = 800,
  [801] = 801,
  [802] = 802,
  [803] = 803,
  [804] = 804,
  [805] = 805,
  [806] = 806,
  [807] = 807,
  [808] = 808,
  [809] = 809,
  [810] = 810,
  [811] = 811,
  [812] = 812,
  [813] = 813,
  [814] = 814,
  [815] = 815,
  [816] = 766,
  [817] = 768,
  [818] = 818,
  [819] = 819,
  [820] = 770,
  [821] = 772,
  [822] = 774,
  [823] = 779,
  [824] = 824,
  [825] = 785,
  [826] = 790,
  [827] = 799,
  [828] = 801,
  [829] = 829,
  [830] = 830,
  [831] = 805,
  [832] = 832,
  [833] = 833,
  [834] = 834,
  [835] = 835,
  [836] = 836,
  [837] = 837,
  [838] = 811,
  [839] = 819,
  [840] = 835,
  [841] = 841,
  [842] = 842,
  [843] = 843,
  [844] = 844,
  [845] = 841,
  [846] = 846,
  [847] = 847,
  [848] = 848,
  [849] = 849,
  [850] = 850,
  [851] = 824,
  [852] = 833,
  [853] = 853,
  [854] = 842,
  [855] = 853,
  [856] = 856,
  [857] = 843,
  [858] = 858,
  [859] = 844,
  [860] = 860,
  [861] = 861,
  [862] = 862,
  [863] = 863,
  [864] = 850,
  [865] = 865,
  [866] = 866,
  [867] = 867,
  [868] = 868,
  [869] = 869,
  [870] = 870,
  [871] = 871,
  [872] = 872,
  [873] = 873,
  [874] = 806,
  [875] = 803,
  [876] = 802,
  [877] = 877,
  [878] = 878,
  [879] = 849,
  [880] = 848,
  [881] = 881,
  [882] = 882,
  [883] = 883,
  [884] = 884,
  [885] = 885,
  [886] = 778,
  [887] = 788,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(974);
      if (lookahead == '"') ADVANCE(979);
      if (lookahead == '(') ADVANCE(1861);
      if (lookahead == ')') ADVANCE(1862);
      if (lookahead == ':') ADVANCE(970);
      if (lookahead == ';') ADVANCE(1863);
      if (lookahead == '<') ADVANCE(1939);
      if (lookahead == '=') ADVANCE(1936);
      if (lookahead == '>') ADVANCE(1938);
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == 'b') ADVANCE(100);
      if (lookahead == 'c') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 'g') ADVANCE(274);
      if (lookahead == 'h') ADVANCE(652);
      if (lookahead == 'i') ADVANCE(407);
      if (lookahead == 'k') ADVANCE(438);
      if (lookahead == 'l') ADVANCE(115);
      if (lookahead == 'm') ADVANCE(103);
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(224);
      if (lookahead == 'p') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(275);
      if (lookahead == 's') ADVANCE(143);
      if (lookahead == 't') ADVANCE(105);
      if (lookahead == 'u') ADVANCE(603);
      if (lookahead == 'v') ADVANCE(302);
      if (lookahead == 'w') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(980);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(858);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(979);
      if (lookahead == '(') ADVANCE(1860);
      if (lookahead == ')') ADVANCE(1862);
      if (lookahead == ';') ADVANCE(1863);
      if (lookahead == 'a') ADVANCE(1125);
      if (lookahead == 'b') ADVANCE(1805);
      if (lookahead == 'c') ADVANCE(1568);
      if (lookahead == 'd') ADVANCE(1039);
      if (lookahead == 'e') ADVANCE(1500);
      if (lookahead == 'f') ADVANCE(1569);
      if (lookahead == 'g') ADVANCE(1198);
      if (lookahead == 'h') ADVANCE(1570);
      if (lookahead == 'i') ADVANCE(1318);
      if (lookahead == 'l') ADVANCE(1043);
      if (lookahead == 'm') ADVANCE(1038);
      if (lookahead == 'n') ADVANCE(1078);
      if (lookahead == 'o') ADVANCE(1147);
      if (lookahead == 'p') ADVANCE(1045);
      if (lookahead == 'r') ADVANCE(1221);
      if (lookahead == 's') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1218);
      if (lookahead == 'u') ADVANCE(1692);
      if (lookahead == 'v') ADVANCE(1199);
      if (lookahead == 'w') ADVANCE(1040);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0) ADVANCE(1858);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(979);
      if (lookahead == '(') ADVANCE(1860);
      if (lookahead == ')') ADVANCE(1862);
      if (lookahead == ';') ADVANCE(1863);
      if (lookahead == 'a') ADVANCE(1634);
      if (lookahead == 'd') ADVANCE(1272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0) ADVANCE(1858);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(979);
      if (lookahead == '(') ADVANCE(1860);
      if (lookahead == ')') ADVANCE(1862);
      if (lookahead == ';') ADVANCE(1863);
      if (lookahead == 'a') ADVANCE(1441);
      if (lookahead == 'c') ADVANCE(1595);
      if (lookahead == 'd') ADVANCE(1213);
      if (lookahead == 'n') ADVANCE(1078);
      if (lookahead == 's') ADVANCE(1399);
      if (lookahead == 't') ADVANCE(1084);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0) ADVANCE(1858);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(979);
      if (lookahead == '(') ADVANCE(1860);
      if (lookahead == ')') ADVANCE(1862);
      if (lookahead == ';') ADVANCE(1863);
      if (lookahead == 'a') ADVANCE(1159);
      if (lookahead == 'b') ADVANCE(1812);
      if (lookahead == 'e') ADVANCE(1562);
      if (lookahead == 'l') ADVANCE(1418);
      if (lookahead == 'm') ADVANCE(1603);
      if (lookahead == 'n') ADVANCE(1078);
      if (lookahead == 'p') ADVANCE(1811);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0) ADVANCE(1858);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(979);
      if (lookahead == '(') ADVANCE(1860);
      if (lookahead == ')') ADVANCE(1862);
      if (lookahead == ';') ADVANCE(1863);
      if (lookahead == 'a') ADVANCE(1159);
      if (lookahead == 'b') ADVANCE(1812);
      if (lookahead == 'e') ADVANCE(1562);
      if (lookahead == 'l') ADVANCE(1418);
      if (lookahead == 'm') ADVANCE(1603);
      if (lookahead == 'n') ADVANCE(1096);
      if (lookahead == 'p') ADVANCE(1825);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0) ADVANCE(1858);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(979);
      if (lookahead == '(') ADVANCE(1860);
      if (lookahead == ')') ADVANCE(1862);
      if (lookahead == ';') ADVANCE(1863);
      if (lookahead == 'a') ADVANCE(1159);
      if (lookahead == 'd') ADVANCE(1272);
      if (lookahead == 'n') ADVANCE(1078);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0) ADVANCE(1858);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(979);
      if (lookahead == '(') ADVANCE(1860);
      if (lookahead == ')') ADVANCE(1862);
      if (lookahead == ';') ADVANCE(1863);
      if (lookahead == 'a') ADVANCE(1428);
      if (lookahead == 'e') ADVANCE(1562);
      if (lookahead == 'f') ADVANCE(1412);
      if (lookahead == 'm') ADVANCE(1608);
      if (lookahead == 'o') ADVANCE(1560);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0) ADVANCE(1858);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(979);
      if (lookahead == '(') ADVANCE(1860);
      if (lookahead == ')') ADVANCE(1862);
      if (lookahead == ';') ADVANCE(1863);
      if (lookahead == 'a') ADVANCE(1690);
      if (lookahead == 'f') ADVANCE(1461);
      if (lookahead == 'i') ADVANCE(1535);
      if (lookahead == 'l') ADVANCE(1077);
      if (lookahead == 'n') ADVANCE(1096);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0) ADVANCE(1858);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(979);
      if (lookahead == '(') ADVANCE(1860);
      if (lookahead == ')') ADVANCE(1862);
      if (lookahead == ';') ADVANCE(1863);
      if (lookahead == 'd') ADVANCE(1367);
      if (lookahead == 'e') ADVANCE(1501);
      if (lookahead == 'f') ADVANCE(1170);
      if (lookahead == 'g') ADVANCE(1292);
      if (lookahead == 'h') ADVANCE(1606);
      if (lookahead == 'l') ADVANCE(1576);
      if (lookahead == 'm') ADVANCE(1246);
      if (lookahead == 'n') ADVANCE(1078);
      if (lookahead == 'p') ADVANCE(1085);
      if (lookahead == 'r') ADVANCE(1604);
      if (lookahead == 's') ADVANCE(1833);
      if (lookahead == 't') ADVANCE(1073);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0) ADVANCE(1858);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(979);
      if (lookahead == '(') ADVANCE(1860);
      if (lookahead == ')') ADVANCE(1862);
      if (lookahead == ';') ADVANCE(1863);
      if (lookahead == 'd') ADVANCE(1272);
      if (lookahead == 'f') ADVANCE(1412);
      if (lookahead == 'p') ADVANCE(1105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0) ADVANCE(1858);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(979);
      if (lookahead == '(') ADVANCE(1860);
      if (lookahead == ')') ADVANCE(1862);
      if (lookahead == ';') ADVANCE(1863);
      if (lookahead == 'd') ADVANCE(1378);
      if (lookahead == 'f') ADVANCE(1412);
      if (lookahead == 'p') ADVANCE(1046);
      if (lookahead == 's') ADVANCE(1296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0) ADVANCE(1858);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(979);
      if (lookahead == '(') ADVANCE(1860);
      if (lookahead == ')') ADVANCE(1862);
      if (lookahead == ';') ADVANCE(1863);
      if (lookahead == 'e') ADVANCE(1844);
      if (lookahead == 'f') ADVANCE(1461);
      if (lookahead == 'i') ADVANCE(1529);
      if (lookahead == 'm') ADVANCE(1285);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0) ADVANCE(1858);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(979);
      if (lookahead == '(') ADVANCE(1860);
      if (lookahead == ')') ADVANCE(1862);
      if (lookahead == ';') ADVANCE(1863);
      if (lookahead == 'e') ADVANCE(1562);
      if (lookahead == 'i') ADVANCE(1553);
      if (lookahead == 'k') ADVANCE(1379);
      if (lookahead == 'l') ADVANCE(1418);
      if (lookahead == 'm') ADVANCE(1603);
      if (lookahead == 'n') ADVANCE(1078);
      if (lookahead == 'p') ADVANCE(1618);
      if (lookahead == 's') ADVANCE(1852);
      if (lookahead == 'w') ADVANCE(1689);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0) ADVANCE(1858);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(979);
      if (lookahead == '(') ADVANCE(1860);
      if (lookahead == ')') ADVANCE(1862);
      if (lookahead == ';') ADVANCE(1863);
      if (lookahead == 'e') ADVANCE(1562);
      if (lookahead == 'l') ADVANCE(1418);
      if (lookahead == 'm') ADVANCE(1603);
      if (lookahead == 'n') ADVANCE(1078);
      if (lookahead == 'p') ADVANCE(1811);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0) ADVANCE(1858);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(979);
      if (lookahead == '(') ADVANCE(1860);
      if (lookahead == ')') ADVANCE(1862);
      if (lookahead == ';') ADVANCE(1863);
      if (lookahead == 'e') ADVANCE(1562);
      if (lookahead == 'l') ADVANCE(1418);
      if (lookahead == 'm') ADVANCE(1603);
      if (lookahead == 'n') ADVANCE(1096);
      if (lookahead == 'p') ADVANCE(1825);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0) ADVANCE(1858);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(979);
      if (lookahead == '(') ADVANCE(1860);
      if (lookahead == ')') ADVANCE(1862);
      if (lookahead == ';') ADVANCE(1863);
      if (lookahead == 'l') ADVANCE(1418);
      if (lookahead == 'n') ADVANCE(1078);
      if (lookahead == 'o') ADVANCE(1637);
      if (lookahead == 's') ADVANCE(1403);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0) ADVANCE(1858);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(979);
      if (lookahead == '(') ADVANCE(1860);
      if (lookahead == ')') ADVANCE(1862);
      if (lookahead == ';') ADVANCE(1863);
      if (lookahead == 'l') ADVANCE(1418);
      if (lookahead == 'n') ADVANCE(1078);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead != 0) ADVANCE(1858);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(979);
      if (lookahead == '(') ADVANCE(1860);
      if (lookahead == ')') ADVANCE(1862);
      if (lookahead == ';') ADVANCE(1863);
      if (lookahead == 'm') ADVANCE(1603);
      if (lookahead == 'n') ADVANCE(1078);
      if (lookahead == 'p') ADVANCE(1472);
      if (lookahead == 't') ADVANCE(1341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead != 0) ADVANCE(1858);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(978);
      if (lookahead == ';') ADVANCE(981);
      if (lookahead == '\\') ADVANCE(969);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(981);
      if (lookahead != 0) ADVANCE(981);
      END_STATE();
    case 25:
      if (lookahead == '(') ADVANCE(1860);
      if (lookahead == ')') ADVANCE(1862);
      if (lookahead == ';') ADVANCE(1863);
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == 'b') ADVANCE(99);
      if (lookahead == 'c') ADVANCE(109);
      if (lookahead == 'd') ADVANCE(300);
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == 'f') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(421);
      if (lookahead == 'l') ADVANCE(680);
      if (lookahead == 'm') ADVANCE(696);
      if (lookahead == 'n') ADVANCE(653);
      if (lookahead == 'p') ADVANCE(174);
      if (lookahead == 'r') ADVANCE(920);
      if (lookahead == 's') ADVANCE(373);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead == 'w') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      END_STATE();
    case 26:
      if (lookahead == ')') ADVANCE(975);
      END_STATE();
    case 27:
      if (lookahead == '*') ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(33);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(28);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(125);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(671);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(219);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(870);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(871);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(872);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(318);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(447);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(29);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(818);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(818);
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(398);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(250);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(854);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(970);
      if (lookahead == ';') ADVANCE(1863);
      if (lookahead == 'a') ADVANCE(550);
      if (lookahead == 'e') ADVANCE(605);
      if (lookahead == 'g') ADVANCE(525);
      if (lookahead == 'p') ADVANCE(173);
      if (lookahead == 's') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(602);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      END_STATE();
    case 48:
      if (lookahead == '\\') ADVANCE(968);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(397);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(511);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(580);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(563);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(395);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(945);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(942);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(770);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(394);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(399);
      END_STATE();
    case 59:
      if (lookahead == '_') ADVANCE(570);
      END_STATE();
    case 60:
      if (lookahead == '_') ADVANCE(303);
      if (lookahead == 'p') ADVANCE(672);
      END_STATE();
    case 61:
      if (lookahead == '_') ADVANCE(439);
      END_STATE();
    case 62:
      if (lookahead == '_') ADVANCE(243);
      END_STATE();
    case 63:
      if (lookahead == '_') ADVANCE(212);
      END_STATE();
    case 64:
      if (lookahead == '_') ADVANCE(155);
      END_STATE();
    case 65:
      if (lookahead == '_') ADVANCE(247);
      END_STATE();
    case 66:
      if (lookahead == '_') ADVANCE(265);
      END_STATE();
    case 67:
      if (lookahead == '_') ADVANCE(441);
      END_STATE();
    case 68:
      if (lookahead == '_') ADVANCE(824);
      END_STATE();
    case 69:
      if (lookahead == '_') ADVANCE(634);
      END_STATE();
    case 70:
      if (lookahead == '_') ADVANCE(313);
      END_STATE();
    case 71:
      if (lookahead == '_') ADVANCE(895);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(752);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(863);
      END_STATE();
    case 74:
      if (lookahead == '_') ADVANCE(746);
      END_STATE();
    case 75:
      if (lookahead == '_') ADVANCE(831);
      END_STATE();
    case 76:
      if (lookahead == '_') ADVANCE(893);
      END_STATE();
    case 77:
      if (lookahead == '_') ADVANCE(826);
      END_STATE();
    case 78:
      if (lookahead == '_') ADVANCE(226);
      END_STATE();
    case 79:
      if (lookahead == '_') ADVANCE(129);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(679);
      END_STATE();
    case 81:
      if (lookahead == '_') ADVANCE(537);
      END_STATE();
    case 82:
      if (lookahead == '_') ADVANCE(136);
      END_STATE();
    case 83:
      if (lookahead == '_') ADVANCE(475);
      END_STATE();
    case 84:
      if (lookahead == '_') ADVANCE(464);
      END_STATE();
    case 85:
      if (lookahead == '_') ADVANCE(466);
      END_STATE();
    case 86:
      if (lookahead == '_') ADVANCE(490);
      END_STATE();
    case 87:
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 's') ADVANCE(1919);
      END_STATE();
    case 88:
      if (lookahead == '_') ADVANCE(163);
      END_STATE();
    case 89:
      if (lookahead == '_') ADVANCE(561);
      END_STATE();
    case 90:
      if (lookahead == '_') ADVANCE(376);
      END_STATE();
    case 91:
      if (lookahead == '_') ADVANCE(268);
      END_STATE();
    case 92:
      if (lookahead == '_') ADVANCE(269);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(645);
      END_STATE();
    case 94:
      if (lookahead == '_') ADVANCE(400);
      END_STATE();
    case 95:
      if (lookahead == '_') ADVANCE(647);
      END_STATE();
    case 96:
      if (lookahead == '_') ADVANCE(649);
      END_STATE();
    case 97:
      if (lookahead == '_') ADVANCE(650);
      END_STATE();
    case 98:
      if (lookahead == '_') ADVANCE(401);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(813);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(813);
      if (lookahead == 'u') ADVANCE(402);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(519);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(519);
      if (lookahead == 'd') ADVANCE(654);
      if (lookahead == 'i') ADVANCE(527);
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(726);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(440);
      if (lookahead == 'd') ADVANCE(946);
      if (lookahead == 'e') ADVANCE(630);
      if (lookahead == 'o') ADVANCE(238);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(568);
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(408);
      if (lookahead == 'e') ADVANCE(814);
      if (lookahead == 'h') ADVANCE(358);
      if (lookahead == 'o') ADVANCE(668);
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(409);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(202);
      if (lookahead == 'i') ADVANCE(586);
      if (lookahead == 'l') ADVANCE(910);
      if (lookahead == 'p') ADVANCE(950);
      if (lookahead == 'r') ADVANCE(375);
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(834);
      if (lookahead == 'h') ADVANCE(244);
      if (lookahead == 'm') ADVANCE(703);
      if (lookahead == 'o') ADVANCE(585);
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(834);
      if (lookahead == 'h') ADVANCE(244);
      if (lookahead == 'm') ADVANCE(703);
      if (lookahead == 'o') ADVANCE(704);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(744);
      if (lookahead == 'i') ADVANCE(853);
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(565);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(706);
      if (lookahead == 'i') ADVANCE(876);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(851);
      if (lookahead == 'e') ADVANCE(391);
      if (lookahead == 'i') ADVANCE(142);
      if (lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(569);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(600);
      if (lookahead == 'i') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(566);
      if (lookahead == 't') ADVANCE(478);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(914);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(781);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(644);
      if (lookahead == 'u') ADVANCE(281);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(571);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(583);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(535);
      if (lookahead == 'r') ADVANCE(933);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 'o') ADVANCE(929);
      if (lookahead == 's') ADVANCE(862);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(729);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(522);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(556);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(875);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(774);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(631);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(829);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(745);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(768);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(778);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(738);
      if (lookahead == 'r') ADVANCE(917);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(736);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(812);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(892);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == 'v') ADVANCE(1990);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(548);
      if (lookahead == 'f') ADVANCE(386);
      if (lookahead == 'r') ADVANCE(1928);
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(608);
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead == 'i') ADVANCE(864);
      if (lookahead == 'o') ADVANCE(911);
      if (lookahead == 'u') ADVANCE(177);
      if (lookahead == 'w') ADVANCE(448);
      if (lookahead == 'y') ADVANCE(615);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(608);
      if (lookahead == 'o') ADVANCE(928);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(415);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(549);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(573);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(418);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(417);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(574);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(632);
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(536);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(422);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(575);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(621);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(881);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(765);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(581);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(641);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(902);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(471);
      if (lookahead == 'e') ADVANCE(622);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(576);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(462);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(643);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(646);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(707);
      if (lookahead == 'r') ADVANCE(664);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(905);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(906);
      END_STATE();
    case 177:
      if (lookahead == 'b') ADVANCE(263);
      END_STATE();
    case 178:
      if (lookahead == 'b') ADVANCE(2000);
      END_STATE();
    case 179:
      if (lookahead == 'b') ADVANCE(743);
      if (lookahead == 'c') ADVANCE(357);
      END_STATE();
    case 180:
      if (lookahead == 'b') ADVANCE(53);
      END_STATE();
    case 181:
      if (lookahead == 'b') ADVANCE(123);
      END_STATE();
    case 182:
      if (lookahead == 'b') ADVANCE(666);
      END_STATE();
    case 183:
      if (lookahead == 'b') ADVANCE(675);
      END_STATE();
    case 184:
      if (lookahead == 'b') ADVANCE(533);
      END_STATE();
    case 185:
      if (lookahead == 'b') ADVANCE(540);
      END_STATE();
    case 186:
      if (lookahead == 'b') ADVANCE(541);
      END_STATE();
    case 187:
      if (lookahead == 'b') ADVANCE(544);
      END_STATE();
    case 188:
      if (lookahead == 'b') ADVANCE(551);
      END_STATE();
    case 189:
      if (lookahead == 'b') ADVANCE(772);
      END_STATE();
    case 190:
      if (lookahead == 'b') ADVANCE(773);
      END_STATE();
    case 191:
      if (lookahead == 'b') ADVANCE(270);
      END_STATE();
    case 192:
      if (lookahead == 'b') ADVANCE(558);
      END_STATE();
    case 193:
      if (lookahead == 'b') ADVANCE(271);
      END_STATE();
    case 194:
      if (lookahead == 'c') ADVANCE(203);
      if (lookahead == 'l') ADVANCE(437);
      if (lookahead == 'n') ADVANCE(237);
      if (lookahead == 'p') ADVANCE(705);
      if (lookahead == 'r') ADVANCE(200);
      if (lookahead == 'u') ADVANCE(887);
      END_STATE();
    case 195:
      if (lookahead == 'c') ADVANCE(426);
      if (lookahead == 'n') ADVANCE(141);
      if (lookahead == 'x') ADVANCE(353);
      END_STATE();
    case 196:
      if (lookahead == 'c') ADVANCE(426);
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 197:
      if (lookahead == 'c') ADVANCE(512);
      END_STATE();
    case 198:
      if (lookahead == 'c') ADVANCE(1925);
      END_STATE();
    case 199:
      if (lookahead == 'c') ADVANCE(1868);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(429);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(514);
      END_STATE();
    case 202:
      if (lookahead == 'c') ADVANCE(514);
      if (lookahead == 't') ADVANCE(427);
      END_STATE();
    case 203:
      if (lookahead == 'c') ADVANCE(306);
      if (lookahead == 't') ADVANCE(450);
      END_STATE();
    case 204:
      if (lookahead == 'c') ADVANCE(924);
      END_STATE();
    case 205:
      if (lookahead == 'c') ADVANCE(513);
      END_STATE();
    case 206:
      if (lookahead == 'c') ADVANCE(925);
      END_STATE();
    case 207:
      if (lookahead == 'c') ADVANCE(531);
      if (lookahead == 'f') ADVANCE(320);
      if (lookahead == 's') ADVANCE(837);
      if (lookahead == 't') ADVANCE(657);
      END_STATE();
    case 208:
      if (lookahead == 'c') ADVANCE(424);
      END_STATE();
    case 209:
      if (lookahead == 'c') ADVANCE(749);
      END_STATE();
    case 210:
      if (lookahead == 'c') ADVANCE(428);
      END_STATE();
    case 211:
      if (lookahead == 'c') ADVANCE(901);
      if (lookahead == 'l') ADVANCE(309);
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 212:
      if (lookahead == 'c') ADVANCE(952);
      END_STATE();
    case 213:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 214:
      if (lookahead == 'c') ADVANCE(231);
      END_STATE();
    case 215:
      if (lookahead == 'c') ADVANCE(199);
      END_STATE();
    case 216:
      if (lookahead == 'c') ADVANCE(842);
      END_STATE();
    case 217:
      if (lookahead == 'c') ADVANCE(846);
      END_STATE();
    case 218:
      if (lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 219:
      if (lookahead == 'c') ADVANCE(702);
      END_STATE();
    case 220:
      if (lookahead == 'c') ADVANCE(874);
      END_STATE();
    case 221:
      if (lookahead == 'c') ADVANCE(284);
      END_STATE();
    case 222:
      if (lookahead == 'c') ADVANCE(352);
      END_STATE();
    case 223:
      if (lookahead == 'c') ADVANCE(365);
      END_STATE();
    case 224:
      if (lookahead == 'c') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(524);
      if (lookahead == 'p') ADVANCE(116);
      if (lookahead == 'r') ADVANCE(1942);
      END_STATE();
    case 225:
      if (lookahead == 'c') ADVANCE(516);
      END_STATE();
    case 226:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 227:
      if (lookahead == 'c') ADVANCE(461);
      END_STATE();
    case 228:
      if (lookahead == 'c') ADVANCE(463);
      END_STATE();
    case 229:
      if (lookahead == 'c') ADVANCE(469);
      END_STATE();
    case 230:
      if (lookahead == 'c') ADVANCE(433);
      END_STATE();
    case 231:
      if (lookahead == 'c') ADVANCE(369);
      END_STATE();
    case 232:
      if (lookahead == 'c') ADVANCE(852);
      if (lookahead == 'l') ADVANCE(479);
      END_STATE();
    case 233:
      if (lookahead == 'c') ADVANCE(164);
      END_STATE();
    case 234:
      if (lookahead == 'c') ADVANCE(379);
      END_STATE();
    case 235:
      if (lookahead == 'c') ADVANCE(517);
      END_STATE();
    case 236:
      if (lookahead == 'c') ADVANCE(930);
      END_STATE();
    case 237:
      if (lookahead == 'd') ADVANCE(1943);
      END_STATE();
    case 238:
      if (lookahead == 'd') ADVANCE(277);
      END_STATE();
    case 239:
      if (lookahead == 'd') ADVANCE(1974);
      END_STATE();
    case 240:
      if (lookahead == 'd') ADVANCE(1971);
      END_STATE();
    case 241:
      if (lookahead == 'd') ADVANCE(342);
      END_STATE();
    case 242:
      if (lookahead == 'd') ADVANCE(182);
      END_STATE();
    case 243:
      if (lookahead == 'd') ADVANCE(964);
      END_STATE();
    case 244:
      if (lookahead == 'd') ADVANCE(442);
      END_STATE();
    case 245:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 246:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 247:
      if (lookahead == 'd') ADVANCE(927);
      END_STATE();
    case 248:
      if (lookahead == 'd') ADVANCE(787);
      END_STATE();
    case 249:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 250:
      if (lookahead == 'd') ADVANCE(775);
      END_STATE();
    case 251:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 252:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 253:
      if (lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 254:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 255:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 256:
      if (lookahead == 'd') ADVANCE(285);
      END_STATE();
    case 257:
      if (lookahead == 'd') ADVANCE(297);
      END_STATE();
    case 258:
      if (lookahead == 'd') ADVANCE(276);
      END_STATE();
    case 259:
      if (lookahead == 'd') ADVANCE(183);
      END_STATE();
    case 260:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 261:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 262:
      if (lookahead == 'd') ADVANCE(698);
      END_STATE();
    case 263:
      if (lookahead == 'd') ADVANCE(453);
      if (lookahead == 's') ADVANCE(841);
      END_STATE();
    case 264:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 265:
      if (lookahead == 'd') ADVANCE(322);
      END_STATE();
    case 266:
      if (lookahead == 'd') ADVANCE(332);
      END_STATE();
    case 267:
      if (lookahead == 'd') ADVANCE(457);
      END_STATE();
    case 268:
      if (lookahead == 'd') ADVANCE(484);
      END_STATE();
    case 269:
      if (lookahead == 'd') ADVANCE(487);
      END_STATE();
    case 270:
      if (lookahead == 'd') ADVANCE(492);
      END_STATE();
    case 271:
      if (lookahead == 'd') ADVANCE(497);
      END_STATE();
    case 272:
      if (lookahead == 'd') ADVANCE(349);
      END_STATE();
    case 273:
      if (lookahead == 'd') ADVANCE(692);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(607);
      if (lookahead == 'i') ADVANCE(835);
      if (lookahead == 'l') ADVANCE(665);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(669);
      if (lookahead == 'u') ADVANCE(534);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(1910);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(1910);
      if (lookahead == 'u') ADVANCE(554);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(1882);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(1908);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(2088);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(1929);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(1930);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(1998);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(2077);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(2007);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(1916);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(2044);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(1932);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(2009);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(1922);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(1888);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(1964);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(1904);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(1926);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(2080);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(2020);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(2100);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(2108);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(392);
      if (lookahead == 'i') ADVANCE(385);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(1931);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(611);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(951);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(609);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(708);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(953);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(723);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(567);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(782);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(948);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(578);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(955);
      END_STATE();
    case 317:
      if (lookahead == 'e') ADVANCE(445);
      if (lookahead == 'm') ADVANCE(130);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(956);
      END_STATE();
    case 319:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(728);
      END_STATE();
    case 321:
      if (lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(713);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(815);
      END_STATE();
    case 324:
      if (lookahead == 'e') ADVANCE(601);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 326:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(523);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(789);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 332:
      if (lookahead == 'e') ADVANCE(790);
      END_STATE();
    case 333:
      if (lookahead == 'e') ADVANCE(769);
      END_STATE();
    case 334:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 335:
      if (lookahead == 'e') ADVANCE(843);
      END_STATE();
    case 336:
      if (lookahead == 'e') ADVANCE(792);
      END_STATE();
    case 337:
      if (lookahead == 'e') ADVANCE(638);
      END_STATE();
    case 338:
      if (lookahead == 'e') ADVANCE(733);
      END_STATE();
    case 339:
      if (lookahead == 'e') ADVANCE(795);
      END_STATE();
    case 340:
      if (lookahead == 'e') ADVANCE(734);
      END_STATE();
    case 341:
      if (lookahead == 'e') ADVANCE(796);
      END_STATE();
    case 342:
      if (lookahead == 'e') ADVANCE(755);
      if (lookahead == 'o') ADVANCE(922);
      END_STATE();
    case 343:
      if (lookahead == 'e') ADVANCE(750);
      END_STATE();
    case 344:
      if (lookahead == 'e') ADVANCE(830);
      END_STATE();
    case 345:
      if (lookahead == 'e') ADVANCE(804);
      END_STATE();
    case 346:
      if (lookahead == 'e') ADVANCE(805);
      END_STATE();
    case 347:
      if (lookahead == 'e') ADVANCE(806);
      END_STATE();
    case 348:
      if (lookahead == 'e') ADVANCE(807);
      END_STATE();
    case 349:
      if (lookahead == 'e') ADVANCE(809);
      END_STATE();
    case 350:
      if (lookahead == 'e') ADVANCE(811);
      END_STATE();
    case 351:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 352:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 353:
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'p') ADVANCE(154);
      END_STATE();
    case 354:
      if (lookahead == 'e') ADVANCE(757);
      END_STATE();
    case 355:
      if (lookahead == 'e') ADVANCE(747);
      END_STATE();
    case 356:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 357:
      if (lookahead == 'e') ADVANCE(616);
      END_STATE();
    case 358:
      if (lookahead == 'e') ADVANCE(673);
      END_STATE();
    case 359:
      if (lookahead == 'e') ADVANCE(477);
      END_STATE();
    case 360:
      if (lookahead == 'e') ADVANCE(754);
      END_STATE();
    case 361:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 362:
      if (lookahead == 'e') ADVANCE(937);
      END_STATE();
    case 363:
      if (lookahead == 'e') ADVANCE(614);
      if (lookahead == 'o') ADVANCE(709);
      if (lookahead == 'r') ADVANCE(315);
      if (lookahead == 's') ADVANCE(1920);
      END_STATE();
    case 364:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 365:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 366:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 367:
      if (lookahead == 'e') ADVANCE(626);
      END_STATE();
    case 368:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 369:
      if (lookahead == 'e') ADVANCE(722);
      END_STATE();
    case 370:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 371:
      if (lookahead == 'e') ADVANCE(682);
      END_STATE();
    case 372:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 373:
      if (lookahead == 'e') ADVANCE(861);
      if (lookahead == 'y') ADVANCE(823);
      END_STATE();
    case 374:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 375:
      if (lookahead == 'e') ADVANCE(547);
      if (lookahead == 'o') ADVANCE(393);
      END_STATE();
    case 376:
      if (lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 377:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 378:
      if (lookahead == 'e') ADVANCE(721);
      END_STATE();
    case 379:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 380:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 381:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 382:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 383:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 384:
      if (lookahead == 'e') ADVANCE(651);
      END_STATE();
    case 385:
      if (lookahead == 'f') ADVANCE(386);
      END_STATE();
    case 386:
      if (lookahead == 'f') ADVANCE(1950);
      END_STATE();
    case 387:
      if (lookahead == 'f') ADVANCE(1896);
      END_STATE();
    case 388:
      if (lookahead == 'f') ADVANCE(1902);
      END_STATE();
    case 389:
      if (lookahead == 'f') ADVANCE(2110);
      END_STATE();
    case 390:
      if (lookahead == 'f') ADVANCE(443);
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 391:
      if (lookahead == 'f') ADVANCE(117);
      if (lookahead == 'p') ADVANCE(363);
      if (lookahead == 's') ADVANCE(209);
      END_STATE();
    case 392:
      if (lookahead == 'f') ADVANCE(117);
      if (lookahead == 'p') ADVANCE(779);
      END_STATE();
    case 393:
      if (lookahead == 'f') ADVANCE(494);
      if (lookahead == 'g') ADVANCE(588);
      if (lookahead == 'm') ADVANCE(697);
      END_STATE();
    case 394:
      if (lookahead == 'f') ADVANCE(546);
      END_STATE();
    case 395:
      if (lookahead == 'f') ADVANCE(505);
      END_STATE();
    case 396:
      if (lookahead == 'f') ADVANCE(338);
      END_STATE();
    case 397:
      if (lookahead == 'f') ADVANCE(686);
      if (lookahead == 'i') ADVANCE(388);
      END_STATE();
    case 398:
      if (lookahead == 'f') ADVANCE(499);
      END_STATE();
    case 399:
      if (lookahead == 'f') ADVANCE(699);
      END_STATE();
    case 400:
      if (lookahead == 'f') ADVANCE(501);
      END_STATE();
    case 401:
      if (lookahead == 'f') ADVANCE(507);
      END_STATE();
    case 402:
      if (lookahead == 'g') ADVANCE(56);
      if (lookahead == 'i') ADVANCE(530);
      END_STATE();
    case 403:
      if (lookahead == 'g') ADVANCE(1992);
      END_STATE();
    case 404:
      if (lookahead == 'g') ADVANCE(2013);
      END_STATE();
    case 405:
      if (lookahead == 'g') ADVANCE(2127);
      END_STATE();
    case 406:
      if (lookahead == 'g') ADVANCE(2015);
      END_STATE();
    case 407:
      if (lookahead == 'g') ADVANCE(612);
      if (lookahead == 'm') ADVANCE(716);
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 408:
      if (lookahead == 'g') ADVANCE(780);
      if (lookahead == 'r') ADVANCE(414);
      END_STATE();
    case 409:
      if (lookahead == 'g') ADVANCE(783);
      END_STATE();
    case 410:
      if (lookahead == 'g') ADVANCE(588);
      if (lookahead == 'm') ADVANCE(701);
      END_STATE();
    case 411:
      if (lookahead == 'g') ADVANCE(319);
      if (lookahead == 'l') ADVANCE(452);
      END_STATE();
    case 412:
      if (lookahead == 'g') ADVANCE(793);
      END_STATE();
    case 413:
      if (lookahead == 'g') ADVANCE(620);
      END_STATE();
    case 414:
      if (lookahead == 'g') ADVANCE(335);
      END_STATE();
    case 415:
      if (lookahead == 'g') ADVANCE(287);
      END_STATE();
    case 416:
      if (lookahead == 'g') ADVANCE(623);
      END_STATE();
    case 417:
      if (lookahead == 'g') ADVANCE(290);
      END_STATE();
    case 418:
      if (lookahead == 'g') ADVANCE(810);
      END_STATE();
    case 419:
      if (lookahead == 'g') ADVANCE(454);
      END_STATE();
    case 420:
      if (lookahead == 'g') ADVANCE(5);
      END_STATE();
    case 421:
      if (lookahead == 'g') ADVANCE(648);
      END_STATE();
    case 422:
      if (lookahead == 'g') ADVANCE(382);
      END_STATE();
    case 423:
      if (lookahead == 'h') ADVANCE(1944);
      END_STATE();
    case 424:
      if (lookahead == 'h') ADVANCE(2042);
      END_STATE();
    case 425:
      if (lookahead == 'h') ADVANCE(31);
      END_STATE();
    case 426:
      if (lookahead == 'h') ADVANCE(656);
      END_STATE();
    case 427:
      if (lookahead == 'h') ADVANCE(785);
      END_STATE();
    case 428:
      if (lookahead == 'h') ADVANCE(167);
      END_STATE();
    case 429:
      if (lookahead == 'h') ADVANCE(472);
      END_STATE();
    case 430:
      if (lookahead == 'h') ADVANCE(451);
      END_STATE();
    case 431:
      if (lookahead == 'h') ADVANCE(674);
      END_STATE();
    case 432:
      if (lookahead == 'h') ADVANCE(371);
      END_STATE();
    case 433:
      if (lookahead == 'h') ADVANCE(493);
      END_STATE();
    case 434:
      if (lookahead == 'i') ADVANCE(938);
      END_STATE();
    case 435:
      if (lookahead == 'i') ADVANCE(2002);
      END_STATE();
    case 436:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 437:
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'l') ADVANCE(655);
      END_STATE();
    case 438:
      if (lookahead == 'i') ADVANCE(606);
      END_STATE();
    case 439:
      if (lookahead == 'i') ADVANCE(387);
      END_STATE();
    case 440:
      if (lookahead == 'i') ADVANCE(617);
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 441:
      if (lookahead == 'i') ADVANCE(388);
      END_STATE();
    case 442:
      if (lookahead == 'i') ADVANCE(727);
      END_STATE();
    case 443:
      if (lookahead == 'i') ADVANCE(405);
      if (lookahead == 'l') ADVANCE(481);
      END_STATE();
    case 444:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 445:
      if (lookahead == 'i') ADVANCE(413);
      END_STATE();
    case 446:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 447:
      if (lookahead == 'i') ADVANCE(604);
      END_STATE();
    case 448:
      if (lookahead == 'i') ADVANCE(886);
      END_STATE();
    case 449:
      if (lookahead == 'i') ADVANCE(582);
      END_STATE();
    case 450:
      if (lookahead == 'i') ADVANCE(676);
      END_STATE();
    case 451:
      if (lookahead == 'i') ADVANCE(730);
      END_STATE();
    case 452:
      if (lookahead == 'i') ADVANCE(590);
      END_STATE();
    case 453:
      if (lookahead == 'i') ADVANCE(731);
      END_STATE();
    case 454:
      if (lookahead == 'i') ADVANCE(591);
      END_STATE();
    case 455:
      if (lookahead == 'i') ADVANCE(629);
      END_STATE();
    case 456:
      if (lookahead == 'i') ADVANCE(791);
      END_STATE();
    case 457:
      if (lookahead == 'i') ADVANCE(732);
      END_STATE();
    case 458:
      if (lookahead == 'i') ADVANCE(592);
      END_STATE();
    case 459:
      if (lookahead == 'i') ADVANCE(896);
      END_STATE();
    case 460:
      if (lookahead == 'i') ADVANCE(613);
      END_STATE();
    case 461:
      if (lookahead == 'i') ADVANCE(869);
      END_STATE();
    case 462:
      if (lookahead == 'i') ADVANCE(595);
      END_STATE();
    case 463:
      if (lookahead == 'i') ADVANCE(891);
      END_STATE();
    case 464:
      if (lookahead == 'i') ADVANCE(642);
      END_STATE();
    case 465:
      if (lookahead == 'i') ADVANCE(635);
      END_STATE();
    case 466:
      if (lookahead == 'i') ADVANCE(633);
      END_STATE();
    case 467:
      if (lookahead == 'i') ADVANCE(610);
      END_STATE();
    case 468:
      if (lookahead == 'i') ADVANCE(860);
      END_STATE();
    case 469:
      if (lookahead == 'i') ADVANCE(908);
      END_STATE();
    case 470:
      if (lookahead == 'i') ADVANCE(853);
      if (lookahead == 'r') ADVANCE(482);
      END_STATE();
    case 471:
      if (lookahead == 'i') ADVANCE(639);
      END_STATE();
    case 472:
      if (lookahead == 'i') ADVANCE(936);
      END_STATE();
    case 473:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 474:
      if (lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 475:
      if (lookahead == 'i') ADVANCE(624);
      END_STATE();
    case 476:
      if (lookahead == 'i') ADVANCE(218);
      END_STATE();
    case 477:
      if (lookahead == 'i') ADVANCE(416);
      END_STATE();
    case 478:
      if (lookahead == 'i') ADVANCE(677);
      END_STATE();
    case 479:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 480:
      if (lookahead == 'i') ADVANCE(725);
      END_STATE();
    case 481:
      if (lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 482:
      if (lookahead == 'i') ADVANCE(876);
      END_STATE();
    case 483:
      if (lookahead == 'i') ADVANCE(625);
      END_STATE();
    case 484:
      if (lookahead == 'i') ADVANCE(756);
      END_STATE();
    case 485:
      if (lookahead == 'i') ADVANCE(939);
      END_STATE();
    case 486:
      if (lookahead == 'i') ADVANCE(684);
      END_STATE();
    case 487:
      if (lookahead == 'i') ADVANCE(758);
      END_STATE();
    case 488:
      if (lookahead == 'i') ADVANCE(940);
      END_STATE();
    case 489:
      if (lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 490:
      if (lookahead == 'i') ADVANCE(627);
      END_STATE();
    case 491:
      if (lookahead == 'i') ADVANCE(685);
      END_STATE();
    case 492:
      if (lookahead == 'i') ADVANCE(759);
      END_STATE();
    case 493:
      if (lookahead == 'i') ADVANCE(943);
      END_STATE();
    case 494:
      if (lookahead == 'i') ADVANCE(543);
      END_STATE();
    case 495:
      if (lookahead == 'i') ADVANCE(339);
      if (lookahead == 'y') ADVANCE(1965);
      END_STATE();
    case 496:
      if (lookahead == 'i') ADVANCE(687);
      END_STATE();
    case 497:
      if (lookahead == 'i') ADVANCE(761);
      END_STATE();
    case 498:
      if (lookahead == 'i') ADVANCE(688);
      END_STATE();
    case 499:
      if (lookahead == 'i') ADVANCE(545);
      END_STATE();
    case 500:
      if (lookahead == 'i') ADVANCE(689);
      END_STATE();
    case 501:
      if (lookahead == 'i') ADVANCE(564);
      END_STATE();
    case 502:
      if (lookahead == 'i') ADVANCE(690);
      END_STATE();
    case 503:
      if (lookahead == 'i') ADVANCE(941);
      END_STATE();
    case 504:
      if (lookahead == 'i') ADVANCE(228);
      END_STATE();
    case 505:
      if (lookahead == 'i') ADVANCE(555);
      END_STATE();
    case 506:
      if (lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 507:
      if (lookahead == 'i') ADVANCE(557);
      END_STATE();
    case 508:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 509:
      if (lookahead == 'i') ADVANCE(903);
      END_STATE();
    case 510:
      if (lookahead == 'i') ADVANCE(900);
      END_STATE();
    case 511:
      if (lookahead == 'j') ADVANCE(817);
      END_STATE();
    case 512:
      if (lookahead == 'k') ADVANCE(87);
      END_STATE();
    case 513:
      if (lookahead == 'k') ADVANCE(1918);
      END_STATE();
    case 514:
      if (lookahead == 'k') ADVANCE(145);
      END_STATE();
    case 515:
      if (lookahead == 'k') ADVANCE(822);
      END_STATE();
    case 516:
      if (lookahead == 'k') ADVANCE(784);
      END_STATE();
    case 517:
      if (lookahead == 'k') ADVANCE(156);
      END_STATE();
    case 518:
      if (lookahead == 'k') ADVANCE(372);
      END_STATE();
    case 519:
      if (lookahead == 'l') ADVANCE(528);
      END_STATE();
    case 520:
      if (lookahead == 'l') ADVANCE(542);
      END_STATE();
    case 521:
      if (lookahead == 'l') ADVANCE(1980);
      END_STATE();
    case 522:
      if (lookahead == 'l') ADVANCE(2086);
      END_STATE();
    case 523:
      if (lookahead == 'l') ADVANCE(1978);
      END_STATE();
    case 524:
      if (lookahead == 'l') ADVANCE(958);
      END_STATE();
    case 525:
      if (lookahead == 'l') ADVANCE(665);
      END_STATE();
    case 526:
      if (lookahead == 'l') ADVANCE(966);
      END_STATE();
    case 527:
      if (lookahead == 'l') ADVANCE(311);
      END_STATE();
    case 528:
      if (lookahead == 'l') ADVANCE(181);
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 529:
      if (lookahead == 'l') ADVANCE(474);
      END_STATE();
    case 530:
      if (lookahead == 'l') ADVANCE(245);
      END_STATE();
    case 531:
      if (lookahead == 'l') ADVANCE(915);
      END_STATE();
    case 532:
      if (lookahead == 'l') ADVANCE(504);
      END_STATE();
    case 533:
      if (lookahead == 'l') ADVANCE(446);
      END_STATE();
    case 534:
      if (lookahead == 'l') ADVANCE(279);
      if (lookahead == 'n') ADVANCE(1957);
      END_STATE();
    case 535:
      if (lookahead == 'l') ADVANCE(521);
      END_STATE();
    case 536:
      if (lookahead == 'l') ADVANCE(473);
      END_STATE();
    case 537:
      if (lookahead == 'l') ADVANCE(444);
      END_STATE();
    case 538:
      if (lookahead == 'l') ADVANCE(845);
      END_STATE();
    case 539:
      if (lookahead == 'l') ADVANCE(362);
      END_STATE();
    case 540:
      if (lookahead == 'l') ADVANCE(364);
      END_STATE();
    case 541:
      if (lookahead == 'l') ADVANCE(327);
      END_STATE();
    case 542:
      if (lookahead == 'l') ADVANCE(312);
      if (lookahead == 'y') ADVANCE(147);
      END_STATE();
    case 543:
      if (lookahead == 'l') ADVANCE(288);
      END_STATE();
    case 544:
      if (lookahead == 'l') ADVANCE(292);
      END_STATE();
    case 545:
      if (lookahead == 'l') ADVANCE(293);
      END_STATE();
    case 546:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 547:
      if (lookahead == 'l') ADVANCE(916);
      END_STATE();
    case 548:
      if (lookahead == 'l') ADVANCE(356);
      END_STATE();
    case 549:
      if (lookahead == 'l') ADVANCE(553);
      END_STATE();
    case 550:
      if (lookahead == 'l') ADVANCE(436);
      END_STATE();
    case 551:
      if (lookahead == 'l') ADVANCE(377);
      END_STATE();
    case 552:
      if (lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 553:
      if (lookahead == 'l') ADVANCE(963);
      END_STATE();
    case 554:
      if (lookahead == 'l') ADVANCE(330);
      END_STATE();
    case 555:
      if (lookahead == 'l') ADVANCE(341);
      END_STATE();
    case 556:
      if (lookahead == 'l') ADVANCE(882);
      END_STATE();
    case 557:
      if (lookahead == 'l') ADVANCE(345);
      END_STATE();
    case 558:
      if (lookahead == 'l') ADVANCE(346);
      END_STATE();
    case 559:
      if (lookahead == 'l') ADVANCE(347);
      END_STATE();
    case 560:
      if (lookahead == 'l') ADVANCE(465);
      END_STATE();
    case 561:
      if (lookahead == 'l') ADVANCE(467);
      END_STATE();
    case 562:
      if (lookahead == 'l') ADVANCE(506);
      END_STATE();
    case 563:
      if (lookahead == 'l') ADVANCE(508);
      if (lookahead == 'p') ADVANCE(128);
      END_STATE();
    case 564:
      if (lookahead == 'l') ADVANCE(383);
      END_STATE();
    case 565:
      if (lookahead == 'm') ADVANCE(1986);
      END_STATE();
    case 566:
      if (lookahead == 'm') ADVANCE(2041);
      END_STATE();
    case 567:
      if (lookahead == 'm') ADVANCE(1959);
      END_STATE();
    case 568:
      if (lookahead == 'm') ADVANCE(278);
      END_STATE();
    case 569:
      if (lookahead == 'm') ADVANCE(520);
      END_STATE();
    case 570:
      if (lookahead == 'm') ADVANCE(693);
      END_STATE();
    case 571:
      if (lookahead == 'm') ADVANCE(476);
      END_STATE();
    case 572:
      if (lookahead == 'm') ADVANCE(337);
      END_STATE();
    case 573:
      if (lookahead == 'm') ADVANCE(294);
      END_STATE();
    case 574:
      if (lookahead == 'm') ADVANCE(296);
      END_STATE();
    case 575:
      if (lookahead == 'm') ADVANCE(298);
      END_STATE();
    case 576:
      if (lookahead == 'm') ADVANCE(299);
      END_STATE();
    case 577:
      if (lookahead == 'm') ADVANCE(308);
      if (lookahead == 's') ADVANCE(836);
      END_STATE();
    case 578:
      if (lookahead == 'm') ADVANCE(712);
      END_STATE();
    case 579:
      if (lookahead == 'm') ADVANCE(714);
      END_STATE();
    case 580:
      if (lookahead == 'm') ADVANCE(343);
      if (lookahead == 'o') ADVANCE(719);
      END_STATE();
    case 581:
      if (lookahead == 'm') ADVANCE(348);
      END_STATE();
    case 582:
      if (lookahead == 'm') ADVANCE(724);
      END_STATE();
    case 583:
      if (lookahead == 'm') ADVANCE(98);
      END_STATE();
    case 584:
      if (lookahead == 'm') ADVANCE(384);
      END_STATE();
    case 585:
      if (lookahead == 'n') ADVANCE(390);
      if (lookahead == 'p') ADVANCE(957);
      if (lookahead == 'q') ADVANCE(46);
      END_STATE();
    case 586:
      if (lookahead == 'n') ADVANCE(2104);
      if (lookahead == 'p') ADVANCE(304);
      END_STATE();
    case 587:
      if (lookahead == 'n') ADVANCE(1957);
      END_STATE();
    case 588:
      if (lookahead == 'n') ADVANCE(1956);
      END_STATE();
    case 589:
      if (lookahead == 'n') ADVANCE(1884);
      END_STATE();
    case 590:
      if (lookahead == 'n') ADVANCE(2050);
      END_STATE();
    case 591:
      if (lookahead == 'n') ADVANCE(2084);
      END_STATE();
    case 592:
      if (lookahead == 'n') ADVANCE(2074);
      END_STATE();
    case 593:
      if (lookahead == 'n') ADVANCE(1982);
      END_STATE();
    case 594:
      if (lookahead == 'n') ADVANCE(1994);
      END_STATE();
    case 595:
      if (lookahead == 'n') ADVANCE(2046);
      END_STATE();
    case 596:
      if (lookahead == 'n') ADVANCE(1973);
      END_STATE();
    case 597:
      if (lookahead == 'n') ADVANCE(2022);
      END_STATE();
    case 598:
      if (lookahead == 'n') ADVANCE(1875);
      END_STATE();
    case 599:
      if (lookahead == 'n') ADVANCE(1969);
      END_STATE();
    case 600:
      if (lookahead == 'n') ADVANCE(403);
      END_STATE();
    case 601:
      if (lookahead == 'n') ADVANCE(934);
      END_STATE();
    case 602:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 603:
      if (lookahead == 'n') ADVANCE(434);
      if (lookahead == 'r') ADVANCE(435);
      if (lookahead == 's') ADVANCE(305);
      END_STATE();
    case 604:
      if (lookahead == 'n') ADVANCE(396);
      END_STATE();
    case 605:
      if (lookahead == 'n') ADVANCE(935);
      END_STATE();
    case 606:
      if (lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 607:
      if (lookahead == 'n') ADVANCE(355);
      END_STATE();
    case 608:
      if (lookahead == 'n') ADVANCE(242);
      END_STATE();
    case 609:
      if (lookahead == 'n') ADVANCE(404);
      END_STATE();
    case 610:
      if (lookahead == 'n') ADVANCE(518);
      END_STATE();
    case 611:
      if (lookahead == 'n') ADVANCE(273);
      if (lookahead == 'r') ADVANCE(832);
      END_STATE();
    case 612:
      if (lookahead == 'n') ADVANCE(670);
      END_STATE();
    case 613:
      if (lookahead == 'n') ADVANCE(406);
      END_STATE();
    case 614:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 615:
      if (lookahead == 'n') ADVANCE(667);
      if (lookahead == 's') ADVANCE(873);
      END_STATE();
    case 616:
      if (lookahead == 'n') ADVANCE(819);
      END_STATE();
    case 617:
      if (lookahead == 'n') ADVANCE(840);
      END_STATE();
    case 618:
      if (lookahead == 'n') ADVANCE(526);
      END_STATE();
    case 619:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 620:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 621:
      if (lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 622:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 623:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 624:
      if (lookahead == 'n') ADVANCE(866);
      END_STATE();
    case 625:
      if (lookahead == 'n') ADVANCE(868);
      END_STATE();
    case 626:
      if (lookahead == 'n') ADVANCE(849);
      END_STATE();
    case 627:
      if (lookahead == 'n') ADVANCE(856);
      END_STATE();
    case 628:
      if (lookahead == 'n') ADVANCE(374);
      END_STATE();
    case 629:
      if (lookahead == 'n') ADVANCE(412);
      END_STATE();
    case 630:
      if (lookahead == 'n') ADVANCE(430);
      if (lookahead == 'r') ADVANCE(411);
      END_STATE();
    case 631:
      if (lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 632:
      if (lookahead == 'n') ADVANCE(261);
      END_STATE();
    case 633:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 634:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 635:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 636:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 637:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 638:
      if (lookahead == 'n') ADVANCE(889);
      END_STATE();
    case 639:
      if (lookahead == 'n') ADVANCE(360);
      END_STATE();
    case 640:
      if (lookahead == 'n') ADVANCE(455);
      END_STATE();
    case 641:
      if (lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 642:
      if (lookahead == 'n') ADVANCE(884);
      END_STATE();
    case 643:
      if (lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 644:
      if (lookahead == 'n') ADVANCE(825);
      END_STATE();
    case 645:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 646:
      if (lookahead == 'n') ADVANCE(828);
      END_STATE();
    case 647:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 648:
      if (lookahead == 'n') ADVANCE(700);
      END_STATE();
    case 649:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 650:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 651:
      if (lookahead == 'n') ADVANCE(909);
      END_STATE();
    case 652:
      if (lookahead == 'o') ADVANCE(577);
      END_STATE();
    case 653:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 654:
      if (lookahead == 'o') ADVANCE(2062);
      END_STATE();
    case 655:
      if (lookahead == 'o') ADVANCE(944);
      END_STATE();
    case 656:
      if (lookahead == 'o') ADVANCE(1952);
      END_STATE();
    case 657:
      if (lookahead == 'o') ADVANCE(1935);
      END_STATE();
    case 658:
      if (lookahead == 'o') ADVANCE(1988);
      END_STATE();
    case 659:
      if (lookahead == 'o') ADVANCE(2068);
      END_STATE();
    case 660:
      if (lookahead == 'o') ADVANCE(1933);
      END_STATE();
    case 661:
      if (lookahead == 'o') ADVANCE(1962);
      END_STATE();
    case 662:
      if (lookahead == 'o') ADVANCE(1963);
      END_STATE();
    case 663:
      if (lookahead == 'o') ADVANCE(1961);
      END_STATE();
    case 664:
      if (lookahead == 'o') ADVANCE(410);
      END_STATE();
    case 665:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 666:
      if (lookahead == 'o') ADVANCE(947);
      END_STATE();
    case 667:
      if (lookahead == 'o') ADVANCE(715);
      END_STATE();
    case 668:
      if (lookahead == 'o') ADVANCE(552);
      if (lookahead == 'p') ADVANCE(539);
      END_STATE();
    case 669:
      if (lookahead == 'o') ADVANCE(838);
      END_STATE();
    case 670:
      if (lookahead == 'o') ADVANCE(753);
      END_STATE();
    case 671:
      if (lookahead == 'o') ADVANCE(918);
      END_STATE();
    case 672:
      if (lookahead == 'o') ADVANCE(821);
      END_STATE();
    case 673:
      if (lookahead == 'o') ADVANCE(776);
      END_STATE();
    case 674:
      if (lookahead == 'o') ADVANCE(748);
      END_STATE();
    case 675:
      if (lookahead == 'o') ADVANCE(949);
      END_STATE();
    case 676:
      if (lookahead == 'o') ADVANCE(589);
      END_STATE();
    case 677:
      if (lookahead == 'o') ADVANCE(619);
      END_STATE();
    case 678:
      if (lookahead == 'o') ADVANCE(739);
      END_STATE();
    case 679:
      if (lookahead == 'o') ADVANCE(618);
      END_STATE();
    case 680:
      if (lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 681:
      if (lookahead == 'o') ADVANCE(760);
      END_STATE();
    case 682:
      if (lookahead == 'o') ADVANCE(737);
      END_STATE();
    case 683:
      if (lookahead == 'o') ADVANCE(741);
      END_STATE();
    case 684:
      if (lookahead == 'o') ADVANCE(593);
      END_STATE();
    case 685:
      if (lookahead == 'o') ADVANCE(594);
      END_STATE();
    case 686:
      if (lookahead == 'o') ADVANCE(735);
      END_STATE();
    case 687:
      if (lookahead == 'o') ADVANCE(596);
      END_STATE();
    case 688:
      if (lookahead == 'o') ADVANCE(597);
      END_STATE();
    case 689:
      if (lookahead == 'o') ADVANCE(598);
      END_STATE();
    case 690:
      if (lookahead == 'o') ADVANCE(599);
      END_STATE();
    case 691:
      if (lookahead == 'o') ADVANCE(850);
      END_STATE();
    case 692:
      if (lookahead == 'o') ADVANCE(777);
      END_STATE();
    case 693:
      if (lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 694:
      if (lookahead == 'o') ADVANCE(762);
      END_STATE();
    case 695:
      if (lookahead == 'o') ADVANCE(691);
      END_STATE();
    case 696:
      if (lookahead == 'o') ADVANCE(258);
      END_STATE();
    case 697:
      if (lookahead == 'o') ADVANCE(880);
      END_STATE();
    case 698:
      if (lookahead == 'o') ADVANCE(923);
      END_STATE();
    case 699:
      if (lookahead == 'o') ADVANCE(766);
      END_STATE();
    case 700:
      if (lookahead == 'o') ADVANCE(767);
      END_STATE();
    case 701:
      if (lookahead == 'o') ADVANCE(885);
      END_STATE();
    case 702:
      if (lookahead == 'o') ADVANCE(272);
      END_STATE();
    case 703:
      if (lookahead == 'p') ADVANCE(1946);
      END_STATE();
    case 704:
      if (lookahead == 'p') ADVANCE(957);
      END_STATE();
    case 705:
      if (lookahead == 'p') ADVANCE(529);
      END_STATE();
    case 706:
      if (lookahead == 'p') ADVANCE(711);
      END_STATE();
    case 707:
      if (lookahead == 'p') ADVANCE(304);
      END_STATE();
    case 708:
      if (lookahead == 'p') ADVANCE(859);
      END_STATE();
    case 709:
      if (lookahead == 'p') ADVANCE(865);
      END_STATE();
    case 710:
      if (lookahead == 'p') ADVANCE(152);
      END_STATE();
    case 711:
      if (lookahead == 'p') ADVANCE(326);
      END_STATE();
    case 712:
      if (lookahead == 'p') ADVANCE(855);
      END_STATE();
    case 713:
      if (lookahead == 'p') ADVANCE(808);
      END_STATE();
    case 714:
      if (lookahead == 'p') ADVANCE(894);
      END_STATE();
    case 715:
      if (lookahead == 'p') ADVANCE(816);
      END_STATE();
    case 716:
      if (lookahead == 'p') ADVANCE(532);
      END_STATE();
    case 717:
      if (lookahead == 'p') ADVANCE(919);
      END_STATE();
    case 718:
      if (lookahead == 'p') ADVANCE(921);
      END_STATE();
    case 719:
      if (lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 720:
      if (lookahead == 'p') ADVANCE(681);
      END_STATE();
    case 721:
      if (lookahead == 'p') ADVANCE(694);
      END_STATE();
    case 722:
      if (lookahead == 'p') ADVANCE(883);
      END_STATE();
    case 723:
      if (lookahead == 'p') ADVANCE(151);
      END_STATE();
    case 724:
      if (lookahead == 'p') ADVANCE(562);
      END_STATE();
    case 725:
      if (lookahead == 'p') ADVANCE(904);
      END_STATE();
    case 726:
      if (lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 727:
      if (lookahead == 'r') ADVANCE(1947);
      END_STATE();
    case 728:
      if (lookahead == 'r') ADVANCE(2072);
      END_STATE();
    case 729:
      if (lookahead == 'r') ADVANCE(495);
      END_STATE();
    case 730:
      if (lookahead == 'r') ADVANCE(2066);
      END_STATE();
    case 731:
      if (lookahead == 'r') ADVANCE(1886);
      END_STATE();
    case 732:
      if (lookahead == 'r') ADVANCE(2058);
      END_STATE();
    case 733:
      if (lookahead == 'r') ADVANCE(1954);
      END_STATE();
    case 734:
      if (lookahead == 'r') ADVANCE(1976);
      END_STATE();
    case 735:
      if (lookahead == 'r') ADVANCE(2017);
      END_STATE();
    case 736:
      if (lookahead == 'r') ADVANCE(1924);
      END_STATE();
    case 737:
      if (lookahead == 'r') ADVANCE(959);
      END_STATE();
    case 738:
      if (lookahead == 'r') ADVANCE(414);
      END_STATE();
    case 739:
      if (lookahead == 'r') ADVANCE(515);
      END_STATE();
    case 740:
      if (lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 741:
      if (lookahead == 'r') ADVANCE(960);
      END_STATE();
    case 742:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 743:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 744:
      if (lookahead == 'r') ADVANCE(640);
      END_STATE();
    case 745:
      if (lookahead == 'r') ADVANCE(962);
      END_STATE();
    case 746:
      if (lookahead == 'r') ADVANCE(931);
      END_STATE();
    case 747:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 748:
      if (lookahead == 'r') ADVANCE(786);
      END_STATE();
    case 749:
      if (lookahead == 'r') ADVANCE(480);
      END_STATE();
    case 750:
      if (lookahead == 'r') ADVANCE(560);
      END_STATE();
    case 751:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 752:
      if (lookahead == 'r') ADVANCE(695);
      END_STATE();
    case 753:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 754:
      if (lookahead == 'r') ADVANCE(798);
      END_STATE();
    case 755:
      if (lookahead == 'r') ADVANCE(742);
      END_STATE();
    case 756:
      if (lookahead == 'r') ADVANCE(800);
      END_STATE();
    case 757:
      if (lookahead == 'r') ADVANCE(636);
      END_STATE();
    case 758:
      if (lookahead == 'r') ADVANCE(801);
      END_STATE();
    case 759:
      if (lookahead == 'r') ADVANCE(802);
      END_STATE();
    case 760:
      if (lookahead == 'r') ADVANCE(847);
      END_STATE();
    case 761:
      if (lookahead == 'r') ADVANCE(803);
      END_STATE();
    case 762:
      if (lookahead == 'r') ADVANCE(877);
      END_STATE();
    case 763:
      if (lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 764:
      if (lookahead == 'r') ADVANCE(351);
      END_STATE();
    case 765:
      if (lookahead == 'r') ADVANCE(321);
      END_STATE();
    case 766:
      if (lookahead == 'r') ADVANCE(359);
      END_STATE();
    case 767:
      if (lookahead == 'r') ADVANCE(325);
      END_STATE();
    case 768:
      if (lookahead == 'r') ADVANCE(967);
      END_STATE();
    case 769:
      if (lookahead == 'r') ADVANCE(820);
      END_STATE();
    case 770:
      if (lookahead == 'r') ADVANCE(378);
      END_STATE();
    case 771:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 772:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 773:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 774:
      if (lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 775:
      if (lookahead == 'r') ADVANCE(503);
      END_STATE();
    case 776:
      if (lookahead == 'r') ADVANCE(489);
      END_STATE();
    case 777:
      if (lookahead == 'r') ADVANCE(368);
      END_STATE();
    case 778:
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 779:
      if (lookahead == 's') ADVANCE(1920);
      END_STATE();
    case 780:
      if (lookahead == 's') ADVANCE(2030);
      END_STATE();
    case 781:
      if (lookahead == 's') ADVANCE(1880);
      END_STATE();
    case 782:
      if (lookahead == 's') ADVANCE(1984);
      END_STATE();
    case 783:
      if (lookahead == 's') ADVANCE(2070);
      END_STATE();
    case 784:
      if (lookahead == 's') ADVANCE(1919);
      END_STATE();
    case 785:
      if (lookahead == 's') ADVANCE(2060);
      END_STATE();
    case 786:
      if (lookahead == 's') ADVANCE(2003);
      END_STATE();
    case 787:
      if (lookahead == 's') ADVANCE(2024);
      END_STATE();
    case 788:
      if (lookahead == 's') ADVANCE(2028);
      END_STATE();
    case 789:
      if (lookahead == 's') ADVANCE(1877);
      END_STATE();
    case 790:
      if (lookahead == 's') ADVANCE(2093);
      END_STATE();
    case 791:
      if (lookahead == 's') ADVANCE(1967);
      END_STATE();
    case 792:
      if (lookahead == 's') ADVANCE(2097);
      END_STATE();
    case 793:
      if (lookahead == 's') ADVANCE(2106);
      END_STATE();
    case 794:
      if (lookahead == 's') ADVANCE(2026);
      END_STATE();
    case 795:
      if (lookahead == 's') ADVANCE(1900);
      END_STATE();
    case 796:
      if (lookahead == 's') ADVANCE(1927);
      END_STATE();
    case 797:
      if (lookahead == 's') ADVANCE(2011);
      END_STATE();
    case 798:
      if (lookahead == 's') ADVANCE(2005);
      END_STATE();
    case 799:
      if (lookahead == 's') ADVANCE(1955);
      END_STATE();
    case 800:
      if (lookahead == 's') ADVANCE(1864);
      END_STATE();
    case 801:
      if (lookahead == 's') ADVANCE(1872);
      END_STATE();
    case 802:
      if (lookahead == 's') ADVANCE(2102);
      END_STATE();
    case 803:
      if (lookahead == 's') ADVANCE(1870);
      END_STATE();
    case 804:
      if (lookahead == 's') ADVANCE(1996);
      END_STATE();
    case 805:
      if (lookahead == 's') ADVANCE(2123);
      END_STATE();
    case 806:
      if (lookahead == 's') ADVANCE(2052);
      END_STATE();
    case 807:
      if (lookahead == 's') ADVANCE(2032);
      END_STATE();
    case 808:
      if (lookahead == 's') ADVANCE(2114);
      END_STATE();
    case 809:
      if (lookahead == 's') ADVANCE(1960);
      END_STATE();
    case 810:
      if (lookahead == 's') ADVANCE(2121);
      END_STATE();
    case 811:
      if (lookahead == 's') ADVANCE(2054);
      END_STATE();
    case 812:
      if (lookahead == 's') ADVANCE(1879);
      END_STATE();
    case 813:
      if (lookahead == 's') ADVANCE(423);
      END_STATE();
    case 814:
      if (lookahead == 's') ADVANCE(839);
      END_STATE();
    case 815:
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 816:
      if (lookahead == 's') ADVANCE(456);
      END_STATE();
    case 817:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 818:
      if (lookahead == 's') ADVANCE(888);
      END_STATE();
    case 819:
      if (lookahead == 's') ADVANCE(286);
      END_STATE();
    case 820:
      if (lookahead == 's') ADVANCE(291);
      END_STATE();
    case 821:
      if (lookahead == 's') ADVANCE(459);
      END_STATE();
    case 822:
      if (lookahead == 's') ADVANCE(710);
      END_STATE();
    case 823:
      if (lookahead == 's') ADVANCE(873);
      END_STATE();
    case 824:
      if (lookahead == 's') ADVANCE(913);
      END_STATE();
    case 825:
      if (lookahead == 's') ADVANCE(509);
      END_STATE();
    case 826:
      if (lookahead == 's') ADVANCE(867);
      END_STATE();
    case 827:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 828:
      if (lookahead == 's') ADVANCE(510);
      END_STATE();
    case 829:
      if (lookahead == 's') ADVANCE(344);
      END_STATE();
    case 830:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 831:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 832:
      if (lookahead == 's') ADVANCE(491);
      END_STATE();
    case 833:
      if (lookahead == 's') ADVANCE(932);
      END_STATE();
    case 834:
      if (lookahead == 't') ADVANCE(1945);
      END_STATE();
    case 835:
      if (lookahead == 't') ADVANCE(2001);
      END_STATE();
    case 836:
      if (lookahead == 't') ADVANCE(2048);
      END_STATE();
    case 837:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 838:
      if (lookahead == 't') ADVANCE(2056);
      END_STATE();
    case 839:
      if (lookahead == 't') ADVANCE(1892);
      END_STATE();
    case 840:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 841:
      if (lookahead == 't') ADVANCE(2119);
      END_STATE();
    case 842:
      if (lookahead == 't') ADVANCE(1907);
      END_STATE();
    case 843:
      if (lookahead == 't') ADVANCE(1912);
      END_STATE();
    case 844:
      if (lookahead == 't') ADVANCE(2038);
      END_STATE();
    case 845:
      if (lookahead == 't') ADVANCE(2040);
      END_STATE();
    case 846:
      if (lookahead == 't') ADVANCE(2018);
      END_STATE();
    case 847:
      if (lookahead == 't') ADVANCE(1906);
      END_STATE();
    case 848:
      if (lookahead == 't') ADVANCE(1953);
      END_STATE();
    case 849:
      if (lookahead == 't') ADVANCE(2125);
      END_STATE();
    case 850:
      if (lookahead == 't') ADVANCE(2116);
      END_STATE();
    case 851:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 852:
      if (lookahead == 't') ADVANCE(450);
      END_STATE();
    case 853:
      if (lookahead == 't') ADVANCE(425);
      END_STATE();
    case 854:
      if (lookahead == 't') ADVANCE(432);
      END_STATE();
    case 855:
      if (lookahead == 't') ADVANCE(961);
      END_STATE();
    case 856:
      if (lookahead == 't') ADVANCE(389);
      END_STATE();
    case 857:
      if (lookahead == 't') ADVANCE(717);
      END_STATE();
    case 858:
      if (lookahead == 't') ADVANCE(926);
      END_STATE();
    case 859:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 860:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 861:
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 862:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 863:
      if (lookahead == 't') ADVANCE(658);
      END_STATE();
    case 864:
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 865:
      if (lookahead == 't') ADVANCE(788);
      END_STATE();
    case 866:
      if (lookahead == 't') ADVANCE(659);
      END_STATE();
    case 867:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 868:
      if (lookahead == 't') ADVANCE(660);
      END_STATE();
    case 869:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 870:
      if (lookahead == 't') ADVANCE(661);
      END_STATE();
    case 871:
      if (lookahead == 't') ADVANCE(662);
      END_STATE();
    case 872:
      if (lookahead == 't') ADVANCE(663);
      END_STATE();
    case 873:
      if (lookahead == 't') ADVANCE(310);
      END_STATE();
    case 874:
      if (lookahead == 't') ADVANCE(794);
      END_STATE();
    case 875:
      if (lookahead == 't') ADVANCE(897);
      END_STATE();
    case 876:
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 877:
      if (lookahead == 't') ADVANCE(797);
      END_STATE();
    case 878:
      if (lookahead == 't') ADVANCE(799);
      END_STATE();
    case 879:
      if (lookahead == 't') ADVANCE(827);
      END_STATE();
    case 880:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 881:
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 882:
      if (lookahead == 't') ADVANCE(354);
      END_STATE();
    case 883:
      if (lookahead == 't') ADVANCE(331);
      END_STATE();
    case 884:
      if (lookahead == 't') ADVANCE(367);
      END_STATE();
    case 885:
      if (lookahead == 't') ADVANCE(301);
      END_STATE();
    case 886:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 887:
      if (lookahead == 't') ADVANCE(431);
      END_STATE();
    case 888:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 889:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 890:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 891:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 892:
      if (lookahead == 't') ADVANCE(485);
      END_STATE();
    case 893:
      if (lookahead == 't') ADVANCE(751);
      END_STATE();
    case 894:
      if (lookahead == 't') ADVANCE(965);
      END_STATE();
    case 895:
      if (lookahead == 't') ADVANCE(764);
      END_STATE();
    case 896:
      if (lookahead == 't') ADVANCE(683);
      END_STATE();
    case 897:
      if (lookahead == 't') ADVANCE(460);
      END_STATE();
    case 898:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 899:
      if (lookahead == 't') ADVANCE(718);
      END_STATE();
    case 900:
      if (lookahead == 't') ADVANCE(488);
      END_STATE();
    case 901:
      if (lookahead == 't') ADVANCE(486);
      END_STATE();
    case 902:
      if (lookahead == 't') ADVANCE(370);
      END_STATE();
    case 903:
      if (lookahead == 't') ADVANCE(496);
      END_STATE();
    case 904:
      if (lookahead == 't') ADVANCE(498);
      END_STATE();
    case 905:
      if (lookahead == 't') ADVANCE(500);
      END_STATE();
    case 906:
      if (lookahead == 't') ADVANCE(502);
      END_STATE();
    case 907:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 908:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 909:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 910:
      if (lookahead == 'u') ADVANCE(419);
      END_STATE();
    case 911:
      if (lookahead == 'u') ADVANCE(740);
      END_STATE();
    case 912:
      if (lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 913:
      if (lookahead == 'u') ADVANCE(191);
      END_STATE();
    case 914:
      if (lookahead == 'u') ADVANCE(538);
      END_STATE();
    case 915:
      if (lookahead == 'u') ADVANCE(256);
      END_STATE();
    case 916:
      if (lookahead == 'u') ADVANCE(266);
      END_STATE();
    case 917:
      if (lookahead == 'u') ADVANCE(281);
      END_STATE();
    case 918:
      if (lookahead == 'u') ADVANCE(857);
      END_STATE();
    case 919:
      if (lookahead == 'u') ADVANCE(878);
      END_STATE();
    case 920:
      if (lookahead == 'u') ADVANCE(587);
      END_STATE();
    case 921:
      if (lookahead == 'u') ADVANCE(879);
      END_STATE();
    case 922:
      if (lookahead == 'u') ADVANCE(890);
      END_STATE();
    case 923:
      if (lookahead == 'u') ADVANCE(848);
      END_STATE();
    case 924:
      if (lookahead == 'u') ADVANCE(572);
      END_STATE();
    case 925:
      if (lookahead == 'u') ADVANCE(907);
      END_STATE();
    case 926:
      if (lookahead == 'u') ADVANCE(160);
      END_STATE();
    case 927:
      if (lookahead == 'u') ADVANCE(628);
      END_STATE();
    case 928:
      if (lookahead == 'u') ADVANCE(771);
      END_STATE();
    case 929:
      if (lookahead == 'u') ADVANCE(899);
      END_STATE();
    case 930:
      if (lookahead == 'u') ADVANCE(898);
      END_STATE();
    case 931:
      if (lookahead == 'u') ADVANCE(559);
      END_STATE();
    case 932:
      if (lookahead == 'u') ADVANCE(193);
      END_STATE();
    case 933:
      if (lookahead == 'u') ADVANCE(584);
      END_STATE();
    case 934:
      if (lookahead == 'v') ADVANCE(1958);
      END_STATE();
    case 935:
      if (lookahead == 'v') ADVANCE(55);
      END_STATE();
    case 936:
      if (lookahead == 'v') ADVANCE(381);
      END_STATE();
    case 937:
      if (lookahead == 'v') ADVANCE(329);
      END_STATE();
    case 938:
      if (lookahead == 'v') ADVANCE(333);
      END_STATE();
    case 939:
      if (lookahead == 'v') ADVANCE(361);
      END_STATE();
    case 940:
      if (lookahead == 'v') ADVANCE(366);
      END_STATE();
    case 941:
      if (lookahead == 'v') ADVANCE(340);
      END_STATE();
    case 942:
      if (lookahead == 'v') ADVANCE(138);
      END_STATE();
    case 943:
      if (lookahead == 'v') ADVANCE(350);
      END_STATE();
    case 944:
      if (lookahead == 'w') ADVANCE(70);
      END_STATE();
    case 945:
      if (lookahead == 'w') ADVANCE(678);
      END_STATE();
    case 946:
      if (lookahead == 'x') ADVANCE(2090);
      END_STATE();
    case 947:
      if (lookahead == 'x') ADVANCE(1923);
      END_STATE();
    case 948:
      if (lookahead == 'x') ADVANCE(1866);
      END_STATE();
    case 949:
      if (lookahead == 'x') ADVANCE(2112);
      END_STATE();
    case 950:
      if (lookahead == 'x') ADVANCE(45);
      END_STATE();
    case 951:
      if (lookahead == 'x') ADVANCE(720);
      END_STATE();
    case 952:
      if (lookahead == 'x') ADVANCE(954);
      END_STATE();
    case 953:
      if (lookahead == 'x') ADVANCE(844);
      END_STATE();
    case 954:
      if (lookahead == 'x') ADVANCE(57);
      END_STATE();
    case 955:
      if (lookahead == 'x') ADVANCE(380);
      END_STATE();
    case 956:
      if (lookahead == 'x') ADVANCE(468);
      END_STATE();
    case 957:
      if (lookahead == 'y') ADVANCE(1948);
      END_STATE();
    case 958:
      if (lookahead == 'y') ADVANCE(1934);
      END_STATE();
    case 959:
      if (lookahead == 'y') ADVANCE(2095);
      END_STATE();
    case 960:
      if (lookahead == 'y') ADVANCE(2129);
      END_STATE();
    case 961:
      if (lookahead == 'y') ADVANCE(2036);
      END_STATE();
    case 962:
      if (lookahead == 'y') ADVANCE(2078);
      END_STATE();
    case 963:
      if (lookahead == 'y') ADVANCE(89);
      END_STATE();
    case 964:
      if (lookahead == 'y') ADVANCE(637);
      END_STATE();
    case 965:
      if (lookahead == 'y') ADVANCE(86);
      END_STATE();
    case 966:
      if (lookahead == 'y') ADVANCE(92);
      END_STATE();
    case 967:
      if (lookahead == 'y') ADVANCE(95);
      END_STATE();
    case 968:
      if (lookahead == '>' ||
          lookahead == '|') ADVANCE(1);
      END_STATE();
    case 969:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(981);
      END_STATE();
    case 970:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1859);
      END_STATE();
    case 971:
      if (eof) ADVANCE(974);
      if (lookahead == '\n') SKIP(971)
      if (lookahead == ';') ADVANCE(977);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(976);
      if (lookahead != 0) ADVANCE(977);
      END_STATE();
    case 972:
      if (eof) ADVANCE(974);
      if (lookahead == '"') ADVANCE(979);
      if (lookahead == '(') ADVANCE(1861);
      if (lookahead == ')') ADVANCE(1862);
      if (lookahead == ';') ADVANCE(1863);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(972)
      if (lookahead != 0) ADVANCE(1858);
      END_STATE();
    case 973:
      if (eof) ADVANCE(974);
      if (lookahead == '"') ADVANCE(979);
      if (lookahead == '(') ADVANCE(1860);
      if (lookahead == ')') ADVANCE(1862);
      if (lookahead == ';') ADVANCE(1863);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(973)
      if (lookahead != 0) ADVANCE(1858);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR_DASH_STAR_DASHtuareg_DASH_STAR_DASH_STAR_RPAREN);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_ocaml_syntax_token1);
      if (lookahead == ';') ADVANCE(977);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(976);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(977);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_ocaml_syntax_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(977);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '\\') ADVANCE(968);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_multiline_string);
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(980);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym__quoted_string_char);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '.') ADVANCE(1179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '.') ADVANCE(1761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1834);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1421);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1305);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1585);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1581);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1676);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1732);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1166);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1436);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1058);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1061);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1347);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1746);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1657);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1654);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1558);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1777);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1737);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1495);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1074);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1284);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1307);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1475);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1310);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1311);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1563);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '_') ADVANCE(1565);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1349);
      if (lookahead == 'd') ADVANCE(1836);
      if (lookahead == 'e') ADVANCE(1517);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1763);
      if (lookahead == 'e') ADVANCE(1614);
      if (lookahead == 'i') ADVANCE(1079);
      if (lookahead == 'o') ADVANCE(1129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1656);
      if (lookahead == 'r') ADVANCE(1049);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1479);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1516);
      if (lookahead == 'i') ADVANCE(1112);
      if (lookahead == 'o') ADVANCE(1126);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1128);
      if (lookahead == 'i') ADVANCE(1503);
      if (lookahead == 'l') ADVANCE(1806);
      if (lookahead == 'r') ADVANCE(1571);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1496);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1617);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1435);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(989);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1769);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1518);
      if (lookahead == 'l') ADVANCE(1350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1492);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1413);
      if (lookahead == 'e') ADVANCE(1549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1325);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1778);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1798);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1793);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1432);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1774);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1682);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1523);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1550);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1552);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1674);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1678);
      if (lookahead == 'o') ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1662);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1530);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1663);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1437);
      if (lookahead == 'r') ADVANCE(1693);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1740);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1324);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1557);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1326);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1764);
      if (lookahead == 'r') ADVANCE(1571);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1484);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1329);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1334);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1628);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1153);
      if (lookahead == 'r') ADVANCE(1287);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1802);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1796);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1797);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'a') ADVANCE(1498);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'b') ADVANCE(1184);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'b') ADVANCE(1652);
      if (lookahead == 'c') ADVANCE(1232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'b') ADVANCE(1579);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'b') ADVANCE(1448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'b') ADVANCE(1450);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'b') ADVANCE(1452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'b') ADVANCE(1474);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'b') ADVANCE(1459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'b') ADVANCE(1677);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'b') ADVANCE(1680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'b') ADVANCE(1684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'b') ADVANCE(1191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'b') ADVANCE(1192);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'b') ADVANCE(1478);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(1130);
      if (lookahead == 'l') ADVANCE(1344);
      if (lookahead == 'u') ADVANCE(1750);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(1422);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(1869);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(1423);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(1810);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(1227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(1433);
      if (lookahead == 's') ADVANCE(1765);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(1814);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(1840);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(1335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(1338);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(1127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(1389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(1755);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(1202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(1240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(1266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(1666);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(1261);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(1342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(1080);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(1782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(1044);
      if (lookahead == 'p') ADVANCE(1047);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(1063);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(1002);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(1425);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(1457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(1393);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(1426);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(1398);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(1821);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(1343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(1108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(1800);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(1803);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(1032);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'c') ADVANCE(1036);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(1975);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(1972);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(1113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(1854);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(1813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(995);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(1008);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(1572);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(1203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(998);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(987);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(1003);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(1016);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(1006);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(1209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(1688);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(1716);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(1214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(1288);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(1264);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(1354);
      if (lookahead == 's') ADVANCE(1753);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(1067);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(1001);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(1357);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(1234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(1362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(1363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(1365);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(1366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(1376);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(1023);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(1818);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(1610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'd') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1504);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1883);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1909);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1999);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(2076);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(2008);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1917);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(2045);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(2010);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1889);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(2021);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(2101);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(2109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1905);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1612);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1911);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(2082);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(2081);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(2089);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1731);
      if (lookahead == 'o') ADVANCE(1630);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1827);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1841);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1615);
      if (lookahead == 'u') ADVANCE(1434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1014);
      if (lookahead == 'i') ADVANCE(1521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1616);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1627);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1633);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1697);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1622);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(990);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1555);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(999);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1659);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1017);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(993);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1704);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(994);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(997);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1675);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1018);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1709);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1760);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1710);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1713);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1715);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1644);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1719);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1645);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1720);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1721);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1722);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1723);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1534);
      if (lookahead == 'o') ADVANCE(1623);
      if (lookahead == 'r') ADVANCE(1293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1727);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1728);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1730);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1007);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1132);
      if (lookahead == 'p') ADVANCE(1056);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1348);
      if (lookahead == 'm') ADVANCE(1052);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1668);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1672);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1625);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1747);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1390);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1743);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1194);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1197);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1587);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1605);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1175);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1176);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1494);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1685);
      if (lookahead == 'o') ADVANCE(1195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1683);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1022);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1686);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1566);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1567);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1029);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1160);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1035);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1034);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'e') ADVANCE(1037);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'f') ADVANCE(2111);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'f') ADVANCE(1903);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'f') ADVANCE(1897);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'f') ADVANCE(1346);
      if (lookahead == 't') ADVANCE(1220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'f') ADVANCE(1395);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'f') ADVANCE(1443);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'f') ADVANCE(1257);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'f') ADVANCE(1400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'f') ADVANCE(1607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'f') ADVANCE(1462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'f') ADVANCE(1404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'f') ADVANCE(1407);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'f') ADVANCE(1410);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'g') ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'g') ADVANCE(1993);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'g') ADVANCE(2014);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'g') ADVANCE(2128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'g') ADVANCE(2016);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'g') ADVANCE(1545);
      if (lookahead == 'm') ADVANCE(1613);
      if (lookahead == 'n') ADVANCE(1131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'g') ADVANCE(1355);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'g') ADVANCE(1696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'g') ADVANCE(1822);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'g') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'g') ADVANCE(1205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'g') ADVANCE(1207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'g') ADVANCE(1707);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'g') ADVANCE(1714);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'g') ADVANCE(1541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'g') ADVANCE(1249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'g') ADVANCE(1724);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'g') ADVANCE(1215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'g') ADVANCE(1263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'g') ADVANCE(1383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'g') ADVANCE(1289);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'g') ADVANCE(1298);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'h') ADVANCE(2043);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'h') ADVANCE(1353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'h') ADVANCE(1279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'h') ADVANCE(1097);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'h') ADVANCE(1708);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'h') ADVANCE(1578);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'h') ADVANCE(1280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'h') ADVANCE(1396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'h') ADVANCE(1405);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1048);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1316);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1301);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1520);
      if (lookahead == 'p') ADVANCE(984);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1499);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1302);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1641);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1642);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1505);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1643);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1527);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1468);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1661);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1664);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1531);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1665);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1667);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1748);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1773);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1537);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1712);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1540);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1510);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1551);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1669);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1522);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1647);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1253);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1514);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1542);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1544);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1265);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1828);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1589);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1771);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1829);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1591);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1775);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1636);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1830);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1593);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1784);
      if (lookahead == 'y') ADVANCE(1548);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1831);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1785);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1832);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1596);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1449);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1597);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1598);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1599);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1795);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1276);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1120);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1152);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1121);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'i') ADVANCE(1162);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'j') ADVANCE(1736);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'k') ADVANCE(988);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'k') ADVANCE(1053);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'k') ADVANCE(1741);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'k') ADVANCE(1091);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'k') ADVANCE(1095);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'k') ADVANCE(1281);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1442);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1981);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1979);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(2087);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1807);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1430);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1609);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1345);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1222);
      if (lookahead == 'y') ADVANCE(1054);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1060);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1243);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1245);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1248);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1260);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1856);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1815);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1779);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1415);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1087);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1853);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1100);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1819);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1816);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1282);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1416);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1417);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1419);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'l') ADVANCE(1420);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'm') ADVANCE(1987);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'm') ADVANCE(1429);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'm') ADVANCE(1200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'm') ADVANCE(1601);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'm') ADVANCE(1621);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'm') ADVANCE(1211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'm') ADVANCE(1212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'm') ADVANCE(1256);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'm') ADVANCE(1258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'm') ADVANCE(1259);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'm') ADVANCE(1216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'm') ADVANCE(1228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'm') ADVANCE(1359);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'm') ADVANCE(1237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'm') ADVANCE(1624);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'm') ADVANCE(1290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'm') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'm') ADVANCE(1294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'm') ADVANCE(1033);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'm') ADVANCE(1638);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1826);
      if (lookahead == 'x') ADVANCE(1267);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1303);
      if (lookahead == 'p') ADVANCE(1850);
      if (lookahead == 'q') ADVANCE(983);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(2105);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1196);
      if (lookahead == 'r') ADVANCE(1733);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(2085);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1995);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1876);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(2118);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(2051);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(2047);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1970);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(2023);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1885);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(2075);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1983);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1752);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1315);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1427);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1735);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1309);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1456);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1015);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1317);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1321);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1163);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1005);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1065);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1756);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1762);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1776);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1297);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1600);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1583);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1070);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1742);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1739);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1057);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1066);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1086);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1090);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1464);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1093);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1094);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1098);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1099);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1286);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'n') ADVANCE(1804);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1502);
      if (lookahead == 'r') ADVANCE(1041);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1640);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1304);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(2063);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(2069);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1989);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1809);
      if (lookahead == 'u') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1126);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1835);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1653);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1838);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1590);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1639);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1649);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1632);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1660);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1526);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1648);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1650);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1506);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1757);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1507);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1759);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1508);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1511);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1525);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1512);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1658);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1734);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1592);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1673);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1738);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1670);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1158);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'o') ADVANCE(1820);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(1262);
      if (lookahead == 's') ADVANCE(1142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(1476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(1655);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(1602);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(1766);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(1635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(1839);
      if (lookahead == 'u') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(1089);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(1102);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(1790);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(1706);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1623:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(1781);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1624:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(1767);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(1726);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1626:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(1236);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1627:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(1082);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1628:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(1626);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1629:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(1471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1630:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(1438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1631:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(1460);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1632:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(1744);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1633:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(1584);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1634:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(1631);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1635:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(1275);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1636:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(1799);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1637:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(1801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1638:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(1477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1639:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'p') ADVANCE(1110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1640:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1268);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1641:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(2067);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1642:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1887);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1643:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(2059);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1644:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1977);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1645:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(2073);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1646:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1845);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1647:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1693);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1648:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1649:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1650:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1847);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1651:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1848);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1652:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1055);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1653:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1695);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1654:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1655:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1225);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1656:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1657:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1580);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1658:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1270);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1659:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1660:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1772);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1661:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1700);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1662:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1663:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1664:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1701);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1665:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1702);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1666:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1394);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1667:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1703);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1668:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1556);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1669:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1725);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1670:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1274);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1671:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1139);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1672:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1062);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1673:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1674:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1851);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1675:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1676:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1677:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1069);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1678:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1679:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1071);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1680:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1072);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1681:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1682:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1683:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1088);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1684:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1076);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1685:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1333);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1686:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1687:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1277);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1688:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1401);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1689:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1103);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1690:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1691:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'r') ADVANCE(1824);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1692:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(1223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1693:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(1874);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1694:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(1881);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1695:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(2004);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1696:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(2107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1697:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(2064);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1698:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(2012);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1699:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(2006);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1700:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(1865);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1701:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(1873);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1702:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(2103);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1703:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(1871);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1704:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(1997);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1705:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(2124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1706:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(2115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1707:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(2122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1708:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(2061);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1709:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(2053);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1710:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(2055);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1711:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(1878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1712:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(1968);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1713:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(1901);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1714:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(2031);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1715:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(2035);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1716:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(2025);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1717:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(2029);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1718:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(2027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1719:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(2033);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1720:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(1898);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1721:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(1899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1722:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(1985);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1723:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(2065);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1724:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(2071);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1725:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(2083);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1726:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(1921);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1727:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(2092);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1728:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(2094);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1729:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(2099);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1730:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(2098);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1731:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(1751);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1732:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(1808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1733:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(1387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1734:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(1356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1735:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(1204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1736:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(992);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1737:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(1611);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1738:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(1758);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1739:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(1780);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1740:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(1273);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1741:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(1619);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1742:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(1414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1743:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(1011);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1744:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(1371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1745:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(1770);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1746:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(1075);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1747:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(1019);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1748:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(1104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1749:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 's') ADVANCE(1823);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1750:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1751:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1893);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1752:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1059);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1753:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(2120);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1754:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(2039);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1755:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(2019);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1756:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(2126);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1757:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(2117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1758:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(2049);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1759:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(2057);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1760:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1913);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1761:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1762:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1763:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1051);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1764:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1339);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1765:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1050);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1766:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1000);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1767:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1849);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1768:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1042);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1769:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1788);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1770:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1068);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1771:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(985);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1772:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1698);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1773:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1774:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1775:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1004);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1776:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1573);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1777:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1574);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1778:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1779:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1269);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1780:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1691);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1781:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1717);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1782:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1718);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1783:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1784:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1254);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1785:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1786:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1012);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1787:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1679);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1788:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1789:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1790:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1857);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1791:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1064);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1792:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1588);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1793:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1392);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1794:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1101);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1795:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1796:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1797:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1402);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1798:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1278);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1799:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1406);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1800:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1801:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1409);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1802:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1803:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1804:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 't') ADVANCE(1109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1805:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(1313);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1806:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(1319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1807:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(1171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1808:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(1122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1809:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(1671);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1810:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(1493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1811:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1812:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(1360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1813:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(1543);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1814:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(1768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1815:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(1182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1816:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(1183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1817:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(1453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1818:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(1454);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1819:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(1332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1820:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(1681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1821:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(1794);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1822:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(1092);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1823:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(1123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1824:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(1497);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1825:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'u') ADVANCE(1124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1826:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'v') ADVANCE(1991);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1827:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'v') ADVANCE(1230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1828:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'v') ADVANCE(1241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1829:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'v') ADVANCE(1244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1830:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'v') ADVANCE(1251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1831:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'v') ADVANCE(1255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1832:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'v') ADVANCE(1299);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1833:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'w') ADVANCE(1369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1834:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'w') ADVANCE(1582);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1835:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'w') ADVANCE(1024);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1836:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'x') ADVANCE(2091);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1837:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'x') ADVANCE(1867);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1838:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'x') ADVANCE(2113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1839:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'x') ADVANCE(982);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1840:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'x') ADVANCE(1842);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1841:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'x') ADVANCE(1754);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1842:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'x') ADVANCE(986);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1843:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'x') ADVANCE(1291);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1844:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'x') ADVANCE(1629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1845:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'y') ADVANCE(1966);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1846:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'y') ADVANCE(2096);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1847:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'y') ADVANCE(2130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1848:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'y') ADVANCE(2079);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1849:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'y') ADVANCE(2037);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1850:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'y') ADVANCE(1028);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1851:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'y') ADVANCE(1010);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1852:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'y') ADVANCE(1548);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1853:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'y') ADVANCE(1013);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1854:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'y') ADVANCE(1554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1855:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'y') ADVANCE(1026);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1856:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'y') ADVANCE(1025);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1857:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == 'y') ADVANCE(1021);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1858:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1859:
      ACCEPT_TOKEN(sym_named_variable);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1859);
      END_STATE();
    case 1860:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1861:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*') ADVANCE(2);
      END_STATE();
    case 1862:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1863:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1863);
      END_STATE();
    case 1864:
      ACCEPT_TOKEN(anon_sym_vendored_dirs);
      END_STATE();
    case 1865:
      ACCEPT_TOKEN(anon_sym_vendored_dirs);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1866:
      ACCEPT_TOKEN(anon_sym_ocamllex);
      END_STATE();
    case 1867:
      ACCEPT_TOKEN(anon_sym_ocamllex);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1868:
      ACCEPT_TOKEN(anon_sym_ocamlyacc);
      END_STATE();
    case 1869:
      ACCEPT_TOKEN(anon_sym_ocamlyacc);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1870:
      ACCEPT_TOKEN(anon_sym_include_subdirs);
      END_STATE();
    case 1871:
      ACCEPT_TOKEN(anon_sym_include_subdirs);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1872:
      ACCEPT_TOKEN(anon_sym_data_only_dirs);
      END_STATE();
    case 1873:
      ACCEPT_TOKEN(anon_sym_data_only_dirs);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1874:
      ACCEPT_TOKEN(anon_sym_dirs);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1875:
      ACCEPT_TOKEN(anon_sym_documentation);
      END_STATE();
    case 1876:
      ACCEPT_TOKEN(anon_sym_documentation);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1877:
      ACCEPT_TOKEN(anon_sym_modules);
      END_STATE();
    case 1878:
      ACCEPT_TOKEN(anon_sym_modules);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1879:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 1880:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead == '_') ADVANCE(763);
      END_STATE();
    case 1881:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1882:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 1883:
      ACCEPT_TOKEN(anon_sym_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1884:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 1885:
      ACCEPT_TOKEN(anon_sym_action);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1886:
      ACCEPT_TOKEN(anon_sym_subdir);
      END_STATE();
    case 1887:
      ACCEPT_TOKEN(anon_sym_subdir);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1888:
      ACCEPT_TOKEN(anon_sym_executable);
      if (lookahead == 's') ADVANCE(1891);
      END_STATE();
    case 1889:
      ACCEPT_TOKEN(anon_sym_executable);
      if (lookahead == 's') ADVANCE(1890);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1890:
      ACCEPT_TOKEN(anon_sym_executables);
      if (lookahead == '_') ADVANCE(1351);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1891:
      ACCEPT_TOKEN(anon_sym_executables);
      if (lookahead == '_') ADVANCE(449);
      END_STATE();
    case 1892:
      ACCEPT_TOKEN(anon_sym_test);
      if (lookahead == 's') ADVANCE(1894);
      END_STATE();
    case 1893:
      ACCEPT_TOKEN(anon_sym_test);
      if (lookahead == 's') ADVANCE(1895);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1894:
      ACCEPT_TOKEN(anon_sym_tests);
      END_STATE();
    case 1895:
      ACCEPT_TOKEN(anon_sym_tests);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1896:
      ACCEPT_TOKEN(anon_sym_build_if);
      END_STATE();
    case 1897:
      ACCEPT_TOKEN(anon_sym_build_if);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1898:
      ACCEPT_TOKEN(anon_sym_names);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1899:
      ACCEPT_TOKEN(anon_sym_public_names);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1900:
      ACCEPT_TOKEN(anon_sym_libraries);
      END_STATE();
    case 1901:
      ACCEPT_TOKEN(anon_sym_libraries);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1902:
      ACCEPT_TOKEN(anon_sym_enabled_if);
      END_STATE();
    case 1903:
      ACCEPT_TOKEN(anon_sym_enabled_if);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1904:
      ACCEPT_TOKEN(anon_sym_public_name);
      END_STATE();
    case 1905:
      ACCEPT_TOKEN(anon_sym_public_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1906:
      ACCEPT_TOKEN(anon_sym_re_export);
      END_STATE();
    case 1907:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 1908:
      ACCEPT_TOKEN(anon_sym_rule);
      END_STATE();
    case 1909:
      ACCEPT_TOKEN(anon_sym_rule);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1910:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 1911:
      ACCEPT_TOKEN(anon_sym_mode);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1912:
      ACCEPT_TOKEN(anon_sym_target);
      if (lookahead == 's') ADVANCE(1914);
      END_STATE();
    case 1913:
      ACCEPT_TOKEN(anon_sym_target);
      if (lookahead == 's') ADVANCE(1915);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1914:
      ACCEPT_TOKEN(anon_sym_targets);
      END_STATE();
    case 1915:
      ACCEPT_TOKEN(anon_sym_targets);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1916:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 1917:
      ACCEPT_TOKEN(anon_sym_package);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1918:
      ACCEPT_TOKEN(anon_sym_fallback);
      END_STATE();
    case 1919:
      ACCEPT_TOKEN(anon_sym_locks);
      END_STATE();
    case 1920:
      ACCEPT_TOKEN(anon_sym_deps);
      END_STATE();
    case 1921:
      ACCEPT_TOKEN(anon_sym_deps);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1922:
      ACCEPT_TOKEN(anon_sym_universe);
      END_STATE();
    case 1923:
      ACCEPT_TOKEN(anon_sym_sandbox);
      END_STATE();
    case 1924:
      ACCEPT_TOKEN(anon_sym_env_var);
      END_STATE();
    case 1925:
      ACCEPT_TOKEN(anon_sym_alias_rec);
      END_STATE();
    case 1926:
      ACCEPT_TOKEN(anon_sym_source_tree);
      END_STATE();
    case 1927:
      ACCEPT_TOKEN(anon_sym_glob_files);
      END_STATE();
    case 1928:
      ACCEPT_TOKEN(anon_sym_dir);
      END_STATE();
    case 1929:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 1930:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 1931:
      ACCEPT_TOKEN(anon_sym_promote);
      END_STATE();
    case 1932:
      ACCEPT_TOKEN(anon_sym_promote);
      if (lookahead == '-') ADVANCE(483);
      END_STATE();
    case 1933:
      ACCEPT_TOKEN(anon_sym_promote_DASHinto);
      END_STATE();
    case 1934:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 1935:
      ACCEPT_TOKEN(anon_sym_into);
      END_STATE();
    case 1936:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1937:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 1938:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(1940);
      END_STATE();
    case 1939:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(1941);
      if (lookahead == '>') ADVANCE(1937);
      END_STATE();
    case 1940:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 1941:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 1942:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 1943:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 1944:
      ACCEPT_TOKEN(anon_sym_bash);
      END_STATE();
    case 1945:
      ACCEPT_TOKEN(anon_sym_cat);
      END_STATE();
    case 1946:
      ACCEPT_TOKEN(anon_sym_cmp);
      END_STATE();
    case 1947:
      ACCEPT_TOKEN(anon_sym_chdir);
      END_STATE();
    case 1948:
      ACCEPT_TOKEN(anon_sym_copy);
      if (lookahead == '#') ADVANCE(1949);
      END_STATE();
    case 1949:
      ACCEPT_TOKEN(anon_sym_copy_POUND);
      END_STATE();
    case 1950:
      ACCEPT_TOKEN(anon_sym_diff);
      if (lookahead == '?') ADVANCE(1951);
      END_STATE();
    case 1951:
      ACCEPT_TOKEN(anon_sym_diff_QMARK);
      END_STATE();
    case 1952:
      ACCEPT_TOKEN(anon_sym_echo);
      END_STATE();
    case 1953:
      ACCEPT_TOKEN(anon_sym_ignore_DASHstdout);
      END_STATE();
    case 1954:
      ACCEPT_TOKEN(anon_sym_no_DASHinfer);
      END_STATE();
    case 1955:
      ACCEPT_TOKEN(anon_sym_pipe_DASHoutputs);
      END_STATE();
    case 1956:
      ACCEPT_TOKEN(anon_sym_progn);
      END_STATE();
    case 1957:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 1958:
      ACCEPT_TOKEN(anon_sym_setenv);
      END_STATE();
    case 1959:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 1960:
      ACCEPT_TOKEN(anon_sym_with_DASHaccepted_DASHexit_DASHcodes);
      END_STATE();
    case 1961:
      ACCEPT_TOKEN(anon_sym_with_DASHoutputs_DASHto);
      END_STATE();
    case 1962:
      ACCEPT_TOKEN(anon_sym_with_DASHstderr_DASHto);
      END_STATE();
    case 1963:
      ACCEPT_TOKEN(anon_sym_with_DASHstdout_DASHto);
      END_STATE();
    case 1964:
      ACCEPT_TOKEN(anon_sym_write_DASHfile);
      END_STATE();
    case 1965:
      ACCEPT_TOKEN(anon_sym_library);
      END_STATE();
    case 1966:
      ACCEPT_TOKEN(anon_sym_library);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1967:
      ACCEPT_TOKEN(anon_sym_synopsis);
      END_STATE();
    case 1968:
      ACCEPT_TOKEN(anon_sym_synopsis);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1969:
      ACCEPT_TOKEN(anon_sym_instrumentation);
      END_STATE();
    case 1970:
      ACCEPT_TOKEN(anon_sym_instrumentation);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1971:
      ACCEPT_TOKEN(anon_sym_wrapped);
      if (lookahead == '_') ADVANCE(316);
      END_STATE();
    case 1972:
      ACCEPT_TOKEN(anon_sym_wrapped);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1973:
      ACCEPT_TOKEN(anon_sym_transition);
      END_STATE();
    case 1974:
      ACCEPT_TOKEN(anon_sym_kind);
      END_STATE();
    case 1975:
      ACCEPT_TOKEN(anon_sym_kind);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1976:
      ACCEPT_TOKEN(anon_sym_ppx_DOTdriver);
      END_STATE();
    case 1977:
      ACCEPT_TOKEN(anon_sym_ppx_DOTdriver);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1978:
      ACCEPT_TOKEN(anon_sym_toplevel);
      END_STATE();
    case 1979:
      ACCEPT_TOKEN(anon_sym_toplevel);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1980:
      ACCEPT_TOKEN(anon_sym_install);
      END_STATE();
    case 1981:
      ACCEPT_TOKEN(anon_sym_install);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1982:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 1983:
      ACCEPT_TOKEN(anon_sym_section);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1984:
      ACCEPT_TOKEN(anon_sym_files);
      END_STATE();
    case 1985:
      ACCEPT_TOKEN(anon_sym_files);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1986:
      ACCEPT_TOKEN(anon_sym_cram);
      END_STATE();
    case 1987:
      ACCEPT_TOKEN(anon_sym_cram);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1988:
      ACCEPT_TOKEN(anon_sym_applies_to);
      END_STATE();
    case 1989:
      ACCEPT_TOKEN(anon_sym_applies_to);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1990:
      ACCEPT_TOKEN(anon_sym_env);
      END_STATE();
    case 1991:
      ACCEPT_TOKEN(anon_sym_env);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1992:
      ACCEPT_TOKEN(anon_sym_lang);
      END_STATE();
    case 1993:
      ACCEPT_TOKEN(anon_sym_lang);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1994:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 1995:
      ACCEPT_TOKEN(anon_sym_version);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1996:
      ACCEPT_TOKEN(anon_sym_generate_opam_files);
      END_STATE();
    case 1997:
      ACCEPT_TOKEN(anon_sym_generate_opam_files);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 1998:
      ACCEPT_TOKEN(anon_sym_source);
      if (lookahead == '_') ADVANCE(895);
      END_STATE();
    case 1999:
      ACCEPT_TOKEN(anon_sym_source);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2000:
      ACCEPT_TOKEN(anon_sym_github);
      END_STATE();
    case 2001:
      ACCEPT_TOKEN(anon_sym_git);
      if (lookahead == 'h') ADVANCE(912);
      END_STATE();
    case 2002:
      ACCEPT_TOKEN(anon_sym_uri);
      END_STATE();
    case 2003:
      ACCEPT_TOKEN(anon_sym_authors);
      END_STATE();
    case 2004:
      ACCEPT_TOKEN(anon_sym_authors);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2005:
      ACCEPT_TOKEN(anon_sym_maintainers);
      END_STATE();
    case 2006:
      ACCEPT_TOKEN(anon_sym_maintainers);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2007:
      ACCEPT_TOKEN(anon_sym_license);
      END_STATE();
    case 2008:
      ACCEPT_TOKEN(anon_sym_license);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2009:
      ACCEPT_TOKEN(anon_sym_homepage);
      END_STATE();
    case 2010:
      ACCEPT_TOKEN(anon_sym_homepage);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2011:
      ACCEPT_TOKEN(anon_sym_bug_reports);
      END_STATE();
    case 2012:
      ACCEPT_TOKEN(anon_sym_bug_reports);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2013:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 2014:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2015:
      ACCEPT_TOKEN(anon_sym_formatting);
      END_STATE();
    case 2016:
      ACCEPT_TOKEN(anon_sym_formatting);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2017:
      ACCEPT_TOKEN(anon_sym_enabled_for);
      END_STATE();
    case 2018:
      ACCEPT_TOKEN(anon_sym_dialect);
      END_STATE();
    case 2019:
      ACCEPT_TOKEN(anon_sym_dialect);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2020:
      ACCEPT_TOKEN(anon_sym_explicit_js_mode);
      END_STATE();
    case 2021:
      ACCEPT_TOKEN(anon_sym_explicit_js_mode);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2022:
      ACCEPT_TOKEN(anon_sym_description);
      END_STATE();
    case 2023:
      ACCEPT_TOKEN(anon_sym_description);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2024:
      ACCEPT_TOKEN(anon_sym_depends);
      END_STATE();
    case 2025:
      ACCEPT_TOKEN(anon_sym_depends);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2026:
      ACCEPT_TOKEN(anon_sym_conflicts);
      END_STATE();
    case 2027:
      ACCEPT_TOKEN(anon_sym_conflicts);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2028:
      ACCEPT_TOKEN(anon_sym_depopts);
      END_STATE();
    case 2029:
      ACCEPT_TOKEN(anon_sym_depopts);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2030:
      ACCEPT_TOKEN(anon_sym_tags);
      END_STATE();
    case 2031:
      ACCEPT_TOKEN(anon_sym_tags);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2032:
      ACCEPT_TOKEN(anon_sym_deprecated_package_names);
      END_STATE();
    case 2033:
      ACCEPT_TOKEN(anon_sym_deprecated_package_names);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2034:
      ACCEPT_TOKEN(anon_sym_sites);
      END_STATE();
    case 2035:
      ACCEPT_TOKEN(anon_sym_sites);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2036:
      ACCEPT_TOKEN(anon_sym_allow_empty);
      END_STATE();
    case 2037:
      ACCEPT_TOKEN(anon_sym_allow_empty);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2038:
      ACCEPT_TOKEN(anon_sym_context);
      END_STATE();
    case 2039:
      ACCEPT_TOKEN(anon_sym_context);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2040:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 2041:
      ACCEPT_TOKEN(anon_sym_opam);
      END_STATE();
    case 2042:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 2043:
      ACCEPT_TOKEN(anon_sym_switch);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2044:
      ACCEPT_TOKEN(anon_sym_profile);
      END_STATE();
    case 2045:
      ACCEPT_TOKEN(anon_sym_profile);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2046:
      ACCEPT_TOKEN(anon_sym_toolchain);
      END_STATE();
    case 2047:
      ACCEPT_TOKEN(anon_sym_toolchain);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2048:
      ACCEPT_TOKEN(anon_sym_host);
      END_STATE();
    case 2049:
      ACCEPT_TOKEN(anon_sym_host);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2050:
      ACCEPT_TOKEN(anon_sym_merlin);
      END_STATE();
    case 2051:
      ACCEPT_TOKEN(anon_sym_merlin);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2052:
      ACCEPT_TOKEN(anon_sym_generate_merlin_rules);
      END_STATE();
    case 2053:
      ACCEPT_TOKEN(anon_sym_generate_merlin_rules);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2054:
      ACCEPT_TOKEN(anon_sym_disable_dynamically_linked_foreign_archives);
      END_STATE();
    case 2055:
      ACCEPT_TOKEN(anon_sym_disable_dynamically_linked_foreign_archives);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2056:
      ACCEPT_TOKEN(anon_sym_root);
      END_STATE();
    case 2057:
      ACCEPT_TOKEN(anon_sym_root);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2058:
      ACCEPT_TOKEN(anon_sym_lock_dir);
      END_STATE();
    case 2059:
      ACCEPT_TOKEN(anon_sym_lock_dir);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2060:
      ACCEPT_TOKEN(anon_sym_paths);
      END_STATE();
    case 2061:
      ACCEPT_TOKEN(anon_sym_paths);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2062:
      ACCEPT_TOKEN(anon_sym_fdo);
      END_STATE();
    case 2063:
      ACCEPT_TOKEN(anon_sym_fdo);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2064:
      ACCEPT_TOKEN(anon_sym_copy_files);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2065:
      ACCEPT_TOKEN(anon_sym_only_sources);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2066:
      ACCEPT_TOKEN(anon_sym_menhir);
      END_STATE();
    case 2067:
      ACCEPT_TOKEN(anon_sym_menhir);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2068:
      ACCEPT_TOKEN(anon_sym_merge_into);
      END_STATE();
    case 2069:
      ACCEPT_TOKEN(anon_sym_merge_into);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2070:
      ACCEPT_TOKEN(anon_sym_flags);
      END_STATE();
    case 2071:
      ACCEPT_TOKEN(anon_sym_flags);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2072:
      ACCEPT_TOKEN(anon_sym_infer);
      END_STATE();
    case 2073:
      ACCEPT_TOKEN(anon_sym_infer);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2074:
      ACCEPT_TOKEN(anon_sym_explain);
      END_STATE();
    case 2075:
      ACCEPT_TOKEN(anon_sym_explain);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2076:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '_') ADVANCE(1749);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2077:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '_') ADVANCE(833);
      END_STATE();
    case 2078:
      ACCEPT_TOKEN(anon_sym_foreign_library);
      END_STATE();
    case 2079:
      ACCEPT_TOKEN(anon_sym_foreign_library);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2080:
      ACCEPT_TOKEN(anon_sym_archive_name);
      END_STATE();
    case 2081:
      ACCEPT_TOKEN(anon_sym_archive_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2082:
      ACCEPT_TOKEN(anon_sym_language);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2083:
      ACCEPT_TOKEN(anon_sym_include_dirs);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2084:
      ACCEPT_TOKEN(anon_sym_plugin);
      END_STATE();
    case 2085:
      ACCEPT_TOKEN(anon_sym_plugin);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2086:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 2087:
      ACCEPT_TOKEN(anon_sym_optional);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2088:
      ACCEPT_TOKEN(anon_sym_site);
      if (lookahead == 's') ADVANCE(2034);
      END_STATE();
    case 2089:
      ACCEPT_TOKEN(anon_sym_site);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2090:
      ACCEPT_TOKEN(anon_sym_mdx);
      END_STATE();
    case 2091:
      ACCEPT_TOKEN(anon_sym_mdx);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2092:
      ACCEPT_TOKEN(anon_sym_packages);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2093:
      ACCEPT_TOKEN(anon_sym_preludes);
      END_STATE();
    case 2094:
      ACCEPT_TOKEN(anon_sym_preludes);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2095:
      ACCEPT_TOKEN(anon_sym_coq_DOTtheory);
      END_STATE();
    case 2096:
      ACCEPT_TOKEN(anon_sym_coq_DOTtheory);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2097:
      ACCEPT_TOKEN(anon_sym_theories);
      END_STATE();
    case 2098:
      ACCEPT_TOKEN(anon_sym_theories);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2099:
      ACCEPT_TOKEN(anon_sym_plugins);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2100:
      ACCEPT_TOKEN(anon_sym_deprecated_library_name);
      END_STATE();
    case 2101:
      ACCEPT_TOKEN(anon_sym_deprecated_library_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2102:
      ACCEPT_TOKEN(anon_sym_ignored_subdirs);
      END_STATE();
    case 2103:
      ACCEPT_TOKEN(anon_sym_ignored_subdirs);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2104:
      ACCEPT_TOKEN(anon_sym_pin);
      END_STATE();
    case 2105:
      ACCEPT_TOKEN(anon_sym_pin);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2106:
      ACCEPT_TOKEN(anon_sym_warnings);
      END_STATE();
    case 2107:
      ACCEPT_TOKEN(anon_sym_warnings);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2108:
      ACCEPT_TOKEN(anon_sym_accept_alternative_dune_file_name);
      END_STATE();
    case 2109:
      ACCEPT_TOKEN(anon_sym_accept_alternative_dune_file_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2110:
      ACCEPT_TOKEN(anon_sym_executables_implicit_empty_intf);
      END_STATE();
    case 2111:
      ACCEPT_TOKEN(anon_sym_executables_implicit_empty_intf);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2112:
      ACCEPT_TOKEN(anon_sym_expand_aliases_in_sandbox);
      END_STATE();
    case 2113:
      ACCEPT_TOKEN(anon_sym_expand_aliases_in_sandbox);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2114:
      ACCEPT_TOKEN(anon_sym_implicit_transitive_deps);
      END_STATE();
    case 2115:
      ACCEPT_TOKEN(anon_sym_implicit_transitive_deps);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2116:
      ACCEPT_TOKEN(anon_sym_map_workspace_root);
      END_STATE();
    case 2117:
      ACCEPT_TOKEN(anon_sym_map_workspace_root);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2118:
      ACCEPT_TOKEN(anon_sym_opam_file_location);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2119:
      ACCEPT_TOKEN(anon_sym_subst);
      END_STATE();
    case 2120:
      ACCEPT_TOKEN(anon_sym_subst);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2121:
      ACCEPT_TOKEN(anon_sym_use_standard_c_and_cxx_flags);
      END_STATE();
    case 2122:
      ACCEPT_TOKEN(anon_sym_use_standard_c_and_cxx_flags);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2123:
      ACCEPT_TOKEN(anon_sym_wrapped_executables);
      END_STATE();
    case 2124:
      ACCEPT_TOKEN(anon_sym_wrapped_executables);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2125:
      ACCEPT_TOKEN(anon_sym_maintenance_intent);
      END_STATE();
    case 2126:
      ACCEPT_TOKEN(anon_sym_maintenance_intent);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2127:
      ACCEPT_TOKEN(anon_sym_config);
      END_STATE();
    case 2128:
      ACCEPT_TOKEN(anon_sym_config);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    case 2129:
      ACCEPT_TOKEN(anon_sym_repository);
      END_STATE();
    case 2130:
      ACCEPT_TOKEN(anon_sym_repository);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(1858);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 972},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 973},
  [5] = {.lex_state = 973},
  [6] = {.lex_state = 973},
  [7] = {.lex_state = 973},
  [8] = {.lex_state = 973},
  [9] = {.lex_state = 973},
  [10] = {.lex_state = 973},
  [11] = {.lex_state = 25},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 18},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 19},
  [22] = {.lex_state = 20},
  [23] = {.lex_state = 15},
  [24] = {.lex_state = 21},
  [25] = {.lex_state = 16},
  [26] = {.lex_state = 23},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 973},
  [29] = {.lex_state = 22},
  [30] = {.lex_state = 973},
  [31] = {.lex_state = 973},
  [32] = {.lex_state = 973},
  [33] = {.lex_state = 973},
  [34] = {.lex_state = 973},
  [35] = {.lex_state = 973},
  [36] = {.lex_state = 973},
  [37] = {.lex_state = 973},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 973},
  [40] = {.lex_state = 973},
  [41] = {.lex_state = 973},
  [42] = {.lex_state = 973},
  [43] = {.lex_state = 973},
  [44] = {.lex_state = 973},
  [45] = {.lex_state = 973},
  [46] = {.lex_state = 973},
  [47] = {.lex_state = 973},
  [48] = {.lex_state = 973},
  [49] = {.lex_state = 973},
  [50] = {.lex_state = 973},
  [51] = {.lex_state = 973},
  [52] = {.lex_state = 973},
  [53] = {.lex_state = 973},
  [54] = {.lex_state = 973},
  [55] = {.lex_state = 973},
  [56] = {.lex_state = 973},
  [57] = {.lex_state = 973},
  [58] = {.lex_state = 973},
  [59] = {.lex_state = 973},
  [60] = {.lex_state = 973},
  [61] = {.lex_state = 973},
  [62] = {.lex_state = 973},
  [63] = {.lex_state = 973},
  [64] = {.lex_state = 973},
  [65] = {.lex_state = 973},
  [66] = {.lex_state = 973},
  [67] = {.lex_state = 973},
  [68] = {.lex_state = 973},
  [69] = {.lex_state = 973},
  [70] = {.lex_state = 973},
  [71] = {.lex_state = 973},
  [72] = {.lex_state = 973},
  [73] = {.lex_state = 973},
  [74] = {.lex_state = 973},
  [75] = {.lex_state = 973},
  [76] = {.lex_state = 973},
  [77] = {.lex_state = 973},
  [78] = {.lex_state = 973},
  [79] = {.lex_state = 973},
  [80] = {.lex_state = 973},
  [81] = {.lex_state = 973},
  [82] = {.lex_state = 973},
  [83] = {.lex_state = 973},
  [84] = {.lex_state = 973},
  [85] = {.lex_state = 973},
  [86] = {.lex_state = 973},
  [87] = {.lex_state = 973},
  [88] = {.lex_state = 973},
  [89] = {.lex_state = 973},
  [90] = {.lex_state = 973},
  [91] = {.lex_state = 973},
  [92] = {.lex_state = 973},
  [93] = {.lex_state = 973},
  [94] = {.lex_state = 973},
  [95] = {.lex_state = 973},
  [96] = {.lex_state = 973},
  [97] = {.lex_state = 973},
  [98] = {.lex_state = 973},
  [99] = {.lex_state = 973},
  [100] = {.lex_state = 973},
  [101] = {.lex_state = 973},
  [102] = {.lex_state = 973},
  [103] = {.lex_state = 973},
  [104] = {.lex_state = 973},
  [105] = {.lex_state = 973},
  [106] = {.lex_state = 973},
  [107] = {.lex_state = 973},
  [108] = {.lex_state = 973},
  [109] = {.lex_state = 973},
  [110] = {.lex_state = 973},
  [111] = {.lex_state = 973},
  [112] = {.lex_state = 973},
  [113] = {.lex_state = 973},
  [114] = {.lex_state = 973},
  [115] = {.lex_state = 973},
  [116] = {.lex_state = 973},
  [117] = {.lex_state = 973},
  [118] = {.lex_state = 973},
  [119] = {.lex_state = 973},
  [120] = {.lex_state = 973},
  [121] = {.lex_state = 973},
  [122] = {.lex_state = 973},
  [123] = {.lex_state = 973},
  [124] = {.lex_state = 973},
  [125] = {.lex_state = 973},
  [126] = {.lex_state = 973},
  [127] = {.lex_state = 973},
  [128] = {.lex_state = 973},
  [129] = {.lex_state = 973},
  [130] = {.lex_state = 973},
  [131] = {.lex_state = 973},
  [132] = {.lex_state = 973},
  [133] = {.lex_state = 973},
  [134] = {.lex_state = 973},
  [135] = {.lex_state = 973},
  [136] = {.lex_state = 973},
  [137] = {.lex_state = 973},
  [138] = {.lex_state = 973},
  [139] = {.lex_state = 973},
  [140] = {.lex_state = 973},
  [141] = {.lex_state = 973},
  [142] = {.lex_state = 973},
  [143] = {.lex_state = 973},
  [144] = {.lex_state = 973},
  [145] = {.lex_state = 973},
  [146] = {.lex_state = 973},
  [147] = {.lex_state = 973},
  [148] = {.lex_state = 973},
  [149] = {.lex_state = 973},
  [150] = {.lex_state = 973},
  [151] = {.lex_state = 973},
  [152] = {.lex_state = 973},
  [153] = {.lex_state = 973},
  [154] = {.lex_state = 973},
  [155] = {.lex_state = 973},
  [156] = {.lex_state = 973},
  [157] = {.lex_state = 973},
  [158] = {.lex_state = 973},
  [159] = {.lex_state = 973},
  [160] = {.lex_state = 973},
  [161] = {.lex_state = 973},
  [162] = {.lex_state = 973},
  [163] = {.lex_state = 973},
  [164] = {.lex_state = 973},
  [165] = {.lex_state = 973},
  [166] = {.lex_state = 973},
  [167] = {.lex_state = 973},
  [168] = {.lex_state = 973},
  [169] = {.lex_state = 973},
  [170] = {.lex_state = 973},
  [171] = {.lex_state = 973},
  [172] = {.lex_state = 973},
  [173] = {.lex_state = 973},
  [174] = {.lex_state = 973},
  [175] = {.lex_state = 973},
  [176] = {.lex_state = 973},
  [177] = {.lex_state = 973},
  [178] = {.lex_state = 973},
  [179] = {.lex_state = 973},
  [180] = {.lex_state = 973},
  [181] = {.lex_state = 973},
  [182] = {.lex_state = 973},
  [183] = {.lex_state = 973},
  [184] = {.lex_state = 47},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 973},
  [187] = {.lex_state = 973},
  [188] = {.lex_state = 972},
  [189] = {.lex_state = 972},
  [190] = {.lex_state = 972},
  [191] = {.lex_state = 972},
  [192] = {.lex_state = 972},
  [193] = {.lex_state = 972},
  [194] = {.lex_state = 973},
  [195] = {.lex_state = 972},
  [196] = {.lex_state = 972},
  [197] = {.lex_state = 972},
  [198] = {.lex_state = 973},
  [199] = {.lex_state = 972},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 972},
  [202] = {.lex_state = 972},
  [203] = {.lex_state = 973},
  [204] = {.lex_state = 972},
  [205] = {.lex_state = 972},
  [206] = {.lex_state = 972},
  [207] = {.lex_state = 972},
  [208] = {.lex_state = 972},
  [209] = {.lex_state = 972},
  [210] = {.lex_state = 972},
  [211] = {.lex_state = 972},
  [212] = {.lex_state = 973},
  [213] = {.lex_state = 972},
  [214] = {.lex_state = 972},
  [215] = {.lex_state = 972},
  [216] = {.lex_state = 972},
  [217] = {.lex_state = 972},
  [218] = {.lex_state = 972},
  [219] = {.lex_state = 972},
  [220] = {.lex_state = 972},
  [221] = {.lex_state = 972},
  [222] = {.lex_state = 972},
  [223] = {.lex_state = 972},
  [224] = {.lex_state = 972},
  [225] = {.lex_state = 972},
  [226] = {.lex_state = 972},
  [227] = {.lex_state = 972},
  [228] = {.lex_state = 972},
  [229] = {.lex_state = 972},
  [230] = {.lex_state = 972},
  [231] = {.lex_state = 972},
  [232] = {.lex_state = 972},
  [233] = {.lex_state = 972},
  [234] = {.lex_state = 972},
  [235] = {.lex_state = 972},
  [236] = {.lex_state = 972},
  [237] = {.lex_state = 972},
  [238] = {.lex_state = 972},
  [239] = {.lex_state = 972},
  [240] = {.lex_state = 972},
  [241] = {.lex_state = 972},
  [242] = {.lex_state = 973},
  [243] = {.lex_state = 972},
  [244] = {.lex_state = 972},
  [245] = {.lex_state = 973},
  [246] = {.lex_state = 972},
  [247] = {.lex_state = 972},
  [248] = {.lex_state = 972},
  [249] = {.lex_state = 973},
  [250] = {.lex_state = 972},
  [251] = {.lex_state = 972},
  [252] = {.lex_state = 972},
  [253] = {.lex_state = 972},
  [254] = {.lex_state = 972},
  [255] = {.lex_state = 973},
  [256] = {.lex_state = 973},
  [257] = {.lex_state = 972},
  [258] = {.lex_state = 972},
  [259] = {.lex_state = 973},
  [260] = {.lex_state = 972},
  [261] = {.lex_state = 972},
  [262] = {.lex_state = 972},
  [263] = {.lex_state = 972},
  [264] = {.lex_state = 972},
  [265] = {.lex_state = 972},
  [266] = {.lex_state = 972},
  [267] = {.lex_state = 972},
  [268] = {.lex_state = 972},
  [269] = {.lex_state = 972},
  [270] = {.lex_state = 972},
  [271] = {.lex_state = 972},
  [272] = {.lex_state = 972},
  [273] = {.lex_state = 972},
  [274] = {.lex_state = 973},
  [275] = {.lex_state = 972},
  [276] = {.lex_state = 972},
  [277] = {.lex_state = 972},
  [278] = {.lex_state = 972},
  [279] = {.lex_state = 972},
  [280] = {.lex_state = 972},
  [281] = {.lex_state = 972},
  [282] = {.lex_state = 973},
  [283] = {.lex_state = 973},
  [284] = {.lex_state = 972},
  [285] = {.lex_state = 972},
  [286] = {.lex_state = 972},
  [287] = {.lex_state = 973},
  [288] = {.lex_state = 972},
  [289] = {.lex_state = 972},
  [290] = {.lex_state = 972},
  [291] = {.lex_state = 972},
  [292] = {.lex_state = 972},
  [293] = {.lex_state = 972},
  [294] = {.lex_state = 972},
  [295] = {.lex_state = 972},
  [296] = {.lex_state = 972},
  [297] = {.lex_state = 972},
  [298] = {.lex_state = 973},
  [299] = {.lex_state = 972},
  [300] = {.lex_state = 972},
  [301] = {.lex_state = 972},
  [302] = {.lex_state = 972},
  [303] = {.lex_state = 972},
  [304] = {.lex_state = 972},
  [305] = {.lex_state = 972},
  [306] = {.lex_state = 972},
  [307] = {.lex_state = 972},
  [308] = {.lex_state = 972},
  [309] = {.lex_state = 972},
  [310] = {.lex_state = 972},
  [311] = {.lex_state = 972},
  [312] = {.lex_state = 973},
  [313] = {.lex_state = 973},
  [314] = {.lex_state = 973},
  [315] = {.lex_state = 973},
  [316] = {.lex_state = 972},
  [317] = {.lex_state = 972},
  [318] = {.lex_state = 973},
  [319] = {.lex_state = 972},
  [320] = {.lex_state = 973},
  [321] = {.lex_state = 972},
  [322] = {.lex_state = 973},
  [323] = {.lex_state = 973},
  [324] = {.lex_state = 972},
  [325] = {.lex_state = 972},
  [326] = {.lex_state = 973},
  [327] = {.lex_state = 972},
  [328] = {.lex_state = 973},
  [329] = {.lex_state = 973},
  [330] = {.lex_state = 973},
  [331] = {.lex_state = 973},
  [332] = {.lex_state = 973},
  [333] = {.lex_state = 972},
  [334] = {.lex_state = 973},
  [335] = {.lex_state = 973},
  [336] = {.lex_state = 973},
  [337] = {.lex_state = 973},
  [338] = {.lex_state = 973},
  [339] = {.lex_state = 973},
  [340] = {.lex_state = 973},
  [341] = {.lex_state = 973},
  [342] = {.lex_state = 973},
  [343] = {.lex_state = 973},
  [344] = {.lex_state = 972},
  [345] = {.lex_state = 972},
  [346] = {.lex_state = 973},
  [347] = {.lex_state = 972},
  [348] = {.lex_state = 25},
  [349] = {.lex_state = 973},
  [350] = {.lex_state = 973},
  [351] = {.lex_state = 972},
  [352] = {.lex_state = 972},
  [353] = {.lex_state = 973},
  [354] = {.lex_state = 972},
  [355] = {.lex_state = 973},
  [356] = {.lex_state = 972},
  [357] = {.lex_state = 973},
  [358] = {.lex_state = 972},
  [359] = {.lex_state = 973},
  [360] = {.lex_state = 973},
  [361] = {.lex_state = 972},
  [362] = {.lex_state = 973},
  [363] = {.lex_state = 973},
  [364] = {.lex_state = 973},
  [365] = {.lex_state = 973},
  [366] = {.lex_state = 972},
  [367] = {.lex_state = 973},
  [368] = {.lex_state = 972},
  [369] = {.lex_state = 973},
  [370] = {.lex_state = 973},
  [371] = {.lex_state = 973},
  [372] = {.lex_state = 973},
  [373] = {.lex_state = 972},
  [374] = {.lex_state = 973},
  [375] = {.lex_state = 973},
  [376] = {.lex_state = 973},
  [377] = {.lex_state = 972},
  [378] = {.lex_state = 973},
  [379] = {.lex_state = 973},
  [380] = {.lex_state = 972},
  [381] = {.lex_state = 973},
  [382] = {.lex_state = 973},
  [383] = {.lex_state = 973},
  [384] = {.lex_state = 973},
  [385] = {.lex_state = 973},
  [386] = {.lex_state = 973},
  [387] = {.lex_state = 973},
  [388] = {.lex_state = 973},
  [389] = {.lex_state = 973},
  [390] = {.lex_state = 973},
  [391] = {.lex_state = 973},
  [392] = {.lex_state = 973},
  [393] = {.lex_state = 973},
  [394] = {.lex_state = 972},
  [395] = {.lex_state = 972},
  [396] = {.lex_state = 973},
  [397] = {.lex_state = 973},
  [398] = {.lex_state = 973},
  [399] = {.lex_state = 973},
  [400] = {.lex_state = 972},
  [401] = {.lex_state = 973},
  [402] = {.lex_state = 973},
  [403] = {.lex_state = 973},
  [404] = {.lex_state = 972},
  [405] = {.lex_state = 973},
  [406] = {.lex_state = 973},
  [407] = {.lex_state = 972},
  [408] = {.lex_state = 973},
  [409] = {.lex_state = 973},
  [410] = {.lex_state = 973},
  [411] = {.lex_state = 973},
  [412] = {.lex_state = 973},
  [413] = {.lex_state = 973},
  [414] = {.lex_state = 973},
  [415] = {.lex_state = 973},
  [416] = {.lex_state = 973},
  [417] = {.lex_state = 973},
  [418] = {.lex_state = 973},
  [419] = {.lex_state = 973},
  [420] = {.lex_state = 973},
  [421] = {.lex_state = 973},
  [422] = {.lex_state = 973},
  [423] = {.lex_state = 973},
  [424] = {.lex_state = 973},
  [425] = {.lex_state = 973},
  [426] = {.lex_state = 973},
  [427] = {.lex_state = 973},
  [428] = {.lex_state = 973},
  [429] = {.lex_state = 973},
  [430] = {.lex_state = 973},
  [431] = {.lex_state = 973},
  [432] = {.lex_state = 973},
  [433] = {.lex_state = 973},
  [434] = {.lex_state = 973},
  [435] = {.lex_state = 973},
  [436] = {.lex_state = 972},
  [437] = {.lex_state = 972},
  [438] = {.lex_state = 973},
  [439] = {.lex_state = 6},
  [440] = {.lex_state = 973},
  [441] = {.lex_state = 973},
  [442] = {.lex_state = 973},
  [443] = {.lex_state = 973},
  [444] = {.lex_state = 973},
  [445] = {.lex_state = 973},
  [446] = {.lex_state = 973},
  [447] = {.lex_state = 973},
  [448] = {.lex_state = 973},
  [449] = {.lex_state = 973},
  [450] = {.lex_state = 973},
  [451] = {.lex_state = 973},
  [452] = {.lex_state = 973},
  [453] = {.lex_state = 973},
  [454] = {.lex_state = 973},
  [455] = {.lex_state = 973},
  [456] = {.lex_state = 973},
  [457] = {.lex_state = 973},
  [458] = {.lex_state = 973},
  [459] = {.lex_state = 973},
  [460] = {.lex_state = 973},
  [461] = {.lex_state = 973},
  [462] = {.lex_state = 973},
  [463] = {.lex_state = 972},
  [464] = {.lex_state = 6},
  [465] = {.lex_state = 972},
  [466] = {.lex_state = 972},
  [467] = {.lex_state = 972},
  [468] = {.lex_state = 972},
  [469] = {.lex_state = 972},
  [470] = {.lex_state = 973},
  [471] = {.lex_state = 972},
  [472] = {.lex_state = 973},
  [473] = {.lex_state = 973},
  [474] = {.lex_state = 972},
  [475] = {.lex_state = 972},
  [476] = {.lex_state = 973},
  [477] = {.lex_state = 973},
  [478] = {.lex_state = 6},
  [479] = {.lex_state = 972},
  [480] = {.lex_state = 973},
  [481] = {.lex_state = 972},
  [482] = {.lex_state = 972},
  [483] = {.lex_state = 973},
  [484] = {.lex_state = 973},
  [485] = {.lex_state = 973},
  [486] = {.lex_state = 973},
  [487] = {.lex_state = 973},
  [488] = {.lex_state = 973},
  [489] = {.lex_state = 973},
  [490] = {.lex_state = 973},
  [491] = {.lex_state = 973},
  [492] = {.lex_state = 973},
  [493] = {.lex_state = 973},
  [494] = {.lex_state = 973},
  [495] = {.lex_state = 973},
  [496] = {.lex_state = 972},
  [497] = {.lex_state = 973},
  [498] = {.lex_state = 972},
  [499] = {.lex_state = 973},
  [500] = {.lex_state = 973},
  [501] = {.lex_state = 973},
  [502] = {.lex_state = 973},
  [503] = {.lex_state = 973},
  [504] = {.lex_state = 973},
  [505] = {.lex_state = 973},
  [506] = {.lex_state = 973},
  [507] = {.lex_state = 973},
  [508] = {.lex_state = 973},
  [509] = {.lex_state = 973},
  [510] = {.lex_state = 973},
  [511] = {.lex_state = 973},
  [512] = {.lex_state = 973},
  [513] = {.lex_state = 973},
  [514] = {.lex_state = 973},
  [515] = {.lex_state = 973},
  [516] = {.lex_state = 973},
  [517] = {.lex_state = 6},
  [518] = {.lex_state = 973},
  [519] = {.lex_state = 973},
  [520] = {.lex_state = 973},
  [521] = {.lex_state = 973},
  [522] = {.lex_state = 973},
  [523] = {.lex_state = 973},
  [524] = {.lex_state = 973},
  [525] = {.lex_state = 973},
  [526] = {.lex_state = 973},
  [527] = {.lex_state = 973},
  [528] = {.lex_state = 973},
  [529] = {.lex_state = 973},
  [530] = {.lex_state = 973},
  [531] = {.lex_state = 973},
  [532] = {.lex_state = 973},
  [533] = {.lex_state = 972},
  [534] = {.lex_state = 973},
  [535] = {.lex_state = 973},
  [536] = {.lex_state = 973},
  [537] = {.lex_state = 973},
  [538] = {.lex_state = 973},
  [539] = {.lex_state = 973},
  [540] = {.lex_state = 973},
  [541] = {.lex_state = 972},
  [542] = {.lex_state = 972},
  [543] = {.lex_state = 973},
  [544] = {.lex_state = 972},
  [545] = {.lex_state = 972},
  [546] = {.lex_state = 972},
  [547] = {.lex_state = 972},
  [548] = {.lex_state = 972},
  [549] = {.lex_state = 973},
  [550] = {.lex_state = 973},
  [551] = {.lex_state = 972},
  [552] = {.lex_state = 972},
  [553] = {.lex_state = 972},
  [554] = {.lex_state = 973},
  [555] = {.lex_state = 973},
  [556] = {.lex_state = 973},
  [557] = {.lex_state = 973},
  [558] = {.lex_state = 973},
  [559] = {.lex_state = 973},
  [560] = {.lex_state = 973},
  [561] = {.lex_state = 973},
  [562] = {.lex_state = 972},
  [563] = {.lex_state = 973},
  [564] = {.lex_state = 973},
  [565] = {.lex_state = 973},
  [566] = {.lex_state = 973},
  [567] = {.lex_state = 973},
  [568] = {.lex_state = 973},
  [569] = {.lex_state = 973},
  [570] = {.lex_state = 973},
  [571] = {.lex_state = 973},
  [572] = {.lex_state = 973},
  [573] = {.lex_state = 973},
  [574] = {.lex_state = 973},
  [575] = {.lex_state = 973},
  [576] = {.lex_state = 973},
  [577] = {.lex_state = 973},
  [578] = {.lex_state = 973},
  [579] = {.lex_state = 973},
  [580] = {.lex_state = 973},
  [581] = {.lex_state = 973},
  [582] = {.lex_state = 973},
  [583] = {.lex_state = 973},
  [584] = {.lex_state = 973},
  [585] = {.lex_state = 973},
  [586] = {.lex_state = 973},
  [587] = {.lex_state = 973},
  [588] = {.lex_state = 973},
  [589] = {.lex_state = 973},
  [590] = {.lex_state = 973},
  [591] = {.lex_state = 973},
  [592] = {.lex_state = 973},
  [593] = {.lex_state = 973},
  [594] = {.lex_state = 973},
  [595] = {.lex_state = 973},
  [596] = {.lex_state = 973},
  [597] = {.lex_state = 973},
  [598] = {.lex_state = 973},
  [599] = {.lex_state = 973},
  [600] = {.lex_state = 973},
  [601] = {.lex_state = 6},
  [602] = {.lex_state = 973},
  [603] = {.lex_state = 972},
  [604] = {.lex_state = 973},
  [605] = {.lex_state = 973},
  [606] = {.lex_state = 973},
  [607] = {.lex_state = 973},
  [608] = {.lex_state = 973},
  [609] = {.lex_state = 972},
  [610] = {.lex_state = 973},
  [611] = {.lex_state = 973},
  [612] = {.lex_state = 973},
  [613] = {.lex_state = 973},
  [614] = {.lex_state = 973},
  [615] = {.lex_state = 973},
  [616] = {.lex_state = 973},
  [617] = {.lex_state = 973},
  [618] = {.lex_state = 973},
  [619] = {.lex_state = 973},
  [620] = {.lex_state = 973},
  [621] = {.lex_state = 973},
  [622] = {.lex_state = 973},
  [623] = {.lex_state = 973},
  [624] = {.lex_state = 973},
  [625] = {.lex_state = 973},
  [626] = {.lex_state = 973},
  [627] = {.lex_state = 973},
  [628] = {.lex_state = 973},
  [629] = {.lex_state = 973},
  [630] = {.lex_state = 973},
  [631] = {.lex_state = 973},
  [632] = {.lex_state = 973},
  [633] = {.lex_state = 973},
  [634] = {.lex_state = 973},
  [635] = {.lex_state = 973},
  [636] = {.lex_state = 973},
  [637] = {.lex_state = 973},
  [638] = {.lex_state = 973},
  [639] = {.lex_state = 973},
  [640] = {.lex_state = 973},
  [641] = {.lex_state = 973},
  [642] = {.lex_state = 973},
  [643] = {.lex_state = 973},
  [644] = {.lex_state = 973},
  [645] = {.lex_state = 973},
  [646] = {.lex_state = 973},
  [647] = {.lex_state = 973},
  [648] = {.lex_state = 973},
  [649] = {.lex_state = 973},
  [650] = {.lex_state = 973},
  [651] = {.lex_state = 973},
  [652] = {.lex_state = 973},
  [653] = {.lex_state = 973},
  [654] = {.lex_state = 973},
  [655] = {.lex_state = 973},
  [656] = {.lex_state = 973},
  [657] = {.lex_state = 973},
  [658] = {.lex_state = 973},
  [659] = {.lex_state = 973},
  [660] = {.lex_state = 973},
  [661] = {.lex_state = 973},
  [662] = {.lex_state = 973},
  [663] = {.lex_state = 973},
  [664] = {.lex_state = 973},
  [665] = {.lex_state = 973},
  [666] = {.lex_state = 973},
  [667] = {.lex_state = 973},
  [668] = {.lex_state = 973},
  [669] = {.lex_state = 973},
  [670] = {.lex_state = 973},
  [671] = {.lex_state = 973},
  [672] = {.lex_state = 973},
  [673] = {.lex_state = 973},
  [674] = {.lex_state = 973},
  [675] = {.lex_state = 973},
  [676] = {.lex_state = 973},
  [677] = {.lex_state = 973},
  [678] = {.lex_state = 973},
  [679] = {.lex_state = 973},
  [680] = {.lex_state = 973},
  [681] = {.lex_state = 973},
  [682] = {.lex_state = 973},
  [683] = {.lex_state = 973},
  [684] = {.lex_state = 973},
  [685] = {.lex_state = 973},
  [686] = {.lex_state = 973},
  [687] = {.lex_state = 973},
  [688] = {.lex_state = 973},
  [689] = {.lex_state = 973},
  [690] = {.lex_state = 973},
  [691] = {.lex_state = 973},
  [692] = {.lex_state = 973},
  [693] = {.lex_state = 973},
  [694] = {.lex_state = 973},
  [695] = {.lex_state = 973},
  [696] = {.lex_state = 973},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 6},
  [699] = {.lex_state = 6},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 25},
  [702] = {.lex_state = 972},
  [703] = {.lex_state = 25},
  [704] = {.lex_state = 972},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 6},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 973},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 972},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 972},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 972},
  [717] = {.lex_state = 972},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 24},
  [720] = {.lex_state = 971},
  [721] = {.lex_state = 24},
  [722] = {.lex_state = 6},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 6},
  [725] = {.lex_state = 24},
  [726] = {.lex_state = 25},
  [727] = {.lex_state = 971},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 6},
  [730] = {.lex_state = 971},
  [731] = {.lex_state = 25},
  [732] = {.lex_state = 6},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 6},
  [737] = {.lex_state = 24},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 24},
  [740] = {.lex_state = 6},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 6},
  [743] = {.lex_state = 6},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 6},
  [746] = {.lex_state = 6},
  [747] = {.lex_state = 6},
  [748] = {.lex_state = 6},
  [749] = {.lex_state = 6},
  [750] = {.lex_state = 6},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 6},
  [754] = {.lex_state = 6},
  [755] = {.lex_state = 6},
  [756] = {.lex_state = 6},
  [757] = {.lex_state = 6},
  [758] = {.lex_state = 6},
  [759] = {.lex_state = 6},
  [760] = {.lex_state = 6},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 6},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 0},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 0},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 0},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 0},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 0},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 0},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 6},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 0},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 0},
  [872] = {.lex_state = 0},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 0},
  [877] = {.lex_state = 0},
  [878] = {.lex_state = 0},
  [879] = {.lex_state = 0},
  [880] = {.lex_state = 0},
  [881] = {.lex_state = 0},
  [882] = {.lex_state = 0},
  [883] = {.lex_state = 0},
  [884] = {.lex_state = 0},
  [885] = {.lex_state = 0},
  [886] = {.lex_state = 0},
  [887] = {.lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN_STAR_DASH_STAR_DASHtuareg_DASH_STAR_DASH_STAR_RPAREN] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_multiline_string] = ACTIONS(1),
    [sym_named_variable] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_vendored_dirs] = ACTIONS(1),
    [anon_sym_ocamllex] = ACTIONS(1),
    [anon_sym_ocamlyacc] = ACTIONS(1),
    [anon_sym_include_subdirs] = ACTIONS(1),
    [anon_sym_data_only_dirs] = ACTIONS(1),
    [anon_sym_documentation] = ACTIONS(1),
    [anon_sym_modules] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_action] = ACTIONS(1),
    [anon_sym_subdir] = ACTIONS(1),
    [anon_sym_executable] = ACTIONS(1),
    [anon_sym_executables] = ACTIONS(1),
    [anon_sym_test] = ACTIONS(1),
    [anon_sym_tests] = ACTIONS(1),
    [anon_sym_build_if] = ACTIONS(1),
    [anon_sym_libraries] = ACTIONS(1),
    [anon_sym_enabled_if] = ACTIONS(1),
    [anon_sym_public_name] = ACTIONS(1),
    [anon_sym_re_export] = ACTIONS(1),
    [anon_sym_select] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(1),
    [anon_sym_mode] = ACTIONS(1),
    [anon_sym_target] = ACTIONS(1),
    [anon_sym_targets] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_fallback] = ACTIONS(1),
    [anon_sym_locks] = ACTIONS(1),
    [anon_sym_deps] = ACTIONS(1),
    [anon_sym_universe] = ACTIONS(1),
    [anon_sym_sandbox] = ACTIONS(1),
    [anon_sym_alias_rec] = ACTIONS(1),
    [anon_sym_source_tree] = ACTIONS(1),
    [anon_sym_glob_files] = ACTIONS(1),
    [anon_sym_dir] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_promote] = ACTIONS(1),
    [anon_sym_promote_DASHinto] = ACTIONS(1),
    [anon_sym_only] = ACTIONS(1),
    [anon_sym_into] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_bash] = ACTIONS(1),
    [anon_sym_cat] = ACTIONS(1),
    [anon_sym_cmp] = ACTIONS(1),
    [anon_sym_chdir] = ACTIONS(1),
    [anon_sym_copy] = ACTIONS(1),
    [anon_sym_copy_POUND] = ACTIONS(1),
    [anon_sym_diff] = ACTIONS(1),
    [anon_sym_diff_QMARK] = ACTIONS(1),
    [anon_sym_echo] = ACTIONS(1),
    [anon_sym_ignore_DASHstdout] = ACTIONS(1),
    [anon_sym_no_DASHinfer] = ACTIONS(1),
    [anon_sym_pipe_DASHoutputs] = ACTIONS(1),
    [anon_sym_progn] = ACTIONS(1),
    [anon_sym_run] = ACTIONS(1),
    [anon_sym_setenv] = ACTIONS(1),
    [anon_sym_system] = ACTIONS(1),
    [anon_sym_with_DASHaccepted_DASHexit_DASHcodes] = ACTIONS(1),
    [anon_sym_with_DASHoutputs_DASHto] = ACTIONS(1),
    [anon_sym_with_DASHstderr_DASHto] = ACTIONS(1),
    [anon_sym_with_DASHstdout_DASHto] = ACTIONS(1),
    [anon_sym_write_DASHfile] = ACTIONS(1),
    [anon_sym_library] = ACTIONS(1),
    [anon_sym_synopsis] = ACTIONS(1),
    [anon_sym_instrumentation] = ACTIONS(1),
    [anon_sym_wrapped] = ACTIONS(1),
    [anon_sym_transition] = ACTIONS(1),
    [anon_sym_kind] = ACTIONS(1),
    [anon_sym_ppx_DOTdriver] = ACTIONS(1),
    [anon_sym_toplevel] = ACTIONS(1),
    [anon_sym_install] = ACTIONS(1),
    [anon_sym_section] = ACTIONS(1),
    [anon_sym_files] = ACTIONS(1),
    [anon_sym_cram] = ACTIONS(1),
    [anon_sym_applies_to] = ACTIONS(1),
    [anon_sym_env] = ACTIONS(1),
    [anon_sym_lang] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [anon_sym_generate_opam_files] = ACTIONS(1),
    [anon_sym_source] = ACTIONS(1),
    [anon_sym_github] = ACTIONS(1),
    [anon_sym_git] = ACTIONS(1),
    [anon_sym_uri] = ACTIONS(1),
    [anon_sym_authors] = ACTIONS(1),
    [anon_sym_maintainers] = ACTIONS(1),
    [anon_sym_license] = ACTIONS(1),
    [anon_sym_homepage] = ACTIONS(1),
    [anon_sym_bug_reports] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_formatting] = ACTIONS(1),
    [anon_sym_enabled_for] = ACTIONS(1),
    [anon_sym_dialect] = ACTIONS(1),
    [anon_sym_explicit_js_mode] = ACTIONS(1),
    [anon_sym_description] = ACTIONS(1),
    [anon_sym_depends] = ACTIONS(1),
    [anon_sym_conflicts] = ACTIONS(1),
    [anon_sym_depopts] = ACTIONS(1),
    [anon_sym_tags] = ACTIONS(1),
    [anon_sym_deprecated_package_names] = ACTIONS(1),
    [anon_sym_sites] = ACTIONS(1),
    [anon_sym_allow_empty] = ACTIONS(1),
    [anon_sym_context] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_opam] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_profile] = ACTIONS(1),
    [anon_sym_toolchain] = ACTIONS(1),
    [anon_sym_host] = ACTIONS(1),
    [anon_sym_merlin] = ACTIONS(1),
    [anon_sym_generate_merlin_rules] = ACTIONS(1),
    [anon_sym_disable_dynamically_linked_foreign_archives] = ACTIONS(1),
    [anon_sym_root] = ACTIONS(1),
    [anon_sym_lock_dir] = ACTIONS(1),
    [anon_sym_paths] = ACTIONS(1),
    [anon_sym_fdo] = ACTIONS(1),
    [anon_sym_menhir] = ACTIONS(1),
    [anon_sym_merge_into] = ACTIONS(1),
    [anon_sym_flags] = ACTIONS(1),
    [anon_sym_infer] = ACTIONS(1),
    [anon_sym_explain] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_foreign_library] = ACTIONS(1),
    [anon_sym_archive_name] = ACTIONS(1),
    [anon_sym_plugin] = ACTIONS(1),
    [anon_sym_optional] = ACTIONS(1),
    [anon_sym_site] = ACTIONS(1),
    [anon_sym_mdx] = ACTIONS(1),
    [anon_sym_preludes] = ACTIONS(1),
    [anon_sym_coq_DOTtheory] = ACTIONS(1),
    [anon_sym_theories] = ACTIONS(1),
    [anon_sym_deprecated_library_name] = ACTIONS(1),
    [anon_sym_ignored_subdirs] = ACTIONS(1),
    [anon_sym_pin] = ACTIONS(1),
    [anon_sym_warnings] = ACTIONS(1),
    [anon_sym_accept_alternative_dune_file_name] = ACTIONS(1),
    [anon_sym_executables_implicit_empty_intf] = ACTIONS(1),
    [anon_sym_expand_aliases_in_sandbox] = ACTIONS(1),
    [anon_sym_implicit_transitive_deps] = ACTIONS(1),
    [anon_sym_map_workspace_root] = ACTIONS(1),
    [anon_sym_subst] = ACTIONS(1),
    [anon_sym_use_standard_c_and_cxx_flags] = ACTIONS(1),
    [anon_sym_wrapped_executables] = ACTIONS(1),
    [anon_sym_maintenance_intent] = ACTIONS(1),
    [anon_sym_config] = ACTIONS(1),
    [anon_sym_repository] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(881),
    [sym_ocaml_syntax] = STATE(878),
    [sym_sexp] = STATE(337),
    [sym__atom_or_qs] = STATE(274),
    [sym_quoted_string] = STATE(274),
    [sym__list] = STATE(274),
    [sym_stanza] = STATE(7),
    [sym__stanza_alias] = STATE(343),
    [sym__stanza_subdir] = STATE(349),
    [sym__stanza_executable] = STATE(363),
    [sym__stanza_executables] = STATE(364),
    [sym__stanza_test] = STATE(382),
    [sym__stanza_tests] = STATE(402),
    [sym__stanza_rule] = STATE(403),
    [sym__stanza_library] = STATE(409),
    [sym__stanza_toplevel] = STATE(411),
    [sym__stanza_install] = STATE(414),
    [sym__stanza_cram] = STATE(415),
    [sym__stanza_env] = STATE(337),
    [sym__stanza_lang] = STATE(416),
    [sym__stanza_name] = STATE(417),
    [sym__stanza_version] = STATE(418),
    [sym__stanza_generate_opam_files] = STATE(419),
    [sym__stanza_source] = STATE(420),
    [sym__stanza_authors] = STATE(421),
    [sym__stanza_maintainers] = STATE(424),
    [sym__stanza_license] = STATE(425),
    [sym__stanza_homepage] = STATE(426),
    [sym__stanza_documentation_url] = STATE(427),
    [sym__stanza_bug_reports] = STATE(428),
    [sym__stanza_using] = STATE(430),
    [sym__stanza_formatting] = STATE(337),
    [sym__stanza_dialect] = STATE(337),
    [sym__stanza_explicit_js_mode] = STATE(337),
    [sym__stanza_package] = STATE(433),
    [sym__stanza_context] = STATE(434),
    [sym__stanza_profile] = STATE(438),
    [sym__stanza_copy_files] = STATE(440),
    [sym__stanza_menhir] = STATE(445),
    [sym__stanza_include] = STATE(337),
    [sym__stanza_foreign_library] = STATE(446),
    [sym__stanza_plugin] = STATE(449),
    [sym__stanza_mdx] = STATE(453),
    [sym__stanza_coq_theory] = STATE(459),
    [sym__stanza_deprecated_library_name] = STATE(460),
    [sym__stanza_ignored_subdirs] = STATE(337),
    [sym__stanza_pin] = STATE(337),
    [sym__stanza_warnings] = STATE(337),
    [sym__stanza_accept_alternative_dune_file_name] = STATE(337),
    [sym__stanza_executables_implicit_empty_intf] = STATE(337),
    [sym__stanza_expand_aliases_in_sandbox] = STATE(337),
    [sym__stanza_implicit_transitive_deps] = STATE(337),
    [sym__stanza_map_workspace_root] = STATE(337),
    [sym__stanza_opam_file_location] = STATE(337),
    [sym__stanza_subst] = STATE(337),
    [sym__stanza_use_standard_c_and_cxx_flags] = STATE(337),
    [sym__stanza_wrapped_executables] = STATE(337),
    [sym__stanza_maintenance_intent] = STATE(337),
    [sym__stanza_config] = STATE(337),
    [sym__stanza_lock_dir] = STATE(462),
    [sym__stanza_repository] = STATE(337),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LPAREN_STAR_DASH_STAR_DASHtuareg_DASH_STAR_DASH_STAR_RPAREN] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_multiline_string] = ACTIONS(11),
    [sym__atom] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_sexp] = STATE(133),
    [sym__atom_or_qs] = STATE(633),
    [sym_quoted_string] = STATE(633),
    [sym__list] = STATE(633),
    [aux_sym_sexps1_repeat1] = STATE(133),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_multiline_string] = ACTIONS(17),
    [sym__atom] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_vendored_dirs] = ACTIONS(25),
    [anon_sym_ocamllex] = ACTIONS(27),
    [anon_sym_ocamlyacc] = ACTIONS(27),
    [anon_sym_include_subdirs] = ACTIONS(25),
    [anon_sym_data_only_dirs] = ACTIONS(29),
    [anon_sym_dirs] = ACTIONS(25),
    [anon_sym_documentation] = ACTIONS(31),
    [anon_sym_alias] = ACTIONS(33),
    [anon_sym_name] = ACTIONS(35),
    [anon_sym_subdir] = ACTIONS(37),
    [anon_sym_executable] = ACTIONS(39),
    [anon_sym_executables] = ACTIONS(41),
    [anon_sym_test] = ACTIONS(43),
    [anon_sym_tests] = ACTIONS(45),
    [anon_sym_rule] = ACTIONS(47),
    [anon_sym_package] = ACTIONS(49),
    [anon_sym_library] = ACTIONS(51),
    [anon_sym_toplevel] = ACTIONS(53),
    [anon_sym_install] = ACTIONS(55),
    [anon_sym_cram] = ACTIONS(57),
    [anon_sym_env] = ACTIONS(59),
    [anon_sym_lang] = ACTIONS(61),
    [anon_sym_version] = ACTIONS(63),
    [anon_sym_generate_opam_files] = ACTIONS(65),
    [anon_sym_source] = ACTIONS(67),
    [anon_sym_authors] = ACTIONS(69),
    [anon_sym_maintainers] = ACTIONS(71),
    [anon_sym_license] = ACTIONS(73),
    [anon_sym_homepage] = ACTIONS(75),
    [anon_sym_bug_reports] = ACTIONS(77),
    [anon_sym_using] = ACTIONS(79),
    [anon_sym_formatting] = ACTIONS(81),
    [anon_sym_dialect] = ACTIONS(83),
    [anon_sym_explicit_js_mode] = ACTIONS(85),
    [anon_sym_context] = ACTIONS(87),
    [anon_sym_profile] = ACTIONS(89),
    [anon_sym_lock_dir] = ACTIONS(91),
    [anon_sym_copy_files] = ACTIONS(93),
    [anon_sym_menhir] = ACTIONS(95),
    [anon_sym_include] = ACTIONS(97),
    [anon_sym_foreign_library] = ACTIONS(99),
    [anon_sym_plugin] = ACTIONS(101),
    [anon_sym_mdx] = ACTIONS(103),
    [anon_sym_coq_DOTtheory] = ACTIONS(105),
    [anon_sym_deprecated_library_name] = ACTIONS(107),
    [anon_sym_ignored_subdirs] = ACTIONS(109),
    [anon_sym_pin] = ACTIONS(111),
    [anon_sym_warnings] = ACTIONS(113),
    [anon_sym_accept_alternative_dune_file_name] = ACTIONS(115),
    [anon_sym_executables_implicit_empty_intf] = ACTIONS(117),
    [anon_sym_expand_aliases_in_sandbox] = ACTIONS(119),
    [anon_sym_implicit_transitive_deps] = ACTIONS(121),
    [anon_sym_map_workspace_root] = ACTIONS(123),
    [anon_sym_opam_file_location] = ACTIONS(125),
    [anon_sym_subst] = ACTIONS(127),
    [anon_sym_use_standard_c_and_cxx_flags] = ACTIONS(129),
    [anon_sym_wrapped_executables] = ACTIONS(131),
    [anon_sym_maintenance_intent] = ACTIONS(133),
    [anon_sym_config] = ACTIONS(135),
    [anon_sym_repository] = ACTIONS(137),
  },
  [3] = {
    [sym_sexp] = STATE(112),
    [sym__atom_or_qs] = STATE(633),
    [sym_quoted_string] = STATE(633),
    [sym__list] = STATE(633),
    [aux_sym_sexps1_repeat1] = STATE(112),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_multiline_string] = ACTIONS(17),
    [sym__atom] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
    [anon_sym_vendored_dirs] = ACTIONS(141),
    [anon_sym_ocamllex] = ACTIONS(143),
    [anon_sym_ocamlyacc] = ACTIONS(143),
    [anon_sym_include_subdirs] = ACTIONS(141),
    [anon_sym_data_only_dirs] = ACTIONS(145),
    [anon_sym_dirs] = ACTIONS(141),
    [anon_sym_documentation] = ACTIONS(147),
    [anon_sym_alias] = ACTIONS(149),
    [anon_sym_name] = ACTIONS(151),
    [anon_sym_subdir] = ACTIONS(153),
    [anon_sym_executable] = ACTIONS(155),
    [anon_sym_executables] = ACTIONS(157),
    [anon_sym_test] = ACTIONS(159),
    [anon_sym_tests] = ACTIONS(161),
    [anon_sym_rule] = ACTIONS(163),
    [anon_sym_package] = ACTIONS(165),
    [anon_sym_library] = ACTIONS(167),
    [anon_sym_toplevel] = ACTIONS(169),
    [anon_sym_install] = ACTIONS(171),
    [anon_sym_cram] = ACTIONS(173),
    [anon_sym_env] = ACTIONS(175),
    [anon_sym_lang] = ACTIONS(177),
    [anon_sym_version] = ACTIONS(179),
    [anon_sym_generate_opam_files] = ACTIONS(181),
    [anon_sym_source] = ACTIONS(183),
    [anon_sym_authors] = ACTIONS(185),
    [anon_sym_maintainers] = ACTIONS(187),
    [anon_sym_license] = ACTIONS(189),
    [anon_sym_homepage] = ACTIONS(191),
    [anon_sym_bug_reports] = ACTIONS(193),
    [anon_sym_using] = ACTIONS(195),
    [anon_sym_formatting] = ACTIONS(197),
    [anon_sym_dialect] = ACTIONS(199),
    [anon_sym_explicit_js_mode] = ACTIONS(201),
    [anon_sym_context] = ACTIONS(203),
    [anon_sym_profile] = ACTIONS(205),
    [anon_sym_lock_dir] = ACTIONS(207),
    [anon_sym_copy_files] = ACTIONS(209),
    [anon_sym_menhir] = ACTIONS(211),
    [anon_sym_include] = ACTIONS(213),
    [anon_sym_foreign_library] = ACTIONS(215),
    [anon_sym_plugin] = ACTIONS(217),
    [anon_sym_mdx] = ACTIONS(219),
    [anon_sym_coq_DOTtheory] = ACTIONS(221),
    [anon_sym_deprecated_library_name] = ACTIONS(223),
    [anon_sym_ignored_subdirs] = ACTIONS(225),
    [anon_sym_pin] = ACTIONS(227),
    [anon_sym_warnings] = ACTIONS(229),
    [anon_sym_accept_alternative_dune_file_name] = ACTIONS(231),
    [anon_sym_executables_implicit_empty_intf] = ACTIONS(233),
    [anon_sym_expand_aliases_in_sandbox] = ACTIONS(235),
    [anon_sym_implicit_transitive_deps] = ACTIONS(237),
    [anon_sym_map_workspace_root] = ACTIONS(239),
    [anon_sym_opam_file_location] = ACTIONS(241),
    [anon_sym_subst] = ACTIONS(243),
    [anon_sym_use_standard_c_and_cxx_flags] = ACTIONS(245),
    [anon_sym_wrapped_executables] = ACTIONS(247),
    [anon_sym_maintenance_intent] = ACTIONS(249),
    [anon_sym_config] = ACTIONS(251),
    [anon_sym_repository] = ACTIONS(253),
  },
  [4] = {
    [sym_sexp] = STATE(632),
    [sym__atom_or_qs] = STATE(633),
    [sym_quoted_string] = STATE(633),
    [sym__list] = STATE(633),
    [sym_stanza] = STATE(4),
    [sym__stanza_alias] = STATE(634),
    [sym__stanza_subdir] = STATE(635),
    [sym__stanza_executable] = STATE(636),
    [sym__stanza_executables] = STATE(637),
    [sym__stanza_test] = STATE(638),
    [sym__stanza_tests] = STATE(639),
    [sym__stanza_rule] = STATE(640),
    [sym__stanza_library] = STATE(641),
    [sym__stanza_toplevel] = STATE(642),
    [sym__stanza_install] = STATE(643),
    [sym__stanza_cram] = STATE(644),
    [sym__stanza_env] = STATE(632),
    [sym__stanza_lang] = STATE(645),
    [sym__stanza_name] = STATE(646),
    [sym__stanza_version] = STATE(647),
    [sym__stanza_generate_opam_files] = STATE(648),
    [sym__stanza_source] = STATE(649),
    [sym__stanza_authors] = STATE(650),
    [sym__stanza_maintainers] = STATE(651),
    [sym__stanza_license] = STATE(652),
    [sym__stanza_homepage] = STATE(653),
    [sym__stanza_documentation_url] = STATE(654),
    [sym__stanza_bug_reports] = STATE(655),
    [sym__stanza_using] = STATE(656),
    [sym__stanza_formatting] = STATE(632),
    [sym__stanza_dialect] = STATE(632),
    [sym__stanza_explicit_js_mode] = STATE(632),
    [sym__stanza_package] = STATE(657),
    [sym__stanza_context] = STATE(658),
    [sym__stanza_profile] = STATE(659),
    [sym__stanza_copy_files] = STATE(660),
    [sym__stanza_menhir] = STATE(661),
    [sym__stanza_include] = STATE(632),
    [sym__stanza_foreign_library] = STATE(662),
    [sym__stanza_plugin] = STATE(663),
    [sym__stanza_mdx] = STATE(664),
    [sym__stanza_coq_theory] = STATE(665),
    [sym__stanza_deprecated_library_name] = STATE(666),
    [sym__stanza_ignored_subdirs] = STATE(632),
    [sym__stanza_pin] = STATE(632),
    [sym__stanza_warnings] = STATE(632),
    [sym__stanza_accept_alternative_dune_file_name] = STATE(632),
    [sym__stanza_executables_implicit_empty_intf] = STATE(632),
    [sym__stanza_expand_aliases_in_sandbox] = STATE(632),
    [sym__stanza_implicit_transitive_deps] = STATE(632),
    [sym__stanza_map_workspace_root] = STATE(632),
    [sym__stanza_opam_file_location] = STATE(632),
    [sym__stanza_subst] = STATE(632),
    [sym__stanza_use_standard_c_and_cxx_flags] = STATE(632),
    [sym__stanza_wrapped_executables] = STATE(632),
    [sym__stanza_maintenance_intent] = STATE(632),
    [sym__stanza_config] = STATE(632),
    [sym__stanza_lock_dir] = STATE(667),
    [sym__stanza_repository] = STATE(632),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_DQUOTE] = ACTIONS(255),
    [sym_multiline_string] = ACTIONS(258),
    [sym__atom] = ACTIONS(258),
    [anon_sym_LPAREN] = ACTIONS(261),
    [anon_sym_RPAREN] = ACTIONS(264),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_sexp] = STATE(337),
    [sym__atom_or_qs] = STATE(274),
    [sym_quoted_string] = STATE(274),
    [sym__list] = STATE(274),
    [sym_stanza] = STATE(5),
    [sym__stanza_alias] = STATE(343),
    [sym__stanza_subdir] = STATE(349),
    [sym__stanza_executable] = STATE(363),
    [sym__stanza_executables] = STATE(364),
    [sym__stanza_test] = STATE(382),
    [sym__stanza_tests] = STATE(402),
    [sym__stanza_rule] = STATE(403),
    [sym__stanza_library] = STATE(409),
    [sym__stanza_toplevel] = STATE(411),
    [sym__stanza_install] = STATE(414),
    [sym__stanza_cram] = STATE(415),
    [sym__stanza_env] = STATE(337),
    [sym__stanza_lang] = STATE(416),
    [sym__stanza_name] = STATE(417),
    [sym__stanza_version] = STATE(418),
    [sym__stanza_generate_opam_files] = STATE(419),
    [sym__stanza_source] = STATE(420),
    [sym__stanza_authors] = STATE(421),
    [sym__stanza_maintainers] = STATE(424),
    [sym__stanza_license] = STATE(425),
    [sym__stanza_homepage] = STATE(426),
    [sym__stanza_documentation_url] = STATE(427),
    [sym__stanza_bug_reports] = STATE(428),
    [sym__stanza_using] = STATE(430),
    [sym__stanza_formatting] = STATE(337),
    [sym__stanza_dialect] = STATE(337),
    [sym__stanza_explicit_js_mode] = STATE(337),
    [sym__stanza_package] = STATE(433),
    [sym__stanza_context] = STATE(434),
    [sym__stanza_profile] = STATE(438),
    [sym__stanza_copy_files] = STATE(440),
    [sym__stanza_menhir] = STATE(445),
    [sym__stanza_include] = STATE(337),
    [sym__stanza_foreign_library] = STATE(446),
    [sym__stanza_plugin] = STATE(449),
    [sym__stanza_mdx] = STATE(453),
    [sym__stanza_coq_theory] = STATE(459),
    [sym__stanza_deprecated_library_name] = STATE(460),
    [sym__stanza_ignored_subdirs] = STATE(337),
    [sym__stanza_pin] = STATE(337),
    [sym__stanza_warnings] = STATE(337),
    [sym__stanza_accept_alternative_dune_file_name] = STATE(337),
    [sym__stanza_executables_implicit_empty_intf] = STATE(337),
    [sym__stanza_expand_aliases_in_sandbox] = STATE(337),
    [sym__stanza_implicit_transitive_deps] = STATE(337),
    [sym__stanza_map_workspace_root] = STATE(337),
    [sym__stanza_opam_file_location] = STATE(337),
    [sym__stanza_subst] = STATE(337),
    [sym__stanza_use_standard_c_and_cxx_flags] = STATE(337),
    [sym__stanza_wrapped_executables] = STATE(337),
    [sym__stanza_maintenance_intent] = STATE(337),
    [sym__stanza_config] = STATE(337),
    [sym__stanza_lock_dir] = STATE(462),
    [sym__stanza_repository] = STATE(337),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(264),
    [anon_sym_DQUOTE] = ACTIONS(266),
    [sym_multiline_string] = ACTIONS(269),
    [sym__atom] = ACTIONS(269),
    [anon_sym_LPAREN] = ACTIONS(272),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_sexp] = STATE(632),
    [sym__atom_or_qs] = STATE(633),
    [sym_quoted_string] = STATE(633),
    [sym__list] = STATE(633),
    [sym_stanza] = STATE(4),
    [sym__stanza_alias] = STATE(634),
    [sym__stanza_subdir] = STATE(635),
    [sym__stanza_executable] = STATE(636),
    [sym__stanza_executables] = STATE(637),
    [sym__stanza_test] = STATE(638),
    [sym__stanza_tests] = STATE(639),
    [sym__stanza_rule] = STATE(640),
    [sym__stanza_library] = STATE(641),
    [sym__stanza_toplevel] = STATE(642),
    [sym__stanza_install] = STATE(643),
    [sym__stanza_cram] = STATE(644),
    [sym__stanza_env] = STATE(632),
    [sym__stanza_lang] = STATE(645),
    [sym__stanza_name] = STATE(646),
    [sym__stanza_version] = STATE(647),
    [sym__stanza_generate_opam_files] = STATE(648),
    [sym__stanza_source] = STATE(649),
    [sym__stanza_authors] = STATE(650),
    [sym__stanza_maintainers] = STATE(651),
    [sym__stanza_license] = STATE(652),
    [sym__stanza_homepage] = STATE(653),
    [sym__stanza_documentation_url] = STATE(654),
    [sym__stanza_bug_reports] = STATE(655),
    [sym__stanza_using] = STATE(656),
    [sym__stanza_formatting] = STATE(632),
    [sym__stanza_dialect] = STATE(632),
    [sym__stanza_explicit_js_mode] = STATE(632),
    [sym__stanza_package] = STATE(657),
    [sym__stanza_context] = STATE(658),
    [sym__stanza_profile] = STATE(659),
    [sym__stanza_copy_files] = STATE(660),
    [sym__stanza_menhir] = STATE(661),
    [sym__stanza_include] = STATE(632),
    [sym__stanza_foreign_library] = STATE(662),
    [sym__stanza_plugin] = STATE(663),
    [sym__stanza_mdx] = STATE(664),
    [sym__stanza_coq_theory] = STATE(665),
    [sym__stanza_deprecated_library_name] = STATE(666),
    [sym__stanza_ignored_subdirs] = STATE(632),
    [sym__stanza_pin] = STATE(632),
    [sym__stanza_warnings] = STATE(632),
    [sym__stanza_accept_alternative_dune_file_name] = STATE(632),
    [sym__stanza_executables_implicit_empty_intf] = STATE(632),
    [sym__stanza_expand_aliases_in_sandbox] = STATE(632),
    [sym__stanza_implicit_transitive_deps] = STATE(632),
    [sym__stanza_map_workspace_root] = STATE(632),
    [sym__stanza_opam_file_location] = STATE(632),
    [sym__stanza_subst] = STATE(632),
    [sym__stanza_use_standard_c_and_cxx_flags] = STATE(632),
    [sym__stanza_wrapped_executables] = STATE(632),
    [sym__stanza_maintenance_intent] = STATE(632),
    [sym__stanza_config] = STATE(632),
    [sym__stanza_lock_dir] = STATE(667),
    [sym__stanza_repository] = STATE(632),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_multiline_string] = ACTIONS(17),
    [sym__atom] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(275),
    [anon_sym_RPAREN] = ACTIONS(277),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_sexp] = STATE(337),
    [sym__atom_or_qs] = STATE(274),
    [sym_quoted_string] = STATE(274),
    [sym__list] = STATE(274),
    [sym_stanza] = STATE(5),
    [sym__stanza_alias] = STATE(343),
    [sym__stanza_subdir] = STATE(349),
    [sym__stanza_executable] = STATE(363),
    [sym__stanza_executables] = STATE(364),
    [sym__stanza_test] = STATE(382),
    [sym__stanza_tests] = STATE(402),
    [sym__stanza_rule] = STATE(403),
    [sym__stanza_library] = STATE(409),
    [sym__stanza_toplevel] = STATE(411),
    [sym__stanza_install] = STATE(414),
    [sym__stanza_cram] = STATE(415),
    [sym__stanza_env] = STATE(337),
    [sym__stanza_lang] = STATE(416),
    [sym__stanza_name] = STATE(417),
    [sym__stanza_version] = STATE(418),
    [sym__stanza_generate_opam_files] = STATE(419),
    [sym__stanza_source] = STATE(420),
    [sym__stanza_authors] = STATE(421),
    [sym__stanza_maintainers] = STATE(424),
    [sym__stanza_license] = STATE(425),
    [sym__stanza_homepage] = STATE(426),
    [sym__stanza_documentation_url] = STATE(427),
    [sym__stanza_bug_reports] = STATE(428),
    [sym__stanza_using] = STATE(430),
    [sym__stanza_formatting] = STATE(337),
    [sym__stanza_dialect] = STATE(337),
    [sym__stanza_explicit_js_mode] = STATE(337),
    [sym__stanza_package] = STATE(433),
    [sym__stanza_context] = STATE(434),
    [sym__stanza_profile] = STATE(438),
    [sym__stanza_copy_files] = STATE(440),
    [sym__stanza_menhir] = STATE(445),
    [sym__stanza_include] = STATE(337),
    [sym__stanza_foreign_library] = STATE(446),
    [sym__stanza_plugin] = STATE(449),
    [sym__stanza_mdx] = STATE(453),
    [sym__stanza_coq_theory] = STATE(459),
    [sym__stanza_deprecated_library_name] = STATE(460),
    [sym__stanza_ignored_subdirs] = STATE(337),
    [sym__stanza_pin] = STATE(337),
    [sym__stanza_warnings] = STATE(337),
    [sym__stanza_accept_alternative_dune_file_name] = STATE(337),
    [sym__stanza_executables_implicit_empty_intf] = STATE(337),
    [sym__stanza_expand_aliases_in_sandbox] = STATE(337),
    [sym__stanza_implicit_transitive_deps] = STATE(337),
    [sym__stanza_map_workspace_root] = STATE(337),
    [sym__stanza_opam_file_location] = STATE(337),
    [sym__stanza_subst] = STATE(337),
    [sym__stanza_use_standard_c_and_cxx_flags] = STATE(337),
    [sym__stanza_wrapped_executables] = STATE(337),
    [sym__stanza_maintenance_intent] = STATE(337),
    [sym__stanza_config] = STATE(337),
    [sym__stanza_lock_dir] = STATE(462),
    [sym__stanza_repository] = STATE(337),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(279),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_multiline_string] = ACTIONS(11),
    [sym__atom] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(281),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_sexp] = STATE(632),
    [sym__atom_or_qs] = STATE(633),
    [sym_quoted_string] = STATE(633),
    [sym__list] = STATE(633),
    [sym_stanza] = STATE(4),
    [sym__stanza_alias] = STATE(634),
    [sym__stanza_subdir] = STATE(635),
    [sym__stanza_executable] = STATE(636),
    [sym__stanza_executables] = STATE(637),
    [sym__stanza_test] = STATE(638),
    [sym__stanza_tests] = STATE(639),
    [sym__stanza_rule] = STATE(640),
    [sym__stanza_library] = STATE(641),
    [sym__stanza_toplevel] = STATE(642),
    [sym__stanza_install] = STATE(643),
    [sym__stanza_cram] = STATE(644),
    [sym__stanza_env] = STATE(632),
    [sym__stanza_lang] = STATE(645),
    [sym__stanza_name] = STATE(646),
    [sym__stanza_version] = STATE(647),
    [sym__stanza_generate_opam_files] = STATE(648),
    [sym__stanza_source] = STATE(649),
    [sym__stanza_authors] = STATE(650),
    [sym__stanza_maintainers] = STATE(651),
    [sym__stanza_license] = STATE(652),
    [sym__stanza_homepage] = STATE(653),
    [sym__stanza_documentation_url] = STATE(654),
    [sym__stanza_bug_reports] = STATE(655),
    [sym__stanza_using] = STATE(656),
    [sym__stanza_formatting] = STATE(632),
    [sym__stanza_dialect] = STATE(632),
    [sym__stanza_explicit_js_mode] = STATE(632),
    [sym__stanza_package] = STATE(657),
    [sym__stanza_context] = STATE(658),
    [sym__stanza_profile] = STATE(659),
    [sym__stanza_copy_files] = STATE(660),
    [sym__stanza_menhir] = STATE(661),
    [sym__stanza_include] = STATE(632),
    [sym__stanza_foreign_library] = STATE(662),
    [sym__stanza_plugin] = STATE(663),
    [sym__stanza_mdx] = STATE(664),
    [sym__stanza_coq_theory] = STATE(665),
    [sym__stanza_deprecated_library_name] = STATE(666),
    [sym__stanza_ignored_subdirs] = STATE(632),
    [sym__stanza_pin] = STATE(632),
    [sym__stanza_warnings] = STATE(632),
    [sym__stanza_accept_alternative_dune_file_name] = STATE(632),
    [sym__stanza_executables_implicit_empty_intf] = STATE(632),
    [sym__stanza_expand_aliases_in_sandbox] = STATE(632),
    [sym__stanza_implicit_transitive_deps] = STATE(632),
    [sym__stanza_map_workspace_root] = STATE(632),
    [sym__stanza_opam_file_location] = STATE(632),
    [sym__stanza_subst] = STATE(632),
    [sym__stanza_use_standard_c_and_cxx_flags] = STATE(632),
    [sym__stanza_wrapped_executables] = STATE(632),
    [sym__stanza_maintenance_intent] = STATE(632),
    [sym__stanza_config] = STATE(632),
    [sym__stanza_lock_dir] = STATE(667),
    [sym__stanza_repository] = STATE(632),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_multiline_string] = ACTIONS(17),
    [sym__atom] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(275),
    [anon_sym_RPAREN] = ACTIONS(283),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_sexp] = STATE(632),
    [sym__atom_or_qs] = STATE(633),
    [sym_quoted_string] = STATE(633),
    [sym__list] = STATE(633),
    [sym_stanza] = STATE(6),
    [sym__stanza_alias] = STATE(634),
    [sym__stanza_subdir] = STATE(635),
    [sym__stanza_executable] = STATE(636),
    [sym__stanza_executables] = STATE(637),
    [sym__stanza_test] = STATE(638),
    [sym__stanza_tests] = STATE(639),
    [sym__stanza_rule] = STATE(640),
    [sym__stanza_library] = STATE(641),
    [sym__stanza_toplevel] = STATE(642),
    [sym__stanza_install] = STATE(643),
    [sym__stanza_cram] = STATE(644),
    [sym__stanza_env] = STATE(632),
    [sym__stanza_lang] = STATE(645),
    [sym__stanza_name] = STATE(646),
    [sym__stanza_version] = STATE(647),
    [sym__stanza_generate_opam_files] = STATE(648),
    [sym__stanza_source] = STATE(649),
    [sym__stanza_authors] = STATE(650),
    [sym__stanza_maintainers] = STATE(651),
    [sym__stanza_license] = STATE(652),
    [sym__stanza_homepage] = STATE(653),
    [sym__stanza_documentation_url] = STATE(654),
    [sym__stanza_bug_reports] = STATE(655),
    [sym__stanza_using] = STATE(656),
    [sym__stanza_formatting] = STATE(632),
    [sym__stanza_dialect] = STATE(632),
    [sym__stanza_explicit_js_mode] = STATE(632),
    [sym__stanza_package] = STATE(657),
    [sym__stanza_context] = STATE(658),
    [sym__stanza_profile] = STATE(659),
    [sym__stanza_copy_files] = STATE(660),
    [sym__stanza_menhir] = STATE(661),
    [sym__stanza_include] = STATE(632),
    [sym__stanza_foreign_library] = STATE(662),
    [sym__stanza_plugin] = STATE(663),
    [sym__stanza_mdx] = STATE(664),
    [sym__stanza_coq_theory] = STATE(665),
    [sym__stanza_deprecated_library_name] = STATE(666),
    [sym__stanza_ignored_subdirs] = STATE(632),
    [sym__stanza_pin] = STATE(632),
    [sym__stanza_warnings] = STATE(632),
    [sym__stanza_accept_alternative_dune_file_name] = STATE(632),
    [sym__stanza_executables_implicit_empty_intf] = STATE(632),
    [sym__stanza_expand_aliases_in_sandbox] = STATE(632),
    [sym__stanza_implicit_transitive_deps] = STATE(632),
    [sym__stanza_map_workspace_root] = STATE(632),
    [sym__stanza_opam_file_location] = STATE(632),
    [sym__stanza_subst] = STATE(632),
    [sym__stanza_use_standard_c_and_cxx_flags] = STATE(632),
    [sym__stanza_wrapped_executables] = STATE(632),
    [sym__stanza_maintenance_intent] = STATE(632),
    [sym__stanza_config] = STATE(632),
    [sym__stanza_lock_dir] = STATE(667),
    [sym__stanza_repository] = STATE(632),
    [aux_sym_source_file_repeat1] = STATE(6),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_multiline_string] = ACTIONS(17),
    [sym__atom] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_sexp] = STATE(632),
    [sym__atom_or_qs] = STATE(633),
    [sym_quoted_string] = STATE(633),
    [sym__list] = STATE(633),
    [sym_stanza] = STATE(8),
    [sym__stanza_alias] = STATE(634),
    [sym__stanza_subdir] = STATE(635),
    [sym__stanza_executable] = STATE(636),
    [sym__stanza_executables] = STATE(637),
    [sym__stanza_test] = STATE(638),
    [sym__stanza_tests] = STATE(639),
    [sym__stanza_rule] = STATE(640),
    [sym__stanza_library] = STATE(641),
    [sym__stanza_toplevel] = STATE(642),
    [sym__stanza_install] = STATE(643),
    [sym__stanza_cram] = STATE(644),
    [sym__stanza_env] = STATE(632),
    [sym__stanza_lang] = STATE(645),
    [sym__stanza_name] = STATE(646),
    [sym__stanza_version] = STATE(647),
    [sym__stanza_generate_opam_files] = STATE(648),
    [sym__stanza_source] = STATE(649),
    [sym__stanza_authors] = STATE(650),
    [sym__stanza_maintainers] = STATE(651),
    [sym__stanza_license] = STATE(652),
    [sym__stanza_homepage] = STATE(653),
    [sym__stanza_documentation_url] = STATE(654),
    [sym__stanza_bug_reports] = STATE(655),
    [sym__stanza_using] = STATE(656),
    [sym__stanza_formatting] = STATE(632),
    [sym__stanza_dialect] = STATE(632),
    [sym__stanza_explicit_js_mode] = STATE(632),
    [sym__stanza_package] = STATE(657),
    [sym__stanza_context] = STATE(658),
    [sym__stanza_profile] = STATE(659),
    [sym__stanza_copy_files] = STATE(660),
    [sym__stanza_menhir] = STATE(661),
    [sym__stanza_include] = STATE(632),
    [sym__stanza_foreign_library] = STATE(662),
    [sym__stanza_plugin] = STATE(663),
    [sym__stanza_mdx] = STATE(664),
    [sym__stanza_coq_theory] = STATE(665),
    [sym__stanza_deprecated_library_name] = STATE(666),
    [sym__stanza_ignored_subdirs] = STATE(632),
    [sym__stanza_pin] = STATE(632),
    [sym__stanza_warnings] = STATE(632),
    [sym__stanza_accept_alternative_dune_file_name] = STATE(632),
    [sym__stanza_executables_implicit_empty_intf] = STATE(632),
    [sym__stanza_expand_aliases_in_sandbox] = STATE(632),
    [sym__stanza_implicit_transitive_deps] = STATE(632),
    [sym__stanza_map_workspace_root] = STATE(632),
    [sym__stanza_opam_file_location] = STATE(632),
    [sym__stanza_subst] = STATE(632),
    [sym__stanza_use_standard_c_and_cxx_flags] = STATE(632),
    [sym__stanza_wrapped_executables] = STATE(632),
    [sym__stanza_maintenance_intent] = STATE(632),
    [sym__stanza_config] = STATE(632),
    [sym__stanza_lock_dir] = STATE(667),
    [sym__stanza_repository] = STATE(632),
    [aux_sym_source_file_repeat1] = STATE(8),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_multiline_string] = ACTIONS(17),
    [sym__atom] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_alias,
    ACTIONS(287), 1,
      anon_sym_action,
    ACTIONS(289), 1,
      anon_sym_enabled_if,
    ACTIONS(291), 1,
      anon_sym_mode,
    ACTIONS(293), 1,
      anon_sym_target,
    ACTIONS(295), 1,
      anon_sym_targets,
    ACTIONS(297), 1,
      anon_sym_package,
    ACTIONS(299), 1,
      anon_sym_fallback,
    ACTIONS(301), 1,
      anon_sym_locks,
    ACTIONS(303), 1,
      anon_sym_deps,
    ACTIONS(307), 1,
      anon_sym_cat,
    ACTIONS(311), 1,
      anon_sym_chdir,
    ACTIONS(313), 1,
      anon_sym_copy,
    ACTIONS(315), 1,
      anon_sym_copy_POUND,
    ACTIONS(317), 1,
      anon_sym_diff,
    ACTIONS(319), 1,
      anon_sym_echo,
    ACTIONS(323), 1,
      anon_sym_pipe_DASHoutputs,
    ACTIONS(325), 1,
      anon_sym_progn,
    ACTIONS(327), 1,
      anon_sym_run,
    ACTIONS(329), 1,
      anon_sym_setenv,
    ACTIONS(331), 1,
      anon_sym_with_DASHaccepted_DASHexit_DASHcodes,
    ACTIONS(335), 1,
      anon_sym_write_DASHfile,
    ACTIONS(305), 2,
      anon_sym_bash,
      anon_sym_system,
    ACTIONS(309), 2,
      anon_sym_cmp,
      anon_sym_diff_QMARK,
    ACTIONS(321), 2,
      anon_sym_ignore_DASHstdout,
      anon_sym_no_DASHinfer,
    ACTIONS(333), 3,
      anon_sym_with_DASHoutputs_DASHto,
      anon_sym_with_DASHstderr_DASHto,
      anon_sym_with_DASHstdout_DASHto,
  [87] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_multiline_string,
    ACTIONS(19), 1,
      sym__atom,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(337), 1,
      anon_sym_name,
    ACTIONS(339), 1,
      anon_sym_target,
    ACTIONS(341), 1,
      anon_sym_targets,
    ACTIONS(345), 1,
      anon_sym_switch,
    ACTIONS(347), 1,
      anon_sym_profile,
    ACTIONS(349), 1,
      anon_sym_toolchain,
    ACTIONS(351), 1,
      anon_sym_host,
    ACTIONS(355), 1,
      anon_sym_disable_dynamically_linked_foreign_archives,
    ACTIONS(357), 1,
      anon_sym_root,
    ACTIONS(359), 1,
      anon_sym_lock_dir,
    ACTIONS(361), 1,
      anon_sym_fdo,
    ACTIONS(343), 2,
      anon_sym_env,
      anon_sym_paths,
    ACTIONS(353), 2,
      anon_sym_merlin,
      anon_sym_generate_merlin_rules,
    STATE(133), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [156] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_cat,
    ACTIONS(311), 1,
      anon_sym_chdir,
    ACTIONS(313), 1,
      anon_sym_copy,
    ACTIONS(315), 1,
      anon_sym_copy_POUND,
    ACTIONS(317), 1,
      anon_sym_diff,
    ACTIONS(319), 1,
      anon_sym_echo,
    ACTIONS(323), 1,
      anon_sym_pipe_DASHoutputs,
    ACTIONS(325), 1,
      anon_sym_progn,
    ACTIONS(327), 1,
      anon_sym_run,
    ACTIONS(329), 1,
      anon_sym_setenv,
    ACTIONS(331), 1,
      anon_sym_with_DASHaccepted_DASHexit_DASHcodes,
    ACTIONS(335), 1,
      anon_sym_write_DASHfile,
    ACTIONS(305), 2,
      anon_sym_bash,
      anon_sym_system,
    ACTIONS(309), 2,
      anon_sym_cmp,
      anon_sym_diff_QMARK,
    ACTIONS(321), 2,
      anon_sym_ignore_DASHstdout,
      anon_sym_no_DASHinfer,
    ACTIONS(333), 3,
      anon_sym_with_DASHoutputs_DASHto,
      anon_sym_with_DASHstderr_DASHto,
      anon_sym_with_DASHstdout_DASHto,
  [213] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_multiline_string,
    ACTIONS(19), 1,
      sym__atom,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(363), 1,
      anon_sym_modules,
    ACTIONS(365), 1,
      anon_sym_name,
    ACTIONS(367), 1,
      anon_sym_libraries,
    ACTIONS(369), 1,
      anon_sym_enabled_if,
    ACTIONS(371), 1,
      anon_sym_public_name,
    ACTIONS(373), 1,
      anon_sym_synopsis,
    ACTIONS(377), 1,
      anon_sym_wrapped,
    ACTIONS(379), 1,
      anon_sym_ppx_DOTdriver,
    ACTIONS(375), 2,
      anon_sym_instrumentation,
      anon_sym_kind,
    STATE(133), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [269] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_multiline_string,
    ACTIONS(19), 1,
      sym__atom,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(381), 1,
      anon_sym_name,
    ACTIONS(387), 1,
      anon_sym_tags,
    ACTIONS(389), 1,
      anon_sym_deprecated_package_names,
    ACTIONS(391), 1,
      anon_sym_sites,
    ACTIONS(393), 1,
      anon_sym_allow_empty,
    ACTIONS(383), 2,
      anon_sym_synopsis,
      anon_sym_description,
    STATE(133), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    ACTIONS(385), 3,
      anon_sym_depends,
      anon_sym_conflicts,
      anon_sym_depopts,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [321] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_multiline_string,
    ACTIONS(19), 1,
      sym__atom,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(395), 1,
      anon_sym_modules,
    ACTIONS(397), 1,
      anon_sym_action,
    ACTIONS(399), 1,
      anon_sym_build_if,
    ACTIONS(401), 1,
      anon_sym_names,
    ACTIONS(403), 1,
      anon_sym_public_names,
    ACTIONS(405), 1,
      anon_sym_libraries,
    ACTIONS(407), 1,
      anon_sym_enabled_if,
    STATE(133), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [370] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_multiline_string,
    ACTIONS(19), 1,
      sym__atom,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(363), 1,
      anon_sym_modules,
    ACTIONS(365), 1,
      anon_sym_name,
    ACTIONS(367), 1,
      anon_sym_libraries,
    ACTIONS(369), 1,
      anon_sym_enabled_if,
    ACTIONS(371), 1,
      anon_sym_public_name,
    ACTIONS(397), 1,
      anon_sym_action,
    ACTIONS(399), 1,
      anon_sym_build_if,
    STATE(133), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [419] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_multiline_string,
    ACTIONS(19), 1,
      sym__atom,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(409), 1,
      anon_sym_alias,
    ACTIONS(413), 1,
      anon_sym_mode,
    ACTIONS(415), 1,
      anon_sym_files,
    ACTIONS(411), 2,
      anon_sym_enabled_if,
      anon_sym_only_sources,
    STATE(133), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [460] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_multiline_string,
    ACTIONS(19), 1,
      sym__atom,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(417), 1,
      anon_sym_names,
    ACTIONS(419), 2,
      anon_sym_flags,
      anon_sym_include_dirs,
    ACTIONS(421), 2,
      anon_sym_archive_name,
      anon_sym_language,
    STATE(133), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [499] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_multiline_string,
    ACTIONS(19), 1,
      sym__atom,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(423), 1,
      anon_sym_modules,
    ACTIONS(425), 1,
      anon_sym_merge_into,
    ACTIONS(427), 1,
      anon_sym_flags,
    ACTIONS(429), 1,
      anon_sym_infer,
    ACTIONS(431), 1,
      anon_sym_explain,
    STATE(133), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [542] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_multiline_string,
    ACTIONS(19), 1,
      sym__atom,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(363), 1,
      anon_sym_modules,
    ACTIONS(365), 1,
      anon_sym_name,
    ACTIONS(367), 1,
      anon_sym_libraries,
    ACTIONS(369), 1,
      anon_sym_enabled_if,
    ACTIONS(371), 1,
      anon_sym_public_name,
    STATE(133), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [585] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_multiline_string,
    ACTIONS(19), 1,
      sym__atom,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(395), 1,
      anon_sym_modules,
    ACTIONS(401), 1,
      anon_sym_names,
    ACTIONS(403), 1,
      anon_sym_public_names,
    ACTIONS(405), 1,
      anon_sym_libraries,
    ACTIONS(407), 1,
      anon_sym_enabled_if,
    STATE(133), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [628] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_multiline_string,
    ACTIONS(19), 1,
      sym__atom,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(433), 1,
      anon_sym_deps,
    ACTIONS(437), 1,
      anon_sym_packages,
    ACTIONS(435), 2,
      anon_sym_files,
      anon_sym_preludes,
    STATE(133), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [666] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_multiline_string,
    ACTIONS(19), 1,
      sym__atom,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(439), 1,
      anon_sym_name,
    ACTIONS(441), 1,
      anon_sym_libraries,
    ACTIONS(443), 1,
      anon_sym_optional,
    ACTIONS(445), 1,
      anon_sym_site,
    STATE(133), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [706] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_multiline_string,
    ACTIONS(19), 1,
      sym__atom,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(449), 1,
      anon_sym_package,
    ACTIONS(451), 1,
      anon_sym_section,
    ACTIONS(447), 2,
      anon_sym_dirs,
      anon_sym_files,
    STATE(133), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [744] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_multiline_string,
    ACTIONS(19), 1,
      sym__atom,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(453), 1,
      anon_sym_modules,
    ACTIONS(455), 1,
      anon_sym_name,
    ACTIONS(457), 2,
      anon_sym_theories,
      anon_sym_plugins,
    STATE(133), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [782] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_multiline_string,
    ACTIONS(19), 1,
      sym__atom,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(459), 1,
      anon_sym_name,
    ACTIONS(461), 1,
      anon_sym_action,
    ACTIONS(463), 1,
      anon_sym_deps,
    STATE(133), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [819] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(465), 1,
      anon_sym_LPAREN,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
    STATE(521), 1,
      sym__field_buildable_multi,
    STATE(524), 1,
      sym__field_test,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(30), 2,
      sym_sexp,
      aux_sym__stanza_tests_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [851] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_multiline_string,
    ACTIONS(19), 1,
      sym__atom,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(469), 1,
      anon_sym_name,
    ACTIONS(471), 1,
      anon_sym_libraries,
    STATE(133), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [885] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_DQUOTE,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
    STATE(521), 1,
      sym__field_buildable_multi,
    STATE(524), 1,
      sym__field_test,
    ACTIONS(476), 2,
      sym_multiline_string,
      sym__atom,
    STATE(30), 2,
      sym_sexp,
      aux_sym__stanza_tests_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [917] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(465), 1,
      anon_sym_LPAREN,
    ACTIONS(484), 1,
      anon_sym_RPAREN,
    STATE(521), 1,
      sym__field_buildable_multi,
    STATE(524), 1,
      sym__field_test,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(28), 2,
      sym_sexp,
      aux_sym__stanza_tests_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [949] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(488), 1,
      anon_sym_RPAREN,
    STATE(529), 1,
      sym__field_buildable,
    STATE(530), 1,
      sym__field_test,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(39), 2,
      sym_sexp,
      aux_sym__stanza_test_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [981] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_DQUOTE,
    ACTIONS(496), 1,
      anon_sym_LPAREN,
    ACTIONS(499), 1,
      anon_sym_RPAREN,
    STATE(529), 1,
      sym__field_buildable,
    STATE(530), 1,
      sym__field_test,
    ACTIONS(493), 2,
      sym_multiline_string,
      sym__atom,
    STATE(33), 2,
      sym_sexp,
      aux_sym__stanza_test_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1013] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(465), 1,
      anon_sym_LPAREN,
    ACTIONS(501), 1,
      anon_sym_RPAREN,
    STATE(521), 1,
      sym__field_buildable_multi,
    STATE(524), 1,
      sym__field_test,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(30), 2,
      sym_sexp,
      aux_sym__stanza_tests_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1045] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      anon_sym_RPAREN,
    STATE(529), 1,
      sym__field_buildable,
    STATE(530), 1,
      sym__field_test,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(33), 2,
      sym_sexp,
      aux_sym__stanza_test_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1077] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(465), 1,
      anon_sym_LPAREN,
    ACTIONS(505), 1,
      anon_sym_RPAREN,
    STATE(521), 1,
      sym__field_buildable_multi,
    STATE(524), 1,
      sym__field_test,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(34), 2,
      sym_sexp,
      aux_sym__stanza_tests_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1109] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
    STATE(529), 1,
      sym__field_buildable,
    STATE(530), 1,
      sym__field_test,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(35), 2,
      sym_sexp,
      aux_sym__stanza_test_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1141] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_multiline_string,
    ACTIONS(19), 1,
      sym__atom,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(509), 1,
      anon_sym_deps,
    ACTIONS(511), 1,
      anon_sym_applies_to,
    STATE(133), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1175] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(513), 1,
      anon_sym_RPAREN,
    STATE(529), 1,
      sym__field_buildable,
    STATE(530), 1,
      sym__field_test,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(33), 2,
      sym_sexp,
      aux_sym__stanza_test_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1207] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(515), 1,
      anon_sym_LPAREN,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
    STATE(543), 1,
      sym__field_buildable_multi,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(54), 2,
      sym_sexp,
      aux_sym__stanza_executables_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1236] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_DQUOTE,
    ACTIONS(525), 1,
      anon_sym_LPAREN,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
    STATE(555), 1,
      sym__field_buildable,
    ACTIONS(522), 2,
      sym_multiline_string,
      sym__atom,
    STATE(41), 2,
      sym_sexp,
      aux_sym__stanza_executable_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1265] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(530), 1,
      anon_sym_LPAREN,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
    STATE(572), 1,
      sym__deps_field,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(50), 2,
      sym_sexp,
      aux_sym__stanza_alias_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1294] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(515), 1,
      anon_sym_LPAREN,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
    STATE(543), 1,
      sym__field_buildable_multi,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(52), 2,
      sym_sexp,
      aux_sym__stanza_executables_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1323] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(538), 1,
      anon_sym_LPAREN,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
    STATE(422), 1,
      sym_file_name,
    ACTIONS(536), 2,
      sym_multiline_string,
      sym__atom,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(60), 3,
      sym_file_name_target,
      sym__target,
      aux_sym__stanza_rule_repeat1,
  [1352] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(542), 1,
      anon_sym_LPAREN,
    ACTIONS(544), 1,
      anon_sym_RPAREN,
    STATE(509), 1,
      sym__field_buildable,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(58), 2,
      sym_sexp,
      aux_sym__stanza_library_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1381] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(542), 1,
      anon_sym_LPAREN,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
    STATE(509), 1,
      sym__field_buildable,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(59), 2,
      sym_sexp,
      aux_sym__stanza_library_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1410] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(548), 1,
      anon_sym_LPAREN,
    ACTIONS(550), 1,
      anon_sym_RPAREN,
    STATE(555), 1,
      sym__field_buildable,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(51), 2,
      sym_sexp,
      aux_sym__stanza_executable_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1439] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(548), 1,
      anon_sym_LPAREN,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
    STATE(555), 1,
      sym__field_buildable,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(41), 2,
      sym_sexp,
      aux_sym__stanza_executable_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1468] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(530), 1,
      anon_sym_LPAREN,
    ACTIONS(554), 1,
      anon_sym_RPAREN,
    STATE(572), 1,
      sym__deps_field,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(42), 2,
      sym_sexp,
      aux_sym__stanza_alias_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1497] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_DQUOTE,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
    STATE(572), 1,
      sym__deps_field,
    ACTIONS(559), 2,
      sym_multiline_string,
      sym__atom,
    STATE(50), 2,
      sym_sexp,
      aux_sym__stanza_alias_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1526] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(548), 1,
      anon_sym_LPAREN,
    ACTIONS(567), 1,
      anon_sym_RPAREN,
    STATE(555), 1,
      sym__field_buildable,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(41), 2,
      sym_sexp,
      aux_sym__stanza_executable_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1555] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_DQUOTE,
    ACTIONS(575), 1,
      anon_sym_LPAREN,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
    STATE(543), 1,
      sym__field_buildable_multi,
    ACTIONS(572), 2,
      sym_multiline_string,
      sym__atom,
    STATE(52), 2,
      sym_sexp,
      aux_sym__stanza_executables_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1584] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(530), 1,
      anon_sym_LPAREN,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
    STATE(572), 1,
      sym__deps_field,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(55), 2,
      sym_sexp,
      aux_sym__stanza_alias_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1613] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(515), 1,
      anon_sym_LPAREN,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
    STATE(543), 1,
      sym__field_buildable_multi,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(52), 2,
      sym_sexp,
      aux_sym__stanza_executables_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1642] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(530), 1,
      anon_sym_LPAREN,
    ACTIONS(584), 1,
      anon_sym_RPAREN,
    STATE(572), 1,
      sym__deps_field,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(50), 2,
      sym_sexp,
      aux_sym__stanza_alias_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1671] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(548), 1,
      anon_sym_LPAREN,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
    STATE(555), 1,
      sym__field_buildable,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(48), 2,
      sym_sexp,
      aux_sym__stanza_executable_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1700] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(515), 1,
      anon_sym_LPAREN,
    ACTIONS(588), 1,
      anon_sym_RPAREN,
    STATE(543), 1,
      sym__field_buildable_multi,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(43), 2,
      sym_sexp,
      aux_sym__stanza_executables_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1729] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_DQUOTE,
    ACTIONS(596), 1,
      anon_sym_LPAREN,
    ACTIONS(599), 1,
      anon_sym_RPAREN,
    STATE(509), 1,
      sym__field_buildable,
    ACTIONS(593), 2,
      sym_multiline_string,
      sym__atom,
    STATE(58), 2,
      sym_sexp,
      aux_sym__stanza_library_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1758] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(542), 1,
      anon_sym_LPAREN,
    ACTIONS(601), 1,
      anon_sym_RPAREN,
    STATE(509), 1,
      sym__field_buildable,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(58), 2,
      sym_sexp,
      aux_sym__stanza_library_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1787] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_DQUOTE,
    ACTIONS(609), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_RPAREN,
    STATE(422), 1,
      sym_file_name,
    ACTIONS(606), 2,
      sym_multiline_string,
      sym__atom,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(60), 3,
      sym_file_name_target,
      sym__target,
      aux_sym__stanza_rule_repeat1,
  [1816] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(538), 1,
      anon_sym_LPAREN,
    ACTIONS(614), 1,
      anon_sym_RPAREN,
    STATE(422), 1,
      sym_file_name,
    ACTIONS(536), 2,
      sym_multiline_string,
      sym__atom,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(44), 3,
      sym_file_name_target,
      sym__target,
      aux_sym__stanza_rule_repeat1,
  [1845] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(542), 1,
      anon_sym_LPAREN,
    ACTIONS(616), 1,
      anon_sym_RPAREN,
    STATE(509), 1,
      sym__field_buildable,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(45), 2,
      sym_sexp,
      aux_sym__stanza_library_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1874] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(829), 1,
      sym_sexps1,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(158), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1900] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(618), 1,
      anon_sym_LPAREN,
    ACTIONS(620), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(74), 2,
      sym_sexp,
      aux_sym__stanza_menhir_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1926] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    ACTIONS(628), 1,
      anon_sym_LPAREN,
    ACTIONS(631), 1,
      anon_sym_RPAREN,
    ACTIONS(625), 2,
      sym_multiline_string,
      sym__atom,
    STATE(65), 2,
      sym_sexp,
      aux_sym__stanza_plugin_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1952] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(633), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(149), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [1978] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(133), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [2004] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(637), 1,
      anon_sym_LPAREN,
    ACTIONS(639), 1,
      anon_sym_RPAREN,
    STATE(173), 1,
      aux_sym__field_buildable_multi_repeat2,
    ACTIONS(635), 2,
      sym_multiline_string,
      sym__atom,
    STATE(405), 2,
      sym__lib_dep,
      sym_library_name,
    STATE(442), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2032] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(117), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [2058] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
    ACTIONS(645), 1,
      anon_sym_LPAREN,
    STATE(121), 1,
      aux_sym_stanza_repeat1,
    ACTIONS(643), 2,
      sym_multiline_string,
      sym__atom,
    STATE(589), 2,
      sym__field_modules_maybe_inline,
      sym_module_name,
    STATE(602), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2086] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_DQUOTE,
    ACTIONS(653), 1,
      anon_sym_LPAREN,
    ACTIONS(656), 1,
      anon_sym_RPAREN,
    ACTIONS(650), 2,
      sym_multiline_string,
      sym__atom,
    STATE(71), 2,
      sym_sexp,
      aux_sym__stanza_foreign_library_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [2112] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
    STATE(633), 1,
      sym__list,
    ACTIONS(658), 2,
      sym_multiline_string,
      sym__atom,
    STATE(117), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(580), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2140] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(660), 1,
      anon_sym_LPAREN,
    ACTIONS(662), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(155), 2,
      sym_sexp,
      aux_sym__stanza_coq_theory_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [2166] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_DQUOTE,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(673), 1,
      anon_sym_RPAREN,
    ACTIONS(667), 2,
      sym_multiline_string,
      sym__atom,
    STATE(74), 2,
      sym_sexp,
      aux_sym__stanza_menhir_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [2192] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(675), 1,
      anon_sym_LPAREN,
    ACTIONS(677), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(159), 2,
      sym_sexp,
      aux_sym__stanza_mdx_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [2218] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_LPAREN,
    ACTIONS(681), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(150), 2,
      sym_sexp,
      aux_sym__stanza_package_repeat3,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [2244] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(683), 1,
      anon_sym_LPAREN,
    ACTIONS(685), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(157), 2,
      sym_sexp,
      aux_sym__stanza_toplevel_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [2270] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(687), 1,
      anon_sym_LPAREN,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(160), 2,
      sym_sexp,
      aux_sym__stanza_install_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [2296] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_LPAREN,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(163), 2,
      sym_sexp,
      aux_sym__stanza_cram_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [2322] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(165), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [2348] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(697), 1,
      anon_sym_LPAREN,
    ACTIONS(699), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(168), 2,
      sym_sexp,
      aux_sym__stanza_plugin_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [2374] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(701), 1,
      anon_sym_LPAREN,
    ACTIONS(703), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(172), 2,
      sym_sexp,
      aux_sym__stanza_foreign_library_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [2400] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(618), 1,
      anon_sym_LPAREN,
    ACTIONS(705), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(64), 2,
      sym_sexp,
      aux_sym__stanza_menhir_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [2426] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(707), 1,
      anon_sym_LPAREN,
    ACTIONS(709), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(161), 2,
      sym_sexp,
      aux_sym__stanza_copy_files_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [2452] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_DQUOTE,
    ACTIONS(717), 1,
      anon_sym_LPAREN,
    ACTIONS(720), 1,
      anon_sym_RPAREN,
    ACTIONS(714), 2,
      sym_multiline_string,
      sym__atom,
    STATE(85), 2,
      sym_sexp,
      aux_sym__stanza_copy_files_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [2478] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(722), 1,
      anon_sym_LPAREN,
    ACTIONS(724), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(174), 2,
      sym_sexp,
      aux_sym__context_opam_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [2504] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(726), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(130), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [2530] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(728), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(151), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [2556] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_LPAREN,
    ACTIONS(730), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(148), 2,
      sym_sexp,
      aux_sym__stanza_cram_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [2582] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(687), 1,
      anon_sym_LPAREN,
    ACTIONS(732), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(144), 2,
      sym_sexp,
      aux_sym__stanza_install_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [2608] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_DQUOTE,
    ACTIONS(740), 1,
      anon_sym_LPAREN,
    ACTIONS(743), 1,
      anon_sym_RPAREN,
    ACTIONS(737), 2,
      sym_multiline_string,
      sym__atom,
    STATE(91), 2,
      sym_sexp,
      aux_sym__stanza_cram_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [2634] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(745), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(175), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [2660] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(683), 1,
      anon_sym_LPAREN,
    ACTIONS(747), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(143), 2,
      sym_sexp,
      aux_sym__stanza_toplevel_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [2686] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(142), 2,
      sym_sexp,
      aux_sym__stanza_package_repeat3,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [2712] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(707), 1,
      anon_sym_LPAREN,
    ACTIONS(751), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(169), 2,
      sym_sexp,
      aux_sym__stanza_copy_files_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [2738] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(618), 1,
      anon_sym_LPAREN,
    ACTIONS(753), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(166), 2,
      sym_sexp,
      aux_sym__stanza_menhir_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [2764] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_DQUOTE,
    ACTIONS(761), 1,
      anon_sym_LPAREN,
    ACTIONS(764), 1,
      anon_sym_RPAREN,
    ACTIONS(758), 2,
      sym_multiline_string,
      sym__atom,
    STATE(97), 2,
      sym_sexp,
      aux_sym__stanza_install_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [2790] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(701), 1,
      anon_sym_LPAREN,
    ACTIONS(766), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(156), 2,
      sym_sexp,
      aux_sym__stanza_foreign_library_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [2816] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(697), 1,
      anon_sym_LPAREN,
    ACTIONS(768), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(152), 2,
      sym_sexp,
      aux_sym__stanza_plugin_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [2842] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(675), 1,
      anon_sym_LPAREN,
    ACTIONS(770), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(147), 2,
      sym_sexp,
      aux_sym__stanza_mdx_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [2868] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(660), 1,
      anon_sym_LPAREN,
    ACTIONS(772), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(145), 2,
      sym_sexp,
      aux_sym__stanza_coq_theory_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [2894] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(774), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(167), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [2920] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_DQUOTE,
    ACTIONS(782), 1,
      anon_sym_LPAREN,
    ACTIONS(785), 1,
      anon_sym_RPAREN,
    ACTIONS(779), 2,
      sym_multiline_string,
      sym__atom,
    STATE(103), 2,
      sym_sexp,
      aux_sym__stanza_toplevel_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [2946] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(789), 1,
      anon_sym_RPAREN,
    STATE(633), 1,
      sym__list,
    ACTIONS(787), 2,
      sym_multiline_string,
      sym__atom,
    STATE(134), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(454), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [2974] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(637), 1,
      anon_sym_LPAREN,
    ACTIONS(791), 1,
      anon_sym_RPAREN,
    STATE(164), 1,
      aux_sym__field_buildable_multi_repeat2,
    ACTIONS(635), 2,
      sym_multiline_string,
      sym__atom,
    STATE(405), 2,
      sym__lib_dep,
      sym_library_name,
    STATE(442), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [3002] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(645), 1,
      anon_sym_LPAREN,
    ACTIONS(789), 1,
      anon_sym_RPAREN,
    STATE(138), 1,
      aux_sym_stanza_repeat1,
    ACTIONS(643), 2,
      sym_multiline_string,
      sym__atom,
    STATE(589), 2,
      sym__field_modules_maybe_inline,
      sym_module_name,
    STATE(602), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [3030] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(789), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(134), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [3056] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(112), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [3082] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(809), 1,
      sym_sexps1,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(158), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [3108] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(793), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(132), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [3134] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(795), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(131), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [3160] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(797), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(126), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [3186] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      anon_sym_DQUOTE,
    ACTIONS(805), 1,
      anon_sym_LPAREN,
    ACTIONS(808), 1,
      anon_sym_RPAREN,
    ACTIONS(802), 2,
      sym_multiline_string,
      sym__atom,
    STATE(113), 2,
      sym_sexp,
      aux_sym__stanza_package_repeat3,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [3212] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(810), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(154), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [3238] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(637), 1,
      anon_sym_LPAREN,
    ACTIONS(812), 1,
      anon_sym_RPAREN,
    STATE(140), 1,
      aux_sym__field_buildable_multi_repeat2,
    ACTIONS(635), 2,
      sym_multiline_string,
      sym__atom,
    STATE(405), 2,
      sym__lib_dep,
      sym_library_name,
    STATE(442), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [3266] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(812), 1,
      anon_sym_RPAREN,
    ACTIONS(814), 1,
      anon_sym_LPAREN,
    STATE(846), 1,
      sym__modules_osl,
    ACTIONS(643), 2,
      sym_multiline_string,
      sym__atom,
    STATE(214), 2,
      sym_module_name,
      aux_sym__field_modules_maybe_inline_repeat1,
    STATE(602), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [3294] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(816), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(126), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [3320] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(637), 1,
      anon_sym_LPAREN,
    ACTIONS(818), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      aux_sym__field_buildable_multi_repeat2,
    ACTIONS(635), 2,
      sym_multiline_string,
      sym__atom,
    STATE(405), 2,
      sym__lib_dep,
      sym_library_name,
    STATE(442), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [3348] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(820), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(126), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [3374] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(814), 1,
      anon_sym_LPAREN,
    ACTIONS(818), 1,
      anon_sym_RPAREN,
    STATE(858), 1,
      sym__modules_osl,
    ACTIONS(643), 2,
      sym_multiline_string,
      sym__atom,
    STATE(214), 2,
      sym_module_name,
      aux_sym__field_modules_maybe_inline_repeat1,
    STATE(602), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [3402] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(645), 1,
      anon_sym_LPAREN,
    ACTIONS(822), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym_stanza_repeat1,
    ACTIONS(643), 2,
      sym_multiline_string,
      sym__atom,
    STATE(589), 2,
      sym__field_modules_maybe_inline,
      sym_module_name,
    STATE(602), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [3430] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_DQUOTE,
    ACTIONS(830), 1,
      anon_sym_LPAREN,
    ACTIONS(833), 1,
      anon_sym_RPAREN,
    ACTIONS(827), 2,
      sym_multiline_string,
      sym__atom,
    STATE(122), 2,
      sym_sexp,
      aux_sym__stanza_mdx_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [3456] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_DQUOTE,
    ACTIONS(841), 1,
      anon_sym_LPAREN,
    ACTIONS(844), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym_stanza_repeat1,
    ACTIONS(838), 2,
      sym_multiline_string,
      sym__atom,
    STATE(589), 2,
      sym__field_modules_maybe_inline,
      sym_module_name,
    STATE(602), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [3484] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_DQUOTE,
    ACTIONS(852), 1,
      anon_sym_LPAREN,
    ACTIONS(855), 1,
      anon_sym_RPAREN,
    ACTIONS(849), 2,
      sym_multiline_string,
      sym__atom,
    STATE(124), 2,
      sym_sexp,
      aux_sym__stanza_coq_theory_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [3510] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(857), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(146), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [3536] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_DQUOTE,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(868), 1,
      anon_sym_RPAREN,
    ACTIONS(862), 2,
      sym_multiline_string,
      sym__atom,
    STATE(126), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [3562] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(870), 1,
      anon_sym_LPAREN,
    ACTIONS(872), 1,
      anon_sym_RPAREN,
    ACTIONS(536), 2,
      sym_multiline_string,
      sym__atom,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(162), 3,
      sym_file_name,
      sym__dep,
      aux_sym__deps_field_repeat1,
  [3588] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_DQUOTE,
    ACTIONS(880), 1,
      anon_sym_LPAREN,
    ACTIONS(883), 1,
      anon_sym_RPAREN,
    ACTIONS(877), 2,
      sym_multiline_string,
      sym__atom,
    STATE(128), 2,
      sym_sexp,
      aux_sym__context_opam_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [3614] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(885), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(119), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [3640] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(887), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(126), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [3666] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(889), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(126), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [3692] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(891), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(126), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [3718] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(893), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(126), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [3744] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(895), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(126), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [3770] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_DQUOTE,
    ACTIONS(903), 1,
      anon_sym_LPAREN,
    ACTIONS(906), 1,
      anon_sym_RPAREN,
    ACTIONS(900), 2,
      sym_multiline_string,
      sym__atom,
    STATE(379), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(135), 3,
      sym_package_name,
      sym__package_dep,
      aux_sym__stanza_package_repeat1,
  [3796] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(870), 1,
      anon_sym_LPAREN,
    ACTIONS(908), 1,
      anon_sym_RPAREN,
    ACTIONS(536), 2,
      sym_multiline_string,
      sym__atom,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(162), 3,
      sym_file_name,
      sym__dep,
      aux_sym__deps_field_repeat1,
  [3822] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(814), 1,
      anon_sym_LPAREN,
    ACTIONS(910), 1,
      anon_sym_RPAREN,
    STATE(764), 1,
      sym__modules_osl,
    ACTIONS(643), 2,
      sym_multiline_string,
      sym__atom,
    STATE(214), 2,
      sym_module_name,
      aux_sym__field_modules_maybe_inline_repeat1,
    STATE(602), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [3850] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(645), 1,
      anon_sym_LPAREN,
    ACTIONS(912), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym_stanza_repeat1,
    ACTIONS(643), 2,
      sym_multiline_string,
      sym__atom,
    STATE(589), 2,
      sym__field_modules_maybe_inline,
      sym_module_name,
    STATE(602), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [3878] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(637), 1,
      anon_sym_LPAREN,
    ACTIONS(914), 1,
      anon_sym_RPAREN,
    STATE(153), 1,
      aux_sym__field_buildable_multi_repeat2,
    ACTIONS(635), 2,
      sym_multiline_string,
      sym__atom,
    STATE(405), 2,
      sym__lib_dep,
      sym_library_name,
    STATE(442), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [3906] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(637), 1,
      anon_sym_LPAREN,
    ACTIONS(916), 1,
      anon_sym_RPAREN,
    STATE(153), 1,
      aux_sym__field_buildable_multi_repeat2,
    ACTIONS(635), 2,
      sym_multiline_string,
      sym__atom,
    STATE(405), 2,
      sym__lib_dep,
      sym_library_name,
    STATE(442), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [3934] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(920), 1,
      anon_sym_LPAREN,
    ACTIONS(922), 1,
      anon_sym_RPAREN,
    ACTIONS(918), 2,
      sym_multiline_string,
      sym__atom,
    STATE(379), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(135), 3,
      sym_package_name,
      sym__package_dep,
      aux_sym__stanza_package_repeat1,
  [3960] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_LPAREN,
    ACTIONS(924), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(113), 2,
      sym_sexp,
      aux_sym__stanza_package_repeat3,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [3986] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(683), 1,
      anon_sym_LPAREN,
    ACTIONS(926), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(103), 2,
      sym_sexp,
      aux_sym__stanza_toplevel_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [4012] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(687), 1,
      anon_sym_LPAREN,
    ACTIONS(928), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(97), 2,
      sym_sexp,
      aux_sym__stanza_install_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [4038] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(660), 1,
      anon_sym_LPAREN,
    ACTIONS(930), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(124), 2,
      sym_sexp,
      aux_sym__stanza_coq_theory_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [4064] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(932), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(126), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [4090] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(675), 1,
      anon_sym_LPAREN,
    ACTIONS(934), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(122), 2,
      sym_sexp,
      aux_sym__stanza_mdx_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [4116] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_LPAREN,
    ACTIONS(936), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(91), 2,
      sym_sexp,
      aux_sym__stanza_cram_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [4142] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(938), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(126), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [4168] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_LPAREN,
    ACTIONS(940), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(113), 2,
      sym_sexp,
      aux_sym__stanza_package_repeat3,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [4194] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(942), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(126), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [4220] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(697), 1,
      anon_sym_LPAREN,
    ACTIONS(944), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(65), 2,
      sym_sexp,
      aux_sym__stanza_plugin_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [4246] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_DQUOTE,
    ACTIONS(952), 1,
      anon_sym_LPAREN,
    ACTIONS(955), 1,
      anon_sym_RPAREN,
    STATE(153), 1,
      aux_sym__field_buildable_multi_repeat2,
    ACTIONS(949), 2,
      sym_multiline_string,
      sym__atom,
    STATE(405), 2,
      sym__lib_dep,
      sym_library_name,
    STATE(442), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [4274] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(922), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(126), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [4300] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(660), 1,
      anon_sym_LPAREN,
    ACTIONS(957), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(124), 2,
      sym_sexp,
      aux_sym__stanza_coq_theory_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [4326] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(701), 1,
      anon_sym_LPAREN,
    ACTIONS(959), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(71), 2,
      sym_sexp,
      aux_sym__stanza_foreign_library_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [4352] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(683), 1,
      anon_sym_LPAREN,
    ACTIONS(961), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(103), 2,
      sym_sexp,
      aux_sym__stanza_toplevel_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [4378] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(963), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(126), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [4404] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(675), 1,
      anon_sym_LPAREN,
    ACTIONS(965), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(122), 2,
      sym_sexp,
      aux_sym__stanza_mdx_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [4430] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(687), 1,
      anon_sym_LPAREN,
    ACTIONS(967), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(97), 2,
      sym_sexp,
      aux_sym__stanza_install_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [4456] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(707), 1,
      anon_sym_LPAREN,
    ACTIONS(969), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(85), 2,
      sym_sexp,
      aux_sym__stanza_copy_files_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [4482] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      anon_sym_DQUOTE,
    ACTIONS(977), 1,
      anon_sym_LPAREN,
    ACTIONS(980), 1,
      anon_sym_RPAREN,
    ACTIONS(974), 2,
      sym_multiline_string,
      sym__atom,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(162), 3,
      sym_file_name,
      sym__dep,
      aux_sym__deps_field_repeat1,
  [4508] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_LPAREN,
    ACTIONS(982), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(91), 2,
      sym_sexp,
      aux_sym__stanza_cram_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [4534] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(637), 1,
      anon_sym_LPAREN,
    ACTIONS(984), 1,
      anon_sym_RPAREN,
    STATE(153), 1,
      aux_sym__field_buildable_multi_repeat2,
    ACTIONS(635), 2,
      sym_multiline_string,
      sym__atom,
    STATE(405), 2,
      sym__lib_dep,
      sym_library_name,
    STATE(442), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [4562] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(986), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(126), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [4588] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(618), 1,
      anon_sym_LPAREN,
    ACTIONS(988), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(74), 2,
      sym_sexp,
      aux_sym__stanza_menhir_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [4614] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(990), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(126), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [4640] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(697), 1,
      anon_sym_LPAREN,
    ACTIONS(992), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(65), 2,
      sym_sexp,
      aux_sym__stanza_plugin_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [4666] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(707), 1,
      anon_sym_LPAREN,
    ACTIONS(994), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(85), 2,
      sym_sexp,
      aux_sym__stanza_copy_files_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [4692] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(870), 1,
      anon_sym_LPAREN,
    ACTIONS(996), 1,
      anon_sym_RPAREN,
    ACTIONS(536), 2,
      sym_multiline_string,
      sym__atom,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(162), 3,
      sym_file_name,
      sym__dep,
      aux_sym__deps_field_repeat1,
  [4718] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(870), 1,
      anon_sym_LPAREN,
    ACTIONS(998), 1,
      anon_sym_RPAREN,
    ACTIONS(536), 2,
      sym_multiline_string,
      sym__atom,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(162), 3,
      sym_file_name,
      sym__dep,
      aux_sym__deps_field_repeat1,
  [4744] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(701), 1,
      anon_sym_LPAREN,
    ACTIONS(1000), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(71), 2,
      sym_sexp,
      aux_sym__stanza_foreign_library_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [4770] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(637), 1,
      anon_sym_LPAREN,
    ACTIONS(1002), 1,
      anon_sym_RPAREN,
    STATE(153), 1,
      aux_sym__field_buildable_multi_repeat2,
    ACTIONS(635), 2,
      sym_multiline_string,
      sym__atom,
    STATE(405), 2,
      sym__lib_dep,
      sym_library_name,
    STATE(442), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [4798] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(722), 1,
      anon_sym_LPAREN,
    ACTIONS(1004), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(128), 2,
      sym_sexp,
      aux_sym__context_opam_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [4824] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(1006), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      sym_multiline_string,
      sym__atom,
    STATE(126), 2,
      sym_sexp,
      aux_sym_sexps1_repeat1,
    STATE(633), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [4850] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(1010), 1,
      anon_sym_LPAREN,
    ACTIONS(1012), 1,
      anon_sym_RPAREN,
    ACTIONS(1008), 2,
      sym_multiline_string,
      sym__atom,
    STATE(178), 2,
      sym_blang,
      aux_sym_blang_repeat1,
    STATE(408), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [4875] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(870), 1,
      anon_sym_LPAREN,
    ACTIONS(536), 2,
      sym_multiline_string,
      sym__atom,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(127), 3,
      sym_file_name,
      sym__dep,
      aux_sym__deps_field_repeat1,
  [4898] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_DQUOTE,
    ACTIONS(1020), 1,
      anon_sym_LPAREN,
    ACTIONS(1023), 1,
      anon_sym_RPAREN,
    ACTIONS(1017), 2,
      sym_multiline_string,
      sym__atom,
    STATE(178), 2,
      sym_blang,
      aux_sym_blang_repeat1,
    STATE(408), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [4923] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(1027), 1,
      anon_sym_LPAREN,
    ACTIONS(1029), 1,
      anon_sym_RPAREN,
    ACTIONS(1025), 2,
      sym_multiline_string,
      sym__atom,
    STATE(182), 4,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__version_constraint,
      aux_sym__package_dep_repeat1,
  [4946] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(920), 1,
      anon_sym_LPAREN,
    ACTIONS(918), 2,
      sym_multiline_string,
      sym__atom,
    STATE(379), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(141), 3,
      sym_package_name,
      sym__package_dep,
      aux_sym__stanza_package_repeat1,
  [4969] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(870), 1,
      anon_sym_LPAREN,
    ACTIONS(536), 2,
      sym_multiline_string,
      sym__atom,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(136), 3,
      sym_file_name,
      sym__dep,
      aux_sym__deps_field_repeat1,
  [4992] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 1,
      anon_sym_DQUOTE,
    ACTIONS(1037), 1,
      anon_sym_LPAREN,
    ACTIONS(1040), 1,
      anon_sym_RPAREN,
    ACTIONS(1034), 2,
      sym_multiline_string,
      sym__atom,
    STATE(182), 4,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__version_constraint,
      aux_sym__package_dep_repeat1,
  [5015] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(1027), 1,
      anon_sym_LPAREN,
    ACTIONS(1042), 1,
      anon_sym_RPAREN,
    ACTIONS(1025), 2,
      sym_multiline_string,
      sym__atom,
    STATE(182), 4,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__version_constraint,
      aux_sym__package_dep_repeat1,
  [5038] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 1,
      sym_named_variable,
    ACTIONS(1046), 1,
      anon_sym_alias,
    ACTIONS(1048), 1,
      anon_sym_package,
    ACTIONS(1050), 1,
      anon_sym_universe,
    ACTIONS(1054), 1,
      anon_sym_alias_rec,
    ACTIONS(1056), 1,
      anon_sym_source_tree,
    ACTIONS(1058), 1,
      anon_sym_glob_files,
    ACTIONS(1052), 2,
      anon_sym_sandbox,
      anon_sym_env_var,
  [5067] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(203), 1,
      sym_blang_op,
    ACTIONS(1062), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(1060), 6,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_and,
  [5086] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(870), 1,
      anon_sym_LPAREN,
    ACTIONS(536), 2,
      sym_multiline_string,
      sym__atom,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(171), 3,
      sym_file_name,
      sym__dep,
      aux_sym__deps_field_repeat1,
  [5109] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(870), 1,
      anon_sym_LPAREN,
    ACTIONS(536), 2,
      sym_multiline_string,
      sym__atom,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
    STATE(170), 3,
      sym_file_name,
      sym__dep,
      aux_sym__deps_field_repeat1,
  [5132] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(816), 1,
      anon_sym_RPAREN,
    ACTIONS(536), 2,
      sym_multiline_string,
      sym__atom,
    STATE(199), 2,
      sym_file_name,
      aux_sym_stanza_repeat2,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [5154] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1064), 1,
      anon_sym_DQUOTE,
    ACTIONS(1070), 1,
      anon_sym_RPAREN,
    ACTIONS(1067), 2,
      sym_multiline_string,
      sym__atom,
    STATE(189), 2,
      sym_lock_name,
      aux_sym__stanza_rule_repeat3,
    STATE(716), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [5176] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1072), 1,
      anon_sym_RPAREN,
    ACTIONS(536), 2,
      sym_multiline_string,
      sym__atom,
    STATE(196), 2,
      sym_file_name,
      aux_sym_stanza_repeat2,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [5198] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1074), 1,
      anon_sym_RPAREN,
    ACTIONS(643), 2,
      sym_multiline_string,
      sym__atom,
    STATE(193), 2,
      sym_module_name,
      aux_sym__field_modules_maybe_inline_repeat1,
    STATE(602), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [5220] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1072), 1,
      anon_sym_RPAREN,
    ACTIONS(918), 2,
      sym_multiline_string,
      sym__atom,
    STATE(195), 2,
      sym_package_name,
      aux_sym__stanza_package_repeat2,
    STATE(379), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [5242] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      anon_sym_DQUOTE,
    ACTIONS(1082), 1,
      anon_sym_RPAREN,
    ACTIONS(1079), 2,
      sym_multiline_string,
      sym__atom,
    STATE(193), 2,
      sym_module_name,
      aux_sym__field_modules_maybe_inline_repeat1,
    STATE(602), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [5264] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(1027), 1,
      anon_sym_LPAREN,
    ACTIONS(1084), 2,
      sym_multiline_string,
      sym__atom,
    STATE(183), 4,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__version_constraint,
      aux_sym__package_dep_repeat1,
  [5284] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(998), 1,
      anon_sym_RPAREN,
    ACTIONS(918), 2,
      sym_multiline_string,
      sym__atom,
    STATE(211), 2,
      sym_package_name,
      aux_sym__stanza_package_repeat2,
    STATE(379), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [5306] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(998), 1,
      anon_sym_RPAREN,
    ACTIONS(536), 2,
      sym_multiline_string,
      sym__atom,
    STATE(199), 2,
      sym_file_name,
      aux_sym_stanza_repeat2,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [5328] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1086), 1,
      anon_sym_RPAREN,
    ACTIONS(643), 2,
      sym_multiline_string,
      sym__atom,
    STATE(191), 2,
      sym_module_name,
      aux_sym__field_modules_maybe_inline_repeat1,
    STATE(602), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [5350] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1088), 1,
      anon_sym_LPAREN,
    STATE(809), 1,
      sym_sexp,
    ACTIONS(11), 2,
      sym_multiline_string,
      sym__atom,
    STATE(274), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__list,
  [5372] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 1,
      anon_sym_DQUOTE,
    ACTIONS(1096), 1,
      anon_sym_RPAREN,
    ACTIONS(1093), 2,
      sym_multiline_string,
      sym__atom,
    STATE(199), 2,
      sym_file_name,
      aux_sym_stanza_repeat2,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [5394] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(1102), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(1098), 4,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [5412] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1104), 1,
      anon_sym_RPAREN,
    ACTIONS(643), 2,
      sym_multiline_string,
      sym__atom,
    STATE(208), 2,
      sym_module_name,
      aux_sym__field_modules_maybe_inline_repeat1,
    STATE(602), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [5434] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1106), 1,
      anon_sym_RPAREN,
    ACTIONS(536), 2,
      sym_multiline_string,
      sym__atom,
    STATE(199), 2,
      sym_file_name,
      aux_sym_stanza_repeat2,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [5456] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(1010), 1,
      anon_sym_LPAREN,
    ACTIONS(1008), 2,
      sym_multiline_string,
      sym__atom,
    STATE(176), 2,
      sym_blang,
      aux_sym_blang_repeat1,
    STATE(408), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [5478] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      anon_sym_DQUOTE,
    ACTIONS(1114), 1,
      anon_sym_RPAREN,
    ACTIONS(1111), 2,
      sym_multiline_string,
      sym__atom,
    STATE(204), 2,
      sym_public_name,
      aux_sym__field_buildable_multi_repeat1,
    STATE(714), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [5500] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 1,
      anon_sym_DQUOTE,
    ACTIONS(1122), 1,
      anon_sym_RPAREN,
    ACTIONS(1119), 2,
      sym_multiline_string,
      sym__atom,
    STATE(205), 2,
      sym_alias_name,
      aux_sym__stanza_rule_repeat2,
    STATE(712), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [5522] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(922), 1,
      anon_sym_RPAREN,
    ACTIONS(918), 2,
      sym_multiline_string,
      sym__atom,
    STATE(211), 2,
      sym_package_name,
      aux_sym__stanza_package_repeat2,
    STATE(379), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [5544] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1124), 1,
      anon_sym_RPAREN,
    ACTIONS(643), 2,
      sym_multiline_string,
      sym__atom,
    STATE(193), 2,
      sym_module_name,
      aux_sym__field_modules_maybe_inline_repeat1,
    STATE(602), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [5566] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1126), 1,
      anon_sym_RPAREN,
    ACTIONS(643), 2,
      sym_multiline_string,
      sym__atom,
    STATE(193), 2,
      sym_module_name,
      aux_sym__field_modules_maybe_inline_repeat1,
    STATE(602), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [5588] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1128), 1,
      anon_sym_RPAREN,
    ACTIONS(536), 2,
      sym_multiline_string,
      sym__atom,
    STATE(199), 2,
      sym_file_name,
      aux_sym_stanza_repeat2,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [5610] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
    ACTIONS(536), 2,
      sym_multiline_string,
      sym__atom,
    STATE(188), 2,
      sym_file_name,
      aux_sym_stanza_repeat2,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [5632] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1130), 1,
      anon_sym_DQUOTE,
    ACTIONS(1136), 1,
      anon_sym_RPAREN,
    ACTIONS(1133), 2,
      sym_multiline_string,
      sym__atom,
    STATE(211), 2,
      sym_package_name,
      aux_sym__stanza_package_repeat2,
    STATE(379), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [5654] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(1027), 1,
      anon_sym_LPAREN,
    ACTIONS(1138), 2,
      sym_multiline_string,
      sym__atom,
    STATE(179), 4,
      sym__atom_or_qs,
      sym_quoted_string,
      sym__version_constraint,
      aux_sym__package_dep_repeat1,
  [5674] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(895), 1,
      anon_sym_RPAREN,
    ACTIONS(536), 2,
      sym_multiline_string,
      sym__atom,
    STATE(199), 2,
      sym_file_name,
      aux_sym_stanza_repeat2,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [5696] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1140), 1,
      anon_sym_RPAREN,
    ACTIONS(643), 2,
      sym_multiline_string,
      sym__atom,
    STATE(193), 2,
      sym_module_name,
      aux_sym__field_modules_maybe_inline_repeat1,
    STATE(602), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [5718] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1142), 1,
      anon_sym_RPAREN,
    ACTIONS(643), 2,
      sym_multiline_string,
      sym__atom,
    STATE(193), 2,
      sym_module_name,
      aux_sym__field_modules_maybe_inline_repeat1,
    STATE(602), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [5740] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1142), 1,
      anon_sym_RPAREN,
    ACTIONS(1144), 2,
      sym_multiline_string,
      sym__atom,
    STATE(204), 2,
      sym_public_name,
      aux_sym__field_buildable_multi_repeat1,
    STATE(714), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [5762] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
    ACTIONS(1146), 2,
      sym_multiline_string,
      sym__atom,
    STATE(189), 2,
      sym_lock_name,
      aux_sym__stanza_rule_repeat3,
    STATE(716), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [5784] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_RPAREN,
    ACTIONS(536), 2,
      sym_multiline_string,
      sym__atom,
    STATE(213), 2,
      sym_file_name,
      aux_sym_stanza_repeat2,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [5806] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
    ACTIONS(1148), 2,
      sym_multiline_string,
      sym__atom,
    STATE(205), 2,
      sym_alias_name,
      aux_sym__stanza_rule_repeat2,
    STATE(712), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [5828] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1152), 1,
      anon_sym_RPAREN,
    ACTIONS(1150), 2,
      sym_multiline_string,
      sym__atom,
    STATE(250), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      aux_sym__dep_repeat1,
  [5847] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(643), 2,
      sym_multiline_string,
      sym__atom,
    STATE(207), 2,
      sym_module_name,
      aux_sym__field_modules_maybe_inline_repeat1,
    STATE(602), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [5866] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(717), 1,
      sym_file_name,
    STATE(763), 1,
      sym_file_name_dep,
    ACTIONS(536), 2,
      sym_multiline_string,
      sym__atom,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [5887] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1074), 1,
      anon_sym_RPAREN,
    ACTIONS(1154), 2,
      sym_multiline_string,
      sym__atom,
    STATE(224), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      aux_sym__dep_repeat1,
  [5906] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1156), 1,
      anon_sym_DQUOTE,
    ACTIONS(1162), 1,
      anon_sym_RPAREN,
    ACTIONS(1159), 2,
      sym_multiline_string,
      sym__atom,
    STATE(224), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      aux_sym__dep_repeat1,
  [5925] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(422), 1,
      sym_file_name,
    STATE(763), 1,
      sym_file_name_target,
    ACTIONS(536), 2,
      sym_multiline_string,
      sym__atom,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [5946] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1164), 1,
      anon_sym_RPAREN,
    ACTIONS(1154), 2,
      sym_multiline_string,
      sym__atom,
    STATE(224), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      aux_sym__dep_repeat1,
  [5965] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1166), 1,
      anon_sym_RPAREN,
    ACTIONS(1154), 2,
      sym_multiline_string,
      sym__atom,
    STATE(224), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      aux_sym__dep_repeat1,
  [5984] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1124), 1,
      anon_sym_RPAREN,
    ACTIONS(1154), 2,
      sym_multiline_string,
      sym__atom,
    STATE(224), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      aux_sym__dep_repeat1,
  [6003] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1164), 1,
      anon_sym_RPAREN,
    ACTIONS(1168), 2,
      sym_multiline_string,
      sym__atom,
    STATE(227), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      aux_sym__dep_repeat1,
  [6022] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1170), 1,
      anon_sym_RPAREN,
    ACTIONS(1154), 2,
      sym_multiline_string,
      sym__atom,
    STATE(224), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      aux_sym__dep_repeat1,
  [6041] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(536), 2,
      sym_multiline_string,
      sym__atom,
    STATE(209), 2,
      sym_file_name,
      aux_sym_stanza_repeat2,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [6060] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(422), 1,
      sym_file_name,
    STATE(798), 1,
      sym_file_name_target,
    ACTIONS(536), 2,
      sym_multiline_string,
      sym__atom,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [6081] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(885), 1,
      anon_sym_RPAREN,
    ACTIONS(1172), 2,
      sym_multiline_string,
      sym__atom,
    STATE(248), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      aux_sym__dep_repeat1,
  [6100] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1176), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      aux_sym__stanza_authors_repeat1,
    ACTIONS(1174), 2,
      sym_multiline_string,
      sym__atom,
    STATE(704), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [6121] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(922), 1,
      anon_sym_RPAREN,
    ACTIONS(1154), 2,
      sym_multiline_string,
      sym__atom,
    STATE(224), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      aux_sym__dep_repeat1,
  [6140] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(872), 1,
      anon_sym_RPAREN,
    ACTIONS(1154), 2,
      sym_multiline_string,
      sym__atom,
    STATE(224), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      aux_sym__dep_repeat1,
  [6159] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1178), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      aux_sym__stanza_authors_repeat1,
    ACTIONS(1174), 2,
      sym_multiline_string,
      sym__atom,
    STATE(704), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [6180] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1182), 1,
      anon_sym_RPAREN,
    STATE(241), 1,
      aux_sym__stanza_maintainers_repeat1,
    ACTIONS(1180), 2,
      sym_multiline_string,
      sym__atom,
    STATE(702), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [6201] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1086), 1,
      anon_sym_RPAREN,
    ACTIONS(1184), 2,
      sym_multiline_string,
      sym__atom,
    STATE(223), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      aux_sym__dep_repeat1,
  [6220] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1186), 1,
      anon_sym_DQUOTE,
    ACTIONS(1192), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      aux_sym__stanza_authors_repeat1,
    ACTIONS(1189), 2,
      sym_multiline_string,
      sym__atom,
    STATE(704), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [6241] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1194), 1,
      anon_sym_DQUOTE,
    ACTIONS(1200), 1,
      anon_sym_RPAREN,
    STATE(241), 1,
      aux_sym__stanza_maintainers_repeat1,
    ACTIONS(1197), 2,
      sym_multiline_string,
      sym__atom,
    STATE(702), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [6262] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1010), 1,
      anon_sym_LPAREN,
    STATE(789), 1,
      sym_blang,
    ACTIONS(1008), 2,
      sym_multiline_string,
      sym__atom,
    STATE(408), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [6283] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1202), 1,
      anon_sym_RPAREN,
    ACTIONS(1154), 2,
      sym_multiline_string,
      sym__atom,
    STATE(224), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      aux_sym__dep_repeat1,
  [6302] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1206), 1,
      anon_sym_RPAREN,
    ACTIONS(1204), 2,
      sym_multiline_string,
      sym__atom,
    STATE(228), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      aux_sym__dep_repeat1,
  [6321] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1010), 1,
      anon_sym_LPAREN,
    STATE(784), 1,
      sym_blang,
    ACTIONS(1008), 2,
      sym_multiline_string,
      sym__atom,
    STATE(408), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [6342] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(918), 2,
      sym_multiline_string,
      sym__atom,
    STATE(206), 2,
      sym_package_name,
      aux_sym__stanza_package_repeat2,
    STATE(379), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [6361] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1210), 1,
      anon_sym_RPAREN,
    ACTIONS(1208), 2,
      sym_multiline_string,
      sym__atom,
    STATE(230), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      aux_sym__dep_repeat1,
  [6380] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(820), 1,
      anon_sym_RPAREN,
    ACTIONS(1154), 2,
      sym_multiline_string,
      sym__atom,
    STATE(224), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      aux_sym__dep_repeat1,
  [6399] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1010), 1,
      anon_sym_LPAREN,
    STATE(858), 1,
      sym_blang,
    ACTIONS(1008), 2,
      sym_multiline_string,
      sym__atom,
    STATE(408), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [6420] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(996), 1,
      anon_sym_RPAREN,
    ACTIONS(1154), 2,
      sym_multiline_string,
      sym__atom,
    STATE(224), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      aux_sym__dep_repeat1,
  [6439] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(536), 2,
      sym_multiline_string,
      sym__atom,
    STATE(202), 2,
      sym_file_name,
      aux_sym_stanza_repeat2,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [6458] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1212), 1,
      anon_sym_RPAREN,
    STATE(241), 1,
      aux_sym__stanza_maintainers_repeat1,
    ACTIONS(1180), 2,
      sym_multiline_string,
      sym__atom,
    STATE(702), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [6479] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(643), 2,
      sym_multiline_string,
      sym__atom,
    STATE(215), 2,
      sym_module_name,
      aux_sym__field_modules_maybe_inline_repeat1,
    STATE(602), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [6498] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1144), 2,
      sym_multiline_string,
      sym__atom,
    STATE(216), 2,
      sym_public_name,
      aux_sym__field_buildable_multi_repeat1,
    STATE(714), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [6517] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1010), 1,
      anon_sym_LPAREN,
    STATE(846), 1,
      sym_blang,
    ACTIONS(1008), 2,
      sym_multiline_string,
      sym__atom,
    STATE(408), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [6538] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1010), 1,
      anon_sym_LPAREN,
    STATE(836), 1,
      sym_blang,
    ACTIONS(1008), 2,
      sym_multiline_string,
      sym__atom,
    STATE(408), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [6559] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1214), 1,
      anon_sym_RPAREN,
    ACTIONS(1154), 2,
      sym_multiline_string,
      sym__atom,
    STATE(224), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      aux_sym__dep_repeat1,
  [6578] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1148), 2,
      sym_multiline_string,
      sym__atom,
    STATE(219), 2,
      sym_alias_name,
      aux_sym__stanza_rule_repeat2,
    STATE(712), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [6597] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1010), 1,
      anon_sym_LPAREN,
    STATE(834), 1,
      sym_blang,
    ACTIONS(1008), 2,
      sym_multiline_string,
      sym__atom,
    STATE(408), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [6618] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1146), 2,
      sym_multiline_string,
      sym__atom,
    STATE(217), 2,
      sym_lock_name,
      aux_sym__stanza_rule_repeat3,
    STATE(716), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [6637] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(717), 1,
      sym_file_name,
    STATE(761), 1,
      sym_file_name_dep,
    ACTIONS(536), 2,
      sym_multiline_string,
      sym__atom,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [6658] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(222), 1,
      sym_file_name_dep,
    STATE(717), 1,
      sym_file_name,
    ACTIONS(536), 2,
      sym_multiline_string,
      sym__atom,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [6679] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(225), 1,
      sym_file_name_dep,
    STATE(717), 1,
      sym_file_name,
    ACTIONS(536), 2,
      sym_multiline_string,
      sym__atom,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [6700] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(229), 1,
      sym_file_name_dep,
    STATE(717), 1,
      sym_file_name,
    ACTIONS(536), 2,
      sym_multiline_string,
      sym__atom,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [6721] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(422), 1,
      sym_file_name,
    STATE(754), 1,
      sym_file_name_target,
    ACTIONS(536), 2,
      sym_multiline_string,
      sym__atom,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [6742] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(422), 1,
      sym_file_name,
    STATE(437), 1,
      sym_file_name_target,
    ACTIONS(536), 2,
      sym_multiline_string,
      sym__atom,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [6763] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(380), 1,
      sym_package_name,
    ACTIONS(918), 2,
      sym_multiline_string,
      sym__atom,
    STATE(379), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [6781] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(761), 1,
      sym_shell_command,
    ACTIONS(1216), 2,
      sym_multiline_string,
      sym__atom,
    STATE(818), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [6799] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(850), 1,
      sym_library_name,
    ACTIONS(635), 2,
      sym_multiline_string,
      sym__atom,
    STATE(442), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [6817] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(884), 1,
      sym_file_name,
    ACTIONS(536), 2,
      sym_multiline_string,
      sym__atom,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [6835] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(754), 1,
      sym_file_name,
    ACTIONS(536), 2,
      sym_multiline_string,
      sym__atom,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [6853] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(858), 1,
      sym_public_name,
    ACTIONS(1144), 2,
      sym_multiline_string,
      sym__atom,
    STATE(714), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [6871] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1218), 2,
      sym_multiline_string,
      sym__atom,
    STATE(226), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      aux_sym__dep_repeat1,
  [6887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1222), 1,
      anon_sym_DQUOTE,
    ACTIONS(1220), 5,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6901] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      sym_file_name,
    ACTIONS(536), 2,
      sym_multiline_string,
      sym__atom,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [6919] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(834), 1,
      sym_package_name,
    ACTIONS(918), 2,
      sym_multiline_string,
      sym__atom,
    STATE(379), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [6937] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(812), 1,
      sym_package_name,
    ACTIONS(918), 2,
      sym_multiline_string,
      sym__atom,
    STATE(379), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [6955] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(858), 1,
      sym_module_name,
    ACTIONS(643), 2,
      sym_multiline_string,
      sym__atom,
    STATE(602), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [6973] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1224), 2,
      sym_multiline_string,
      sym__atom,
    STATE(235), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      aux_sym__dep_repeat1,
  [6989] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(562), 1,
      sym_package_name,
    ACTIONS(918), 2,
      sym_multiline_string,
      sym__atom,
    STATE(379), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [7007] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(831), 1,
      sym_file_name,
    ACTIONS(536), 2,
      sym_multiline_string,
      sym__atom,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [7025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1228), 1,
      anon_sym_DQUOTE,
    ACTIONS(1226), 5,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7039] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1232), 1,
      anon_sym_LPAREN,
    ACTIONS(1230), 2,
      sym_multiline_string,
      sym__atom,
    STATE(823), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [7057] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(860), 1,
      sym_alias_name,
    ACTIONS(1148), 2,
      sym_multiline_string,
      sym__atom,
    STATE(712), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [7075] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(269), 1,
      sym_library_name,
    ACTIONS(635), 2,
      sym_multiline_string,
      sym__atom,
    STATE(442), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [7093] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(807), 1,
      sym_module_name,
    ACTIONS(643), 2,
      sym_multiline_string,
      sym__atom,
    STATE(602), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [7111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1236), 1,
      anon_sym_DQUOTE,
    ACTIONS(1234), 5,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7125] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(238), 1,
      aux_sym__stanza_maintainers_repeat1,
    ACTIONS(1180), 2,
      sym_multiline_string,
      sym__atom,
    STATE(702), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [7143] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(237), 1,
      aux_sym__stanza_authors_repeat1,
    ACTIONS(1174), 2,
      sym_multiline_string,
      sym__atom,
    STATE(704), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [7161] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(804), 1,
      sym_package_name,
    ACTIONS(918), 2,
      sym_multiline_string,
      sym__atom,
    STATE(379), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [7179] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(293), 1,
      sym_library_name,
    ACTIONS(635), 2,
      sym_multiline_string,
      sym__atom,
    STATE(442), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [7197] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(212), 1,
      sym_package_name,
    ACTIONS(918), 2,
      sym_multiline_string,
      sym__atom,
    STATE(379), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [7215] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(864), 1,
      sym_library_name,
    ACTIONS(635), 2,
      sym_multiline_string,
      sym__atom,
    STATE(442), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [7233] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(805), 1,
      sym_file_name,
    ACTIONS(536), 2,
      sym_multiline_string,
      sym__atom,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [7251] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(797), 1,
      sym_file_name,
    ACTIONS(536), 2,
      sym_multiline_string,
      sym__atom,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [7269] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1238), 2,
      sym_multiline_string,
      sym__atom,
    STATE(257), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      aux_sym__dep_repeat1,
  [7285] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1240), 2,
      sym_multiline_string,
      sym__atom,
    STATE(243), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      aux_sym__dep_repeat1,
  [7301] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1244), 1,
      anon_sym_LPAREN,
    ACTIONS(1242), 2,
      sym_multiline_string,
      sym__atom,
    STATE(779), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [7319] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(789), 1,
      sym_alias_name,
    ACTIONS(1148), 2,
      sym_multiline_string,
      sym__atom,
    STATE(712), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [7337] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(829), 1,
      sym_library_name,
    ACTIONS(635), 2,
      sym_multiline_string,
      sym__atom,
    STATE(442), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [7355] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(789), 1,
      sym_file_name,
    ACTIONS(536), 2,
      sym_multiline_string,
      sym__atom,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [7373] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(252), 1,
      aux_sym__stanza_maintainers_repeat1,
    ACTIONS(1180), 2,
      sym_multiline_string,
      sym__atom,
    STATE(702), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [7391] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1246), 2,
      sym_multiline_string,
      sym__atom,
    STATE(236), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      aux_sym__dep_repeat1,
  [7407] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(784), 1,
      sym_module_name,
    ACTIONS(643), 2,
      sym_multiline_string,
      sym__atom,
    STATE(602), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [7425] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(873), 1,
      sym_file_name,
    ACTIONS(536), 2,
      sym_multiline_string,
      sym__atom,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [7443] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(873), 1,
      sym_package_name,
    ACTIONS(918), 2,
      sym_multiline_string,
      sym__atom,
    STATE(379), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [7461] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(234), 1,
      aux_sym__stanza_authors_repeat1,
    ACTIONS(1174), 2,
      sym_multiline_string,
      sym__atom,
    STATE(704), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [7479] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1208), 2,
      sym_multiline_string,
      sym__atom,
    STATE(230), 3,
      sym__atom_or_qs,
      sym_quoted_string,
      aux_sym__dep_repeat1,
  [7495] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(873), 1,
      sym_alias_name,
    ACTIONS(1148), 2,
      sym_multiline_string,
      sym__atom,
    STATE(712), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [7513] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_file_name,
    ACTIONS(536), 2,
      sym_multiline_string,
      sym__atom,
    STATE(588), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [7531] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(780), 1,
      sym_module_name,
    ACTIONS(643), 2,
      sym_multiline_string,
      sym__atom,
    STATE(602), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [7549] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1250), 1,
      anon_sym_DQUOTE,
    ACTIONS(1248), 5,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7563] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1254), 1,
      anon_sym_DQUOTE,
    ACTIONS(1252), 5,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1256), 1,
      anon_sym_DQUOTE,
    ACTIONS(1258), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7590] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1260), 1,
      anon_sym_DQUOTE,
    ACTIONS(1262), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7603] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1264), 2,
      sym_multiline_string,
      sym__atom,
    STATE(876), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [7618] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1266), 2,
      sym_multiline_string,
      sym__atom,
    STATE(812), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [7633] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1270), 1,
      anon_sym_DQUOTE,
    ACTIONS(1268), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [7646] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1272), 2,
      sym_multiline_string,
      sym__atom,
    STATE(875), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [7661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1276), 1,
      anon_sym_DQUOTE,
    ACTIONS(1274), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [7674] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1278), 2,
      sym_multiline_string,
      sym__atom,
    STATE(344), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [7689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1282), 1,
      anon_sym_DQUOTE,
    ACTIONS(1280), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [7702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1286), 1,
      anon_sym_DQUOTE,
    ACTIONS(1284), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [7715] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1288), 2,
      sym_multiline_string,
      sym__atom,
    STATE(803), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [7730] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1290), 2,
      sym_multiline_string,
      sym__atom,
    STATE(802), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [7745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1294), 1,
      anon_sym_DQUOTE,
    ACTIONS(1292), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [7758] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1296), 2,
      sym_multiline_string,
      sym__atom,
    STATE(834), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [7773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1300), 1,
      anon_sym_DQUOTE,
    ACTIONS(1298), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [7786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1304), 1,
      anon_sym_DQUOTE,
    ACTIONS(1302), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [7799] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1308), 1,
      anon_sym_DQUOTE,
    ACTIONS(1306), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [7812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 1,
      anon_sym_DQUOTE,
    ACTIONS(1310), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [7825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1316), 1,
      anon_sym_DQUOTE,
    ACTIONS(1314), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [7838] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1318), 2,
      sym_multiline_string,
      sym__atom,
    STATE(347), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [7853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1322), 1,
      anon_sym_DQUOTE,
    ACTIONS(1320), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [7866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1326), 1,
      anon_sym_DQUOTE,
    ACTIONS(1324), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [7879] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1330), 1,
      anon_sym_DQUOTE,
    ACTIONS(1328), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [7892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1334), 1,
      anon_sym_DQUOTE,
    ACTIONS(1332), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [7905] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1338), 1,
      anon_sym_DQUOTE,
    ACTIONS(1336), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [7918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1342), 1,
      anon_sym_DQUOTE,
    ACTIONS(1340), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [7931] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1346), 1,
      anon_sym_DQUOTE,
    ACTIONS(1344), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [7944] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1350), 1,
      anon_sym_DQUOTE,
    ACTIONS(1348), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [7957] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1354), 1,
      anon_sym_DQUOTE,
    ACTIONS(1352), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [7970] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_DQUOTE,
    ACTIONS(1356), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [7983] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1360), 2,
      sym_multiline_string,
      sym__atom,
    STATE(849), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [7998] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1362), 2,
      sym_multiline_string,
      sym__atom,
    STATE(809), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [8013] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1366), 1,
      anon_sym_DQUOTE,
    ACTIONS(1364), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8026] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1368), 2,
      sym_multiline_string,
      sym__atom,
    STATE(848), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [8041] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1370), 1,
      anon_sym_LPAREN,
    ACTIONS(1372), 1,
      anon_sym_RPAREN,
    STATE(809), 1,
      sym__bool,
    ACTIONS(1362), 2,
      anon_sym_true,
      anon_sym_false,
  [8058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1376), 1,
      anon_sym_DQUOTE,
    ACTIONS(1374), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8071] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1380), 1,
      anon_sym_DQUOTE,
    ACTIONS(1378), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8084] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1382), 2,
      sym_multiline_string,
      sym__atom,
    STATE(844), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [8099] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1384), 2,
      sym_multiline_string,
      sym__atom,
    STATE(841), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [8114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1388), 1,
      anon_sym_DQUOTE,
    ACTIONS(1386), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1390), 2,
      sym_multiline_string,
      sym__atom,
    STATE(436), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [8142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1394), 1,
      anon_sym_DQUOTE,
    ACTIONS(1392), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8155] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(1396), 2,
      sym_multiline_string,
      sym__atom,
    STATE(754), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [8170] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1400), 1,
      anon_sym_DQUOTE,
    ACTIONS(1398), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8183] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1402), 2,
      sym_multiline_string,
      sym__atom,
    STATE(781), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [8198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1406), 1,
      anon_sym_DQUOTE,
    ACTIONS(1404), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8211] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1410), 1,
      anon_sym_DQUOTE,
    ACTIONS(1408), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8224] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1412), 2,
      sym_multiline_string,
      sym__atom,
    STATE(838), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [8239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 1,
      anon_sym_DQUOTE,
    ACTIONS(1414), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_DQUOTE,
    ACTIONS(1356), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_DQUOTE,
    ACTIONS(1356), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1420), 1,
      anon_sym_DQUOTE,
    ACTIONS(1418), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8291] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1422), 2,
      sym_multiline_string,
      sym__atom,
    STATE(804), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [8306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1426), 1,
      anon_sym_DQUOTE,
    ACTIONS(1424), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8319] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1428), 2,
      sym_multiline_string,
      sym__atom,
    STATE(828), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [8334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1432), 1,
      anon_sym_DQUOTE,
    ACTIONS(1430), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1436), 1,
      anon_sym_DQUOTE,
    ACTIONS(1434), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1440), 1,
      anon_sym_DQUOTE,
    ACTIONS(1438), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1444), 1,
      anon_sym_DQUOTE,
    ACTIONS(1442), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8386] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1446), 2,
      sym_multiline_string,
      sym__atom,
    STATE(771), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [8401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1450), 1,
      anon_sym_DQUOTE,
    ACTIONS(1448), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1454), 1,
      anon_sym_DQUOTE,
    ACTIONS(1452), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1458), 1,
      anon_sym_DQUOTE,
    ACTIONS(1456), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8440] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1460), 2,
      sym_multiline_string,
      sym__atom,
    STATE(827), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [8455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1464), 1,
      anon_sym_DQUOTE,
    ACTIONS(1462), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1466), 1,
      anon_sym_DQUOTE,
    ACTIONS(1468), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [8481] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1470), 2,
      sym_multiline_string,
      sym__atom,
    STATE(769), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [8496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1474), 1,
      anon_sym_DQUOTE,
    ACTIONS(1472), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_DQUOTE,
    ACTIONS(1356), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1478), 1,
      anon_sym_DQUOTE,
    ACTIONS(1476), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1482), 1,
      anon_sym_DQUOTE,
    ACTIONS(1480), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1486), 1,
      anon_sym_DQUOTE,
    ACTIONS(1484), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1490), 1,
      anon_sym_DQUOTE,
    ACTIONS(1488), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1494), 1,
      anon_sym_DQUOTE,
    ACTIONS(1492), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1498), 1,
      anon_sym_DQUOTE,
    ACTIONS(1496), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1502), 1,
      anon_sym_DQUOTE,
    ACTIONS(1500), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8613] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1506), 1,
      anon_sym_DQUOTE,
    ACTIONS(1504), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1510), 1,
      anon_sym_DQUOTE,
    ACTIONS(1508), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8639] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1512), 1,
      anon_sym_DQUOTE,
    ACTIONS(1514), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [8652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1518), 1,
      anon_sym_DQUOTE,
    ACTIONS(1516), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8665] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1520), 2,
      sym_multiline_string,
      sym__atom,
    STATE(822), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [8680] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1522), 2,
      sym_multiline_string,
      sym__atom,
    STATE(821), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [8695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1526), 1,
      anon_sym_DQUOTE,
    ACTIONS(1524), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1530), 1,
      anon_sym_DQUOTE,
    ACTIONS(1528), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1534), 1,
      anon_sym_DQUOTE,
    ACTIONS(1532), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1538), 1,
      anon_sym_DQUOTE,
    ACTIONS(1536), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8747] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1540), 2,
      sym_multiline_string,
      sym__atom,
    STATE(820), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [8762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1542), 1,
      anon_sym_DQUOTE,
    ACTIONS(1544), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [8775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_DQUOTE,
    ACTIONS(1356), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_DQUOTE,
    ACTIONS(1356), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8801] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1546), 2,
      sym_multiline_string,
      sym__atom,
    STATE(816), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [8816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1548), 1,
      anon_sym_DQUOTE,
    ACTIONS(1550), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [8829] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1554), 1,
      anon_sym_DQUOTE,
    ACTIONS(1552), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8842] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1556), 2,
      sym_multiline_string,
      sym__atom,
    STATE(806), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [8857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1558), 1,
      anon_sym_DQUOTE,
    ACTIONS(1560), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [8870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_DQUOTE,
    ACTIONS(1356), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8883] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1562), 1,
      anon_sym_DQUOTE,
    ACTIONS(1564), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [8896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_DQUOTE,
    ACTIONS(1356), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8909] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1568), 1,
      anon_sym_DQUOTE,
    ACTIONS(1566), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1572), 1,
      anon_sym_DQUOTE,
    ACTIONS(1570), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8935] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_DQUOTE,
    ACTIONS(1356), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8948] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_DQUOTE,
    ACTIONS(1356), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1576), 1,
      anon_sym_DQUOTE,
    ACTIONS(1574), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1580), 1,
      anon_sym_DQUOTE,
    ACTIONS(1578), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [8987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1584), 1,
      anon_sym_DQUOTE,
    ACTIONS(1582), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1588), 1,
      anon_sym_DQUOTE,
    ACTIONS(1586), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9013] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1592), 1,
      anon_sym_DQUOTE,
    ACTIONS(1590), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9026] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1596), 1,
      anon_sym_DQUOTE,
    ACTIONS(1594), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1598), 1,
      anon_sym_DQUOTE,
    ACTIONS(1600), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [9052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1604), 1,
      anon_sym_DQUOTE,
    ACTIONS(1602), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1608), 1,
      anon_sym_DQUOTE,
    ACTIONS(1606), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1612), 1,
      anon_sym_DQUOTE,
    ACTIONS(1610), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9091] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1616), 1,
      anon_sym_DQUOTE,
    ACTIONS(1614), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1616), 1,
      anon_sym_DQUOTE,
    ACTIONS(1614), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1616), 1,
      anon_sym_DQUOTE,
    ACTIONS(1614), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1620), 1,
      anon_sym_DQUOTE,
    ACTIONS(1618), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1624), 1,
      anon_sym_DQUOTE,
    ACTIONS(1622), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1628), 1,
      anon_sym_DQUOTE,
    ACTIONS(1626), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1632), 1,
      anon_sym_DQUOTE,
    ACTIONS(1630), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_DQUOTE,
    ACTIONS(1356), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1636), 1,
      anon_sym_DQUOTE,
    ACTIONS(1634), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9208] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1640), 1,
      anon_sym_DQUOTE,
    ACTIONS(1638), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9221] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(1642), 2,
      sym_multiline_string,
      sym__atom,
    STATE(755), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [9236] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1644), 2,
      sym_multiline_string,
      sym__atom,
    STATE(763), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [9251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1648), 1,
      anon_sym_DQUOTE,
    ACTIONS(1646), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9264] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1650), 1,
      anon_sym_LPAREN,
    ACTIONS(1652), 1,
      anon_sym_RPAREN,
    STATE(758), 1,
      sym__deps_field,
    STATE(601), 2,
      sym_action,
      aux_sym__stanza_rule_repeat4,
  [9281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_DQUOTE,
    ACTIONS(1356), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1656), 1,
      anon_sym_DQUOTE,
    ACTIONS(1654), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1658), 1,
      anon_sym_DQUOTE,
    ACTIONS(1660), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [9320] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1664), 1,
      anon_sym_DQUOTE,
    ACTIONS(1662), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1668), 1,
      anon_sym_DQUOTE,
    ACTIONS(1666), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_DQUOTE,
    ACTIONS(1356), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_DQUOTE,
    ACTIONS(1356), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1670), 1,
      anon_sym_DQUOTE,
    ACTIONS(1672), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [9385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1676), 1,
      anon_sym_DQUOTE,
    ACTIONS(1674), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_DQUOTE,
    ACTIONS(1356), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1678), 1,
      anon_sym_DQUOTE,
    ACTIONS(1680), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [9424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1684), 1,
      anon_sym_DQUOTE,
    ACTIONS(1682), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9437] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1686), 1,
      anon_sym_DQUOTE,
    ACTIONS(1688), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [9450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_DQUOTE,
    ACTIONS(1356), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9463] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1222), 1,
      anon_sym_DQUOTE,
    ACTIONS(1690), 1,
      anon_sym_RPAREN,
    ACTIONS(1220), 3,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9478] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1694), 1,
      anon_sym_DQUOTE,
    ACTIONS(1692), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1696), 1,
      anon_sym_DQUOTE,
    ACTIONS(1698), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [9504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1702), 1,
      anon_sym_DQUOTE,
    ACTIONS(1700), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1706), 1,
      anon_sym_DQUOTE,
    ACTIONS(1704), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_DQUOTE,
    ACTIONS(1356), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1710), 1,
      anon_sym_DQUOTE,
    ACTIONS(1708), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1714), 1,
      anon_sym_DQUOTE,
    ACTIONS(1712), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1718), 1,
      anon_sym_DQUOTE,
    ACTIONS(1716), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9582] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1720), 2,
      sym_multiline_string,
      sym__atom,
    STATE(874), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [9597] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1650), 1,
      anon_sym_LPAREN,
    ACTIONS(1722), 1,
      anon_sym_RPAREN,
    STATE(758), 1,
      sym__deps_field,
    STATE(517), 2,
      sym_action,
      aux_sym__stanza_rule_repeat4,
  [9614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1724), 2,
      sym_multiline_string,
      sym__atom,
    STATE(498), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [9629] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1726), 2,
      sym_multiline_string,
      sym__atom,
    STATE(766), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [9644] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1728), 2,
      sym_multiline_string,
      sym__atom,
    STATE(770), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [9659] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1730), 2,
      sym_multiline_string,
      sym__atom,
    STATE(772), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [9674] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1732), 2,
      sym_multiline_string,
      sym__atom,
    STATE(774), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [9689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1734), 1,
      anon_sym_DQUOTE,
    ACTIONS(1736), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [9702] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1738), 2,
      sym_multiline_string,
      sym__atom,
    STATE(481), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [9717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1742), 1,
      anon_sym_DQUOTE,
    ACTIONS(1740), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9730] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1744), 1,
      anon_sym_DQUOTE,
    ACTIONS(1746), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [9743] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1748), 2,
      sym_multiline_string,
      sym__atom,
    STATE(799), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [9758] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1750), 2,
      sym_multiline_string,
      sym__atom,
    STATE(801), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [9773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1752), 1,
      anon_sym_DQUOTE,
    ACTIONS(1754), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [9786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1758), 1,
      anon_sym_DQUOTE,
    ACTIONS(1756), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9799] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1650), 1,
      anon_sym_LPAREN,
    ACTIONS(1760), 1,
      anon_sym_RPAREN,
    STATE(758), 1,
      sym__deps_field,
    STATE(439), 2,
      sym_action,
      aux_sym__stanza_rule_repeat4,
  [9816] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1762), 2,
      sym_multiline_string,
      sym__atom,
    STATE(811), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [9831] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1764), 1,
      anon_sym_DQUOTE,
    ACTIONS(1766), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [9844] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1768), 2,
      sym_multiline_string,
      sym__atom,
    STATE(879), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [9859] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1770), 2,
      sym_multiline_string,
      sym__atom,
    STATE(845), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [9874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1772), 1,
      anon_sym_DQUOTE,
    ACTIONS(1774), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [9887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1776), 1,
      anon_sym_DQUOTE,
    ACTIONS(1778), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [9900] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1780), 1,
      anon_sym_DQUOTE,
    ACTIONS(1782), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [9913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1784), 1,
      anon_sym_DQUOTE,
    ACTIONS(1786), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [9926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1790), 1,
      anon_sym_DQUOTE,
    ACTIONS(1788), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [9939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1790), 1,
      anon_sym_DQUOTE,
    ACTIONS(1788), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [9952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1792), 1,
      anon_sym_DQUOTE,
    ACTIONS(1794), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [9965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1714), 1,
      anon_sym_DQUOTE,
    ACTIONS(1712), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [9978] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1796), 1,
      anon_sym_DQUOTE,
    ACTIONS(1798), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [9991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1706), 1,
      anon_sym_DQUOTE,
    ACTIONS(1704), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10004] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1538), 1,
      anon_sym_DQUOTE,
    ACTIONS(1536), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1510), 1,
      anon_sym_DQUOTE,
    ACTIONS(1508), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10030] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1506), 1,
      anon_sym_DQUOTE,
    ACTIONS(1504), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10043] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1800), 2,
      sym_multiline_string,
      sym__atom,
    STATE(873), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [10058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1502), 1,
      anon_sym_DQUOTE,
    ACTIONS(1500), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10071] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1802), 2,
      sym_multiline_string,
      sym__atom,
    STATE(880), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [10086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1804), 1,
      anon_sym_DQUOTE,
    ACTIONS(1806), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10099] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1810), 1,
      anon_sym_DQUOTE,
    ACTIONS(1808), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [10112] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1498), 1,
      anon_sym_DQUOTE,
    ACTIONS(1496), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10125] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1494), 1,
      anon_sym_DQUOTE,
    ACTIONS(1492), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1812), 1,
      anon_sym_DQUOTE,
    ACTIONS(1814), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1818), 1,
      anon_sym_DQUOTE,
    ACTIONS(1816), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [10164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1822), 1,
      anon_sym_DQUOTE,
    ACTIONS(1820), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [10177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1824), 1,
      anon_sym_DQUOTE,
    ACTIONS(1826), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1830), 1,
      anon_sym_DQUOTE,
    ACTIONS(1828), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [10203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1490), 1,
      anon_sym_DQUOTE,
    ACTIONS(1488), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1832), 1,
      anon_sym_DQUOTE,
    ACTIONS(1834), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1836), 1,
      anon_sym_DQUOTE,
    ACTIONS(1838), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1842), 1,
      anon_sym_DQUOTE,
    ACTIONS(1840), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [10255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1844), 1,
      anon_sym_DQUOTE,
    ACTIONS(1846), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10268] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1848), 1,
      anon_sym_DQUOTE,
    ACTIONS(1850), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1486), 1,
      anon_sym_DQUOTE,
    ACTIONS(1484), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1854), 1,
      anon_sym_DQUOTE,
    ACTIONS(1852), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [10307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1482), 1,
      anon_sym_DQUOTE,
    ACTIONS(1480), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10320] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1650), 1,
      anon_sym_LPAREN,
    ACTIONS(1856), 1,
      anon_sym_RPAREN,
    STATE(758), 1,
      sym__deps_field,
    STATE(601), 2,
      sym_action,
      aux_sym__stanza_rule_repeat4,
  [10337] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1478), 1,
      anon_sym_DQUOTE,
    ACTIONS(1476), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1474), 1,
      anon_sym_DQUOTE,
    ACTIONS(1472), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1860), 1,
      anon_sym_DQUOTE,
    ACTIONS(1858), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [10376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1862), 1,
      anon_sym_DQUOTE,
    ACTIONS(1864), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1464), 1,
      anon_sym_DQUOTE,
    ACTIONS(1462), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1454), 1,
      anon_sym_DQUOTE,
    ACTIONS(1452), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10415] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1862), 1,
      anon_sym_DQUOTE,
    ACTIONS(1864), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10428] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1436), 1,
      anon_sym_DQUOTE,
    ACTIONS(1434), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10441] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1868), 1,
      anon_sym_DQUOTE,
    ACTIONS(1866), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [10454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1420), 1,
      anon_sym_DQUOTE,
    ACTIONS(1418), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1870), 1,
      anon_sym_DQUOTE,
    ACTIONS(1872), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1874), 1,
      anon_sym_DQUOTE,
    ACTIONS(1876), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1874), 1,
      anon_sym_DQUOTE,
    ACTIONS(1876), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1880), 1,
      anon_sym_DQUOTE,
    ACTIONS(1878), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [10519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1882), 1,
      anon_sym_DQUOTE,
    ACTIONS(1884), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10532] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1886), 2,
      sym_multiline_string,
      sym__atom,
    STATE(810), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [10547] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1888), 1,
      anon_sym_DQUOTE,
    ACTIONS(1890), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10560] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1892), 1,
      anon_sym_DQUOTE,
    ACTIONS(1894), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1896), 1,
      anon_sym_DQUOTE,
    ACTIONS(1898), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1900), 1,
      anon_sym_DQUOTE,
    ACTIONS(1902), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1406), 1,
      anon_sym_DQUOTE,
    ACTIONS(1404), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1394), 1,
      anon_sym_DQUOTE,
    ACTIONS(1392), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1388), 1,
      anon_sym_DQUOTE,
    ACTIONS(1386), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10638] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1904), 2,
      sym_multiline_string,
      sym__atom,
    STATE(813), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [10653] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1906), 2,
      sym_multiline_string,
      sym__atom,
    STATE(814), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [10668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1908), 1,
      anon_sym_DQUOTE,
    ACTIONS(1910), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10681] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1912), 2,
      sym_multiline_string,
      sym__atom,
    STATE(859), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [10696] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1914), 2,
      sym_multiline_string,
      sym__atom,
    STATE(762), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [10711] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1916), 2,
      sym_multiline_string,
      sym__atom,
    STATE(837), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [10726] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1918), 2,
      sym_multiline_string,
      sym__atom,
    STATE(847), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [10741] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1920), 2,
      sym_multiline_string,
      sym__atom,
    STATE(856), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [10756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1366), 1,
      anon_sym_DQUOTE,
    ACTIONS(1364), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1350), 1,
      anon_sym_DQUOTE,
    ACTIONS(1348), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10782] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1922), 2,
      sym_multiline_string,
      sym__atom,
    STATE(862), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [10797] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1924), 2,
      sym_multiline_string,
      sym__atom,
    STATE(863), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [10812] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1926), 2,
      sym_multiline_string,
      sym__atom,
    STATE(867), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [10827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1346), 1,
      anon_sym_DQUOTE,
    ACTIONS(1344), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1928), 1,
      anon_sym_DQUOTE,
    ACTIONS(1930), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1932), 1,
      anon_sym_DQUOTE,
    ACTIONS(1934), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1936), 1,
      anon_sym_DQUOTE,
    ACTIONS(1938), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10879] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1940), 1,
      anon_sym_DQUOTE,
    ACTIONS(1942), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1944), 1,
      anon_sym_DQUOTE,
    ACTIONS(1946), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10905] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1948), 1,
      anon_sym_DQUOTE,
    ACTIONS(1950), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1952), 1,
      anon_sym_DQUOTE,
    ACTIONS(1954), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10931] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(1956), 2,
      sym_multiline_string,
      sym__atom,
    STATE(869), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [10946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1958), 1,
      anon_sym_DQUOTE,
    ACTIONS(1960), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1962), 1,
      anon_sym_DQUOTE,
    ACTIONS(1964), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1342), 1,
      anon_sym_DQUOTE,
    ACTIONS(1340), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1968), 1,
      anon_sym_DQUOTE,
    ACTIONS(1966), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [10998] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1338), 1,
      anon_sym_DQUOTE,
    ACTIONS(1336), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11011] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1970), 1,
      anon_sym_DQUOTE,
    ACTIONS(1972), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1330), 1,
      anon_sym_DQUOTE,
    ACTIONS(1328), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1326), 1,
      anon_sym_DQUOTE,
    ACTIONS(1324), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11050] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1316), 1,
      anon_sym_DQUOTE,
    ACTIONS(1314), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1974), 1,
      anon_sym_DQUOTE,
    ACTIONS(1976), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 1,
      anon_sym_DQUOTE,
    ACTIONS(1310), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11089] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1308), 1,
      anon_sym_DQUOTE,
    ACTIONS(1306), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1300), 1,
      anon_sym_DQUOTE,
    ACTIONS(1298), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11115] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1294), 1,
      anon_sym_DQUOTE,
    ACTIONS(1292), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1286), 1,
      anon_sym_DQUOTE,
    ACTIONS(1284), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1282), 1,
      anon_sym_DQUOTE,
    ACTIONS(1280), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1980), 1,
      anon_sym_DQUOTE,
    ACTIONS(1978), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [11167] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1222), 1,
      anon_sym_DQUOTE,
    ACTIONS(1982), 1,
      anon_sym_RPAREN,
    ACTIONS(1220), 3,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [11182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1276), 1,
      anon_sym_DQUOTE,
    ACTIONS(1274), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1784), 1,
      anon_sym_DQUOTE,
    ACTIONS(1786), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [11208] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1780), 1,
      anon_sym_DQUOTE,
    ACTIONS(1782), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [11221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1776), 1,
      anon_sym_DQUOTE,
    ACTIONS(1778), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [11234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1270), 1,
      anon_sym_DQUOTE,
    ACTIONS(1268), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1426), 1,
      anon_sym_DQUOTE,
    ACTIONS(1424), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1984), 1,
      anon_sym_DQUOTE,
    ACTIONS(1986), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1988), 1,
      anon_sym_DQUOTE,
    ACTIONS(1990), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1992), 1,
      anon_sym_DQUOTE,
    ACTIONS(1994), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1400), 1,
      anon_sym_DQUOTE,
    ACTIONS(1398), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1380), 1,
      anon_sym_DQUOTE,
    ACTIONS(1378), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1354), 1,
      anon_sym_DQUOTE,
    ACTIONS(1352), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11338] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 1,
      anon_sym_DQUOTE,
    ACTIONS(1414), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1304), 1,
      anon_sym_DQUOTE,
    ACTIONS(1302), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1410), 1,
      anon_sym_DQUOTE,
    ACTIONS(1408), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1322), 1,
      anon_sym_DQUOTE,
    ACTIONS(1320), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1432), 1,
      anon_sym_DQUOTE,
    ACTIONS(1430), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1440), 1,
      anon_sym_DQUOTE,
    ACTIONS(1438), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1996), 1,
      anon_sym_DQUOTE,
    ACTIONS(1998), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11429] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2000), 1,
      anon_sym_DQUOTE,
    ACTIONS(2002), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11442] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2004), 1,
      anon_sym_LPAREN,
    ACTIONS(2007), 1,
      anon_sym_RPAREN,
    STATE(758), 1,
      sym__deps_field,
    STATE(601), 2,
      sym_action,
      aux_sym__stanza_rule_repeat4,
  [11459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2009), 1,
      anon_sym_DQUOTE,
    ACTIONS(2011), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11472] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(2013), 2,
      sym_multiline_string,
      sym__atom,
    STATE(884), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [11487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1444), 1,
      anon_sym_DQUOTE,
    ACTIONS(1442), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11500] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1458), 1,
      anon_sym_DQUOTE,
    ACTIONS(1456), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11513] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1518), 1,
      anon_sym_DQUOTE,
    ACTIONS(1516), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2015), 1,
      anon_sym_DQUOTE,
    ACTIONS(2017), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1526), 1,
      anon_sym_DQUOTE,
    ACTIONS(1524), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11552] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(2019), 2,
      sym_multiline_string,
      sym__atom,
    STATE(885), 2,
      sym__atom_or_qs,
      sym_quoted_string,
  [11567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2023), 1,
      anon_sym_DQUOTE,
    ACTIONS(2021), 4,
      ts_builtin_sym_end,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [11580] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2025), 1,
      anon_sym_DQUOTE,
    ACTIONS(2027), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1236), 1,
      anon_sym_DQUOTE,
    ACTIONS(1234), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1530), 1,
      anon_sym_DQUOTE,
    ACTIONS(1528), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11619] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2029), 1,
      anon_sym_DQUOTE,
    ACTIONS(2031), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2033), 1,
      anon_sym_DQUOTE,
    ACTIONS(2035), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2037), 1,
      anon_sym_DQUOTE,
    ACTIONS(2039), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2041), 1,
      anon_sym_DQUOTE,
    ACTIONS(2043), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11671] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2045), 1,
      anon_sym_DQUOTE,
    ACTIONS(2047), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2049), 1,
      anon_sym_DQUOTE,
    ACTIONS(2051), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2053), 1,
      anon_sym_DQUOTE,
    ACTIONS(2055), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11710] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2057), 1,
      anon_sym_DQUOTE,
    ACTIONS(2059), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2061), 1,
      anon_sym_DQUOTE,
    ACTIONS(2063), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2065), 1,
      anon_sym_DQUOTE,
    ACTIONS(2067), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1534), 1,
      anon_sym_DQUOTE,
    ACTIONS(1532), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1554), 1,
      anon_sym_DQUOTE,
    ACTIONS(1552), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1568), 1,
      anon_sym_DQUOTE,
    ACTIONS(1566), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1572), 1,
      anon_sym_DQUOTE,
    ACTIONS(1570), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2069), 1,
      anon_sym_DQUOTE,
    ACTIONS(2071), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11814] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2073), 1,
      anon_sym_DQUOTE,
    ACTIONS(2075), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1604), 1,
      anon_sym_DQUOTE,
    ACTIONS(1602), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2077), 1,
      anon_sym_DQUOTE,
    ACTIONS(2079), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1334), 1,
      anon_sym_DQUOTE,
    ACTIONS(1332), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1222), 1,
      anon_sym_DQUOTE,
    ACTIONS(1220), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11879] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_DQUOTE,
    ACTIONS(1356), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1376), 1,
      anon_sym_DQUOTE,
    ACTIONS(1374), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11905] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_DQUOTE,
    ACTIONS(1356), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_DQUOTE,
    ACTIONS(1356), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11931] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_DQUOTE,
    ACTIONS(1356), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11944] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_DQUOTE,
    ACTIONS(1356), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11957] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_DQUOTE,
    ACTIONS(1356), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11970] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_DQUOTE,
    ACTIONS(1356), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_DQUOTE,
    ACTIONS(1356), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_DQUOTE,
    ACTIONS(1356), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_DQUOTE,
    ACTIONS(1356), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12022] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1576), 1,
      anon_sym_DQUOTE,
    ACTIONS(1574), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12035] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1580), 1,
      anon_sym_DQUOTE,
    ACTIONS(1578), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1584), 1,
      anon_sym_DQUOTE,
    ACTIONS(1582), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1588), 1,
      anon_sym_DQUOTE,
    ACTIONS(1586), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1592), 1,
      anon_sym_DQUOTE,
    ACTIONS(1590), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12087] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1596), 1,
      anon_sym_DQUOTE,
    ACTIONS(1594), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12100] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1608), 1,
      anon_sym_DQUOTE,
    ACTIONS(1606), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1612), 1,
      anon_sym_DQUOTE,
    ACTIONS(1610), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1616), 1,
      anon_sym_DQUOTE,
    ACTIONS(1614), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1616), 1,
      anon_sym_DQUOTE,
    ACTIONS(1614), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1616), 1,
      anon_sym_DQUOTE,
    ACTIONS(1614), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1624), 1,
      anon_sym_DQUOTE,
    ACTIONS(1622), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_DQUOTE,
    ACTIONS(1356), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1636), 1,
      anon_sym_DQUOTE,
    ACTIONS(1634), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1648), 1,
      anon_sym_DQUOTE,
    ACTIONS(1646), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_DQUOTE,
    ACTIONS(1356), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_DQUOTE,
    ACTIONS(1356), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_DQUOTE,
    ACTIONS(1356), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_DQUOTE,
    ACTIONS(1356), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12269] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_DQUOTE,
    ACTIONS(1356), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_DQUOTE,
    ACTIONS(1356), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1710), 1,
      anon_sym_DQUOTE,
    ACTIONS(1708), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12308] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1718), 1,
      anon_sym_DQUOTE,
    ACTIONS(1716), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1250), 1,
      anon_sym_DQUOTE,
    ACTIONS(1248), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1254), 1,
      anon_sym_DQUOTE,
    ACTIONS(1252), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1620), 1,
      anon_sym_DQUOTE,
    ACTIONS(1618), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1228), 1,
      anon_sym_DQUOTE,
    ACTIONS(1226), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2023), 1,
      anon_sym_DQUOTE,
    ACTIONS(2021), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1980), 1,
      anon_sym_DQUOTE,
    ACTIONS(1978), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1968), 1,
      anon_sym_DQUOTE,
    ACTIONS(1966), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1818), 1,
      anon_sym_DQUOTE,
    ACTIONS(1816), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1880), 1,
      anon_sym_DQUOTE,
    ACTIONS(1878), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12438] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1868), 1,
      anon_sym_DQUOTE,
    ACTIONS(1866), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12451] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1860), 1,
      anon_sym_DQUOTE,
    ACTIONS(1858), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1854), 1,
      anon_sym_DQUOTE,
    ACTIONS(1852), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1842), 1,
      anon_sym_DQUOTE,
    ACTIONS(1840), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1830), 1,
      anon_sym_DQUOTE,
    ACTIONS(1828), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1822), 1,
      anon_sym_DQUOTE,
    ACTIONS(1820), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1450), 1,
      anon_sym_DQUOTE,
    ACTIONS(1448), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1810), 1,
      anon_sym_DQUOTE,
    ACTIONS(1808), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12542] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1758), 1,
      anon_sym_DQUOTE,
    ACTIONS(1756), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12555] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1742), 1,
      anon_sym_DQUOTE,
    ACTIONS(1740), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1702), 1,
      anon_sym_DQUOTE,
    ACTIONS(1700), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12581] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1694), 1,
      anon_sym_DQUOTE,
    ACTIONS(1692), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12594] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1684), 1,
      anon_sym_DQUOTE,
    ACTIONS(1682), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12607] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1676), 1,
      anon_sym_DQUOTE,
    ACTIONS(1674), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12620] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1668), 1,
      anon_sym_DQUOTE,
    ACTIONS(1666), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12633] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1664), 1,
      anon_sym_DQUOTE,
    ACTIONS(1662), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1656), 1,
      anon_sym_DQUOTE,
    ACTIONS(1654), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12659] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1640), 1,
      anon_sym_DQUOTE,
    ACTIONS(1638), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1632), 1,
      anon_sym_DQUOTE,
    ACTIONS(1630), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1628), 1,
      anon_sym_DQUOTE,
    ACTIONS(1626), 4,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12698] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2081), 1,
      anon_sym_RPAREN,
    STATE(854), 1,
      sym__bool,
    ACTIONS(2083), 2,
      anon_sym_true,
      anon_sym_false,
  [12712] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1164), 1,
      anon_sym_RPAREN,
    ACTIONS(2085), 1,
      anon_sym_LPAREN,
    STATE(699), 2,
      sym_action,
      aux_sym_action_repeat1,
  [12726] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2087), 1,
      anon_sym_LPAREN,
    ACTIONS(2090), 1,
      anon_sym_RPAREN,
    STATE(699), 2,
      sym_action,
      aux_sym_action_repeat1,
  [12740] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2092), 1,
      anon_sym_RPAREN,
    STATE(819), 1,
      sym__bool,
    ACTIONS(2094), 2,
      anon_sym_true,
      anon_sym_false,
  [12754] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2096), 1,
      anon_sym_LPAREN,
    STATE(832), 1,
      sym__rule_mode,
    ACTIONS(2098), 2,
      anon_sym_fallback,
      anon_sym_promote,
  [12768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2100), 1,
      anon_sym_DQUOTE,
    ACTIONS(2102), 3,
      sym_multiline_string,
      sym__atom,
      anon_sym_RPAREN,
  [12780] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2096), 1,
      anon_sym_LPAREN,
    STATE(787), 1,
      sym__rule_mode,
    ACTIONS(2104), 2,
      anon_sym_fallback,
      anon_sym_promote,
  [12794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2106), 1,
      anon_sym_DQUOTE,
    ACTIONS(2108), 3,
      sym_multiline_string,
      sym__atom,
      anon_sym_RPAREN,
  [12806] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2110), 1,
      anon_sym_RPAREN,
    STATE(835), 1,
      sym__bool,
    ACTIONS(2112), 2,
      anon_sym_true,
      anon_sym_false,
  [12820] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2085), 1,
      anon_sym_LPAREN,
    ACTIONS(2114), 1,
      anon_sym_RPAREN,
    STATE(698), 2,
      sym_action,
      aux_sym_action_repeat1,
  [12834] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2116), 1,
      anon_sym_RPAREN,
    STATE(839), 1,
      sym__bool,
    ACTIONS(2118), 2,
      anon_sym_true,
      anon_sym_false,
  [12848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2120), 1,
      anon_sym_DQUOTE,
    ACTIONS(2122), 3,
      sym_multiline_string,
      sym__atom,
      anon_sym_LPAREN,
  [12860] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2124), 1,
      anon_sym_RPAREN,
    STATE(857), 1,
      sym__bool,
    ACTIONS(2126), 2,
      anon_sym_true,
      anon_sym_false,
  [12874] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2128), 1,
      anon_sym_RPAREN,
    STATE(840), 1,
      sym__bool,
    ACTIONS(2130), 2,
      anon_sym_true,
      anon_sym_false,
  [12888] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2132), 1,
      anon_sym_RPAREN,
    STATE(842), 1,
      sym__bool,
    ACTIONS(2134), 2,
      anon_sym_true,
      anon_sym_false,
  [12902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2136), 1,
      anon_sym_DQUOTE,
    ACTIONS(2138), 3,
      sym_multiline_string,
      sym__atom,
      anon_sym_RPAREN,
  [12914] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2140), 1,
      anon_sym_RPAREN,
    STATE(843), 1,
      sym__bool,
    ACTIONS(2142), 2,
      anon_sym_true,
      anon_sym_false,
  [12928] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2144), 1,
      anon_sym_DQUOTE,
    ACTIONS(2146), 3,
      sym_multiline_string,
      sym__atom,
      anon_sym_RPAREN,
  [12940] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_RPAREN,
    STATE(834), 1,
      sym__bool,
    ACTIONS(1296), 2,
      anon_sym_true,
      anon_sym_false,
  [12954] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2148), 1,
      anon_sym_DQUOTE,
    ACTIONS(2150), 3,
      sym_multiline_string,
      sym__atom,
      anon_sym_RPAREN,
  [12966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2152), 1,
      anon_sym_DQUOTE,
    ACTIONS(2154), 3,
      sym_multiline_string,
      sym__atom,
      anon_sym_RPAREN,
  [12978] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(780), 1,
      sym__bool,
    ACTIONS(2156), 2,
      anon_sym_true,
      anon_sym_false,
  [12989] = 4,
    ACTIONS(2158), 1,
      anon_sym_DQUOTE,
    ACTIONS(2160), 1,
      sym__quoted_string_char,
    ACTIONS(2162), 1,
      sym_comment,
    STATE(721), 1,
      aux_sym_quoted_string_repeat1,
  [13002] = 4,
    ACTIONS(2162), 1,
      sym_comment,
    ACTIONS(2164), 1,
      ts_builtin_sym_end,
    ACTIONS(2166), 1,
      aux_sym_ocaml_syntax_token1,
    STATE(720), 1,
      aux_sym_ocaml_syntax_repeat1,
  [13015] = 4,
    ACTIONS(2162), 1,
      sym_comment,
    ACTIONS(2169), 1,
      anon_sym_DQUOTE,
    ACTIONS(2171), 1,
      sym__quoted_string_char,
    STATE(721), 1,
      aux_sym_quoted_string_repeat1,
  [13028] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2174), 1,
      anon_sym_LPAREN,
    ACTIONS(2176), 1,
      anon_sym_RPAREN,
    STATE(724), 1,
      aux_sym__stanza_pin_repeat1,
  [13041] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(817), 1,
      sym__bool,
    ACTIONS(2178), 2,
      anon_sym_true,
      anon_sym_false,
  [13052] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2180), 1,
      anon_sym_LPAREN,
    ACTIONS(2183), 1,
      anon_sym_RPAREN,
    STATE(724), 1,
      aux_sym__stanza_pin_repeat1,
  [13065] = 4,
    ACTIONS(2162), 1,
      sym_comment,
    ACTIONS(2185), 1,
      anon_sym_DQUOTE,
    ACTIONS(2187), 1,
      sym__quoted_string_char,
    STATE(719), 1,
      aux_sym_quoted_string_repeat1,
  [13078] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2189), 1,
      anon_sym_LPAREN,
    ACTIONS(2191), 1,
      anon_sym_default,
    STATE(826), 1,
      sym__context_opam,
  [13091] = 4,
    ACTIONS(2162), 1,
      sym_comment,
    ACTIONS(2193), 1,
      ts_builtin_sym_end,
    ACTIONS(2195), 1,
      aux_sym_ocaml_syntax_token1,
    STATE(730), 1,
      aux_sym_ocaml_syntax_repeat1,
  [13104] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2197), 1,
      anon_sym_github,
    ACTIONS(2199), 1,
      anon_sym_git,
    ACTIONS(2201), 1,
      anon_sym_uri,
  [13117] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2174), 1,
      anon_sym_LPAREN,
    ACTIONS(2203), 1,
      anon_sym_RPAREN,
    STATE(722), 1,
      aux_sym__stanza_pin_repeat1,
  [13130] = 4,
    ACTIONS(2162), 1,
      sym_comment,
    ACTIONS(2205), 1,
      ts_builtin_sym_end,
    ACTIONS(2207), 1,
      aux_sym_ocaml_syntax_token1,
    STATE(720), 1,
      aux_sym_ocaml_syntax_repeat1,
  [13143] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2189), 1,
      anon_sym_LPAREN,
    ACTIONS(2209), 1,
      anon_sym_default,
    STATE(790), 1,
      sym__context_opam,
  [13156] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2174), 1,
      anon_sym_LPAREN,
    ACTIONS(2211), 1,
      anon_sym_RPAREN,
    STATE(740), 1,
      aux_sym__stanza_pin_repeat1,
  [13169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(861), 1,
      sym__bool,
    ACTIONS(2213), 2,
      anon_sym_true,
      anon_sym_false,
  [13180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(784), 1,
      sym__bool,
    ACTIONS(2215), 2,
      anon_sym_true,
      anon_sym_false,
  [13191] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2217), 1,
      anon_sym_github,
    ACTIONS(2219), 1,
      anon_sym_git,
    ACTIONS(2221), 1,
      anon_sym_uri,
  [13204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2085), 1,
      anon_sym_LPAREN,
    STATE(698), 2,
      sym_action,
      aux_sym_action_repeat1,
  [13215] = 4,
    ACTIONS(2160), 1,
      sym__quoted_string_char,
    ACTIONS(2162), 1,
      sym_comment,
    ACTIONS(2223), 1,
      anon_sym_DQUOTE,
    STATE(721), 1,
      aux_sym_quoted_string_repeat1,
  [13228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(812), 1,
      sym__bool,
    ACTIONS(1266), 2,
      anon_sym_true,
      anon_sym_false,
  [13239] = 4,
    ACTIONS(2162), 1,
      sym_comment,
    ACTIONS(2225), 1,
      anon_sym_DQUOTE,
    ACTIONS(2227), 1,
      sym__quoted_string_char,
    STATE(737), 1,
      aux_sym_quoted_string_repeat1,
  [13252] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2174), 1,
      anon_sym_LPAREN,
    ACTIONS(2229), 1,
      anon_sym_RPAREN,
    STATE(724), 1,
      aux_sym__stanza_pin_repeat1,
  [13265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(768), 1,
      sym__bool,
    ACTIONS(2231), 2,
      anon_sym_true,
      anon_sym_false,
  [13276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2233), 1,
      anon_sym_LPAREN,
    STATE(815), 1,
      sym__rule_mode_promote_field,
  [13286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2235), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [13294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2237), 1,
      anon_sym_only,
    ACTIONS(2239), 1,
      anon_sym_into,
  [13304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2085), 1,
      anon_sym_LPAREN,
    STATE(836), 1,
      sym_action,
  [13314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2085), 1,
      anon_sym_LPAREN,
    STATE(761), 1,
      sym_action,
  [13324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2241), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [13332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2085), 1,
      anon_sym_LPAREN,
    STATE(834), 1,
      sym_action,
  [13342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2243), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [13350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2085), 1,
      anon_sym_LPAREN,
    STATE(860), 1,
      sym_action,
  [13360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2245), 1,
      anon_sym_re_export,
    ACTIONS(2247), 1,
      anon_sym_select,
  [13370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2249), 1,
      anon_sym_promote,
    ACTIONS(2251), 1,
      anon_sym_promote_DASHinto,
  [13380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2253), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [13388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2085), 1,
      anon_sym_LPAREN,
    STATE(763), 1,
      sym_action,
  [13398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2085), 1,
      anon_sym_LPAREN,
    STATE(800), 1,
      sym_action,
  [13408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2255), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [13416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2257), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [13424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2259), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [13432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2261), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [13440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2263), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [13448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1164), 1,
      anon_sym_RPAREN,
  [13455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2265), 1,
      anon_sym_RPAREN,
  [13462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      anon_sym_RPAREN,
  [13469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2267), 1,
      anon_sym_RPAREN,
  [13476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2269), 1,
      anon_sym_RPAREN,
  [13483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2271), 1,
      anon_sym_RPAREN,
  [13490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2273), 1,
      anon_sym_RPAREN,
  [13497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2275), 1,
      anon_sym_RPAREN,
  [13504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2277), 1,
      anon_sym_RPAREN,
  [13511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2279), 1,
      anon_sym_RPAREN,
  [13518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1074), 1,
      anon_sym_RPAREN,
  [13525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2281), 1,
      anon_sym_RPAREN,
  [13532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2283), 1,
      anon_sym_RPAREN,
  [13539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2285), 1,
      anon_sym_RPAREN,
  [13546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2287), 1,
      anon_sym_RPAREN,
  [13553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2289), 1,
      anon_sym_RPAREN,
  [13560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2291), 1,
      anon_sym_RPAREN,
  [13567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2293), 1,
      anon_sym_enabled_for,
  [13574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2295), 1,
      anon_sym_RPAREN,
  [13581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2297), 1,
      anon_sym_RPAREN,
  [13588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 1,
      anon_sym_RPAREN,
  [13595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2299), 1,
      anon_sym_RPAREN,
  [13602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2301), 1,
      anon_sym_opam,
  [13609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 1,
      anon_sym_RPAREN,
  [13616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2303), 1,
      anon_sym_RPAREN,
  [13623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2305), 1,
      anon_sym_RPAREN,
  [13630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2307), 1,
      anon_sym_RPAREN,
  [13637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2309), 1,
      anon_sym_LPAREN,
  [13644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2311), 1,
      anon_sym_RPAREN,
  [13651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2313), 1,
      anon_sym_RPAREN,
  [13658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2315), 1,
      anon_sym_RPAREN,
  [13665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2317), 1,
      anon_sym_RPAREN,
  [13672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2319), 1,
      anon_sym_RPAREN,
  [13679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2321), 1,
      anon_sym_RPAREN,
  [13686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2323), 1,
      anon_sym_RPAREN,
  [13693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2325), 1,
      anon_sym_RPAREN,
  [13700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2327), 1,
      anon_sym_RPAREN,
  [13707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2329), 1,
      anon_sym_RPAREN,
  [13714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2331), 1,
      anon_sym_RPAREN,
  [13721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2333), 1,
      anon_sym_RPAREN,
  [13728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2335), 1,
      anon_sym_RPAREN,
  [13735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2337), 1,
      anon_sym_RPAREN,
  [13742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2339), 1,
      anon_sym_RPAREN,
  [13749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(990), 1,
      anon_sym_RPAREN,
  [13756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2341), 1,
      anon_sym_RPAREN,
  [13763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2343), 1,
      anon_sym_RPAREN,
  [13770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2345), 1,
      anon_sym_RPAREN,
  [13777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2347), 1,
      anon_sym_transition,
  [13784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2349), 1,
      anon_sym_RPAREN,
  [13791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2351), 1,
      anon_sym_RPAREN,
  [13798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2353), 1,
      anon_sym_RPAREN,
  [13805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 1,
      anon_sym_RPAREN,
  [13812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2355), 1,
      anon_sym_RPAREN,
  [13819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2357), 1,
      anon_sym_RPAREN,
  [13826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2359), 1,
      anon_sym_RPAREN,
  [13833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2361), 1,
      anon_sym_RPAREN,
  [13840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2363), 1,
      anon_sym_RPAREN,
  [13847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2365), 1,
      anon_sym_RPAREN,
  [13854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2367), 1,
      anon_sym_RPAREN,
  [13861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2369), 1,
      anon_sym_RPAREN,
  [13868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2371), 1,
      anon_sym_RPAREN,
  [13875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2373), 1,
      anon_sym_RPAREN,
  [13882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2375), 1,
      anon_sym_RPAREN,
  [13889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2377), 1,
      anon_sym_RPAREN,
  [13896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2379), 1,
      anon_sym_RPAREN,
  [13903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2381), 1,
      anon_sym_RPAREN,
  [13910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2383), 1,
      anon_sym_RPAREN,
  [13917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2385), 1,
      anon_sym_RPAREN,
  [13924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2387), 1,
      anon_sym_RPAREN,
  [13931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2389), 1,
      anon_sym_dir,
  [13938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2391), 1,
      anon_sym_RPAREN,
  [13945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2393), 1,
      anon_sym_RPAREN,
  [13952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2395), 1,
      anon_sym_RPAREN,
  [13959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
  [13966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2397), 1,
      anon_sym_RPAREN,
  [13973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2399), 1,
      anon_sym_RPAREN,
  [13980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2401), 1,
      anon_sym_RPAREN,
  [13987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2403), 1,
      anon_sym_RPAREN,
  [13994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2405), 1,
      anon_sym_RPAREN,
  [14001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2407), 1,
      anon_sym_RPAREN,
  [14008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2409), 1,
      anon_sym_RPAREN,
  [14015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2411), 1,
      anon_sym_RPAREN,
  [14022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2413), 1,
      anon_sym_RPAREN,
  [14029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2415), 1,
      anon_sym_RPAREN,
  [14036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2417), 1,
      anon_sym_RPAREN,
  [14043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 1,
      anon_sym_RPAREN,
  [14050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2419), 1,
      anon_sym_RPAREN,
  [14057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2421), 1,
      anon_sym_RPAREN,
  [14064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2423), 1,
      anon_sym_RPAREN,
  [14071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2425), 1,
      anon_sym_RPAREN,
  [14078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2427), 1,
      anon_sym_RPAREN,
  [14085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2429), 1,
      anon_sym_RPAREN,
  [14092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2431), 1,
      anon_sym_RPAREN,
  [14099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2433), 1,
      anon_sym_RPAREN,
  [14106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2435), 1,
      anon_sym_RPAREN,
  [14113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2437), 1,
      anon_sym_RPAREN,
  [14120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2439), 1,
      anon_sym_RPAREN,
  [14127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2441), 1,
      anon_sym_RPAREN,
  [14134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2443), 1,
      anon_sym_RPAREN,
  [14141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2445), 1,
      anon_sym_RPAREN,
  [14148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_RPAREN,
  [14155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2447), 1,
      anon_sym_RPAREN,
  [14162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2449), 1,
      anon_sym_RPAREN,
  [14169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2451), 1,
      anon_sym_RPAREN,
  [14176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_RPAREN,
  [14183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2453), 1,
      anon_sym_LPAREN,
  [14190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2455), 1,
      anon_sym_RPAREN,
  [14197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2457), 1,
      anon_sym_RPAREN,
  [14204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2459), 1,
      anon_sym_RPAREN,
  [14211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2461), 1,
      anon_sym_modules,
  [14218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2463), 1,
      anon_sym_RPAREN,
  [14225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2465), 1,
      anon_sym_RPAREN,
  [14232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_RPAREN,
  [14239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2467), 1,
      anon_sym_RPAREN,
  [14246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2469), 1,
      anon_sym_RPAREN,
  [14253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2471), 1,
      anon_sym_RPAREN,
  [14260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2473), 1,
      anon_sym_RPAREN,
  [14267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
  [14274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2475), 1,
      anon_sym_RPAREN,
  [14281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2477), 1,
      anon_sym_RPAREN,
  [14288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2479), 1,
      ts_builtin_sym_end,
  [14295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2481), 1,
      anon_sym_RPAREN,
  [14302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2483), 1,
      anon_sym_RPAREN,
  [14309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2485), 1,
      anon_sym_RPAREN,
  [14316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 1,
      anon_sym_RPAREN,
  [14323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2487), 1,
      anon_sym_enabled_for,
  [14330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2489), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 87,
  [SMALL_STATE(13)] = 156,
  [SMALL_STATE(14)] = 213,
  [SMALL_STATE(15)] = 269,
  [SMALL_STATE(16)] = 321,
  [SMALL_STATE(17)] = 370,
  [SMALL_STATE(18)] = 419,
  [SMALL_STATE(19)] = 460,
  [SMALL_STATE(20)] = 499,
  [SMALL_STATE(21)] = 542,
  [SMALL_STATE(22)] = 585,
  [SMALL_STATE(23)] = 628,
  [SMALL_STATE(24)] = 666,
  [SMALL_STATE(25)] = 706,
  [SMALL_STATE(26)] = 744,
  [SMALL_STATE(27)] = 782,
  [SMALL_STATE(28)] = 819,
  [SMALL_STATE(29)] = 851,
  [SMALL_STATE(30)] = 885,
  [SMALL_STATE(31)] = 917,
  [SMALL_STATE(32)] = 949,
  [SMALL_STATE(33)] = 981,
  [SMALL_STATE(34)] = 1013,
  [SMALL_STATE(35)] = 1045,
  [SMALL_STATE(36)] = 1077,
  [SMALL_STATE(37)] = 1109,
  [SMALL_STATE(38)] = 1141,
  [SMALL_STATE(39)] = 1175,
  [SMALL_STATE(40)] = 1207,
  [SMALL_STATE(41)] = 1236,
  [SMALL_STATE(42)] = 1265,
  [SMALL_STATE(43)] = 1294,
  [SMALL_STATE(44)] = 1323,
  [SMALL_STATE(45)] = 1352,
  [SMALL_STATE(46)] = 1381,
  [SMALL_STATE(47)] = 1410,
  [SMALL_STATE(48)] = 1439,
  [SMALL_STATE(49)] = 1468,
  [SMALL_STATE(50)] = 1497,
  [SMALL_STATE(51)] = 1526,
  [SMALL_STATE(52)] = 1555,
  [SMALL_STATE(53)] = 1584,
  [SMALL_STATE(54)] = 1613,
  [SMALL_STATE(55)] = 1642,
  [SMALL_STATE(56)] = 1671,
  [SMALL_STATE(57)] = 1700,
  [SMALL_STATE(58)] = 1729,
  [SMALL_STATE(59)] = 1758,
  [SMALL_STATE(60)] = 1787,
  [SMALL_STATE(61)] = 1816,
  [SMALL_STATE(62)] = 1845,
  [SMALL_STATE(63)] = 1874,
  [SMALL_STATE(64)] = 1900,
  [SMALL_STATE(65)] = 1926,
  [SMALL_STATE(66)] = 1952,
  [SMALL_STATE(67)] = 1978,
  [SMALL_STATE(68)] = 2004,
  [SMALL_STATE(69)] = 2032,
  [SMALL_STATE(70)] = 2058,
  [SMALL_STATE(71)] = 2086,
  [SMALL_STATE(72)] = 2112,
  [SMALL_STATE(73)] = 2140,
  [SMALL_STATE(74)] = 2166,
  [SMALL_STATE(75)] = 2192,
  [SMALL_STATE(76)] = 2218,
  [SMALL_STATE(77)] = 2244,
  [SMALL_STATE(78)] = 2270,
  [SMALL_STATE(79)] = 2296,
  [SMALL_STATE(80)] = 2322,
  [SMALL_STATE(81)] = 2348,
  [SMALL_STATE(82)] = 2374,
  [SMALL_STATE(83)] = 2400,
  [SMALL_STATE(84)] = 2426,
  [SMALL_STATE(85)] = 2452,
  [SMALL_STATE(86)] = 2478,
  [SMALL_STATE(87)] = 2504,
  [SMALL_STATE(88)] = 2530,
  [SMALL_STATE(89)] = 2556,
  [SMALL_STATE(90)] = 2582,
  [SMALL_STATE(91)] = 2608,
  [SMALL_STATE(92)] = 2634,
  [SMALL_STATE(93)] = 2660,
  [SMALL_STATE(94)] = 2686,
  [SMALL_STATE(95)] = 2712,
  [SMALL_STATE(96)] = 2738,
  [SMALL_STATE(97)] = 2764,
  [SMALL_STATE(98)] = 2790,
  [SMALL_STATE(99)] = 2816,
  [SMALL_STATE(100)] = 2842,
  [SMALL_STATE(101)] = 2868,
  [SMALL_STATE(102)] = 2894,
  [SMALL_STATE(103)] = 2920,
  [SMALL_STATE(104)] = 2946,
  [SMALL_STATE(105)] = 2974,
  [SMALL_STATE(106)] = 3002,
  [SMALL_STATE(107)] = 3030,
  [SMALL_STATE(108)] = 3056,
  [SMALL_STATE(109)] = 3082,
  [SMALL_STATE(110)] = 3108,
  [SMALL_STATE(111)] = 3134,
  [SMALL_STATE(112)] = 3160,
  [SMALL_STATE(113)] = 3186,
  [SMALL_STATE(114)] = 3212,
  [SMALL_STATE(115)] = 3238,
  [SMALL_STATE(116)] = 3266,
  [SMALL_STATE(117)] = 3294,
  [SMALL_STATE(118)] = 3320,
  [SMALL_STATE(119)] = 3348,
  [SMALL_STATE(120)] = 3374,
  [SMALL_STATE(121)] = 3402,
  [SMALL_STATE(122)] = 3430,
  [SMALL_STATE(123)] = 3456,
  [SMALL_STATE(124)] = 3484,
  [SMALL_STATE(125)] = 3510,
  [SMALL_STATE(126)] = 3536,
  [SMALL_STATE(127)] = 3562,
  [SMALL_STATE(128)] = 3588,
  [SMALL_STATE(129)] = 3614,
  [SMALL_STATE(130)] = 3640,
  [SMALL_STATE(131)] = 3666,
  [SMALL_STATE(132)] = 3692,
  [SMALL_STATE(133)] = 3718,
  [SMALL_STATE(134)] = 3744,
  [SMALL_STATE(135)] = 3770,
  [SMALL_STATE(136)] = 3796,
  [SMALL_STATE(137)] = 3822,
  [SMALL_STATE(138)] = 3850,
  [SMALL_STATE(139)] = 3878,
  [SMALL_STATE(140)] = 3906,
  [SMALL_STATE(141)] = 3934,
  [SMALL_STATE(142)] = 3960,
  [SMALL_STATE(143)] = 3986,
  [SMALL_STATE(144)] = 4012,
  [SMALL_STATE(145)] = 4038,
  [SMALL_STATE(146)] = 4064,
  [SMALL_STATE(147)] = 4090,
  [SMALL_STATE(148)] = 4116,
  [SMALL_STATE(149)] = 4142,
  [SMALL_STATE(150)] = 4168,
  [SMALL_STATE(151)] = 4194,
  [SMALL_STATE(152)] = 4220,
  [SMALL_STATE(153)] = 4246,
  [SMALL_STATE(154)] = 4274,
  [SMALL_STATE(155)] = 4300,
  [SMALL_STATE(156)] = 4326,
  [SMALL_STATE(157)] = 4352,
  [SMALL_STATE(158)] = 4378,
  [SMALL_STATE(159)] = 4404,
  [SMALL_STATE(160)] = 4430,
  [SMALL_STATE(161)] = 4456,
  [SMALL_STATE(162)] = 4482,
  [SMALL_STATE(163)] = 4508,
  [SMALL_STATE(164)] = 4534,
  [SMALL_STATE(165)] = 4562,
  [SMALL_STATE(166)] = 4588,
  [SMALL_STATE(167)] = 4614,
  [SMALL_STATE(168)] = 4640,
  [SMALL_STATE(169)] = 4666,
  [SMALL_STATE(170)] = 4692,
  [SMALL_STATE(171)] = 4718,
  [SMALL_STATE(172)] = 4744,
  [SMALL_STATE(173)] = 4770,
  [SMALL_STATE(174)] = 4798,
  [SMALL_STATE(175)] = 4824,
  [SMALL_STATE(176)] = 4850,
  [SMALL_STATE(177)] = 4875,
  [SMALL_STATE(178)] = 4898,
  [SMALL_STATE(179)] = 4923,
  [SMALL_STATE(180)] = 4946,
  [SMALL_STATE(181)] = 4969,
  [SMALL_STATE(182)] = 4992,
  [SMALL_STATE(183)] = 5015,
  [SMALL_STATE(184)] = 5038,
  [SMALL_STATE(185)] = 5067,
  [SMALL_STATE(186)] = 5086,
  [SMALL_STATE(187)] = 5109,
  [SMALL_STATE(188)] = 5132,
  [SMALL_STATE(189)] = 5154,
  [SMALL_STATE(190)] = 5176,
  [SMALL_STATE(191)] = 5198,
  [SMALL_STATE(192)] = 5220,
  [SMALL_STATE(193)] = 5242,
  [SMALL_STATE(194)] = 5264,
  [SMALL_STATE(195)] = 5284,
  [SMALL_STATE(196)] = 5306,
  [SMALL_STATE(197)] = 5328,
  [SMALL_STATE(198)] = 5350,
  [SMALL_STATE(199)] = 5372,
  [SMALL_STATE(200)] = 5394,
  [SMALL_STATE(201)] = 5412,
  [SMALL_STATE(202)] = 5434,
  [SMALL_STATE(203)] = 5456,
  [SMALL_STATE(204)] = 5478,
  [SMALL_STATE(205)] = 5500,
  [SMALL_STATE(206)] = 5522,
  [SMALL_STATE(207)] = 5544,
  [SMALL_STATE(208)] = 5566,
  [SMALL_STATE(209)] = 5588,
  [SMALL_STATE(210)] = 5610,
  [SMALL_STATE(211)] = 5632,
  [SMALL_STATE(212)] = 5654,
  [SMALL_STATE(213)] = 5674,
  [SMALL_STATE(214)] = 5696,
  [SMALL_STATE(215)] = 5718,
  [SMALL_STATE(216)] = 5740,
  [SMALL_STATE(217)] = 5762,
  [SMALL_STATE(218)] = 5784,
  [SMALL_STATE(219)] = 5806,
  [SMALL_STATE(220)] = 5828,
  [SMALL_STATE(221)] = 5847,
  [SMALL_STATE(222)] = 5866,
  [SMALL_STATE(223)] = 5887,
  [SMALL_STATE(224)] = 5906,
  [SMALL_STATE(225)] = 5925,
  [SMALL_STATE(226)] = 5946,
  [SMALL_STATE(227)] = 5965,
  [SMALL_STATE(228)] = 5984,
  [SMALL_STATE(229)] = 6003,
  [SMALL_STATE(230)] = 6022,
  [SMALL_STATE(231)] = 6041,
  [SMALL_STATE(232)] = 6060,
  [SMALL_STATE(233)] = 6081,
  [SMALL_STATE(234)] = 6100,
  [SMALL_STATE(235)] = 6121,
  [SMALL_STATE(236)] = 6140,
  [SMALL_STATE(237)] = 6159,
  [SMALL_STATE(238)] = 6180,
  [SMALL_STATE(239)] = 6201,
  [SMALL_STATE(240)] = 6220,
  [SMALL_STATE(241)] = 6241,
  [SMALL_STATE(242)] = 6262,
  [SMALL_STATE(243)] = 6283,
  [SMALL_STATE(244)] = 6302,
  [SMALL_STATE(245)] = 6321,
  [SMALL_STATE(246)] = 6342,
  [SMALL_STATE(247)] = 6361,
  [SMALL_STATE(248)] = 6380,
  [SMALL_STATE(249)] = 6399,
  [SMALL_STATE(250)] = 6420,
  [SMALL_STATE(251)] = 6439,
  [SMALL_STATE(252)] = 6458,
  [SMALL_STATE(253)] = 6479,
  [SMALL_STATE(254)] = 6498,
  [SMALL_STATE(255)] = 6517,
  [SMALL_STATE(256)] = 6538,
  [SMALL_STATE(257)] = 6559,
  [SMALL_STATE(258)] = 6578,
  [SMALL_STATE(259)] = 6597,
  [SMALL_STATE(260)] = 6618,
  [SMALL_STATE(261)] = 6637,
  [SMALL_STATE(262)] = 6658,
  [SMALL_STATE(263)] = 6679,
  [SMALL_STATE(264)] = 6700,
  [SMALL_STATE(265)] = 6721,
  [SMALL_STATE(266)] = 6742,
  [SMALL_STATE(267)] = 6763,
  [SMALL_STATE(268)] = 6781,
  [SMALL_STATE(269)] = 6799,
  [SMALL_STATE(270)] = 6817,
  [SMALL_STATE(271)] = 6835,
  [SMALL_STATE(272)] = 6853,
  [SMALL_STATE(273)] = 6871,
  [SMALL_STATE(274)] = 6887,
  [SMALL_STATE(275)] = 6901,
  [SMALL_STATE(276)] = 6919,
  [SMALL_STATE(277)] = 6937,
  [SMALL_STATE(278)] = 6955,
  [SMALL_STATE(279)] = 6973,
  [SMALL_STATE(280)] = 6989,
  [SMALL_STATE(281)] = 7007,
  [SMALL_STATE(282)] = 7025,
  [SMALL_STATE(283)] = 7039,
  [SMALL_STATE(284)] = 7057,
  [SMALL_STATE(285)] = 7075,
  [SMALL_STATE(286)] = 7093,
  [SMALL_STATE(287)] = 7111,
  [SMALL_STATE(288)] = 7125,
  [SMALL_STATE(289)] = 7143,
  [SMALL_STATE(290)] = 7161,
  [SMALL_STATE(291)] = 7179,
  [SMALL_STATE(292)] = 7197,
  [SMALL_STATE(293)] = 7215,
  [SMALL_STATE(294)] = 7233,
  [SMALL_STATE(295)] = 7251,
  [SMALL_STATE(296)] = 7269,
  [SMALL_STATE(297)] = 7285,
  [SMALL_STATE(298)] = 7301,
  [SMALL_STATE(299)] = 7319,
  [SMALL_STATE(300)] = 7337,
  [SMALL_STATE(301)] = 7355,
  [SMALL_STATE(302)] = 7373,
  [SMALL_STATE(303)] = 7391,
  [SMALL_STATE(304)] = 7407,
  [SMALL_STATE(305)] = 7425,
  [SMALL_STATE(306)] = 7443,
  [SMALL_STATE(307)] = 7461,
  [SMALL_STATE(308)] = 7479,
  [SMALL_STATE(309)] = 7495,
  [SMALL_STATE(310)] = 7513,
  [SMALL_STATE(311)] = 7531,
  [SMALL_STATE(312)] = 7549,
  [SMALL_STATE(313)] = 7563,
  [SMALL_STATE(314)] = 7577,
  [SMALL_STATE(315)] = 7590,
  [SMALL_STATE(316)] = 7603,
  [SMALL_STATE(317)] = 7618,
  [SMALL_STATE(318)] = 7633,
  [SMALL_STATE(319)] = 7646,
  [SMALL_STATE(320)] = 7661,
  [SMALL_STATE(321)] = 7674,
  [SMALL_STATE(322)] = 7689,
  [SMALL_STATE(323)] = 7702,
  [SMALL_STATE(324)] = 7715,
  [SMALL_STATE(325)] = 7730,
  [SMALL_STATE(326)] = 7745,
  [SMALL_STATE(327)] = 7758,
  [SMALL_STATE(328)] = 7773,
  [SMALL_STATE(329)] = 7786,
  [SMALL_STATE(330)] = 7799,
  [SMALL_STATE(331)] = 7812,
  [SMALL_STATE(332)] = 7825,
  [SMALL_STATE(333)] = 7838,
  [SMALL_STATE(334)] = 7853,
  [SMALL_STATE(335)] = 7866,
  [SMALL_STATE(336)] = 7879,
  [SMALL_STATE(337)] = 7892,
  [SMALL_STATE(338)] = 7905,
  [SMALL_STATE(339)] = 7918,
  [SMALL_STATE(340)] = 7931,
  [SMALL_STATE(341)] = 7944,
  [SMALL_STATE(342)] = 7957,
  [SMALL_STATE(343)] = 7970,
  [SMALL_STATE(344)] = 7983,
  [SMALL_STATE(345)] = 7998,
  [SMALL_STATE(346)] = 8013,
  [SMALL_STATE(347)] = 8026,
  [SMALL_STATE(348)] = 8041,
  [SMALL_STATE(349)] = 8058,
  [SMALL_STATE(350)] = 8071,
  [SMALL_STATE(351)] = 8084,
  [SMALL_STATE(352)] = 8099,
  [SMALL_STATE(353)] = 8114,
  [SMALL_STATE(354)] = 8127,
  [SMALL_STATE(355)] = 8142,
  [SMALL_STATE(356)] = 8155,
  [SMALL_STATE(357)] = 8170,
  [SMALL_STATE(358)] = 8183,
  [SMALL_STATE(359)] = 8198,
  [SMALL_STATE(360)] = 8211,
  [SMALL_STATE(361)] = 8224,
  [SMALL_STATE(362)] = 8239,
  [SMALL_STATE(363)] = 8252,
  [SMALL_STATE(364)] = 8265,
  [SMALL_STATE(365)] = 8278,
  [SMALL_STATE(366)] = 8291,
  [SMALL_STATE(367)] = 8306,
  [SMALL_STATE(368)] = 8319,
  [SMALL_STATE(369)] = 8334,
  [SMALL_STATE(370)] = 8347,
  [SMALL_STATE(371)] = 8360,
  [SMALL_STATE(372)] = 8373,
  [SMALL_STATE(373)] = 8386,
  [SMALL_STATE(374)] = 8401,
  [SMALL_STATE(375)] = 8414,
  [SMALL_STATE(376)] = 8427,
  [SMALL_STATE(377)] = 8440,
  [SMALL_STATE(378)] = 8455,
  [SMALL_STATE(379)] = 8468,
  [SMALL_STATE(380)] = 8481,
  [SMALL_STATE(381)] = 8496,
  [SMALL_STATE(382)] = 8509,
  [SMALL_STATE(383)] = 8522,
  [SMALL_STATE(384)] = 8535,
  [SMALL_STATE(385)] = 8548,
  [SMALL_STATE(386)] = 8561,
  [SMALL_STATE(387)] = 8574,
  [SMALL_STATE(388)] = 8587,
  [SMALL_STATE(389)] = 8600,
  [SMALL_STATE(390)] = 8613,
  [SMALL_STATE(391)] = 8626,
  [SMALL_STATE(392)] = 8639,
  [SMALL_STATE(393)] = 8652,
  [SMALL_STATE(394)] = 8665,
  [SMALL_STATE(395)] = 8680,
  [SMALL_STATE(396)] = 8695,
  [SMALL_STATE(397)] = 8708,
  [SMALL_STATE(398)] = 8721,
  [SMALL_STATE(399)] = 8734,
  [SMALL_STATE(400)] = 8747,
  [SMALL_STATE(401)] = 8762,
  [SMALL_STATE(402)] = 8775,
  [SMALL_STATE(403)] = 8788,
  [SMALL_STATE(404)] = 8801,
  [SMALL_STATE(405)] = 8816,
  [SMALL_STATE(406)] = 8829,
  [SMALL_STATE(407)] = 8842,
  [SMALL_STATE(408)] = 8857,
  [SMALL_STATE(409)] = 8870,
  [SMALL_STATE(410)] = 8883,
  [SMALL_STATE(411)] = 8896,
  [SMALL_STATE(412)] = 8909,
  [SMALL_STATE(413)] = 8922,
  [SMALL_STATE(414)] = 8935,
  [SMALL_STATE(415)] = 8948,
  [SMALL_STATE(416)] = 8961,
  [SMALL_STATE(417)] = 8974,
  [SMALL_STATE(418)] = 8987,
  [SMALL_STATE(419)] = 9000,
  [SMALL_STATE(420)] = 9013,
  [SMALL_STATE(421)] = 9026,
  [SMALL_STATE(422)] = 9039,
  [SMALL_STATE(423)] = 9052,
  [SMALL_STATE(424)] = 9065,
  [SMALL_STATE(425)] = 9078,
  [SMALL_STATE(426)] = 9091,
  [SMALL_STATE(427)] = 9104,
  [SMALL_STATE(428)] = 9117,
  [SMALL_STATE(429)] = 9130,
  [SMALL_STATE(430)] = 9143,
  [SMALL_STATE(431)] = 9156,
  [SMALL_STATE(432)] = 9169,
  [SMALL_STATE(433)] = 9182,
  [SMALL_STATE(434)] = 9195,
  [SMALL_STATE(435)] = 9208,
  [SMALL_STATE(436)] = 9221,
  [SMALL_STATE(437)] = 9236,
  [SMALL_STATE(438)] = 9251,
  [SMALL_STATE(439)] = 9264,
  [SMALL_STATE(440)] = 9281,
  [SMALL_STATE(441)] = 9294,
  [SMALL_STATE(442)] = 9307,
  [SMALL_STATE(443)] = 9320,
  [SMALL_STATE(444)] = 9333,
  [SMALL_STATE(445)] = 9346,
  [SMALL_STATE(446)] = 9359,
  [SMALL_STATE(447)] = 9372,
  [SMALL_STATE(448)] = 9385,
  [SMALL_STATE(449)] = 9398,
  [SMALL_STATE(450)] = 9411,
  [SMALL_STATE(451)] = 9424,
  [SMALL_STATE(452)] = 9437,
  [SMALL_STATE(453)] = 9450,
  [SMALL_STATE(454)] = 9463,
  [SMALL_STATE(455)] = 9478,
  [SMALL_STATE(456)] = 9491,
  [SMALL_STATE(457)] = 9504,
  [SMALL_STATE(458)] = 9517,
  [SMALL_STATE(459)] = 9530,
  [SMALL_STATE(460)] = 9543,
  [SMALL_STATE(461)] = 9556,
  [SMALL_STATE(462)] = 9569,
  [SMALL_STATE(463)] = 9582,
  [SMALL_STATE(464)] = 9597,
  [SMALL_STATE(465)] = 9614,
  [SMALL_STATE(466)] = 9629,
  [SMALL_STATE(467)] = 9644,
  [SMALL_STATE(468)] = 9659,
  [SMALL_STATE(469)] = 9674,
  [SMALL_STATE(470)] = 9689,
  [SMALL_STATE(471)] = 9702,
  [SMALL_STATE(472)] = 9717,
  [SMALL_STATE(473)] = 9730,
  [SMALL_STATE(474)] = 9743,
  [SMALL_STATE(475)] = 9758,
  [SMALL_STATE(476)] = 9773,
  [SMALL_STATE(477)] = 9786,
  [SMALL_STATE(478)] = 9799,
  [SMALL_STATE(479)] = 9816,
  [SMALL_STATE(480)] = 9831,
  [SMALL_STATE(481)] = 9844,
  [SMALL_STATE(482)] = 9859,
  [SMALL_STATE(483)] = 9874,
  [SMALL_STATE(484)] = 9887,
  [SMALL_STATE(485)] = 9900,
  [SMALL_STATE(486)] = 9913,
  [SMALL_STATE(487)] = 9926,
  [SMALL_STATE(488)] = 9939,
  [SMALL_STATE(489)] = 9952,
  [SMALL_STATE(490)] = 9965,
  [SMALL_STATE(491)] = 9978,
  [SMALL_STATE(492)] = 9991,
  [SMALL_STATE(493)] = 10004,
  [SMALL_STATE(494)] = 10017,
  [SMALL_STATE(495)] = 10030,
  [SMALL_STATE(496)] = 10043,
  [SMALL_STATE(497)] = 10058,
  [SMALL_STATE(498)] = 10071,
  [SMALL_STATE(499)] = 10086,
  [SMALL_STATE(500)] = 10099,
  [SMALL_STATE(501)] = 10112,
  [SMALL_STATE(502)] = 10125,
  [SMALL_STATE(503)] = 10138,
  [SMALL_STATE(504)] = 10151,
  [SMALL_STATE(505)] = 10164,
  [SMALL_STATE(506)] = 10177,
  [SMALL_STATE(507)] = 10190,
  [SMALL_STATE(508)] = 10203,
  [SMALL_STATE(509)] = 10216,
  [SMALL_STATE(510)] = 10229,
  [SMALL_STATE(511)] = 10242,
  [SMALL_STATE(512)] = 10255,
  [SMALL_STATE(513)] = 10268,
  [SMALL_STATE(514)] = 10281,
  [SMALL_STATE(515)] = 10294,
  [SMALL_STATE(516)] = 10307,
  [SMALL_STATE(517)] = 10320,
  [SMALL_STATE(518)] = 10337,
  [SMALL_STATE(519)] = 10350,
  [SMALL_STATE(520)] = 10363,
  [SMALL_STATE(521)] = 10376,
  [SMALL_STATE(522)] = 10389,
  [SMALL_STATE(523)] = 10402,
  [SMALL_STATE(524)] = 10415,
  [SMALL_STATE(525)] = 10428,
  [SMALL_STATE(526)] = 10441,
  [SMALL_STATE(527)] = 10454,
  [SMALL_STATE(528)] = 10467,
  [SMALL_STATE(529)] = 10480,
  [SMALL_STATE(530)] = 10493,
  [SMALL_STATE(531)] = 10506,
  [SMALL_STATE(532)] = 10519,
  [SMALL_STATE(533)] = 10532,
  [SMALL_STATE(534)] = 10547,
  [SMALL_STATE(535)] = 10560,
  [SMALL_STATE(536)] = 10573,
  [SMALL_STATE(537)] = 10586,
  [SMALL_STATE(538)] = 10599,
  [SMALL_STATE(539)] = 10612,
  [SMALL_STATE(540)] = 10625,
  [SMALL_STATE(541)] = 10638,
  [SMALL_STATE(542)] = 10653,
  [SMALL_STATE(543)] = 10668,
  [SMALL_STATE(544)] = 10681,
  [SMALL_STATE(545)] = 10696,
  [SMALL_STATE(546)] = 10711,
  [SMALL_STATE(547)] = 10726,
  [SMALL_STATE(548)] = 10741,
  [SMALL_STATE(549)] = 10756,
  [SMALL_STATE(550)] = 10769,
  [SMALL_STATE(551)] = 10782,
  [SMALL_STATE(552)] = 10797,
  [SMALL_STATE(553)] = 10812,
  [SMALL_STATE(554)] = 10827,
  [SMALL_STATE(555)] = 10840,
  [SMALL_STATE(556)] = 10853,
  [SMALL_STATE(557)] = 10866,
  [SMALL_STATE(558)] = 10879,
  [SMALL_STATE(559)] = 10892,
  [SMALL_STATE(560)] = 10905,
  [SMALL_STATE(561)] = 10918,
  [SMALL_STATE(562)] = 10931,
  [SMALL_STATE(563)] = 10946,
  [SMALL_STATE(564)] = 10959,
  [SMALL_STATE(565)] = 10972,
  [SMALL_STATE(566)] = 10985,
  [SMALL_STATE(567)] = 10998,
  [SMALL_STATE(568)] = 11011,
  [SMALL_STATE(569)] = 11024,
  [SMALL_STATE(570)] = 11037,
  [SMALL_STATE(571)] = 11050,
  [SMALL_STATE(572)] = 11063,
  [SMALL_STATE(573)] = 11076,
  [SMALL_STATE(574)] = 11089,
  [SMALL_STATE(575)] = 11102,
  [SMALL_STATE(576)] = 11115,
  [SMALL_STATE(577)] = 11128,
  [SMALL_STATE(578)] = 11141,
  [SMALL_STATE(579)] = 11154,
  [SMALL_STATE(580)] = 11167,
  [SMALL_STATE(581)] = 11182,
  [SMALL_STATE(582)] = 11195,
  [SMALL_STATE(583)] = 11208,
  [SMALL_STATE(584)] = 11221,
  [SMALL_STATE(585)] = 11234,
  [SMALL_STATE(586)] = 11247,
  [SMALL_STATE(587)] = 11260,
  [SMALL_STATE(588)] = 11273,
  [SMALL_STATE(589)] = 11286,
  [SMALL_STATE(590)] = 11299,
  [SMALL_STATE(591)] = 11312,
  [SMALL_STATE(592)] = 11325,
  [SMALL_STATE(593)] = 11338,
  [SMALL_STATE(594)] = 11351,
  [SMALL_STATE(595)] = 11364,
  [SMALL_STATE(596)] = 11377,
  [SMALL_STATE(597)] = 11390,
  [SMALL_STATE(598)] = 11403,
  [SMALL_STATE(599)] = 11416,
  [SMALL_STATE(600)] = 11429,
  [SMALL_STATE(601)] = 11442,
  [SMALL_STATE(602)] = 11459,
  [SMALL_STATE(603)] = 11472,
  [SMALL_STATE(604)] = 11487,
  [SMALL_STATE(605)] = 11500,
  [SMALL_STATE(606)] = 11513,
  [SMALL_STATE(607)] = 11526,
  [SMALL_STATE(608)] = 11539,
  [SMALL_STATE(609)] = 11552,
  [SMALL_STATE(610)] = 11567,
  [SMALL_STATE(611)] = 11580,
  [SMALL_STATE(612)] = 11593,
  [SMALL_STATE(613)] = 11606,
  [SMALL_STATE(614)] = 11619,
  [SMALL_STATE(615)] = 11632,
  [SMALL_STATE(616)] = 11645,
  [SMALL_STATE(617)] = 11658,
  [SMALL_STATE(618)] = 11671,
  [SMALL_STATE(619)] = 11684,
  [SMALL_STATE(620)] = 11697,
  [SMALL_STATE(621)] = 11710,
  [SMALL_STATE(622)] = 11723,
  [SMALL_STATE(623)] = 11736,
  [SMALL_STATE(624)] = 11749,
  [SMALL_STATE(625)] = 11762,
  [SMALL_STATE(626)] = 11775,
  [SMALL_STATE(627)] = 11788,
  [SMALL_STATE(628)] = 11801,
  [SMALL_STATE(629)] = 11814,
  [SMALL_STATE(630)] = 11827,
  [SMALL_STATE(631)] = 11840,
  [SMALL_STATE(632)] = 11853,
  [SMALL_STATE(633)] = 11866,
  [SMALL_STATE(634)] = 11879,
  [SMALL_STATE(635)] = 11892,
  [SMALL_STATE(636)] = 11905,
  [SMALL_STATE(637)] = 11918,
  [SMALL_STATE(638)] = 11931,
  [SMALL_STATE(639)] = 11944,
  [SMALL_STATE(640)] = 11957,
  [SMALL_STATE(641)] = 11970,
  [SMALL_STATE(642)] = 11983,
  [SMALL_STATE(643)] = 11996,
  [SMALL_STATE(644)] = 12009,
  [SMALL_STATE(645)] = 12022,
  [SMALL_STATE(646)] = 12035,
  [SMALL_STATE(647)] = 12048,
  [SMALL_STATE(648)] = 12061,
  [SMALL_STATE(649)] = 12074,
  [SMALL_STATE(650)] = 12087,
  [SMALL_STATE(651)] = 12100,
  [SMALL_STATE(652)] = 12113,
  [SMALL_STATE(653)] = 12126,
  [SMALL_STATE(654)] = 12139,
  [SMALL_STATE(655)] = 12152,
  [SMALL_STATE(656)] = 12165,
  [SMALL_STATE(657)] = 12178,
  [SMALL_STATE(658)] = 12191,
  [SMALL_STATE(659)] = 12204,
  [SMALL_STATE(660)] = 12217,
  [SMALL_STATE(661)] = 12230,
  [SMALL_STATE(662)] = 12243,
  [SMALL_STATE(663)] = 12256,
  [SMALL_STATE(664)] = 12269,
  [SMALL_STATE(665)] = 12282,
  [SMALL_STATE(666)] = 12295,
  [SMALL_STATE(667)] = 12308,
  [SMALL_STATE(668)] = 12321,
  [SMALL_STATE(669)] = 12334,
  [SMALL_STATE(670)] = 12347,
  [SMALL_STATE(671)] = 12360,
  [SMALL_STATE(672)] = 12373,
  [SMALL_STATE(673)] = 12386,
  [SMALL_STATE(674)] = 12399,
  [SMALL_STATE(675)] = 12412,
  [SMALL_STATE(676)] = 12425,
  [SMALL_STATE(677)] = 12438,
  [SMALL_STATE(678)] = 12451,
  [SMALL_STATE(679)] = 12464,
  [SMALL_STATE(680)] = 12477,
  [SMALL_STATE(681)] = 12490,
  [SMALL_STATE(682)] = 12503,
  [SMALL_STATE(683)] = 12516,
  [SMALL_STATE(684)] = 12529,
  [SMALL_STATE(685)] = 12542,
  [SMALL_STATE(686)] = 12555,
  [SMALL_STATE(687)] = 12568,
  [SMALL_STATE(688)] = 12581,
  [SMALL_STATE(689)] = 12594,
  [SMALL_STATE(690)] = 12607,
  [SMALL_STATE(691)] = 12620,
  [SMALL_STATE(692)] = 12633,
  [SMALL_STATE(693)] = 12646,
  [SMALL_STATE(694)] = 12659,
  [SMALL_STATE(695)] = 12672,
  [SMALL_STATE(696)] = 12685,
  [SMALL_STATE(697)] = 12698,
  [SMALL_STATE(698)] = 12712,
  [SMALL_STATE(699)] = 12726,
  [SMALL_STATE(700)] = 12740,
  [SMALL_STATE(701)] = 12754,
  [SMALL_STATE(702)] = 12768,
  [SMALL_STATE(703)] = 12780,
  [SMALL_STATE(704)] = 12794,
  [SMALL_STATE(705)] = 12806,
  [SMALL_STATE(706)] = 12820,
  [SMALL_STATE(707)] = 12834,
  [SMALL_STATE(708)] = 12848,
  [SMALL_STATE(709)] = 12860,
  [SMALL_STATE(710)] = 12874,
  [SMALL_STATE(711)] = 12888,
  [SMALL_STATE(712)] = 12902,
  [SMALL_STATE(713)] = 12914,
  [SMALL_STATE(714)] = 12928,
  [SMALL_STATE(715)] = 12940,
  [SMALL_STATE(716)] = 12954,
  [SMALL_STATE(717)] = 12966,
  [SMALL_STATE(718)] = 12978,
  [SMALL_STATE(719)] = 12989,
  [SMALL_STATE(720)] = 13002,
  [SMALL_STATE(721)] = 13015,
  [SMALL_STATE(722)] = 13028,
  [SMALL_STATE(723)] = 13041,
  [SMALL_STATE(724)] = 13052,
  [SMALL_STATE(725)] = 13065,
  [SMALL_STATE(726)] = 13078,
  [SMALL_STATE(727)] = 13091,
  [SMALL_STATE(728)] = 13104,
  [SMALL_STATE(729)] = 13117,
  [SMALL_STATE(730)] = 13130,
  [SMALL_STATE(731)] = 13143,
  [SMALL_STATE(732)] = 13156,
  [SMALL_STATE(733)] = 13169,
  [SMALL_STATE(734)] = 13180,
  [SMALL_STATE(735)] = 13191,
  [SMALL_STATE(736)] = 13204,
  [SMALL_STATE(737)] = 13215,
  [SMALL_STATE(738)] = 13228,
  [SMALL_STATE(739)] = 13239,
  [SMALL_STATE(740)] = 13252,
  [SMALL_STATE(741)] = 13265,
  [SMALL_STATE(742)] = 13276,
  [SMALL_STATE(743)] = 13286,
  [SMALL_STATE(744)] = 13294,
  [SMALL_STATE(745)] = 13304,
  [SMALL_STATE(746)] = 13314,
  [SMALL_STATE(747)] = 13324,
  [SMALL_STATE(748)] = 13332,
  [SMALL_STATE(749)] = 13342,
  [SMALL_STATE(750)] = 13350,
  [SMALL_STATE(751)] = 13360,
  [SMALL_STATE(752)] = 13370,
  [SMALL_STATE(753)] = 13380,
  [SMALL_STATE(754)] = 13388,
  [SMALL_STATE(755)] = 13398,
  [SMALL_STATE(756)] = 13408,
  [SMALL_STATE(757)] = 13416,
  [SMALL_STATE(758)] = 13424,
  [SMALL_STATE(759)] = 13432,
  [SMALL_STATE(760)] = 13440,
  [SMALL_STATE(761)] = 13448,
  [SMALL_STATE(762)] = 13455,
  [SMALL_STATE(763)] = 13462,
  [SMALL_STATE(764)] = 13469,
  [SMALL_STATE(765)] = 13476,
  [SMALL_STATE(766)] = 13483,
  [SMALL_STATE(767)] = 13490,
  [SMALL_STATE(768)] = 13497,
  [SMALL_STATE(769)] = 13504,
  [SMALL_STATE(770)] = 13511,
  [SMALL_STATE(771)] = 13518,
  [SMALL_STATE(772)] = 13525,
  [SMALL_STATE(773)] = 13532,
  [SMALL_STATE(774)] = 13539,
  [SMALL_STATE(775)] = 13546,
  [SMALL_STATE(776)] = 13553,
  [SMALL_STATE(777)] = 13560,
  [SMALL_STATE(778)] = 13567,
  [SMALL_STATE(779)] = 13574,
  [SMALL_STATE(780)] = 13581,
  [SMALL_STATE(781)] = 13588,
  [SMALL_STATE(782)] = 13595,
  [SMALL_STATE(783)] = 13602,
  [SMALL_STATE(784)] = 13609,
  [SMALL_STATE(785)] = 13616,
  [SMALL_STATE(786)] = 13623,
  [SMALL_STATE(787)] = 13630,
  [SMALL_STATE(788)] = 13637,
  [SMALL_STATE(789)] = 13644,
  [SMALL_STATE(790)] = 13651,
  [SMALL_STATE(791)] = 13658,
  [SMALL_STATE(792)] = 13665,
  [SMALL_STATE(793)] = 13672,
  [SMALL_STATE(794)] = 13679,
  [SMALL_STATE(795)] = 13686,
  [SMALL_STATE(796)] = 13693,
  [SMALL_STATE(797)] = 13700,
  [SMALL_STATE(798)] = 13707,
  [SMALL_STATE(799)] = 13714,
  [SMALL_STATE(800)] = 13721,
  [SMALL_STATE(801)] = 13728,
  [SMALL_STATE(802)] = 13735,
  [SMALL_STATE(803)] = 13742,
  [SMALL_STATE(804)] = 13749,
  [SMALL_STATE(805)] = 13756,
  [SMALL_STATE(806)] = 13763,
  [SMALL_STATE(807)] = 13770,
  [SMALL_STATE(808)] = 13777,
  [SMALL_STATE(809)] = 13784,
  [SMALL_STATE(810)] = 13791,
  [SMALL_STATE(811)] = 13798,
  [SMALL_STATE(812)] = 13805,
  [SMALL_STATE(813)] = 13812,
  [SMALL_STATE(814)] = 13819,
  [SMALL_STATE(815)] = 13826,
  [SMALL_STATE(816)] = 13833,
  [SMALL_STATE(817)] = 13840,
  [SMALL_STATE(818)] = 13847,
  [SMALL_STATE(819)] = 13854,
  [SMALL_STATE(820)] = 13861,
  [SMALL_STATE(821)] = 13868,
  [SMALL_STATE(822)] = 13875,
  [SMALL_STATE(823)] = 13882,
  [SMALL_STATE(824)] = 13889,
  [SMALL_STATE(825)] = 13896,
  [SMALL_STATE(826)] = 13903,
  [SMALL_STATE(827)] = 13910,
  [SMALL_STATE(828)] = 13917,
  [SMALL_STATE(829)] = 13924,
  [SMALL_STATE(830)] = 13931,
  [SMALL_STATE(831)] = 13938,
  [SMALL_STATE(832)] = 13945,
  [SMALL_STATE(833)] = 13952,
  [SMALL_STATE(834)] = 13959,
  [SMALL_STATE(835)] = 13966,
  [SMALL_STATE(836)] = 13973,
  [SMALL_STATE(837)] = 13980,
  [SMALL_STATE(838)] = 13987,
  [SMALL_STATE(839)] = 13994,
  [SMALL_STATE(840)] = 14001,
  [SMALL_STATE(841)] = 14008,
  [SMALL_STATE(842)] = 14015,
  [SMALL_STATE(843)] = 14022,
  [SMALL_STATE(844)] = 14029,
  [SMALL_STATE(845)] = 14036,
  [SMALL_STATE(846)] = 14043,
  [SMALL_STATE(847)] = 14050,
  [SMALL_STATE(848)] = 14057,
  [SMALL_STATE(849)] = 14064,
  [SMALL_STATE(850)] = 14071,
  [SMALL_STATE(851)] = 14078,
  [SMALL_STATE(852)] = 14085,
  [SMALL_STATE(853)] = 14092,
  [SMALL_STATE(854)] = 14099,
  [SMALL_STATE(855)] = 14106,
  [SMALL_STATE(856)] = 14113,
  [SMALL_STATE(857)] = 14120,
  [SMALL_STATE(858)] = 14127,
  [SMALL_STATE(859)] = 14134,
  [SMALL_STATE(860)] = 14141,
  [SMALL_STATE(861)] = 14148,
  [SMALL_STATE(862)] = 14155,
  [SMALL_STATE(863)] = 14162,
  [SMALL_STATE(864)] = 14169,
  [SMALL_STATE(865)] = 14176,
  [SMALL_STATE(866)] = 14183,
  [SMALL_STATE(867)] = 14190,
  [SMALL_STATE(868)] = 14197,
  [SMALL_STATE(869)] = 14204,
  [SMALL_STATE(870)] = 14211,
  [SMALL_STATE(871)] = 14218,
  [SMALL_STATE(872)] = 14225,
  [SMALL_STATE(873)] = 14232,
  [SMALL_STATE(874)] = 14239,
  [SMALL_STATE(875)] = 14246,
  [SMALL_STATE(876)] = 14253,
  [SMALL_STATE(877)] = 14260,
  [SMALL_STATE(878)] = 14267,
  [SMALL_STATE(879)] = 14274,
  [SMALL_STATE(880)] = 14281,
  [SMALL_STATE(881)] = 14288,
  [SMALL_STATE(882)] = 14295,
  [SMALL_STATE(883)] = 14302,
  [SMALL_STATE(884)] = 14309,
  [SMALL_STATE(885)] = 14316,
  [SMALL_STATE(886)] = 14323,
  [SMALL_STATE(887)] = 14330,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(739),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(725),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(633),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(723),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(887),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(786),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(726),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(729),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(792),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(793),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(794),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(707),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(710),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(796),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(711),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(713),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(741),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(788),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(782),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(731),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(732),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(777),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(776),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(775),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(700),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(705),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(773),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(697),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(709),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(725),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(633),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(739),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(274),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(547),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(865),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(733),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(738),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(745),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(703),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(734),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(718),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(866),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(750),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [473] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_tests_repeat1, 2, .production_id = 21), SHIFT_REPEAT(725),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_tests_repeat1, 2, .production_id = 21), SHIFT_REPEAT(633),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_tests_repeat1, 2, .production_id = 21), SHIFT_REPEAT(16),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_tests_repeat1, 2, .production_id = 21),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [490] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_test_repeat1, 2, .production_id = 21), SHIFT_REPEAT(725),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_test_repeat1, 2, .production_id = 21), SHIFT_REPEAT(633),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_test_repeat1, 2, .production_id = 21), SHIFT_REPEAT(17),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_test_repeat1, 2, .production_id = 21),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [519] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_executable_repeat1, 2, .production_id = 21), SHIFT_REPEAT(725),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_executable_repeat1, 2, .production_id = 21), SHIFT_REPEAT(633),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_executable_repeat1, 2, .production_id = 21), SHIFT_REPEAT(21),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_executable_repeat1, 2, .production_id = 21),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [556] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_alias_repeat1, 2, .production_id = 21), SHIFT_REPEAT(725),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_alias_repeat1, 2, .production_id = 21), SHIFT_REPEAT(633),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_alias_repeat1, 2, .production_id = 21), SHIFT_REPEAT(27),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_alias_repeat1, 2, .production_id = 21),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [569] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_executables_repeat1, 2, .production_id = 21), SHIFT_REPEAT(725),
  [572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_executables_repeat1, 2, .production_id = 21), SHIFT_REPEAT(633),
  [575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_executables_repeat1, 2, .production_id = 21), SHIFT_REPEAT(22),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_executables_repeat1, 2, .production_id = 21),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [590] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_library_repeat1, 2, .production_id = 21), SHIFT_REPEAT(725),
  [593] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_library_repeat1, 2, .production_id = 21), SHIFT_REPEAT(633),
  [596] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_library_repeat1, 2, .production_id = 21), SHIFT_REPEAT(14),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_library_repeat1, 2, .production_id = 21),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [603] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_rule_repeat1, 2), SHIFT_REPEAT(725),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat1, 2), SHIFT_REPEAT(588),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat1, 2), SHIFT_REPEAT(830),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat1, 2),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [622] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_plugin_repeat1, 2, .production_id = 21), SHIFT_REPEAT(725),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_plugin_repeat1, 2, .production_id = 21), SHIFT_REPEAT(633),
  [628] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_plugin_repeat1, 2, .production_id = 21), SHIFT_REPEAT(24),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_plugin_repeat1, 2, .production_id = 21),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [647] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_foreign_library_repeat1, 2, .production_id = 21), SHIFT_REPEAT(725),
  [650] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_foreign_library_repeat1, 2, .production_id = 21), SHIFT_REPEAT(633),
  [653] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_foreign_library_repeat1, 2, .production_id = 21), SHIFT_REPEAT(19),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_foreign_library_repeat1, 2, .production_id = 21),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [664] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_menhir_repeat1, 2, .production_id = 21), SHIFT_REPEAT(725),
  [667] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_menhir_repeat1, 2, .production_id = 21), SHIFT_REPEAT(633),
  [670] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_menhir_repeat1, 2, .production_id = 21), SHIFT_REPEAT(20),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_menhir_repeat1, 2, .production_id = 21),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [711] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_copy_files_repeat1, 2, .production_id = 21), SHIFT_REPEAT(725),
  [714] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_copy_files_repeat1, 2, .production_id = 21), SHIFT_REPEAT(633),
  [717] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_copy_files_repeat1, 2, .production_id = 21), SHIFT_REPEAT(18),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_copy_files_repeat1, 2, .production_id = 21),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [734] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_cram_repeat1, 2, .production_id = 21), SHIFT_REPEAT(725),
  [737] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_cram_repeat1, 2, .production_id = 21), SHIFT_REPEAT(633),
  [740] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_cram_repeat1, 2, .production_id = 21), SHIFT_REPEAT(38),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_cram_repeat1, 2, .production_id = 21),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [755] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_install_repeat1, 2, .production_id = 21), SHIFT_REPEAT(725),
  [758] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_install_repeat1, 2, .production_id = 21), SHIFT_REPEAT(633),
  [761] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_install_repeat1, 2, .production_id = 21), SHIFT_REPEAT(25),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_install_repeat1, 2, .production_id = 21),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [776] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_toplevel_repeat1, 2, .production_id = 21), SHIFT_REPEAT(725),
  [779] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_toplevel_repeat1, 2, .production_id = 21), SHIFT_REPEAT(633),
  [782] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_toplevel_repeat1, 2, .production_id = 21), SHIFT_REPEAT(29),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_toplevel_repeat1, 2, .production_id = 21),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [799] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_package_repeat3, 2, .production_id = 21), SHIFT_REPEAT(725),
  [802] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_package_repeat3, 2, .production_id = 21), SHIFT_REPEAT(633),
  [805] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_package_repeat3, 2, .production_id = 21), SHIFT_REPEAT(15),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_package_repeat3, 2, .production_id = 21),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [824] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_mdx_repeat1, 2, .production_id = 21), SHIFT_REPEAT(725),
  [827] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_mdx_repeat1, 2, .production_id = 21), SHIFT_REPEAT(633),
  [830] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_mdx_repeat1, 2, .production_id = 21), SHIFT_REPEAT(23),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_mdx_repeat1, 2, .production_id = 21),
  [835] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stanza_repeat1, 2, .production_id = 21), SHIFT_REPEAT(725),
  [838] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stanza_repeat1, 2, .production_id = 21), SHIFT_REPEAT(602),
  [841] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stanza_repeat1, 2, .production_id = 21), SHIFT_REPEAT(870),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stanza_repeat1, 2, .production_id = 21),
  [846] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_coq_theory_repeat1, 2, .production_id = 21), SHIFT_REPEAT(725),
  [849] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_coq_theory_repeat1, 2, .production_id = 21), SHIFT_REPEAT(633),
  [852] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_coq_theory_repeat1, 2, .production_id = 21), SHIFT_REPEAT(26),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_coq_theory_repeat1, 2, .production_id = 21),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [859] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sexps1_repeat1, 2), SHIFT_REPEAT(725),
  [862] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexps1_repeat1, 2), SHIFT_REPEAT(633),
  [865] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexps1_repeat1, 2), SHIFT_REPEAT(67),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sexps1_repeat1, 2),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [874] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__context_opam_repeat1, 2, .production_id = 45), SHIFT_REPEAT(725),
  [877] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__context_opam_repeat1, 2, .production_id = 45), SHIFT_REPEAT(633),
  [880] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__context_opam_repeat1, 2, .production_id = 45), SHIFT_REPEAT(12),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__context_opam_repeat1, 2, .production_id = 45),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [897] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_package_repeat1, 2), SHIFT_REPEAT(725),
  [900] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_package_repeat1, 2), SHIFT_REPEAT(379),
  [903] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_package_repeat1, 2), SHIFT_REPEAT(292),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_package_repeat1, 2),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [946] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__field_buildable_multi_repeat2, 2, .production_id = 21), SHIFT_REPEAT(725),
  [949] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_buildable_multi_repeat2, 2, .production_id = 21), SHIFT_REPEAT(442),
  [952] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_buildable_multi_repeat2, 2, .production_id = 21), SHIFT_REPEAT(751),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_buildable_multi_repeat2, 2, .production_id = 21),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexps1, 1),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [971] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__deps_field_repeat1, 2), SHIFT_REPEAT(725),
  [974] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__deps_field_repeat1, 2), SHIFT_REPEAT(588),
  [977] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__deps_field_repeat1, 2), SHIFT_REPEAT(184),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__deps_field_repeat1, 2),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1014] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_blang_repeat1, 2), SHIFT_REPEAT(725),
  [1017] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_blang_repeat1, 2), SHIFT_REPEAT(408),
  [1020] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_blang_repeat1, 2), SHIFT_REPEAT(185),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_blang_repeat1, 2),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1031] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__package_dep_repeat1, 2), SHIFT_REPEAT(725),
  [1034] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__package_dep_repeat1, 2), SHIFT_REPEAT(182),
  [1037] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__package_dep_repeat1, 2), SHIFT_REPEAT(200),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__package_dep_repeat1, 2),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(708),
  [1064] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_rule_repeat3, 2), SHIFT_REPEAT(739),
  [1067] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat3, 2), SHIFT_REPEAT(716),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat3, 2),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1076] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__field_modules_maybe_inline_repeat1, 2), SHIFT_REPEAT(739),
  [1079] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_modules_maybe_inline_repeat1, 2), SHIFT_REPEAT(602),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_modules_maybe_inline_repeat1, 2),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1090] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stanza_repeat2, 2), SHIFT_REPEAT(739),
  [1093] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stanza_repeat2, 2), SHIFT_REPEAT(588),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stanza_repeat2, 2),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__field_buildable_multi_repeat1, 2), SHIFT_REPEAT(739),
  [1111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__field_buildable_multi_repeat1, 2), SHIFT_REPEAT(714),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_buildable_multi_repeat1, 2),
  [1116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_rule_repeat2, 2), SHIFT_REPEAT(739),
  [1119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat2, 2), SHIFT_REPEAT(712),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat2, 2),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_package_repeat2, 2), SHIFT_REPEAT(739),
  [1133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_package_repeat2, 2), SHIFT_REPEAT(379),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_package_repeat2, 2),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__modules_osl, 1),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__dep_repeat1, 2), SHIFT_REPEAT(739),
  [1159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__dep_repeat1, 2), SHIFT_REPEAT(224),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__dep_repeat1, 2),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_authors_repeat1, 2, .production_id = 28), SHIFT_REPEAT(739),
  [1189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_authors_repeat1, 2, .production_id = 28), SHIFT_REPEAT(704),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_authors_repeat1, 2, .production_id = 28),
  [1194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_maintainers_repeat1, 2, .production_id = 30), SHIFT_REPEAT(739),
  [1197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_maintainers_repeat1, 2, .production_id = 30), SHIFT_REPEAT(702),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_maintainers_repeat1, 2, .production_id = 30),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexp, 1),
  [1222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sexp, 1),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [1228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list, 3),
  [1236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list, 3),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [1250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list, 2),
  [1254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list, 2),
  [1256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_package_repeat3, 3, .production_id = 36),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_package_repeat3, 3, .production_id = 36),
  [1260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blang, 4),
  [1262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blang, 4),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_cram, 4, .production_id = 20),
  [1270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_cram, 4, .production_id = 20),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [1274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_env, 4, .production_id = 17),
  [1276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_env, 4, .production_id = 17),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_version, 4, .production_id = 25),
  [1282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_version, 4, .production_id = 25),
  [1284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_generate_opam_files, 4, .production_id = 26),
  [1286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_generate_opam_files, 4, .production_id = 26),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_authors, 4, .production_id = 27),
  [1294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_authors, 4, .production_id = 27),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [1298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_maintainers, 4, .production_id = 29),
  [1300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_maintainers, 4, .production_id = 29),
  [1302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_tests, 4, .production_id = 20),
  [1304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_tests, 4, .production_id = 20),
  [1306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_license, 4, .production_id = 31),
  [1308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_license, 4, .production_id = 31),
  [1310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_homepage, 4, .production_id = 22),
  [1312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_homepage, 4, .production_id = 22),
  [1314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_bug_reports, 4, .production_id = 22),
  [1316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_bug_reports, 4, .production_id = 22),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_executables, 4, .production_id = 20),
  [1322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_executables, 4, .production_id = 20),
  [1324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_formatting, 4),
  [1326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_formatting, 4),
  [1328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_dialect, 4),
  [1330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_dialect, 4),
  [1332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stanza, 1),
  [1334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stanza, 1),
  [1336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_context, 4),
  [1338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_context, 4),
  [1340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_context, 4, .production_id = 32),
  [1342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_context, 4, .production_id = 32),
  [1344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_profile, 4, .production_id = 33),
  [1346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_profile, 4, .production_id = 33),
  [1348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_lock_dir, 4, .production_id = 34),
  [1350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_lock_dir, 4, .production_id = 34),
  [1352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_package, 4, .production_id = 23),
  [1354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_package, 4, .production_id = 23),
  [1356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stanza, 1, .production_id = 1),
  [1358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stanza, 1, .production_id = 1),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [1364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_copy_files, 4, .production_id = 20),
  [1366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_copy_files, 4, .production_id = 20),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stanza, 1, .production_id = 2),
  [1376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stanza, 1, .production_id = 2),
  [1378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_library, 4, .production_id = 20),
  [1380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_library, 4, .production_id = 20),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [1386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_menhir, 4, .production_id = 20),
  [1388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_menhir, 4, .production_id = 20),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_include, 4),
  [1394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_include, 4),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_toplevel, 4, .production_id = 20),
  [1400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_toplevel, 4, .production_id = 20),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [1404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_foreign_library, 4, .production_id = 20),
  [1406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_foreign_library, 4, .production_id = 20),
  [1408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_test, 4, .production_id = 20),
  [1410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_test, 4, .production_id = 20),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [1414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_rule, 4, .production_id = 20),
  [1416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_rule, 4, .production_id = 20),
  [1418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_plugin, 4, .production_id = 20),
  [1420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_plugin, 4, .production_id = 20),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [1424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_install, 4, .production_id = 20),
  [1426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_install, 4, .production_id = 20),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [1430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_executable, 4, .production_id = 20),
  [1432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_executable, 4, .production_id = 20),
  [1434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_mdx, 4, .production_id = 20),
  [1436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_mdx, 4, .production_id = 20),
  [1438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_name, 4, .production_id = 24),
  [1440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_name, 4, .production_id = 24),
  [1442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_alias, 4, .production_id = 23),
  [1444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_alias, 4, .production_id = 23),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [1448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_cram, 3),
  [1450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_cram, 3),
  [1452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_coq_theory, 4, .production_id = 20),
  [1454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_coq_theory, 4, .production_id = 20),
  [1456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_documentation_url, 4, .production_id = 22),
  [1458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_documentation_url, 4, .production_id = 22),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [1462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_ignored_subdirs, 4),
  [1464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_ignored_subdirs, 4),
  [1466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_package_name, 1),
  [1468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_name, 1),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_pin, 4),
  [1474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_pin, 4),
  [1476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_warnings, 4),
  [1478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_warnings, 4),
  [1480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_implicit_transitive_deps, 4),
  [1482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_implicit_transitive_deps, 4),
  [1484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_map_workspace_root, 4),
  [1486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_map_workspace_root, 4),
  [1488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_opam_file_location, 4),
  [1490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_opam_file_location, 4),
  [1492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_use_standard_c_and_cxx_flags, 4),
  [1494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_use_standard_c_and_cxx_flags, 4),
  [1496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_wrapped_executables, 4),
  [1498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_wrapped_executables, 4),
  [1500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_maintenance_intent, 4),
  [1502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_maintenance_intent, 4),
  [1504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_config, 4),
  [1506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_config, 4),
  [1508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_repository, 4),
  [1510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_repository, 4),
  [1512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_modules_maybe_inline, 3),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_modules_maybe_inline, 3),
  [1516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stanza, 4, .production_id = 20),
  [1518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stanza, 4, .production_id = 20),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [1524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stanza, 4),
  [1526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stanza, 4),
  [1528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_repository, 3),
  [1530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_repository, 3),
  [1532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_config, 3),
  [1534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_config, 3),
  [1536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_subdir, 5, .production_id = 35),
  [1538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_subdir, 5, .production_id = 35),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [1542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_buildable, 3, .production_id = 36),
  [1544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_buildable, 3, .production_id = 36),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [1548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__field_buildable_multi_repeat2, 1, .production_id = 1),
  [1550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__field_buildable_multi_repeat2, 1, .production_id = 1),
  [1552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_wrapped_executables, 3),
  [1554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_wrapped_executables, 3),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blang, 1),
  [1560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blang, 1),
  [1562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_buildable_multi, 3),
  [1564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_buildable_multi, 3),
  [1566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_use_standard_c_and_cxx_flags, 3),
  [1568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_use_standard_c_and_cxx_flags, 3),
  [1570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_subst, 3),
  [1572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_subst, 3),
  [1574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stanza, 1, .production_id = 3),
  [1576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stanza, 1, .production_id = 3),
  [1578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stanza, 1, .production_id = 4),
  [1580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stanza, 1, .production_id = 4),
  [1582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stanza, 1, .production_id = 5),
  [1584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stanza, 1, .production_id = 5),
  [1586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stanza, 1, .production_id = 6),
  [1588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stanza, 1, .production_id = 6),
  [1590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stanza, 1, .production_id = 7),
  [1592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stanza, 1, .production_id = 7),
  [1594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stanza, 1, .production_id = 8),
  [1596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stanza, 1, .production_id = 8),
  [1598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_name_target, 1),
  [1600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_name_target, 1),
  [1602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_map_workspace_root, 3),
  [1604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_map_workspace_root, 3),
  [1606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stanza, 1, .production_id = 9),
  [1608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stanza, 1, .production_id = 9),
  [1610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stanza, 1, .production_id = 10),
  [1612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stanza, 1, .production_id = 10),
  [1614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stanza, 1, .production_id = 11),
  [1616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stanza, 1, .production_id = 11),
  [1618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_implicit_transitive_deps, 3),
  [1620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_implicit_transitive_deps, 3),
  [1622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stanza, 1, .production_id = 12),
  [1624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stanza, 1, .production_id = 12),
  [1626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_expand_aliases_in_sandbox, 3),
  [1628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_expand_aliases_in_sandbox, 3),
  [1630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_executables_implicit_empty_intf, 3),
  [1632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_executables_implicit_empty_intf, 3),
  [1634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stanza, 1, .production_id = 13),
  [1636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stanza, 1, .production_id = 13),
  [1638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_accept_alternative_dune_file_name, 3),
  [1640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_accept_alternative_dune_file_name, 3),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stanza, 1, .production_id = 14),
  [1648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stanza, 1, .production_id = 14),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_pin, 3),
  [1656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_pin, 3),
  [1658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_library_name, 1),
  [1660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library_name, 1),
  [1662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_coq_theory, 3),
  [1664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_coq_theory, 3),
  [1666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_mdx, 3),
  [1668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_mdx, 3),
  [1670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_library_repeat1, 3),
  [1672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_library_repeat1, 3),
  [1674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_plugin, 3),
  [1676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_plugin, 3),
  [1678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_toplevel_repeat1, 3, .production_id = 36),
  [1680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_toplevel_repeat1, 3, .production_id = 36),
  [1682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_foreign_library, 3),
  [1684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_foreign_library, 3),
  [1686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_install_repeat1, 3, .production_id = 36),
  [1688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_install_repeat1, 3, .production_id = 36),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_menhir, 3),
  [1694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_menhir, 3),
  [1696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_cram_repeat1, 3),
  [1698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_cram_repeat1, 3),
  [1700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_copy_files, 3),
  [1702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_copy_files, 3),
  [1704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_lang, 5, .production_id = 37),
  [1706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_lang, 5, .production_id = 37),
  [1708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stanza, 1, .production_id = 15),
  [1710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stanza, 1, .production_id = 15),
  [1712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_using, 5, .production_id = 38),
  [1714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_using, 5, .production_id = 38),
  [1716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stanza, 1, .production_id = 16),
  [1718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stanza, 1, .production_id = 16),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_menhir_repeat1, 3),
  [1736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_menhir_repeat1, 3),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_explicit_js_mode, 3),
  [1742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_explicit_js_mode, 3),
  [1744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_foreign_library_repeat1, 3),
  [1746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_foreign_library_repeat1, 3),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [1752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_plugin_repeat1, 3, .production_id = 36),
  [1754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_plugin_repeat1, 3, .production_id = 36),
  [1756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_dialect, 3),
  [1758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_dialect, 3),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [1764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_mdx_repeat1, 3),
  [1766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_mdx_repeat1, 3),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [1772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_coq_theory_repeat1, 3, .production_id = 36),
  [1774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_coq_theory_repeat1, 3, .production_id = 36),
  [1776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_formatting, 7),
  [1778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_formatting, 7),
  [1780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_source, 7, .production_id = 48),
  [1782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_source, 7, .production_id = 48),
  [1784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_source, 7, .production_id = 47),
  [1786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_source, 7, .production_id = 47),
  [1788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_deprecated_library_name, 5, .production_id = 39),
  [1790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_deprecated_library_name, 5, .production_id = 39),
  [1792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_modules_maybe_inline, 4, .production_id = 40),
  [1794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_modules_maybe_inline, 4, .production_id = 40),
  [1796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_alias_repeat1, 4, .production_id = 41),
  [1798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_alias_repeat1, 4, .production_id = 41),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [1804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deps_field, 4, .production_id = 40),
  [1806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deps_field, 4, .production_id = 40),
  [1808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_env, 3, .production_id = 17),
  [1810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_env, 3, .production_id = 17),
  [1812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_buildable, 4, .production_id = 41),
  [1814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_buildable, 4, .production_id = 41),
  [1816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_executables, 3),
  [1818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_executables, 3),
  [1820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_install, 3),
  [1822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_install, 3),
  [1824] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_buildable, 4, .production_id = 42),
  [1826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_buildable, 4, .production_id = 42),
  [1828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_toplevel, 3),
  [1830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_toplevel, 3),
  [1832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_library_repeat1, 1, .production_id = 1),
  [1834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_library_repeat1, 1, .production_id = 1),
  [1836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_buildable_multi, 4, .production_id = 40),
  [1838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_buildable_multi, 4, .production_id = 40),
  [1840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_library, 3),
  [1842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_library, 3),
  [1844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_buildable_multi, 4, .production_id = 43),
  [1846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_buildable_multi, 4, .production_id = 43),
  [1848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_test, 4, .production_id = 40),
  [1850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_test, 4, .production_id = 40),
  [1852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_package, 3, .production_id = 17),
  [1854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_package, 3, .production_id = 17),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_rule, 3),
  [1860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_rule, 3),
  [1862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_tests_repeat1, 1, .production_id = 1),
  [1864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_tests_repeat1, 1, .production_id = 1),
  [1866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_tests, 3),
  [1868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_tests, 3),
  [1870] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_package_repeat3, 4, .production_id = 41),
  [1872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_package_repeat3, 4, .production_id = 41),
  [1874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_test_repeat1, 1, .production_id = 1),
  [1876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_test_repeat1, 1, .production_id = 1),
  [1878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_test, 3),
  [1880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_test, 3),
  [1882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_library_repeat1, 4, .production_id = 40),
  [1884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_library_repeat1, 4, .production_id = 40),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_toplevel_repeat1, 4, .production_id = 41),
  [1890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_toplevel_repeat1, 4, .production_id = 41),
  [1892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_toplevel_repeat1, 4, .production_id = 42),
  [1894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_toplevel_repeat1, 4, .production_id = 42),
  [1896] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_install_repeat1, 4, .production_id = 41),
  [1898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_install_repeat1, 4, .production_id = 41),
  [1900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_cram_repeat1, 4, .production_id = 40),
  [1902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_cram_repeat1, 4, .production_id = 40),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [1908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_executables_repeat1, 1, .production_id = 1),
  [1910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_executables_repeat1, 1, .production_id = 1),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [1928] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_executable_repeat1, 1, .production_id = 1),
  [1930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_executable_repeat1, 1, .production_id = 1),
  [1932] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_copy_files_repeat1, 4, .production_id = 41),
  [1934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_copy_files_repeat1, 4, .production_id = 41),
  [1936] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_copy_files_repeat1, 4, .production_id = 42),
  [1938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_copy_files_repeat1, 4, .production_id = 42),
  [1940] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_menhir_repeat1, 4, .production_id = 40),
  [1942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_menhir_repeat1, 4, .production_id = 40),
  [1944] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_foreign_library_repeat1, 4, .production_id = 40),
  [1946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_foreign_library_repeat1, 4, .production_id = 40),
  [1948] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_plugin_repeat1, 4, .production_id = 41),
  [1950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_plugin_repeat1, 4, .production_id = 41),
  [1952] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_plugin_repeat1, 4, .production_id = 42),
  [1954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_plugin_repeat1, 4, .production_id = 42),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [1958] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_mdx_repeat1, 4, .production_id = 40),
  [1960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_mdx_repeat1, 4, .production_id = 40),
  [1962] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_coq_theory_repeat1, 4, .production_id = 41),
  [1964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_coq_theory_repeat1, 4, .production_id = 41),
  [1966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_executable, 3),
  [1968] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_executable, 3),
  [1970] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dep, 3),
  [1972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dep, 3),
  [1974] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_alias_repeat1, 1, .production_id = 1),
  [1976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_alias_repeat1, 1, .production_id = 1),
  [1978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza_alias, 3, .production_id = 17),
  [1980] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stanza_alias, 3, .production_id = 17),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1984] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__context_opam_repeat1, 3),
  [1986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__context_opam_repeat1, 3),
  [1988] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_name, 1),
  [1990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_name, 1),
  [1992] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stanza_repeat1, 1, .production_id = 1),
  [1994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stanza_repeat1, 1, .production_id = 1),
  [1996] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dep, 4),
  [1998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dep, 4),
  [2000] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lib_dep, 4, .production_id = 40),
  [2002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lib_dep, 4, .production_id = 40),
  [2004] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat4, 2, .production_id = 21), SHIFT_REPEAT(11),
  [2007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat4, 2, .production_id = 21),
  [2009] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_name, 1),
  [2011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 1),
  [2013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [2015] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__target, 4),
  [2017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__target, 4),
  [2019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [2021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stanza, 3),
  [2023] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stanza, 3),
  [2025] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__package_dep, 4),
  [2027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__package_dep, 4),
  [2029] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__context_opam_repeat1, 4, .production_id = 50),
  [2031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__context_opam_repeat1, 4, .production_id = 50),
  [2033] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__context_opam_repeat1, 4, .production_id = 51),
  [2035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__context_opam_repeat1, 4, .production_id = 51),
  [2037] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__context_opam_repeat1, 4),
  [2039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__context_opam_repeat1, 4),
  [2041] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__context_opam_repeat1, 4, .production_id = 52),
  [2043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__context_opam_repeat1, 4, .production_id = 52),
  [2045] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__context_opam_repeat1, 4, .production_id = 53),
  [2047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__context_opam_repeat1, 4, .production_id = 53),
  [2049] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__context_opam_repeat1, 4, .production_id = 54),
  [2051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__context_opam_repeat1, 4, .production_id = 54),
  [2053] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__context_opam_repeat1, 4, .production_id = 55),
  [2055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__context_opam_repeat1, 4, .production_id = 55),
  [2057] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__context_opam_repeat1, 4, .production_id = 56),
  [2059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__context_opam_repeat1, 4, .production_id = 56),
  [2061] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__context_opam_repeat1, 4, .production_id = 57),
  [2063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__context_opam_repeat1, 4, .production_id = 57),
  [2065] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__context_opam_repeat1, 4, .production_id = 58),
  [2067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__context_opam_repeat1, 4, .production_id = 58),
  [2069] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_library_repeat1, 7, .production_id = 59),
  [2071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_library_repeat1, 7, .production_id = 59),
  [2073] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_plugin_repeat1, 7, .production_id = 60),
  [2075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_plugin_repeat1, 7, .production_id = 60),
  [2077] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__version_constraint, 4),
  [2079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_constraint, 4),
  [2081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [2083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [2085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [2087] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2), SHIFT_REPEAT(13),
  [2090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2),
  [2092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [2094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [2096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [2098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [2100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_maintainers_repeat1, 1, .production_id = 19),
  [2102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_maintainers_repeat1, 1, .production_id = 19),
  [2104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [2106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stanza_authors_repeat1, 1, .production_id = 18),
  [2108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_authors_repeat1, 1, .production_id = 18),
  [2110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [2112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [2114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [2116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [2118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [2120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blang_op, 1),
  [2122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blang_op, 1),
  [2124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [2126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [2128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [2130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [2132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [2134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [2136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_name, 1),
  [2138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_name, 1),
  [2140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [2142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [2144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_public_name, 1),
  [2146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_public_name, 1),
  [2148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lock_name, 1),
  [2150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lock_name, 1),
  [2152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_name_dep, 1),
  [2154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_name_dep, 1),
  [2156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [2158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(671),
  [2160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [2162] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [2164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ocaml_syntax_repeat1, 2),
  [2166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ocaml_syntax_repeat1, 2), SHIFT_REPEAT(720),
  [2169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [2171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(721),
  [2174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [2176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [2178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [2180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_pin_repeat1, 2), SHIFT_REPEAT(267),
  [2183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_pin_repeat1, 2),
  [2185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(668),
  [2187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [2189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [2191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [2193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ocaml_syntax, 1),
  [2195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [2197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [2199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [2201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [2203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [2205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ocaml_syntax, 2),
  [2207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [2209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [2211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [2213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [2215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [2217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [2219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [2221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [2223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [2225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [2227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [2229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [2231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [2233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [2235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 5, .production_id = 46),
  [2237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [2239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [2241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 6, .production_id = 49),
  [2243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_pin_repeat1, 4),
  [2245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [2247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [2249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(742),
  [2251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [2253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat4, 3, .production_id = 36),
  [2255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 3),
  [2257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 4, .production_id = 44),
  [2259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat4, 1, .production_id = 1),
  [2261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat4, 4, .production_id = 42),
  [2263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_rule_repeat4, 4, .production_id = 41),
  [2265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [2267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [2269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__modules_osl, 2),
  [2271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [2273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [2275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [2277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [2279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [2281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [2283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [2285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [2287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [2289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [2291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [2293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [2295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [2297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [2299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [2301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [2303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [2305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [2307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [2309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [2311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [2313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [2315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__context_opam, 3),
  [2317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [2319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [2321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [2323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rule_mode_promote_field, 4, .production_id = 40),
  [2325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [2327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [2329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [2331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [2333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [2335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [2337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [2339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [2341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [2343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [2345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [2347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [2349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [2351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [2353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [2355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [2357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [2359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [2361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [2363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [2365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [2367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [2369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [2371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [2373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [2375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [2377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [2379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [2381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [2383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [2385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [2387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [2389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [2391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [2393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [2395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [2397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [2399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [2401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [2403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [2405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [2407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [2409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [2411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [2413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [2415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [2417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [2419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [2421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [2423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [2425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [2427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [2429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [2431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [2433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [2435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [2437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [2439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [2441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [2443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [2445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [2447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [2449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [2451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [2453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [2455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [2457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__context_opam, 4, .production_id = 32),
  [2459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [2461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [2463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rule_mode, 4, .production_id = 42),
  [2465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rule_mode, 4, .production_id = 41),
  [2467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [2469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [2471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [2473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [2475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [2477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [2479] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [2483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__modules_osl, 3),
  [2485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [2487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [2489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_dune(void) {
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
