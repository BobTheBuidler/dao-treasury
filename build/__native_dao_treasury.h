#ifndef MYPYC_NATIVE_dao_treasury_H
#define MYPYC_NATIVE_dao_treasury_H
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

#ifndef MYPYC_DECLARED_tuple_T1O
#define MYPYC_DECLARED_tuple_T1O
typedef struct tuple_T1O {
    PyObject *f0;
} tuple_T1O;
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
    PyObject *___mypyc_generator_attribute__entry;
    int32_t ___mypyc_next_label__;
    CPyTagged ___mypyc_generator_attribute__txgroup_dbid;
    PyObject *___mypyc_temp__0;
    CPyTagged ___mypyc_temp__1;
    int64_t ___mypyc_temp__2;
    PyObject *___mypyc_temp__3;
    PyObject *___mypyc_generator_attribute__rules;
    PyObject *___mypyc_temp__4;
    int64_t ___mypyc_temp__5;
    PyObject *___mypyc_generator_attribute__rule;
    PyObject *___mypyc_temp__6;
    tuple_T3OOO ___mypyc_temp__7;
    tuple_T3OOO ___mypyc_temp__8;
    PyObject *___mypyc_temp__9;
    tuple_T3OOO ___mypyc_temp__10;
} dao_treasury___sorting___sort_advanced_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    CPyTagged _txgroup_id;
    char ___one_value;
    PyObject *___value;
    PyObject *___values;
} dao_treasury___sorting____matchers____MatcherObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    CPyTagged _txgroup_id;
    char ___one_value;
    PyObject *___value;
    PyObject *___values;
} dao_treasury___sorting____matchers____HexStringMatcherObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    CPyTagged _txgroup_id;
    char ___one_value;
    PyObject *___value;
    PyObject *___values;
} dao_treasury___sorting____matchers____AddressMatcherObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    CPyTagged _txgroup_id;
    char ___one_value;
    PyObject *___value;
    PyObject *___values;
} dao_treasury___sorting____matchers___FromAddressMatcherObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    CPyTagged _txgroup_id;
    char ___one_value;
    PyObject *___value;
    PyObject *___values;
} dao_treasury___sorting____matchers___ToAddressMatcherObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    CPyTagged _txgroup_id;
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
    vectorcallfunc vectorcall;
} dao_treasury___sorting___rule___match__SortRule_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__tx;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_generator_attribute__matchers;
    PyObject *___mypyc_temp__0;
    int64_t ___mypyc_temp__1;
    PyObject *___mypyc_generator_attribute__matcher;
    PyObject *___mypyc_generator_attribute__match;
    PyObject *___mypyc_temp__2;
    tuple_T3OOO ___mypyc_temp__3;
} dao_treasury___sorting___rule___match__SortRule_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} dao_treasury___sorting___rule___match__InboundSortRule_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__tx;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__4;
    tuple_T3OOO ___mypyc_temp__5;
} dao_treasury___sorting___rule___match__InboundSortRule_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} dao_treasury___sorting___rule___match__OutboundSortRule_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__tx;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__6;
    tuple_T3OOO ___mypyc_temp__7;
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
    PyObject *___mypyc_self__;
    PyObject *_fn;
    PyObject *_compose_wrap;
} dao_treasury____docker___ensure_containers_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *___mypyc_env__;
    PyObject *___mypyc_generator_attribute__args;
    PyObject *___mypyc_generator_attribute__kwargs;
    PyObject *_type;
    PyObject *_value;
    PyObject *_traceback;
    PyObject *_arg;
    PyObject **_stop_iter_ptr;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__0;
    tuple_T3OOO ___mypyc_temp__1;
    PyObject *___mypyc_temp__2;
} dao_treasury____docker___compose_wrap_ensure_containers_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} dao_treasury____docker___compose_wrap_ensure_containers_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_env__;
} dao_treasury____docker___compose_wrap_gen___3_151Object;

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

#endif
