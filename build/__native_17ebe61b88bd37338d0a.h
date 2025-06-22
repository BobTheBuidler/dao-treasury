#ifndef MYPYC_NATIVE_17ebe61b88bd37338d0a_H
#define MYPYC_NATIVE_17ebe61b88bd37338d0a_H
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
    PyObject *___mypyc_self__;
    PyObject *_fn;
    PyObject *_compose_wrap;
} dao_treasury____docker___ensure_containers_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *___mypyc_env__;
    PyObject *_args;
    PyObject *_kwargs;
    PyObject *_type;
    PyObject *_value;
    PyObject *_traceback;
    PyObject *_arg;
    CPyTagged ___mypyc_next_label__;
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
} dao_treasury____docker___compose_wrap_ensure_containers_genObject;

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
    PyObject *___mypyc_self__;
    PyObject *_start;
    PyObject *_end;
    char _stop_at_today;
    PyObject *_type;
    PyObject *_value;
    PyObject *_traceback;
    PyObject *_arg;
    CPyTagged ___mypyc_next_label__;
    PyObject *_current;
} dao_treasury___streams___llamapay____generate_dates_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_env__;
} dao_treasury___streams___llamapay____generate_dates_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_stream_id;
    PyObject *_block;
    PyObject *_type;
    PyObject *_value;
    PyObject *_traceback;
    PyObject *_arg;
    CPyTagged ___mypyc_next_label__;
    PyObject *_streamToStart;
    PyObject *___mypyc_temp__0;
    tuple_T3OOO ___mypyc_temp__1;
    PyObject *___mypyc_temp__2;
    tuple_T3OOO ___mypyc_temp__3;
} dao_treasury___streams___llamapay____get_start_timestamp_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_env__;
} dao_treasury___streams___llamapay____get_start_timestamp_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_block;
    PyObject *_type;
    PyObject *_value;
    PyObject *_traceback;
    PyObject *_arg;
    CPyTagged ___mypyc_next_label__;
    PyObject *_timestamp;
    PyObject *___mypyc_temp__4;
    tuple_T3OOO ___mypyc_temp__5;
} dao_treasury___streams___llamapay____get_block_timestamp_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_env__;
} dao_treasury___streams___llamapay____get_block_timestamp_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_self;
    PyObject *_type;
    PyObject *_value;
    PyObject *_traceback;
    PyObject *_arg;
    CPyTagged ___mypyc_next_label__;
    PyObject *___mypyc_temp__6;
    PyObject *___mypyc_temp__7;
    PyObject *___mypyc_temp__8;
    PyObject *_stream_contract;
    PyObject *___mypyc_temp__9;
    tuple_T3OOO ___mypyc_temp__10;
} dao_treasury___streams___llamapay____get_streams_LlamaPayProcessor_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_env__;
} dao_treasury___streams___llamapay____get_streams_LlamaPayProcessor_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_self;
    PyObject *_stream_contract;
    PyObject *_type;
    PyObject *_value;
    PyObject *_traceback;
    PyObject *_arg;
    CPyTagged ___mypyc_next_label__;
    PyObject *___mypyc_temp__11;
    tuple_T3OOO ___mypyc_temp__12;
    PyObject *_events;
    PyObject *_keys;
    PyObject *___mypyc_temp__13;
    PyObject *___mypyc_temp__14;
    PyObject *_k;
    PyObject *___mypyc_temp__15;
    PyObject *___mypyc_temp__16;
    PyObject *_event;
    PyObject *_from_address;
    PyObject *__;
    PyObject *___mypyc_temp__17;
    tuple_T3OOO ___mypyc_temp__18;
    PyObject *___mypyc_temp__19;
    PyObject *___mypyc_temp__20;
    PyObject *___mypyc_temp__21;
    tuple_T3OOO ___mypyc_temp__22;
    PyObject *___mypyc_temp__23;
    PyObject *___mypyc_temp__24;
    PyObject *_old_stream_id;
    PyObject *___mypyc_temp__25;
    tuple_T3OOO ___mypyc_temp__26;
    PyObject *___mypyc_temp__27;
    tuple_T3OOO ___mypyc_temp__28;
    PyObject *___mypyc_temp__29;
    PyObject *___mypyc_temp__30;
    PyObject *_stream_id;
    PyObject *___mypyc_temp__31;
    tuple_T3OOO ___mypyc_temp__32;
    PyObject *___mypyc_temp__33;
    PyObject *___mypyc_temp__34;
    PyObject *___mypyc_temp__35;
    tuple_T3OOO ___mypyc_temp__36;
} dao_treasury___streams___llamapay____load_contract_events_LlamaPayProcessor_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_env__;
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
    PyObject *___mypyc_self__;
    PyObject *_self;
    char _run_forever;
    PyObject *_type;
    PyObject *_value;
    PyObject *_traceback;
    PyObject *_arg;
    CPyTagged ___mypyc_next_label__;
    PyObject *___mypyc_temp__37;
    tuple_T3OOO ___mypyc_temp__38;
    PyObject *___mypyc_temp__39;
    PyObject *___mypyc_temp__40;
    char ___mypyc_temp__41;
    PyObject *___mypyc_temp__42;
    PyObject *___mypyc_temp__43;
    PyObject *___mypyc_temp__44;
    PyObject *_s;
    PyObject *_streams;
    tuple_T3OOO ___mypyc_temp__45;
    PyObject *___mypyc_temp__46;
    CPyTagged ___mypyc_temp__47;
    PyObject *_stream_id;
    PyObject *___mypyc_temp__48;
    tuple_T3OOO ___mypyc_temp__49;
} dao_treasury___streams___llamapay___process_streams_LlamaPayProcessor_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_env__;
} dao_treasury___streams___llamapay___process_streams_LlamaPayProcessor_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_self;
    PyObject *_stream_id;
    char _run_forever;
    PyObject *_type;
    PyObject *_value;
    PyObject *_traceback;
    PyObject *_arg;
    CPyTagged ___mypyc_next_label__;
    PyObject *___mypyc_temp__50;
    tuple_T3OOO ___mypyc_temp__51;
    PyObject *_start;
    PyObject *_end;
    PyObject *___mypyc_temp__52;
    PyObject *___mypyc_temp__53;
    PyObject *_date_obj;
    PyObject *___mypyc_temp__54;
    tuple_T3OOO ___mypyc_temp__55;
} dao_treasury___streams___llamapay___process_stream_LlamaPayProcessor_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_env__;
} dao_treasury___streams___llamapay___process_stream_LlamaPayProcessor_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_self;
    PyObject *_stream_id;
    PyObject *_date_obj;
    PyObject *_type;
    PyObject *_value;
    PyObject *_traceback;
    PyObject *_arg;
    CPyTagged ___mypyc_next_label__;
    PyObject *___mypyc_temp__56;
    tuple_T3OOO ___mypyc_temp__57;
    PyObject *_entity;
    PyObject *___mypyc_temp__58;
    tuple_T3OOO ___mypyc_temp__59;
    PyObject *_stream_token;
    PyObject *_start_date;
    PyObject *_check_at;
    PyObject *___mypyc_temp__60;
    tuple_T3OOO ___mypyc_temp__61;
    PyObject *___mypyc_temp__62;
    tuple_T3OOO ___mypyc_temp__63;
    PyObject *_block;
    PyObject *_price_fut;
    PyObject *___mypyc_temp__64;
    tuple_T3OOO ___mypyc_temp__65;
    CPyTagged _start_timestamp;
    PyObject *___mypyc_temp__66;
    tuple_T3OOO ___mypyc_temp__67;
    PyObject *___mypyc_temp__68;
    tuple_T3OOO ___mypyc_temp__69;
    PyObject *___mypyc_temp__70;
    tuple_T3OOO ___mypyc_temp__71;
    PyObject *_block_datetime;
    CPyTagged _seconds_active;
    char _is_last_day;
    CPyTagged _seconds_active_today;
    PyObject *___mypyc_temp__72;
    PyObject *___mypyc_temp__73;
    char ___mypyc_temp__74;
    PyObject *___mypyc_temp__75;
    tuple_T3OOO ___mypyc_temp__76;
    PyObject *_price;
    PyObject *___mypyc_temp__77;
    tuple_T3OOO ___mypyc_temp__78;
    PyObject *___mypyc_temp__79;
    tuple_T3OOO ___mypyc_temp__80;
    PyObject *___mypyc_temp__2_0;
} dao_treasury___streams___llamapay___process_stream_for_date_LlamaPayProcessor_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_env__;
} dao_treasury___streams___llamapay___process_stream_for_date_LlamaPayProcessor_genObject;


struct export_table_17ebe61b88bd37338d0a {
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
    char (*CPyDef_rules_____top_level__)(void);
    char (*CPyDef_ignore_____top_level__)(void);
    char (*CPyDef_ignore___llamapay___is_llamapay_stream_replenishment)(PyObject *cpy_r_tx);
    char (*CPyDef_ignore___llamapay_____top_level__)(void);
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
    PyObject **CPyStatic__docker___logger;
    PyObject **CPyStatic__docker___compose_file;
    PyTypeObject **CPyType__docker___ensure_containers_env;
    PyObject *(*CPyDef__docker___ensure_containers_env)(void);
    PyTypeObject **CPyType__docker___compose_wrap_ensure_containers_env;
    PyObject *(*CPyDef__docker___compose_wrap_ensure_containers_env)(void);
    PyTypeObject **CPyType__docker___compose_wrap_ensure_containers_obj;
    PyObject *(*CPyDef__docker___compose_wrap_ensure_containers_obj)(void);
    PyTypeObject **CPyType__docker___compose_wrap_ensure_containers_gen;
    PyObject *(*CPyDef__docker___compose_wrap_ensure_containers_gen)(void);
    char (*CPyDef__docker___up)(PyObject *cpy_r_services);
    char (*CPyDef__docker___down)(void);
    char (*CPyDef__docker___build)(PyObject *cpy_r_services);
    PyObject *(*CPyDef__docker___compose_wrap_ensure_containers_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef__docker___compose_wrap_ensure_containers_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
    PyObject *(*CPyDef__docker___compose_wrap_ensure_containers_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef__docker___compose_wrap_ensure_containers_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef__docker___compose_wrap_ensure_containers_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef__docker___compose_wrap_ensure_containers_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef__docker___compose_wrap_ensure_containers_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef__docker___compose_wrap_ensure_containers_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef__docker___compose_wrap_ensure_containers_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    PyObject *(*CPyDef__docker___ensure_containers)(PyObject *cpy_r_fn);
    char (*CPyDef__docker____exec_command)(PyObject *cpy_r_command, PyObject *cpy_r_compose_options);
    char (*CPyDef__docker_____top_level__)(void);
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
    PyObject **CPyStatic_constants___CHAINID;
    tuple_T2OO *CPyStatic_constants___DISPERSE_APP;
    char (*CPyDef_constants_____top_level__)(void);
    char (*CPyDef_streams_____top_level__)(void);
    PyObject **CPyStatic_streams___llamapay___logger;
    PyObject **CPyStatic_streams___llamapay____UTC;
    PyObject **CPyStatic_streams___llamapay____STREAMS_THREAD;
    PyObject **CPyStatic_streams___llamapay___create_task;
    PyObject **CPyStatic_streams___llamapay___ObjectNotFound;
    PyObject **CPyStatic_streams___llamapay___commit;
    PyObject **CPyStatic_streams___llamapay___db_session;
    PyObject **CPyStatic_streams___llamapay___networks;
    PyObject **CPyStatic_streams___llamapay____streamToStart_cache;
    PyObject **CPyStatic_streams___llamapay____block_timestamps;
    tuple_T5OOOOO *CPyStatic_streams___llamapay___LlamaPayProcessor___handled_events;
    tuple_T3OOO *CPyStatic_streams___llamapay___LlamaPayProcessor___skipped_events;
    PyTypeObject **CPyType_streams___llamapay___LlamaPayProcessor;
    PyObject *(*CPyDef_streams___llamapay___LlamaPayProcessor)(void);
    PyTypeObject **CPyType_streams___llamapay____generate_dates_env;
    PyObject *(*CPyDef_streams___llamapay____generate_dates_env)(void);
    PyTypeObject **CPyType_streams___llamapay____generate_dates_gen;
    PyObject *(*CPyDef_streams___llamapay____generate_dates_gen)(void);
    PyTypeObject **CPyType_streams___llamapay____get_start_timestamp_env;
    PyObject *(*CPyDef_streams___llamapay____get_start_timestamp_env)(void);
    PyTypeObject **CPyType_streams___llamapay____get_start_timestamp_gen;
    PyObject *(*CPyDef_streams___llamapay____get_start_timestamp_gen)(void);
    PyTypeObject **CPyType_streams___llamapay____get_block_timestamp_env;
    PyObject *(*CPyDef_streams___llamapay____get_block_timestamp_env)(void);
    PyTypeObject **CPyType_streams___llamapay____get_block_timestamp_gen;
    PyObject *(*CPyDef_streams___llamapay____get_block_timestamp_gen)(void);
    PyTypeObject **CPyType_streams___llamapay____get_streams_LlamaPayProcessor_env;
    PyObject *(*CPyDef_streams___llamapay____get_streams_LlamaPayProcessor_env)(void);
    PyTypeObject **CPyType_streams___llamapay____get_streams_LlamaPayProcessor_gen;
    PyObject *(*CPyDef_streams___llamapay____get_streams_LlamaPayProcessor_gen)(void);
    PyTypeObject **CPyType_streams___llamapay____load_contract_events_LlamaPayProcessor_env;
    PyObject *(*CPyDef_streams___llamapay____load_contract_events_LlamaPayProcessor_env)(void);
    PyTypeObject **CPyType_streams___llamapay____load_contract_events_LlamaPayProcessor_gen;
    PyObject *(*CPyDef_streams___llamapay____load_contract_events_LlamaPayProcessor_gen)(void);
    PyTypeObject **CPyType_streams___llamapay___streams_for_recipient_LlamaPayProcessor_env;
    PyObject *(*CPyDef_streams___llamapay___streams_for_recipient_LlamaPayProcessor_env)(void);
    PyTypeObject **CPyType_streams___llamapay_____mypyc_lambda__0_streams_for_recipient_LlamaPayProcessor_obj;
    PyObject *(*CPyDef_streams___llamapay_____mypyc_lambda__0_streams_for_recipient_LlamaPayProcessor_obj)(void);
    PyTypeObject **CPyType_streams___llamapay___streams_for_token_LlamaPayProcessor_env;
    PyObject *(*CPyDef_streams___llamapay___streams_for_token_LlamaPayProcessor_env)(void);
    PyTypeObject **CPyType_streams___llamapay_____mypyc_lambda__1_streams_for_token_LlamaPayProcessor_obj;
    PyObject *(*CPyDef_streams___llamapay_____mypyc_lambda__1_streams_for_token_LlamaPayProcessor_obj)(void);
    PyTypeObject **CPyType_streams___llamapay___process_streams_LlamaPayProcessor_env;
    PyObject *(*CPyDef_streams___llamapay___process_streams_LlamaPayProcessor_env)(void);
    PyTypeObject **CPyType_streams___llamapay___process_streams_LlamaPayProcessor_gen;
    PyObject *(*CPyDef_streams___llamapay___process_streams_LlamaPayProcessor_gen)(void);
    PyTypeObject **CPyType_streams___llamapay___process_stream_LlamaPayProcessor_env;
    PyObject *(*CPyDef_streams___llamapay___process_stream_LlamaPayProcessor_env)(void);
    PyTypeObject **CPyType_streams___llamapay___process_stream_LlamaPayProcessor_gen;
    PyObject *(*CPyDef_streams___llamapay___process_stream_LlamaPayProcessor_gen)(void);
    PyTypeObject **CPyType_streams___llamapay___process_stream_for_date_LlamaPayProcessor_env;
    PyObject *(*CPyDef_streams___llamapay___process_stream_for_date_LlamaPayProcessor_env)(void);
    PyTypeObject **CPyType_streams___llamapay___process_stream_for_date_LlamaPayProcessor_gen;
    PyObject *(*CPyDef_streams___llamapay___process_stream_for_date_LlamaPayProcessor_gen)(void);
    PyObject *(*CPyDef_streams___llamapay____generate_dates_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_streams___llamapay____generate_dates_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_streams___llamapay____generate_dates_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_streams___llamapay____generate_dates_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_streams___llamapay____generate_dates_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_streams___llamapay____generate_dates_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_streams___llamapay____generate_dates)(PyObject *cpy_r_start, PyObject *cpy_r_end, char cpy_r_stop_at_today);
    PyObject *(*CPyDef_streams___llamapay____get_streamToStart)(PyObject *cpy_r_stream_id);
    PyObject *(*CPyDef_streams___llamapay____get_start_timestamp_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_streams___llamapay____get_start_timestamp_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_streams___llamapay____get_start_timestamp_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_streams___llamapay____get_start_timestamp_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_streams___llamapay____get_start_timestamp_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_streams___llamapay____get_start_timestamp_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_streams___llamapay____get_start_timestamp_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_streams___llamapay____get_start_timestamp)(PyObject *cpy_r_stream_id, PyObject *cpy_r_block);
    char (*CPyDef_streams___llamapay____pause_stream)(PyObject *cpy_r_stream_id);
    char (*CPyDef_streams___llamapay____stop_stream)(PyObject *cpy_r_stream_id, PyObject *cpy_r_block);
    PyObject *(*CPyDef_streams___llamapay____get_block_timestamp_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_streams___llamapay____get_block_timestamp_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_streams___llamapay____get_block_timestamp_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_streams___llamapay____get_block_timestamp_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_streams___llamapay____get_block_timestamp_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_streams___llamapay____get_block_timestamp_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_streams___llamapay____get_block_timestamp_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_streams___llamapay____get_block_timestamp)(PyObject *cpy_r_block);
    char (*CPyDef_streams___llamapay___LlamaPayProcessor_____init__)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_streams___llamapay____get_streams_LlamaPayProcessor_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_streams___llamapay____get_streams_LlamaPayProcessor_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_streams___llamapay____get_streams_LlamaPayProcessor_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_streams___llamapay____get_streams_LlamaPayProcessor_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_streams___llamapay____get_streams_LlamaPayProcessor_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_streams___llamapay____get_streams_LlamaPayProcessor_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_streams___llamapay____get_streams_LlamaPayProcessor_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_streams___llamapay___LlamaPayProcessor____get_streams)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_streams___llamapay____load_contract_events_LlamaPayProcessor_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_streams___llamapay____load_contract_events_LlamaPayProcessor_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_streams___llamapay____load_contract_events_LlamaPayProcessor_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_streams___llamapay____load_contract_events_LlamaPayProcessor_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_streams___llamapay____load_contract_events_LlamaPayProcessor_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_streams___llamapay____load_contract_events_LlamaPayProcessor_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_streams___llamapay____load_contract_events_LlamaPayProcessor_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_streams___llamapay___LlamaPayProcessor____load_contract_events)(PyObject *cpy_r_self, PyObject *cpy_r_stream_contract);
    PyObject *(*CPyDef_streams___llamapay___LlamaPayProcessor____get_stream)(PyObject *cpy_r_self, PyObject *cpy_r_log);
    PyObject *(*CPyDef_streams___llamapay_____mypyc_lambda__0_streams_for_recipient_LlamaPayProcessor_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_streams___llamapay_____mypyc_lambda__0_streams_for_recipient_LlamaPayProcessor_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_s);
    PyObject *(*CPyDef_streams___llamapay___LlamaPayProcessor___streams_for_recipient)(PyObject *cpy_r_self, PyObject *cpy_r_recipient, PyObject *cpy_r_at_block);
    PyObject *(*CPyDef_streams___llamapay_____mypyc_lambda__1_streams_for_token_LlamaPayProcessor_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_streams___llamapay_____mypyc_lambda__1_streams_for_token_LlamaPayProcessor_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_s);
    PyObject *(*CPyDef_streams___llamapay___LlamaPayProcessor___streams_for_token)(PyObject *cpy_r_self, PyObject *cpy_r_token, char cpy_r_include_inactive);
    PyObject *(*CPyDef_streams___llamapay___process_streams_LlamaPayProcessor_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_streams___llamapay___process_streams_LlamaPayProcessor_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_streams___llamapay___process_streams_LlamaPayProcessor_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_streams___llamapay___process_streams_LlamaPayProcessor_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_streams___llamapay___process_streams_LlamaPayProcessor_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_streams___llamapay___process_streams_LlamaPayProcessor_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_streams___llamapay___process_streams_LlamaPayProcessor_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_streams___llamapay___LlamaPayProcessor___process_streams)(PyObject *cpy_r_self, char cpy_r_run_forever);
    PyObject *(*CPyDef_streams___llamapay___process_stream_LlamaPayProcessor_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_streams___llamapay___process_stream_LlamaPayProcessor_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_streams___llamapay___process_stream_LlamaPayProcessor_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_streams___llamapay___process_stream_LlamaPayProcessor_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_streams___llamapay___process_stream_LlamaPayProcessor_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_streams___llamapay___process_stream_LlamaPayProcessor_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_streams___llamapay___process_stream_LlamaPayProcessor_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_streams___llamapay___LlamaPayProcessor___process_stream)(PyObject *cpy_r_self, PyObject *cpy_r_stream_id, char cpy_r_run_forever);
    PyObject *(*CPyDef_streams___llamapay___process_stream_for_date_LlamaPayProcessor_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_streams___llamapay___process_stream_for_date_LlamaPayProcessor_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_streams___llamapay___process_stream_for_date_LlamaPayProcessor_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_streams___llamapay___process_stream_for_date_LlamaPayProcessor_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_streams___llamapay___process_stream_for_date_LlamaPayProcessor_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_streams___llamapay___process_stream_for_date_LlamaPayProcessor_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_streams___llamapay___process_stream_for_date_LlamaPayProcessor_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_streams___llamapay___LlamaPayProcessor___process_stream_for_date)(PyObject *cpy_r_self, PyObject *cpy_r_stream_id, PyObject *cpy_r_date_obj);
    char (*CPyDef_streams___llamapay___LlamaPayProcessor_____mypyc_defaults_setup)(PyObject *cpy_r___mypyc_self__);
    char (*CPyDef_streams___llamapay_____top_level__)(void);
    char (*CPyDef_types_____top_level__)(void);
};
#endif
