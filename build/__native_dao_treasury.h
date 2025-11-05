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

#ifndef MYPYC_DECLARED_tuple_T5OOOOO
#define MYPYC_DECLARED_tuple_T5OOOOO
typedef struct tuple_T5OOOOO {
    PyObject *f0;
    PyObject *f1;
    PyObject *f2;
    PyObject *f3;
    PyObject *f4;
} tuple_T5OOOOO;
#endif

#ifndef MYPYC_DECLARED_tuple_T0
#define MYPYC_DECLARED_tuple_T0
typedef struct tuple_T0 {
    int empty_struct_error_flag;
} tuple_T0;
#endif

#ifndef MYPYC_DECLARED_tuple_T1O
#define MYPYC_DECLARED_tuple_T1O
typedef struct tuple_T1O {
    PyObject *f0;
} tuple_T1O;
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
    tuple_T5OOOOO _handled_events;
    tuple_T3OOO _skipped_events;
    PyObject *_stream_contracts;
} dao_treasury___streams___llamapay___LlamaPayProcessorObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__start;
    PyObject *___mypyc_generator_attribute__end;
    char ___mypyc_generator_attribute__stop_at_today;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_generator_attribute__current;
} dao_treasury___streams___llamapay____generate_dates_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__stream_id;
    PyObject *___mypyc_generator_attribute__block;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_generator_attribute__streamToStart;
    PyObject *___mypyc_temp__0;
    tuple_T3OOO ___mypyc_temp__1;
    PyObject *___mypyc_temp__2;
    tuple_T3OOO ___mypyc_temp__3;
} dao_treasury___streams___llamapay____get_start_timestamp_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    CPyTagged ___mypyc_generator_attribute__block;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_generator_attribute__timestamp;
    PyObject *___mypyc_temp__4;
    tuple_T3OOO ___mypyc_temp__5;
} dao_treasury___streams___llamapay____get_block_timestamp_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__6;
    PyObject *___mypyc_temp__7;
    PyObject *___mypyc_temp__8;
    PyObject *___mypyc_generator_attribute__stream_contract;
    PyObject *___mypyc_temp__9;
    tuple_T3OOO ___mypyc_temp__10;
} dao_treasury___streams___llamapay____get_streams_LlamaPayProcessor_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__stream_contract;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__11;
    tuple_T3OOO ___mypyc_temp__12;
    PyObject *___mypyc_generator_attribute__events;
    PyObject *___mypyc_generator_attribute__keys;
    PyObject *___mypyc_temp__13;
    PyObject *___mypyc_temp__14;
    PyObject *___mypyc_generator_attribute__k;
    PyObject *___mypyc_temp__15;
    PyObject *___mypyc_temp__16;
    PyObject *___mypyc_generator_attribute__event;
    PyObject *___mypyc_generator_attribute__from_address;
    PyObject *___mypyc_generator_attribute___;
    PyObject *___mypyc_temp__17;
    tuple_T3OOO ___mypyc_temp__18;
    PyObject *___mypyc_temp__19;
    PyObject *___mypyc_temp__20;
    PyObject *___mypyc_temp__21;
    tuple_T3OOO ___mypyc_temp__22;
    PyObject *___mypyc_temp__23;
    PyObject *___mypyc_temp__24;
    PyObject *___mypyc_generator_attribute__old_stream_id;
    PyObject *___mypyc_temp__25;
    tuple_T3OOO ___mypyc_temp__26;
    PyObject *___mypyc_temp__27;
    tuple_T3OOO ___mypyc_temp__28;
    PyObject *___mypyc_temp__29;
    PyObject *___mypyc_temp__30;
    PyObject *___mypyc_generator_attribute__stream_id;
    PyObject *___mypyc_temp__31;
    tuple_T3OOO ___mypyc_temp__32;
    PyObject *___mypyc_temp__33;
    PyObject *___mypyc_temp__34;
    PyObject *___mypyc_temp__35;
    tuple_T3OOO ___mypyc_temp__36;
} dao_treasury___streams___llamapay____load_contract_events_LlamaPayProcessor_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_recipient;
    PyObject *_self;
    PyObject *_at_block;
} dao_treasury___streams___llamapay___streams_for_recipient_LlamaPayProcessor_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} dao_treasury___streams___llamapay_____mypyc_lambda__0_streams_for_recipient_LlamaPayProcessor_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_token;
    PyObject *_self;
    char _include_inactive;
} dao_treasury___streams___llamapay___streams_for_token_LlamaPayProcessor_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} dao_treasury___streams___llamapay_____mypyc_lambda__1_streams_for_token_LlamaPayProcessor_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    char ___mypyc_generator_attribute__run_forever;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__37;
    tuple_T3OOO ___mypyc_temp__38;
    PyObject *___mypyc_temp__39;
    PyObject *___mypyc_temp__40;
    char ___mypyc_temp__41;
    PyObject *___mypyc_temp__42;
    PyObject *___mypyc_temp__43;
    PyObject *___mypyc_temp__44;
    PyObject *___mypyc_generator_attribute__s;
    PyObject *___mypyc_generator_attribute__streams;
    tuple_T3OOO ___mypyc_temp__45;
    PyObject *___mypyc_temp__46;
    int64_t ___mypyc_temp__47;
    PyObject *___mypyc_generator_attribute__stream_id;
    PyObject *___mypyc_temp__48;
    tuple_T3OOO ___mypyc_temp__49;
} dao_treasury___streams___llamapay___process_streams_LlamaPayProcessor_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__stream_id;
    char ___mypyc_generator_attribute__run_forever;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__50;
    tuple_T3OOO ___mypyc_temp__51;
    PyObject *___mypyc_generator_attribute__start;
    PyObject *___mypyc_generator_attribute__end;
    PyObject *___mypyc_temp__52;
    PyObject *___mypyc_generator_attribute__date_obj;
    PyObject *___mypyc_temp__53;
    tuple_T3OOO ___mypyc_temp__54;
} dao_treasury___streams___llamapay___process_stream_LlamaPayProcessor_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    uint32_t bitmap;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__stream_id;
    PyObject *___mypyc_generator_attribute__date_obj;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__55;
    tuple_T3OOO ___mypyc_temp__56;
    PyObject *___mypyc_generator_attribute__entity;
    PyObject *___mypyc_temp__57;
    tuple_T3OOO ___mypyc_temp__58;
    PyObject *___mypyc_generator_attribute__stream_token;
    PyObject *___mypyc_generator_attribute__start_date;
    PyObject *___mypyc_generator_attribute__check_at;
    PyObject *___mypyc_temp__59;
    tuple_T3OOO ___mypyc_temp__60;
    PyObject *___mypyc_temp__61;
    tuple_T3OOO ___mypyc_temp__62;
    PyObject *___mypyc_generator_attribute__block;
    tuple_T3OOO ___mypyc_temp__63;
    double ___mypyc_generator_attribute__sleep_time;
    PyObject *___mypyc_temp__64;
    tuple_T3OOO ___mypyc_temp__65;
    PyObject *___mypyc_generator_attribute__price_fut;
    PyObject *___mypyc_temp__66;
    tuple_T3OOO ___mypyc_temp__67;
    CPyTagged ___mypyc_generator_attribute__start_timestamp;
    PyObject *___mypyc_temp__68;
    tuple_T3OOO ___mypyc_temp__69;
    PyObject *___mypyc_temp__70;
    tuple_T3OOO ___mypyc_temp__71;
    PyObject *___mypyc_temp__72;
    tuple_T3OOO ___mypyc_temp__73;
    PyObject *___mypyc_generator_attribute__block_datetime;
    CPyTagged ___mypyc_generator_attribute__seconds_active;
    char ___mypyc_generator_attribute__is_last_day;
    CPyTagged ___mypyc_generator_attribute__seconds_active_today;
    PyObject *___mypyc_temp__74;
    PyObject *___mypyc_temp__75;
    char ___mypyc_temp__76;
    PyObject *___mypyc_temp__77;
    tuple_T3OOO ___mypyc_temp__78;
    PyObject *___mypyc_generator_attribute__price;
    PyObject *___mypyc_temp__79;
    tuple_T3OOO ___mypyc_temp__80;
    PyObject *___mypyc_temp__81;
    tuple_T3OOO ___mypyc_temp__82;
} dao_treasury___streams___llamapay___process_stream_for_date_LlamaPayProcessor_genObject;

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
} dao_treasury____docker___compose_wrap_gen___3_153Object;

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
