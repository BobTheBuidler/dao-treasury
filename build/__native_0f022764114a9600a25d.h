#ifndef MYPYC_NATIVE_0f022764114a9600a25d_H
#define MYPYC_NATIVE_0f022764114a9600a25d_H
#include <Python.h>
#include <CPy.h>
#ifndef MYPYC_DECLARED_tuple_T3OOO
#define MYPYC_DECLARED_tuple_T3OOO
typedef struct tuple_T3OOO {
    PyObject *f0;
    PyObject *f1;
    PyObject *f2;
} tuple_T3OOO;
#endif

#ifndef MYPYC_DECLARED_tuple_T2OO
#define MYPYC_DECLARED_tuple_T2OO
typedef struct tuple_T2OO {
    PyObject *f0;
    PyObject *f1;
} tuple_T2OO;
#endif

#ifndef MYPYC_DECLARED_tuple_T4CIOO
#define MYPYC_DECLARED_tuple_T4CIOO
typedef struct tuple_T4CIOO {
    char f0;
    CPyTagged f1;
    PyObject *f2;
    PyObject *f3;
} tuple_T4CIOO;
#endif

#ifndef MYPYC_DECLARED_tuple_T0
#define MYPYC_DECLARED_tuple_T0
typedef struct tuple_T0 {
    int empty_struct_error_flag;
} tuple_T0;
#endif

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_entry;
    PyObject *_type;
    PyObject *_value;
    PyObject *_traceback;
    PyObject *_arg;
    CPyTagged ___mypyc_next_label__;
    PyObject *_txgroup_dbid;
    PyObject *___mypyc_temp__0;
    CPyTagged ___mypyc_temp__1;
    PyObject *_rule;
    PyObject *___mypyc_temp__2;
    tuple_T3OOO ___mypyc_temp__3;
} dao_treasury___sorting___sort_advanced_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_env__;
} dao_treasury___sorting___sort_advanced_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *_txgroup_id;
    char ___one_value;
    PyObject *___value;
    PyObject *___values;
} dao_treasury___sorting____matchers____MatcherObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *_txgroup_id;
    char ___one_value;
    PyObject *___value;
    PyObject *___values;
} dao_treasury___sorting____matchers____HexStringMatcherObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *_txgroup_id;
    char ___one_value;
    PyObject *___value;
    PyObject *___values;
} dao_treasury___sorting____matchers____AddressMatcherObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *_txgroup_id;
    char ___one_value;
    PyObject *___value;
    PyObject *___values;
} dao_treasury___sorting____matchers___FromAddressMatcherObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *_txgroup_id;
    char ___one_value;
    PyObject *___value;
    PyObject *___values;
} dao_treasury___sorting____matchers___ToAddressMatcherObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *_txgroup_id;
    char ___one_value;
    PyObject *___value;
    PyObject *___values;
} dao_treasury___sorting____matchers___HashMatcherObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    char ___initialized;
    PyObject *_rules_dir;
    PyObject *_revenue_dir;
    PyObject *_cost_of_revenue_dir;
    PyObject *_expenses_dir;
    PyObject *_other_income_dir;
    PyObject *_other_expense_dir;
    PyObject *_ignore_dir;
} dao_treasury___sorting____rules___RulesObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *_txgroup;
    PyObject *_networks;
    PyObject *_rule_type;
} dao_treasury___sorting___decorator___SortRuleDecoratorObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *_address;
    PyObject *_start_block;
    PyObject *_end_block;
    PyObject *_start_timestamp;
    PyObject *_end_timestamp;
} dao_treasury____wallet___TreasuryWalletObject;


struct export_table_0f022764114a9600a25d {
    PyObject **CPyStatic_sorting___logger;
    PyObject **CPyStatic_sorting___TxGroup;
    PyObject **CPyStatic_sorting___must_sort_inbound_txgroup_dbid;
    PyObject **CPyStatic_sorting___must_sort_outbound_txgroup_dbid;
    PyTypeObject **CPyType_sorting___sort_advanced_env;
    PyObject *(*CPyDef_sorting___sort_advanced_env)(void);
    PyTypeObject **CPyType_sorting___sort_advanced_gen;
    PyObject *(*CPyDef_sorting___sort_advanced_gen)(void);
    PyObject *(*CPyDef_sorting___sort_basic)(PyObject *cpy_r_entry);
    PyObject *(*CPyDef_sorting___sort_basic_entity)(PyObject *cpy_r_entry);
    PyObject *(*CPyDef_sorting___sort_advanced_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_sorting___sort_advanced_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_sorting___sort_advanced_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_sorting___sort_advanced_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_sorting___sort_advanced_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_sorting___sort_advanced_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_sorting___sort_advanced_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_sorting___sort_advanced)(PyObject *cpy_r_entry);
    char (*CPyDef_sorting_____top_level__)(void);
    PyObject **CPyStatic__matchers___logger;
    PyTypeObject **CPyType__matchers____Matcher;
    PyObject *(*CPyDef__matchers____Matcher)(PyObject *cpy_r_txgroup, PyObject *cpy_r_validated_values);
    PyTypeObject **CPyType__matchers____HexStringMatcher;
    PyObject *(*CPyDef__matchers____HexStringMatcher)(PyObject *cpy_r_txgroup, PyObject *cpy_r_validated_values);
    PyTypeObject **CPyType__matchers____AddressMatcher;
    PyObject *(*CPyDef__matchers____AddressMatcher)(PyObject *cpy_r_txgroup, PyObject *cpy_r_addresses);
    PyTypeObject **CPyType__matchers___FromAddressMatcher;
    PyObject *(*CPyDef__matchers___FromAddressMatcher)(PyObject *cpy_r_txgroup, PyObject *cpy_r_addresses);
    PyTypeObject **CPyType__matchers___ToAddressMatcher;
    PyObject *(*CPyDef__matchers___ToAddressMatcher)(PyObject *cpy_r_txgroup, PyObject *cpy_r_addresses);
    PyTypeObject **CPyType__matchers___HashMatcher;
    PyObject *(*CPyDef__matchers___HashMatcher)(PyObject *cpy_r_txgroup, PyObject *cpy_r_hashes);
    PyObject *(*CPyDef__matchers____Matcher___match)(PyObject *cpy_r_cls, PyObject *cpy_r_string);
    char (*CPyDef__matchers____Matcher_____init__)(PyObject *cpy_r_self, PyObject *cpy_r_txgroup, PyObject *cpy_r_validated_values);
    char (*CPyDef__matchers____Matcher_____contains__)(PyObject *cpy_r_self, PyObject *cpy_r_string);
    PyObject *(*CPyDef__matchers____Matcher___values)(PyObject *cpy_r_self);
    PyObject *(*CPyDef__matchers____HexStringMatcher____validate_hexstr)(PyObject *cpy_r_cls, PyObject *cpy_r_hexstr);
    char (*CPyDef__matchers____AddressMatcher_____init__)(PyObject *cpy_r_self, PyObject *cpy_r_txgroup, PyObject *cpy_r_addresses);
    PyObject *(*CPyDef__matchers____AddressMatcher_____repr__)(PyObject *cpy_r_self);
    char (*CPyDef__matchers___HashMatcher_____init__)(PyObject *cpy_r_self, PyObject *cpy_r_txgroup, PyObject *cpy_r_hashes);
    PyObject *(*CPyDef__matchers___HashMatcher_____repr__)(PyObject *cpy_r_self);
    char (*CPyDef__matchers_____top_level__)(void);
    PyObject **CPyStatic__rules___CHAINID;
    PyObject **CPyStatic__rules___logger;
    PyTypeObject **CPyType__rules___Rules;
    PyObject *(*CPyDef__rules___Rules)(PyObject *cpy_r_path);
    char (*CPyDef__rules___Rules_____init__)(PyObject *cpy_r_self, PyObject *cpy_r_path);
    char (*CPyDef__rules___Rules_____build_matchers)(PyObject *cpy_r_self);
    char (*CPyDef__rules___Rules_____build_matchers_for_all_groups)(PyObject *cpy_r_self, PyObject *cpy_r_match_rules_filename, PyObject *cpy_r_matcher_cls);
    char (*CPyDef__rules___Rules_____build_matchers_for_group)(PyObject *cpy_r_self, PyObject *cpy_r_top_level_name, PyObject *cpy_r_rules, PyObject *cpy_r_filename, PyObject *cpy_r_matcher_cls);
    PyObject *(*CPyDef__rules___Rules_____get_rule_file)(PyObject *cpy_r_self, PyObject *cpy_r_path, PyObject *cpy_r_filename);
    char (*CPyDef__rules_____top_level__)(void);
    PyObject **CPyStatic_decorator___CHAINID;
    PyTypeObject **CPyType_decorator___SortRuleDecorator;
    PyObject *(*CPyDef_decorator___SortRuleDecorator)(PyObject *cpy_r_txgroup, PyObject *cpy_r_networks, PyObject *cpy_r_rule_type);
    PyObject *(*CPyDef_decorator___revenue)(PyObject *cpy_r_txgroup, PyObject *cpy_r_networks);
    PyObject *(*CPyDef_decorator___cost_of_revenue)(PyObject *cpy_r_txgroup, PyObject *cpy_r_networks);
    PyObject *(*CPyDef_decorator___expense)(PyObject *cpy_r_txgroup, PyObject *cpy_r_networks);
    PyObject *(*CPyDef_decorator___other_income)(PyObject *cpy_r_txgroup, PyObject *cpy_r_networks);
    PyObject *(*CPyDef_decorator___other_expense)(PyObject *cpy_r_txgroup, PyObject *cpy_r_networks);
    PyObject *(*CPyDef_decorator___ignore)(PyObject *cpy_r_txgroup, PyObject *cpy_r_networks);
    char (*CPyDef_decorator___SortRuleDecorator_____init__)(PyObject *cpy_r_self, PyObject *cpy_r_txgroup, PyObject *cpy_r_networks, PyObject *cpy_r_rule_type);
    PyObject *(*CPyDef_decorator___SortRuleDecorator_____call__)(PyObject *cpy_r_self, PyObject *cpy_r_func, PyObject *cpy_r_networks);
    char (*CPyDef_decorator_____top_level__)(void);
    PyObject **CPyStatic__wallet___WALLETS;
    PyTypeObject **CPyType__wallet___TreasuryWallet;
    PyObject *(*CPyDef__wallet___TreasuryWallet)(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    char (*CPyDef__wallet___TreasuryWallet_____post_init__)(PyObject *cpy_r_self);
    PyObject *(*CPyDef__wallet___TreasuryWallet____start_block)(PyObject *cpy_r_self);
    PyObject *(*CPyDef__wallet___TreasuryWallet____end_block)(PyObject *cpy_r_self);
    PyObject *(*CPyDef__wallet___TreasuryWallet____get_instance)(PyObject *cpy_r_address);
    char (*CPyDef__wallet_____top_level__)(void);
};
#endif
