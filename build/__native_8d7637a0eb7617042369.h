#ifndef MYPYC_NATIVE_8d7637a0eb7617042369_H
#define MYPYC_NATIVE_8d7637a0eb7617042369_H
#include <Python.h>
#include <CPy.h>
#ifndef MYPYC_DECLARED_tuple_T2OO
#define MYPYC_DECLARED_tuple_T2OO
typedef struct tuple_T2OO {
    PyObject *f0;
    PyObject *f1;
} tuple_T2OO;
#endif

#ifndef MYPYC_DECLARED_tuple_T3CIO
#define MYPYC_DECLARED_tuple_T3CIO
typedef struct tuple_T3CIO {
    char f0;
    CPyTagged f1;
    PyObject *f2;
} tuple_T3CIO;
#endif

#ifndef MYPYC_DECLARED_tuple_T3OOO
#define MYPYC_DECLARED_tuple_T3OOO
typedef struct tuple_T3OOO {
    PyObject *f0;
    PyObject *f1;
    PyObject *f2;
} tuple_T3OOO;
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

#ifndef MYPYC_DECLARED_tuple_T8OOOOOOOO
#define MYPYC_DECLARED_tuple_T8OOOOOOOO
typedef struct tuple_T8OOOOOOOO {
    PyObject *f0;
    PyObject *f1;
    PyObject *f2;
    PyObject *f3;
    PyObject *f4;
    PyObject *f5;
    PyObject *f6;
    PyObject *f7;
} tuple_T8OOOOOOOO;
#endif

#ifndef MYPYC_DECLARED_tuple_T0
#define MYPYC_DECLARED_tuple_T0
typedef struct tuple_T0 {
    int empty_struct_error_flag;
} tuple_T0;
#endif

#ifndef MYPYC_DECLARED_tuple_T6OOOOOO
#define MYPYC_DECLARED_tuple_T6OOOOOO
typedef struct tuple_T6OOOOOO {
    PyObject *f0;
    PyObject *f1;
    PyObject *f2;
    PyObject *f3;
    PyObject *f4;
    PyObject *f5;
} tuple_T6OOOOOO;
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
    CPyTagged ___mypyc_temp__2;
    PyObject *___mypyc_temp__3;
    PyObject *_rules;
    PyObject *___mypyc_temp__4;
    CPyTagged ___mypyc_temp__5;
    PyObject *_rule;
    PyObject *___mypyc_temp__6;
    tuple_T3OOO ___mypyc_temp__7;
    tuple_T3OOO ___mypyc_temp__8;
    PyObject *___mypyc_temp__9;
    tuple_T3OOO ___mypyc_temp__10;
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
    PyObject *__rule;
    char _locked;
} dao_treasury___sorting___factory___SortRuleFactoryObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} dao_treasury___sorting___rule_____post_init___3__SortRule_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} dao_treasury___sorting___rule___txgroup_dbid__SortRule_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_self;
    PyObject *_tx;
    PyObject *_type;
    PyObject *_value;
    PyObject *_traceback;
    PyObject *_arg;
    CPyTagged ___mypyc_next_label__;
    PyObject *_matchers;
    PyObject *___mypyc_temp__0;
    CPyTagged ___mypyc_temp__1;
    PyObject *_matcher;
    PyObject *_match;
    PyObject *___mypyc_temp__2;
    tuple_T3OOO ___mypyc_temp__3;
} dao_treasury___sorting___rule___match__SortRule_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} dao_treasury___sorting___rule___match__SortRule_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_env__;
} dao_treasury___sorting___rule___match__SortRule_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_self;
    PyObject *_tx;
    PyObject *_type;
    PyObject *_value;
    PyObject *_traceback;
    PyObject *_arg;
    CPyTagged ___mypyc_next_label__;
    PyObject *___mypyc_temp__4;
    tuple_T3OOO ___mypyc_temp__5;
} dao_treasury___sorting___rule___match__InboundSortRule_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} dao_treasury___sorting___rule___match__InboundSortRule_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_env__;
} dao_treasury___sorting___rule___match__InboundSortRule_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_self;
    PyObject *_tx;
    PyObject *_type;
    PyObject *_value;
    PyObject *_traceback;
    PyObject *_arg;
    CPyTagged ___mypyc_next_label__;
    PyObject *___mypyc_temp__6;
    tuple_T3OOO ___mypyc_temp__7;
} dao_treasury___sorting___rule___match__OutboundSortRule_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} dao_treasury___sorting___rule___match__OutboundSortRule_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_env__;
} dao_treasury___sorting___rule___match__OutboundSortRule_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} dao_treasury___sorting___rule_____post_init___3_RevenueSortRule_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} dao_treasury___sorting___rule_____post_init___3_CostOfRevenueSortRule_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} dao_treasury___sorting___rule_____post_init___3_ExpenseSortRule_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} dao_treasury___sorting___rule_____post_init___3_OtherIncomeSortRule_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} dao_treasury___sorting___rule_____post_init___3_OtherExpenseSortRule_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} dao_treasury___sorting___rule_____post_init___3_IgnoreSortRule_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *_address;
    PyObject *_start_block;
    PyObject *_end_block;
    PyObject *_start_timestamp;
    PyObject *_end_timestamp;
    PyObject *_networks;
} dao_treasury____wallet___TreasuryWalletObject;


struct export_table_8d7637a0eb7617042369 {
    PyObject **CPyStatic_sorting___logger;
    PyObject **CPyStatic_sorting___TxGroup;
    PyObject **CPyStatic_sorting___MUST_SORT_INBOUND_TXGROUP_DBID;
    PyObject **CPyStatic_sorting___MUST_SORT_OUTBOUND_TXGROUP_DBID;
    PyObject **CPyStatic_sorting___INTERNAL_TRANSFER_TXGROUP_DBID;
    PyTypeObject **CPyType_sorting___sort_advanced_env;
    PyObject *(*CPyDef_sorting___sort_advanced_env)(void);
    PyTypeObject **CPyType_sorting___sort_advanced_gen;
    PyObject *(*CPyDef_sorting___sort_advanced_gen)(void);
    PyObject *(*CPyDef_sorting___sort_basic)(PyObject *cpy_r_entry);
    PyObject *(*CPyDef_sorting___sort_basic_entity)(PyObject *cpy_r_tx);
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
    PyObject **CPyStatic__rules___logger;
    PyTypeObject **CPyType__rules___Rules;
    PyObject *(*CPyDef__rules___Rules)(PyObject *cpy_r_path);
    char (*CPyDef__rules___Rules_____init__)(PyObject *cpy_r_self, PyObject *cpy_r_path);
    char (*CPyDef__rules___Rules_____build_matchers)(PyObject *cpy_r_self);
    char (*CPyDef__rules___Rules_____build_matchers_for_all_groups)(PyObject *cpy_r_self, PyObject *cpy_r_match_rules_filename, PyObject *cpy_r_matcher_cls);
    char (*CPyDef__rules___Rules_____build_matchers_for_group)(PyObject *cpy_r_self, PyObject *cpy_r_top_level_name, PyObject *cpy_r_rules, PyObject *cpy_r_filename, PyObject *cpy_r_matcher_cls);
    PyObject *(*CPyDef__rules___Rules_____get_rule_file)(PyObject *cpy_r_self, PyObject *cpy_r_path, PyObject *cpy_r_filename);
    char (*CPyDef__rules_____top_level__)(void);
    PyTypeObject **CPyType_factory___SortRuleFactory;
    PyObject *(*CPyDef_factory___SortRuleFactory)(PyObject *cpy_r_txgroup, PyObject *cpy_r_networks, PyObject *cpy_r_rule_type);
    PyObject *(*CPyDef_factory___revenue)(PyObject *cpy_r_txgroup, PyObject *cpy_r_networks);
    PyObject *(*CPyDef_factory___cost_of_revenue)(PyObject *cpy_r_txgroup, PyObject *cpy_r_networks);
    PyObject *(*CPyDef_factory___expense)(PyObject *cpy_r_txgroup, PyObject *cpy_r_networks);
    PyObject *(*CPyDef_factory___other_income)(PyObject *cpy_r_txgroup, PyObject *cpy_r_networks);
    PyObject *(*CPyDef_factory___other_expense)(PyObject *cpy_r_txgroup, PyObject *cpy_r_networks);
    PyObject *(*CPyDef_factory___ignore)(PyObject *cpy_r_txgroup, PyObject *cpy_r_networks);
    char (*CPyDef_factory___SortRuleFactory_____init__)(PyObject *cpy_r_self, PyObject *cpy_r_txgroup, PyObject *cpy_r_networks, PyObject *cpy_r_rule_type);
    PyObject *(*CPyDef_factory___SortRuleFactory_____call__)(PyObject *cpy_r_self, PyObject *cpy_r_func, PyObject *cpy_r_networks);
    PyObject *(*CPyDef_factory___SortRuleFactory___rule)(PyObject *cpy_r_self);
    char (*CPyDef_factory___SortRuleFactory___match)(PyObject *cpy_r_self, char cpy_r_func, PyObject *cpy_r_match_values);
    char (*CPyDef_factory___SortRuleFactory_____check_locked)(PyObject *cpy_r_self);
    char (*CPyDef_factory_____top_level__)(void);
    PyObject **CPyStatic_rule___logger;
    PyObject **CPyStatic_rule____log_debug;
    PyObject **CPyStatic_rule____match_all;
    tuple_T8OOOOOOOO *CPyStatic_rule____MATCHING_ATTRS;
    PyTypeObject **CPyType_rule____SortRule;
    PyTypeObject **CPyType_rule____InboundSortRule;
    PyTypeObject **CPyType_rule____OutboundSortRule;
    PyTypeObject **CPyType_rule___RevenueSortRule;
    PyTypeObject **CPyType_rule___CostOfRevenueSortRule;
    PyTypeObject **CPyType_rule___ExpenseSortRule;
    PyTypeObject **CPyType_rule___OtherIncomeSortRule;
    PyTypeObject **CPyType_rule___OtherExpenseSortRule;
    PyTypeObject **CPyType_rule___IgnoreSortRule;
    PyTypeObject **CPyType_rule_____post_init___3__SortRule_obj;
    PyObject *(*CPyDef_rule_____post_init___3__SortRule_obj)(void);
    PyTypeObject **CPyType_rule___txgroup_dbid__SortRule_obj;
    PyObject *(*CPyDef_rule___txgroup_dbid__SortRule_obj)(void);
    PyTypeObject **CPyType_rule___match__SortRule_env;
    PyObject *(*CPyDef_rule___match__SortRule_env)(void);
    PyTypeObject **CPyType_rule___match__SortRule_obj;
    PyObject *(*CPyDef_rule___match__SortRule_obj)(void);
    PyTypeObject **CPyType_rule___match__SortRule_gen;
    PyObject *(*CPyDef_rule___match__SortRule_gen)(void);
    PyTypeObject **CPyType_rule___match__InboundSortRule_env;
    PyObject *(*CPyDef_rule___match__InboundSortRule_env)(void);
    PyTypeObject **CPyType_rule___match__InboundSortRule_obj;
    PyObject *(*CPyDef_rule___match__InboundSortRule_obj)(void);
    PyTypeObject **CPyType_rule___match__InboundSortRule_gen;
    PyObject *(*CPyDef_rule___match__InboundSortRule_gen)(void);
    PyTypeObject **CPyType_rule___match__OutboundSortRule_env;
    PyObject *(*CPyDef_rule___match__OutboundSortRule_env)(void);
    PyTypeObject **CPyType_rule___match__OutboundSortRule_obj;
    PyObject *(*CPyDef_rule___match__OutboundSortRule_obj)(void);
    PyTypeObject **CPyType_rule___match__OutboundSortRule_gen;
    PyObject *(*CPyDef_rule___match__OutboundSortRule_gen)(void);
    PyTypeObject **CPyType_rule_____post_init___3_RevenueSortRule_obj;
    PyObject *(*CPyDef_rule_____post_init___3_RevenueSortRule_obj)(void);
    PyTypeObject **CPyType_rule_____post_init___3_CostOfRevenueSortRule_obj;
    PyObject *(*CPyDef_rule_____post_init___3_CostOfRevenueSortRule_obj)(void);
    PyTypeObject **CPyType_rule_____post_init___3_ExpenseSortRule_obj;
    PyObject *(*CPyDef_rule_____post_init___3_ExpenseSortRule_obj)(void);
    PyTypeObject **CPyType_rule_____post_init___3_OtherIncomeSortRule_obj;
    PyObject *(*CPyDef_rule_____post_init___3_OtherIncomeSortRule_obj)(void);
    PyTypeObject **CPyType_rule_____post_init___3_OtherExpenseSortRule_obj;
    PyObject *(*CPyDef_rule_____post_init___3_OtherExpenseSortRule_obj)(void);
    PyTypeObject **CPyType_rule_____post_init___3_IgnoreSortRule_obj;
    PyObject *(*CPyDef_rule_____post_init___3_IgnoreSortRule_obj)(void);
    PyObject *(*CPyDef_rule_____post_init___3__SortRule_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    char (*CPyDef_rule_____post_init___3__SortRule_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self);
    PyObject *(*CPyDef_rule___txgroup_dbid__SortRule_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_rule___txgroup_dbid__SortRule_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self);
    PyObject *(*CPyDef_rule___match__SortRule_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_rule___match__SortRule_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_rule___match__SortRule_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_rule___match__SortRule_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_rule___match__SortRule_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_rule___match__SortRule_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_rule___match__SortRule_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_rule___match__SortRule_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_rule___match__SortRule_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self, PyObject *cpy_r_tx);
    PyObject *(*CPyDef_rule___match__InboundSortRule_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_rule___match__InboundSortRule_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_rule___match__InboundSortRule_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_rule___match__InboundSortRule_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_rule___match__InboundSortRule_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_rule___match__InboundSortRule_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_rule___match__InboundSortRule_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_rule___match__InboundSortRule_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_rule___match__InboundSortRule_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self, PyObject *cpy_r_tx);
    PyObject *(*CPyDef_rule___match__OutboundSortRule_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_rule___match__OutboundSortRule_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_rule___match__OutboundSortRule_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_rule___match__OutboundSortRule_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_rule___match__OutboundSortRule_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_rule___match__OutboundSortRule_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_rule___match__OutboundSortRule_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_rule___match__OutboundSortRule_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_rule___match__OutboundSortRule_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self, PyObject *cpy_r_tx);
    PyObject *(*CPyDef_rule_____post_init___3_RevenueSortRule_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    char (*CPyDef_rule_____post_init___3_RevenueSortRule_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self);
    PyObject *(*CPyDef_rule_____post_init___3_CostOfRevenueSortRule_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    char (*CPyDef_rule_____post_init___3_CostOfRevenueSortRule_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self);
    PyObject *(*CPyDef_rule_____post_init___3_ExpenseSortRule_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    char (*CPyDef_rule_____post_init___3_ExpenseSortRule_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self);
    PyObject *(*CPyDef_rule_____post_init___3_OtherIncomeSortRule_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    char (*CPyDef_rule_____post_init___3_OtherIncomeSortRule_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self);
    PyObject *(*CPyDef_rule_____post_init___3_OtherExpenseSortRule_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    char (*CPyDef_rule_____post_init___3_OtherExpenseSortRule_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self);
    PyObject *(*CPyDef_rule_____post_init___3_IgnoreSortRule_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    char (*CPyDef_rule_____post_init___3_IgnoreSortRule_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self);
    char (*CPyDef_rule_____top_level__)(void);
    PyObject **CPyStatic__nicknames___set_nickname;
    char (*CPyDef__nicknames___setup_address_nicknames_in_db)(void);
    char (*CPyDef__nicknames_____top_level__)(void);
    PyObject **CPyStatic__wallet___WALLETS;
    PyObject **CPyStatic__wallet___to_address;
    PyTypeObject **CPyType__wallet___TreasuryWallet;
    PyObject *(*CPyDef__wallet___TreasuryWallet)(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    char (*CPyDef__wallet___TreasuryWallet_____post_init__)(PyObject *cpy_r_self);
    char (*CPyDef__wallet___TreasuryWallet___check_membership)(PyObject *cpy_r_address, PyObject *cpy_r_block);
    PyObject *(*CPyDef__wallet___TreasuryWallet____start_block)(PyObject *cpy_r_self);
    PyObject *(*CPyDef__wallet___TreasuryWallet____end_block)(PyObject *cpy_r_self);
    PyObject *(*CPyDef__wallet___TreasuryWallet____get_instance)(PyObject *cpy_r_address);
    PyObject *(*CPyDef__wallet___load_wallets_from_yaml)(PyObject *cpy_r_path);
    char (*CPyDef__wallet_____top_level__)(void);
    CPyTagged *CPyStatic_constants___CHAINID;
    tuple_T2OO *CPyStatic_constants___DISPERSE_APP;
    char (*CPyDef_constants_____top_level__)(void);
    char (*CPyDef_types_____top_level__)(void);
};
#endif
