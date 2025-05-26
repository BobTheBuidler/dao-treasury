#include "init.c"
#include "getargs.c"
#include "getargsfast.c"
#include "int_ops.c"
#include "float_ops.c"
#include "str_ops.c"
#include "bytes_ops.c"
#include "list_ops.c"
#include "dict_ops.c"
#include "set_ops.c"
#include "tuple_ops.c"
#include "exc_ops.c"
#include "misc_ops.c"
#include "generic_ops.c"
#include "pythonsupport.c"
#include "__native_0f022764114a9600a25d.h"
#include "__native_internal_0f022764114a9600a25d.h"

static PyObject *sorting___sort_advanced_env_setup(PyTypeObject *type);
PyObject *CPyDef_sorting___sort_advanced_env(void);

static PyObject *
sorting___sort_advanced_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_sorting___sort_advanced_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return sorting___sort_advanced_env_setup(type);
}

static int
sorting___sort_advanced_env_traverse(dao_treasury___sorting___sort_advanced_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_entry);
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    Py_VISIT(self->_txgroup_dbid);
    Py_VISIT(self->___mypyc_temp__0);
    Py_VISIT(self->_rule);
    Py_VISIT(self->___mypyc_temp__2);
    Py_VISIT(self->___mypyc_temp__3.f0);
    Py_VISIT(self->___mypyc_temp__3.f1);
    Py_VISIT(self->___mypyc_temp__3.f2);
    return 0;
}

static int
sorting___sort_advanced_env_clear(dao_treasury___sorting___sort_advanced_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_entry);
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_traceback);
    Py_CLEAR(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        CPyTagged __tmp = self->___mypyc_next_label__;
        self->___mypyc_next_label__ = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_txgroup_dbid);
    Py_CLEAR(self->___mypyc_temp__0);
    Py_CLEAR(self->_rule);
    Py_CLEAR(self->___mypyc_temp__2);
    Py_CLEAR(self->___mypyc_temp__3.f0);
    Py_CLEAR(self->___mypyc_temp__3.f1);
    Py_CLEAR(self->___mypyc_temp__3.f2);
    return 0;
}

static void
sorting___sort_advanced_env_dealloc(dao_treasury___sorting___sort_advanced_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, sorting___sort_advanced_env_dealloc)
    sorting___sort_advanced_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem sorting___sort_advanced_env_vtable[1];
static bool
CPyDef_sorting___sort_advanced_env_trait_vtable_setup(void)
{
    CPyVTableItem sorting___sort_advanced_env_vtable_scratch[] = {
        NULL
    };
    memcpy(sorting___sort_advanced_env_vtable, sorting___sort_advanced_env_vtable_scratch, sizeof(sorting___sort_advanced_env_vtable));
    return 1;
}

static PyMethodDef sorting___sort_advanced_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_sorting___sort_advanced_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "sort_advanced_env",
    .tp_new = sorting___sort_advanced_env_new,
    .tp_dealloc = (destructor)sorting___sort_advanced_env_dealloc,
    .tp_traverse = (traverseproc)sorting___sort_advanced_env_traverse,
    .tp_clear = (inquiry)sorting___sort_advanced_env_clear,
    .tp_methods = sorting___sort_advanced_env_methods,
    .tp_basicsize = sizeof(dao_treasury___sorting___sort_advanced_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_sorting___sort_advanced_env_template = &CPyType_sorting___sort_advanced_env_template_;

static PyObject *
sorting___sort_advanced_env_setup(PyTypeObject *type)
{
    dao_treasury___sorting___sort_advanced_envObject *self;
    self = (dao_treasury___sorting___sort_advanced_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = sorting___sort_advanced_env_vtable;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    self->___mypyc_temp__1 = CPY_INT_TAG;
    self->___mypyc_temp__3 = (tuple_T3OOO) { NULL, NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef_sorting___sort_advanced_env(void)
{
    PyObject *self = sorting___sort_advanced_env_setup(CPyType_sorting___sort_advanced_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyAsyncMethods sorting___sort_advanced_gen_as_async = {
    .am_await = CPyDef_sorting___sort_advanced_gen_____await__,
};
static PyObject *sorting___sort_advanced_gen_setup(PyTypeObject *type);
PyObject *CPyDef_sorting___sort_advanced_gen(void);

static PyObject *
sorting___sort_advanced_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_sorting___sort_advanced_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return sorting___sort_advanced_gen_setup(type);
}

static int
sorting___sort_advanced_gen_traverse(dao_treasury___sorting___sort_advanced_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
sorting___sort_advanced_gen_clear(dao_treasury___sorting___sort_advanced_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
sorting___sort_advanced_gen_dealloc(dao_treasury___sorting___sort_advanced_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, sorting___sort_advanced_gen_dealloc)
    sorting___sort_advanced_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem sorting___sort_advanced_gen_vtable[7];
static bool
CPyDef_sorting___sort_advanced_gen_trait_vtable_setup(void)
{
    CPyVTableItem sorting___sort_advanced_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_sorting___sort_advanced_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_sorting___sort_advanced_gen_____next__,
        (CPyVTableItem)CPyDef_sorting___sort_advanced_gen___send,
        (CPyVTableItem)CPyDef_sorting___sort_advanced_gen_____iter__,
        (CPyVTableItem)CPyDef_sorting___sort_advanced_gen___throw,
        (CPyVTableItem)CPyDef_sorting___sort_advanced_gen___close,
        (CPyVTableItem)CPyDef_sorting___sort_advanced_gen_____await__,
    };
    memcpy(sorting___sort_advanced_gen_vtable, sorting___sort_advanced_gen_vtable_scratch, sizeof(sorting___sort_advanced_gen_vtable));
    return 1;
}

static PyMethodDef sorting___sort_advanced_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_sorting___sort_advanced_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_sorting___sort_advanced_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_sorting___sort_advanced_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_sorting___sort_advanced_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_sorting___sort_advanced_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_sorting___sort_advanced_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__await__",
     (PyCFunction)CPyPy_sorting___sort_advanced_gen_____await__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_sorting___sort_advanced_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "sort_advanced_gen",
    .tp_new = sorting___sort_advanced_gen_new,
    .tp_dealloc = (destructor)sorting___sort_advanced_gen_dealloc,
    .tp_traverse = (traverseproc)sorting___sort_advanced_gen_traverse,
    .tp_clear = (inquiry)sorting___sort_advanced_gen_clear,
    .tp_methods = sorting___sort_advanced_gen_methods,
    .tp_iter = CPyDef_sorting___sort_advanced_gen_____iter__,
    .tp_iternext = CPyDef_sorting___sort_advanced_gen_____next__,
    .tp_as_async = &sorting___sort_advanced_gen_as_async,
    .tp_basicsize = sizeof(dao_treasury___sorting___sort_advanced_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_sorting___sort_advanced_gen_template = &CPyType_sorting___sort_advanced_gen_template_;

static PyObject *
sorting___sort_advanced_gen_setup(PyTypeObject *type)
{
    dao_treasury___sorting___sort_advanced_genObject *self;
    self = (dao_treasury___sorting___sort_advanced_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = sorting___sort_advanced_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_sorting___sort_advanced_gen(void)
{
    PyObject *self = sorting___sort_advanced_gen_setup(CPyType_sorting___sort_advanced_gen);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef sortingmodule_methods[] = {
    {"sort_basic", (PyCFunction)CPyPy_sorting___sort_basic, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"sort_basic_entity", (PyCFunction)CPyPy_sorting___sort_basic_entity, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"sort_advanced", (PyCFunction)CPyPy_sorting___sort_advanced, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef sortingmodule = {
    PyModuleDef_HEAD_INIT,
    "dao_treasury.sorting",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    sortingmodule_methods
};

PyObject *CPyInit_dao_treasury___sorting(void)
{
    PyObject* modname = NULL;
    if (CPyModule_dao_treasury___sorting_internal) {
        Py_INCREF(CPyModule_dao_treasury___sorting_internal);
        return CPyModule_dao_treasury___sorting_internal;
    }
    CPyModule_dao_treasury___sorting_internal = PyModule_Create(&sortingmodule);
    if (unlikely(CPyModule_dao_treasury___sorting_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_dao_treasury___sorting_internal, "__name__");
    CPyStatic_sorting___globals = PyModule_GetDict(CPyModule_dao_treasury___sorting_internal);
    if (unlikely(CPyStatic_sorting___globals == NULL))
        goto fail;
    CPyType_sorting___sort_advanced_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_sorting___sort_advanced_env_template, NULL, modname);
    if (unlikely(!CPyType_sorting___sort_advanced_env))
        goto fail;
    CPyType_sorting___sort_advanced_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_sorting___sort_advanced_gen_template, NULL, modname);
    if (unlikely(!CPyType_sorting___sort_advanced_gen))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_sorting_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_dao_treasury___sorting_internal;
    fail:
    Py_CLEAR(CPyModule_dao_treasury___sorting_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_sorting___logger);
    CPyStatic_sorting___logger = NULL;
    CPy_XDECREF(CPyStatic_sorting___TxGroup);
    CPyStatic_sorting___TxGroup = NULL;
    CPy_XDECREF(CPyStatic_sorting___must_sort_inbound_txgroup_dbid);
    CPyStatic_sorting___must_sort_inbound_txgroup_dbid = NULL;
    CPy_XDECREF(CPyStatic_sorting___must_sort_outbound_txgroup_dbid);
    CPyStatic_sorting___must_sort_outbound_txgroup_dbid = NULL;
    Py_CLEAR(CPyType_sorting___sort_advanced_env);
    Py_CLEAR(CPyType_sorting___sort_advanced_gen);
    return NULL;
}

PyObject *CPyDef_sorting___sort_basic(PyObject *cpy_r_entry) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_to_wallet;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_txgroup_dbid;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_from_wallet;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_start_block_for_wallet;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_end_block_for_wallet;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    int32_t cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject **cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject **cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_txhash;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    int32_t cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject **cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    int32_t cpy_r_r98;
    char cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    int32_t cpy_r_r111;
    char cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    int32_t cpy_r_r123;
    char cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    int32_t cpy_r_r130;
    char cpy_r_r131;
    char cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    char cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    int32_t cpy_r_r143;
    char cpy_r_r144;
    char cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    char cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    char cpy_r_r153;
    CPyPtr cpy_r_r154;
    PyObject *cpy_r_r155;
    char cpy_r_r156;
    char cpy_r_r157;
    char cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    char cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    int32_t cpy_r_r167;
    char cpy_r_r168;
    char cpy_r_r169;
    PyObject *cpy_r_r170;
    char cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject **cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    cpy_r_r0 = NULL;
    cpy_r_to_wallet = cpy_r_r0;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_txgroup_dbid = cpy_r_r1;
    cpy_r_r2 = CPyStatics[3]; /* 'from_address' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_entry, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 64, CPyStatic_sorting___globals);
        goto CPyL134;
    }
    cpy_r_r4 = CPyDef__wallet___TreasuryWallet____get_instance(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 64, CPyStatic_sorting___globals);
        goto CPyL134;
    }
    CPy_INCREF(cpy_r_r4);
    cpy_r_from_wallet = cpy_r_r4;
    cpy_r_r5 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r6 = cpy_r_r4 != cpy_r_r5;
    CPy_DECREF(cpy_r_r4);
    if (!cpy_r_r6) goto CPyL135;
    if (likely(cpy_r_from_wallet != Py_None))
        cpy_r_r7 = cpy_r_from_wallet;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 66, CPyStatic_sorting___globals, "dao_treasury._wallet.TreasuryWallet", cpy_r_from_wallet);
        goto CPyL136;
    }
    cpy_r_r8 = CPyDef__wallet___TreasuryWallet____start_block(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 66, CPyStatic_sorting___globals);
        goto CPyL136;
    }
CPyL5: ;
    cpy_r_start_block_for_wallet = cpy_r_r8;
    if (likely(cpy_r_from_wallet != Py_None))
        cpy_r_r9 = cpy_r_from_wallet;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 67, CPyStatic_sorting___globals, "dao_treasury._wallet.TreasuryWallet", cpy_r_from_wallet);
        goto CPyL137;
    }
    cpy_r_r10 = CPyDef__wallet___TreasuryWallet____end_block(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 67, CPyStatic_sorting___globals);
        goto CPyL137;
    }
CPyL7: ;
    CPy_DECREF(cpy_r_from_wallet);
    cpy_r_end_block_for_wallet = cpy_r_r10;
    cpy_r_r11 = CPyStatics[4]; /* 'block_number' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_entry, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 69, CPyStatic_sorting___globals);
        goto CPyL138;
    }
    cpy_r_r13 = PyObject_RichCompare(cpy_r_start_block_for_wallet, cpy_r_r12, 1);
    CPy_DECREF(cpy_r_start_block_for_wallet);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 69, CPyStatic_sorting___globals);
        goto CPyL139;
    }
    cpy_r_r14 = PyObject_IsTrue(cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 69, CPyStatic_sorting___globals);
        goto CPyL139;
    }
    cpy_r_r16 = cpy_r_r14;
    if (!cpy_r_r16) goto CPyL140;
    cpy_r_r17 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r18 = cpy_r_end_block_for_wallet == cpy_r_r17;
    if (cpy_r_r18) goto CPyL141;
    cpy_r_r19 = CPyStatics[4]; /* 'block_number' */
    cpy_r_r20 = CPyObject_GetAttr(cpy_r_entry, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 70, CPyStatic_sorting___globals);
        goto CPyL139;
    }
    cpy_r_r21 = PyObject_RichCompare(cpy_r_r20, cpy_r_end_block_for_wallet, 1);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_end_block_for_wallet);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 70, CPyStatic_sorting___globals);
        goto CPyL134;
    }
    cpy_r_r22 = PyObject_IsTrue(cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 70, CPyStatic_sorting___globals);
        goto CPyL134;
    }
    cpy_r_r24 = cpy_r_r22;
    if (cpy_r_r24) {
        goto CPyL142;
    } else
        goto CPyL41;
CPyL16: ;
    cpy_r_r25 = CPyStatics[5]; /* 'to_address' */
    cpy_r_r26 = CPyObject_GetAttr(cpy_r_entry, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 72, CPyStatic_sorting___globals);
        goto CPyL143;
    }
    cpy_r_r27 = CPyDef__wallet___TreasuryWallet____get_instance(cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 72, CPyStatic_sorting___globals);
        goto CPyL143;
    }
    CPy_INCREF(cpy_r_r27);
    cpy_r_to_wallet = cpy_r_r27;
    cpy_r_r28 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r29 = cpy_r_r27 != cpy_r_r28;
    CPy_DECREF(cpy_r_r27);
    if (!cpy_r_r29) goto CPyL41;
    if (likely(cpy_r_to_wallet != Py_None))
        cpy_r_r30 = cpy_r_to_wallet;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 73, CPyStatic_sorting___globals, "dao_treasury._wallet.TreasuryWallet", cpy_r_to_wallet);
        goto CPyL144;
    }
    cpy_r_r31 = CPyDef__wallet___TreasuryWallet____start_block(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 73, CPyStatic_sorting___globals);
        goto CPyL144;
    }
CPyL21: ;
    cpy_r_start_block_for_wallet = cpy_r_r31;
    if (likely(cpy_r_to_wallet != Py_None))
        cpy_r_r32 = cpy_r_to_wallet;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 74, CPyStatic_sorting___globals, "dao_treasury._wallet.TreasuryWallet", cpy_r_to_wallet);
        goto CPyL145;
    }
    cpy_r_r33 = CPyDef__wallet___TreasuryWallet____end_block(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 74, CPyStatic_sorting___globals);
        goto CPyL145;
    }
CPyL23: ;
    cpy_r_end_block_for_wallet = cpy_r_r33;
    cpy_r_r34 = CPyStatics[4]; /* 'block_number' */
    cpy_r_r35 = CPyObject_GetAttr(cpy_r_entry, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 76, CPyStatic_sorting___globals);
        goto CPyL146;
    }
    cpy_r_r36 = PyObject_RichCompare(cpy_r_start_block_for_wallet, cpy_r_r35, 1);
    CPy_DECREF(cpy_r_start_block_for_wallet);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 76, CPyStatic_sorting___globals);
        goto CPyL147;
    }
    cpy_r_r37 = PyObject_IsTrue(cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 76, CPyStatic_sorting___globals);
        goto CPyL147;
    }
    cpy_r_r39 = cpy_r_r37;
    if (!cpy_r_r39) goto CPyL140;
    cpy_r_r40 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r41 = cpy_r_end_block_for_wallet == cpy_r_r40;
    if (cpy_r_r41) goto CPyL148;
    cpy_r_r42 = CPyStatics[4]; /* 'block_number' */
    cpy_r_r43 = CPyObject_GetAttr(cpy_r_entry, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 77, CPyStatic_sorting___globals);
        goto CPyL147;
    }
    cpy_r_r44 = PyObject_RichCompare(cpy_r_r43, cpy_r_end_block_for_wallet, 1);
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_end_block_for_wallet);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 77, CPyStatic_sorting___globals);
        goto CPyL144;
    }
    cpy_r_r45 = PyObject_IsTrue(cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r46 = cpy_r_r45 >= 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 77, CPyStatic_sorting___globals);
        goto CPyL144;
    }
    cpy_r_r47 = cpy_r_r45;
    if (cpy_r_r47) {
        goto CPyL149;
    } else
        goto CPyL41;
CPyL32: ;
    cpy_r_r48 = CPyStatic_sorting___TxGroup;
    if (unlikely(cpy_r_r48 == NULL)) {
        goto CPyL150;
    } else
        goto CPyL35;
CPyL33: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"TxGroup\" was not set");
    cpy_r_r49 = 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 79, CPyStatic_sorting___globals);
        goto CPyL133;
    }
    CPy_Unreachable();
CPyL35: ;
    cpy_r_r50 = CPyStatics[6]; /* 'Internal Transfer' */
    cpy_r_r51 = CPyStatic_sorting___TxGroup;
    if (unlikely(cpy_r_r51 == NULL)) {
        goto CPyL151;
    } else
        goto CPyL38;
CPyL36: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"TxGroup\" was not set");
    cpy_r_r52 = 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 81, CPyStatic_sorting___globals);
        goto CPyL133;
    }
    CPy_Unreachable();
CPyL38: ;
    cpy_r_r53 = CPyStatics[7]; /* 'Ignore' */
    cpy_r_r54 = CPyStatics[8]; /* 'get_dbid' */
    PyObject *cpy_r_r55[2] = {cpy_r_r51, cpy_r_r53};
    cpy_r_r56 = (PyObject **)&cpy_r_r55;
    cpy_r_r57 = PyObject_VectorcallMethod(cpy_r_r54, cpy_r_r56, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 81, CPyStatic_sorting___globals);
        goto CPyL152;
    }
    cpy_r_r58 = CPyStatics[8]; /* 'get_dbid' */
    PyObject *cpy_r_r59[3] = {cpy_r_r48, cpy_r_r50, cpy_r_r57};
    cpy_r_r60 = (PyObject **)&cpy_r_r59;
    cpy_r_r61 = CPyStatics[210]; /* ('name', 'parent') */
    cpy_r_r62 = PyObject_VectorcallMethod(cpy_r_r58, cpy_r_r60, 9223372036854775809ULL, cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 79, CPyStatic_sorting___globals);
        goto CPyL153;
    }
    CPy_DECREF(cpy_r_r57);
    cpy_r_txgroup_dbid = cpy_r_r62;
CPyL41: ;
    cpy_r_r63 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r64 = cpy_r_txgroup_dbid == cpy_r_r63;
    if (cpy_r_r64) {
        goto CPyL154;
    } else
        goto CPyL51;
CPyL42: ;
    cpy_r_r65 = CPyStatics[11]; /* 'hash' */
    cpy_r_r66 = CPyObject_GetAttr(cpy_r_entry, cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 85, CPyStatic_sorting___globals);
        goto CPyL155;
    }
    CPy_INCREF(cpy_r_r66);
    cpy_r_txhash = cpy_r_r66;
    cpy_r_r67 = CPyStatic_sorting___globals;
    cpy_r_r68 = CPyStatics[12]; /* 'TransactionHash' */
    cpy_r_r69 = CPyDict_GetItem(cpy_r_r67, cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 85, CPyStatic_sorting___globals);
        goto CPyL156;
    }
    cpy_r_r70 = PyObject_IsInstance(cpy_r_r66, cpy_r_r69);
    CPy_DECREF(cpy_r_r66);
    CPy_DECREF(cpy_r_r69);
    cpy_r_r71 = cpy_r_r70 >= 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 85, CPyStatic_sorting___globals);
        goto CPyL157;
    }
    cpy_r_r72 = cpy_r_r70;
    if (!cpy_r_r72) goto CPyL48;
    cpy_r_r73 = CPyStatics[13]; /* 'hex' */
    PyObject *cpy_r_r74[1] = {cpy_r_txhash};
    cpy_r_r75 = (PyObject **)&cpy_r_r74;
    cpy_r_r76 = PyObject_VectorcallMethod(cpy_r_r73, cpy_r_r75, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 86, CPyStatic_sorting___globals);
        goto CPyL157;
    }
    CPy_DECREF(cpy_r_txhash);
    cpy_r_txhash = cpy_r_r76;
CPyL48: ;
    cpy_r_r77 = (PyObject *)CPyType__matchers___HashMatcher;
    if (likely(PyUnicode_Check(cpy_r_txhash)))
        cpy_r_r78 = cpy_r_txhash;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 87, CPyStatic_sorting___globals, "str", cpy_r_txhash);
        goto CPyL155;
    }
    cpy_r_r79 = CPyDef__matchers____Matcher___match(cpy_r_r77, cpy_r_r78);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 87, CPyStatic_sorting___globals);
        goto CPyL155;
    }
    cpy_r_txgroup_dbid = cpy_r_r79;
CPyL51: ;
    cpy_r_r80 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r81 = cpy_r_txgroup_dbid == cpy_r_r80;
    if (cpy_r_r81) {
        goto CPyL158;
    } else
        goto CPyL56;
CPyL52: ;
    cpy_r_r82 = (PyObject *)CPyType__matchers___FromAddressMatcher;
    cpy_r_r83 = CPyStatics[3]; /* 'from_address' */
    cpy_r_r84 = CPyObject_GetAttr(cpy_r_entry, cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 90, CPyStatic_sorting___globals);
        goto CPyL155;
    }
    if (likely(PyUnicode_Check(cpy_r_r84)))
        cpy_r_r85 = cpy_r_r84;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 90, CPyStatic_sorting___globals, "str", cpy_r_r84);
        goto CPyL155;
    }
    cpy_r_r86 = CPyDef__matchers____Matcher___match(cpy_r_r82, cpy_r_r85);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 90, CPyStatic_sorting___globals);
        goto CPyL155;
    }
    cpy_r_txgroup_dbid = cpy_r_r86;
CPyL56: ;
    cpy_r_r87 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r88 = cpy_r_txgroup_dbid == cpy_r_r87;
    if (cpy_r_r88) {
        goto CPyL159;
    } else
        goto CPyL61;
CPyL57: ;
    cpy_r_r89 = (PyObject *)CPyType__matchers___ToAddressMatcher;
    cpy_r_r90 = CPyStatics[5]; /* 'to_address' */
    cpy_r_r91 = CPyObject_GetAttr(cpy_r_entry, cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 93, CPyStatic_sorting___globals);
        goto CPyL155;
    }
    if (likely(PyUnicode_Check(cpy_r_r91)))
        cpy_r_r92 = cpy_r_r91;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 93, CPyStatic_sorting___globals, "str", cpy_r_r91);
        goto CPyL155;
    }
    cpy_r_r93 = CPyDef__matchers____Matcher___match(cpy_r_r89, cpy_r_r92);
    CPy_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 93, CPyStatic_sorting___globals);
        goto CPyL155;
    }
    cpy_r_txgroup_dbid = cpy_r_r93;
CPyL61: ;
    cpy_r_r94 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r95 = cpy_r_txgroup_dbid == cpy_r_r94;
    if (cpy_r_r95) {
        goto CPyL160;
    } else
        goto CPyL161;
CPyL62: ;
    cpy_r_r96 = CPyStatics[3]; /* 'from_address' */
    cpy_r_r97 = CPyObject_GetAttr(cpy_r_entry, cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 97, CPyStatic_sorting___globals);
        goto CPyL155;
    }
    cpy_r_r98 = PyObject_IsTrue(cpy_r_r97);
    CPy_DECREF(cpy_r_r97);
    cpy_r_r99 = cpy_r_r98 >= 0;
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 97, CPyStatic_sorting___globals);
        goto CPyL155;
    }
    cpy_r_r100 = cpy_r_r98;
    if (!cpy_r_r100) goto CPyL87;
    cpy_r_r101 = CPyStatics[3]; /* 'from_address' */
    cpy_r_r102 = CPyObject_GetAttr(cpy_r_entry, cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 98, CPyStatic_sorting___globals);
        goto CPyL155;
    }
    cpy_r_r103 = CPyDef__wallet___TreasuryWallet____get_instance(cpy_r_r102);
    CPy_DECREF(cpy_r_r102);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 98, CPyStatic_sorting___globals);
        goto CPyL155;
    }
    CPy_INCREF(cpy_r_r103);
    cpy_r_from_wallet = cpy_r_r103;
    cpy_r_r104 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r105 = cpy_r_r103 != cpy_r_r104;
    CPy_DECREF(cpy_r_r103);
    if (!cpy_r_r105) goto CPyL162;
    if (likely(cpy_r_from_wallet != Py_None))
        cpy_r_r106 = cpy_r_from_wallet;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 100, CPyStatic_sorting___globals, "dao_treasury._wallet.TreasuryWallet", cpy_r_from_wallet);
        goto CPyL163;
    }
    cpy_r_r107 = CPyDef__wallet___TreasuryWallet____start_block(cpy_r_r106);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 100, CPyStatic_sorting___globals);
        goto CPyL163;
    }
CPyL70: ;
    cpy_r_r108 = CPyStatics[4]; /* 'block_number' */
    cpy_r_r109 = CPyObject_GetAttr(cpy_r_entry, cpy_r_r108);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 100, CPyStatic_sorting___globals);
        goto CPyL164;
    }
    cpy_r_r110 = PyObject_RichCompare(cpy_r_r107, cpy_r_r109, 1);
    CPy_DECREF(cpy_r_r107);
    CPy_DECREF(cpy_r_r109);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 100, CPyStatic_sorting___globals);
        goto CPyL163;
    }
    cpy_r_r111 = PyObject_IsTrue(cpy_r_r110);
    CPy_DECREF(cpy_r_r110);
    cpy_r_r112 = cpy_r_r111 >= 0;
    if (unlikely(!cpy_r_r112)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 100, CPyStatic_sorting___globals);
        goto CPyL163;
    }
    cpy_r_r113 = cpy_r_r111;
    if (!cpy_r_r113) goto CPyL162;
    if (likely(cpy_r_from_wallet != Py_None))
        cpy_r_r114 = cpy_r_from_wallet;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 101, CPyStatic_sorting___globals, "dao_treasury._wallet.TreasuryWallet", cpy_r_from_wallet);
        goto CPyL163;
    }
    cpy_r_r115 = CPyDef__wallet___TreasuryWallet____end_block(cpy_r_r114);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 101, CPyStatic_sorting___globals);
        goto CPyL163;
    }
CPyL76: ;
    cpy_r_r116 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r117 = cpy_r_r115 == cpy_r_r116;
    if (cpy_r_r117) goto CPyL165;
    if (likely(cpy_r_from_wallet != Py_None))
        cpy_r_r118 = cpy_r_from_wallet;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 101, CPyStatic_sorting___globals, "dao_treasury._wallet.TreasuryWallet", cpy_r_from_wallet);
        goto CPyL163;
    }
    cpy_r_r119 = CPyDef__wallet___TreasuryWallet____end_block(cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 101, CPyStatic_sorting___globals);
        goto CPyL163;
    }
CPyL79: ;
    CPy_DECREF(cpy_r_from_wallet);
    cpy_r_r120 = CPyStatics[4]; /* 'block_number' */
    cpy_r_r121 = CPyObject_GetAttr(cpy_r_entry, cpy_r_r120);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 101, CPyStatic_sorting___globals);
        goto CPyL166;
    }
    cpy_r_r122 = PyObject_RichCompare(cpy_r_r119, cpy_r_r121, 5);
    CPy_DECREF(cpy_r_r119);
    CPy_DECREF(cpy_r_r121);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 101, CPyStatic_sorting___globals);
        goto CPyL155;
    }
    cpy_r_r123 = PyObject_IsTrue(cpy_r_r122);
    CPy_DECREF(cpy_r_r122);
    cpy_r_r124 = cpy_r_r123 >= 0;
    if (unlikely(!cpy_r_r124)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 101, CPyStatic_sorting___globals);
        goto CPyL155;
    }
    cpy_r_r125 = cpy_r_r123;
    if (cpy_r_r125) {
        goto CPyL167;
    } else
        goto CPyL87;
CPyL83: ;
    cpy_r_r126 = CPyStatic_sorting___must_sort_outbound_txgroup_dbid;
    if (likely(cpy_r_r126 != NULL)) goto CPyL86;
    PyErr_SetString(PyExc_NameError, "value for final name \"must_sort_outbound_txgroup_dbid\" was not set");
    cpy_r_r127 = 0;
    if (unlikely(!cpy_r_r127)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 103, CPyStatic_sorting___globals);
        goto CPyL133;
    }
    CPy_Unreachable();
CPyL86: ;
    CPy_INCREF(cpy_r_r126);
    cpy_r_txgroup_dbid = cpy_r_r126;
    goto CPyL132;
CPyL87: ;
    cpy_r_r128 = CPyStatics[5]; /* 'to_address' */
    cpy_r_r129 = CPyObject_GetAttr(cpy_r_entry, cpy_r_r128);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 106, CPyStatic_sorting___globals);
        goto CPyL155;
    }
    cpy_r_r130 = PyObject_IsTrue(cpy_r_r129);
    CPy_DECREF(cpy_r_r129);
    cpy_r_r131 = cpy_r_r130 >= 0;
    if (unlikely(!cpy_r_r131)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 106, CPyStatic_sorting___globals);
        goto CPyL155;
    }
    cpy_r_r132 = cpy_r_r130;
    if (cpy_r_r132) {
        goto CPyL168;
    } else
        goto CPyL102;
CPyL90: ;
    cpy_r_r133 = CPyStatics[5]; /* 'to_address' */
    cpy_r_r134 = CPyObject_GetAttr(cpy_r_entry, cpy_r_r133);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 107, CPyStatic_sorting___globals);
        goto CPyL133;
    }
    cpy_r_r135 = CPyDef__wallet___TreasuryWallet____get_instance(cpy_r_r134);
    CPy_DECREF(cpy_r_r134);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 107, CPyStatic_sorting___globals);
        goto CPyL133;
    }
    CPy_INCREF(cpy_r_r135);
    cpy_r_to_wallet = cpy_r_r135;
    cpy_r_r136 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r137 = cpy_r_r135 != cpy_r_r136;
    CPy_DECREF(cpy_r_r135);
    if (!cpy_r_r137) goto CPyL102;
    if (likely(cpy_r_to_wallet != Py_None))
        cpy_r_r138 = cpy_r_to_wallet;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 108, CPyStatic_sorting___globals, "dao_treasury._wallet.TreasuryWallet", cpy_r_to_wallet);
        goto CPyL152;
    }
    cpy_r_r139 = CPyDef__wallet___TreasuryWallet____start_block(cpy_r_r138);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 108, CPyStatic_sorting___globals);
        goto CPyL152;
    }
CPyL95: ;
    cpy_r_r140 = CPyStatics[4]; /* 'block_number' */
    cpy_r_r141 = CPyObject_GetAttr(cpy_r_entry, cpy_r_r140);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 108, CPyStatic_sorting___globals);
        goto CPyL169;
    }
    cpy_r_r142 = PyObject_RichCompare(cpy_r_r139, cpy_r_r141, 1);
    CPy_DECREF(cpy_r_r139);
    CPy_DECREF(cpy_r_r141);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 108, CPyStatic_sorting___globals);
        goto CPyL152;
    }
    cpy_r_r143 = PyObject_IsTrue(cpy_r_r142);
    CPy_DECREF(cpy_r_r142);
    cpy_r_r144 = cpy_r_r143 >= 0;
    if (unlikely(!cpy_r_r144)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 108, CPyStatic_sorting___globals);
        goto CPyL152;
    }
    cpy_r_r145 = cpy_r_r143;
    if (!cpy_r_r145) goto CPyL102;
    if (likely(cpy_r_to_wallet != Py_None))
        cpy_r_r146 = cpy_r_to_wallet;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 109, CPyStatic_sorting___globals, "dao_treasury._wallet.TreasuryWallet", cpy_r_to_wallet);
        goto CPyL152;
    }
    cpy_r_r147 = CPyDef__wallet___TreasuryWallet____end_block(cpy_r_r146);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 109, CPyStatic_sorting___globals);
        goto CPyL152;
    }
CPyL101: ;
    cpy_r_r148 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r149 = cpy_r_r147 == cpy_r_r148;
    if (cpy_r_r149) goto CPyL170;
CPyL102: ;
    cpy_r_r150 = CPyStatics[4]; /* 'block_number' */
    cpy_r_r151 = CPyObject_GetAttr(cpy_r_entry, cpy_r_r150);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 109, CPyStatic_sorting___globals);
        goto CPyL155;
    }
    cpy_r_r152 = (PyObject *)CPyType__wallet___TreasuryWallet;
    if (cpy_r_to_wallet == NULL) {
        goto CPyL171;
    } else
        goto CPyL106;
CPyL104: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"to_wallet\" referenced before assignment");
    cpy_r_r153 = 0;
    if (unlikely(!cpy_r_r153)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 109, CPyStatic_sorting___globals);
        goto CPyL133;
    }
    CPy_Unreachable();
CPyL106: ;
    cpy_r_r154 = (CPyPtr)&((PyObject *)cpy_r_to_wallet)->ob_type;
    cpy_r_r155 = *(PyObject * *)cpy_r_r154;
    if (cpy_r_to_wallet == NULL) {
        goto CPyL172;
    } else
        goto CPyL109;
CPyL107: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"to_wallet\" referenced before assignment");
    cpy_r_r156 = 0;
    if (unlikely(!cpy_r_r156)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", -1, CPyStatic_sorting___globals);
        goto CPyL133;
    }
    CPy_Unreachable();
CPyL109: ;
    cpy_r_r157 = cpy_r_r155 == cpy_r_r152;
    if (!cpy_r_r157) goto CPyL116;
    if (cpy_r_to_wallet == NULL) {
        goto CPyL173;
    } else
        goto CPyL113;
CPyL111: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"to_wallet\" referenced before assignment");
    cpy_r_r158 = 0;
    if (unlikely(!cpy_r_r158)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 109, CPyStatic_sorting___globals);
        goto CPyL133;
    }
    CPy_Unreachable();
CPyL113: ;
    if (likely(cpy_r_to_wallet != Py_None))
        cpy_r_r159 = cpy_r_to_wallet;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 109, CPyStatic_sorting___globals, "dao_treasury._wallet.TreasuryWallet", cpy_r_to_wallet);
        goto CPyL174;
    }
    cpy_r_r160 = CPyDef__wallet___TreasuryWallet____end_block(cpy_r_r159);
    CPy_DECREF(cpy_r_r159);
    if (unlikely(cpy_r_r160 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 109, CPyStatic_sorting___globals);
        goto CPyL174;
    }
CPyL115: ;
    cpy_r_r161 = cpy_r_r160;
    goto CPyL121;
CPyL116: ;
    if (cpy_r_to_wallet == NULL) {
        goto CPyL175;
    } else
        goto CPyL119;
CPyL117: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"to_wallet\" referenced before assignment");
    cpy_r_r162 = 0;
    if (unlikely(!cpy_r_r162)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", -1, CPyStatic_sorting___globals);
        goto CPyL133;
    }
    CPy_Unreachable();
CPyL119: ;
    cpy_r_r163 = cpy_r_to_wallet;
    cpy_r_r164 = CPyStatics[14]; /* '_end_block' */
    cpy_r_r165 = CPyObject_GetAttr(cpy_r_r163, cpy_r_r164);
    CPy_DECREF(cpy_r_r163);
    if (unlikely(cpy_r_r165 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 109, CPyStatic_sorting___globals);
        goto CPyL174;
    }
    cpy_r_r161 = cpy_r_r165;
CPyL121: ;
    cpy_r_r166 = PyObject_RichCompare(cpy_r_r151, cpy_r_r161, 1);
    CPy_DECREF(cpy_r_r151);
    CPy_DECREF(cpy_r_r161);
    if (unlikely(cpy_r_r166 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 109, CPyStatic_sorting___globals);
        goto CPyL133;
    }
    cpy_r_r167 = PyObject_IsTrue(cpy_r_r166);
    CPy_DECREF(cpy_r_r166);
    cpy_r_r168 = cpy_r_r167 >= 0;
    if (unlikely(!cpy_r_r168)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 109, CPyStatic_sorting___globals);
        goto CPyL133;
    }
    cpy_r_r169 = cpy_r_r167;
    if (!cpy_r_r169) goto CPyL128;
CPyL124: ;
    cpy_r_r170 = CPyStatic_sorting___must_sort_inbound_txgroup_dbid;
    if (likely(cpy_r_r170 != NULL)) goto CPyL127;
    PyErr_SetString(PyExc_NameError, "value for final name \"must_sort_inbound_txgroup_dbid\" was not set");
    cpy_r_r171 = 0;
    if (unlikely(!cpy_r_r171)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 111, CPyStatic_sorting___globals);
        goto CPyL133;
    }
    CPy_Unreachable();
CPyL127: ;
    CPy_INCREF(cpy_r_r170);
    cpy_r_txgroup_dbid = cpy_r_r170;
    goto CPyL132;
CPyL128: ;
    cpy_r_r172 = CPyStatics[15]; /* 'this isnt supposed to happen' */
    cpy_r_r173 = CPyModule_builtins;
    cpy_r_r174 = CPyStatics[16]; /* 'NotImplementedError' */
    cpy_r_r175 = CPyObject_GetAttr(cpy_r_r173, cpy_r_r174);
    if (unlikely(cpy_r_r175 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 114, CPyStatic_sorting___globals);
        goto CPyL133;
    }
    PyObject *cpy_r_r176[1] = {cpy_r_r172};
    cpy_r_r177 = (PyObject **)&cpy_r_r176;
    cpy_r_r178 = _PyObject_Vectorcall(cpy_r_r175, cpy_r_r177, 1, 0);
    CPy_DECREF(cpy_r_r175);
    if (unlikely(cpy_r_r178 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 114, CPyStatic_sorting___globals);
        goto CPyL133;
    }
    CPy_Raise(cpy_r_r178);
    CPy_DECREF(cpy_r_r178);
    if (unlikely(!0)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 114, CPyStatic_sorting___globals);
        goto CPyL133;
    }
    CPy_Unreachable();
CPyL132: ;
    return cpy_r_txgroup_dbid;
CPyL133: ;
    cpy_r_r179 = NULL;
    return cpy_r_r179;
CPyL134: ;
    CPy_XDecRef(cpy_r_to_wallet);
    CPy_DecRef(cpy_r_txgroup_dbid);
    goto CPyL133;
CPyL135: ;
    CPy_DECREF(cpy_r_from_wallet);
    goto CPyL41;
CPyL136: ;
    CPy_XDecRef(cpy_r_to_wallet);
    CPy_DecRef(cpy_r_txgroup_dbid);
    CPy_DecRef(cpy_r_from_wallet);
    goto CPyL133;
CPyL137: ;
    CPy_XDecRef(cpy_r_to_wallet);
    CPy_DecRef(cpy_r_txgroup_dbid);
    CPy_DecRef(cpy_r_from_wallet);
    CPy_DecRef(cpy_r_start_block_for_wallet);
    goto CPyL133;
CPyL138: ;
    CPy_XDecRef(cpy_r_to_wallet);
    CPy_DecRef(cpy_r_txgroup_dbid);
    CPy_DecRef(cpy_r_start_block_for_wallet);
    CPy_DecRef(cpy_r_end_block_for_wallet);
    goto CPyL133;
CPyL139: ;
    CPy_XDecRef(cpy_r_to_wallet);
    CPy_DecRef(cpy_r_txgroup_dbid);
    CPy_DecRef(cpy_r_end_block_for_wallet);
    goto CPyL133;
CPyL140: ;
    CPy_DECREF(cpy_r_end_block_for_wallet);
    goto CPyL41;
CPyL141: ;
    CPy_XDECREF(cpy_r_to_wallet);
    CPy_DECREF(cpy_r_end_block_for_wallet);
    goto CPyL16;
CPyL142: ;
    CPy_XDECREF(cpy_r_to_wallet);
    goto CPyL16;
CPyL143: ;
    CPy_DecRef(cpy_r_txgroup_dbid);
    goto CPyL133;
CPyL144: ;
    CPy_DecRef(cpy_r_to_wallet);
    CPy_DecRef(cpy_r_txgroup_dbid);
    goto CPyL133;
CPyL145: ;
    CPy_DecRef(cpy_r_to_wallet);
    CPy_DecRef(cpy_r_txgroup_dbid);
    CPy_DecRef(cpy_r_start_block_for_wallet);
    goto CPyL133;
CPyL146: ;
    CPy_DecRef(cpy_r_to_wallet);
    CPy_DecRef(cpy_r_txgroup_dbid);
    CPy_DecRef(cpy_r_start_block_for_wallet);
    CPy_DecRef(cpy_r_end_block_for_wallet);
    goto CPyL133;
CPyL147: ;
    CPy_DecRef(cpy_r_to_wallet);
    CPy_DecRef(cpy_r_txgroup_dbid);
    CPy_DecRef(cpy_r_end_block_for_wallet);
    goto CPyL133;
CPyL148: ;
    CPy_DECREF(cpy_r_txgroup_dbid);
    CPy_DECREF(cpy_r_end_block_for_wallet);
    goto CPyL32;
CPyL149: ;
    CPy_DECREF(cpy_r_txgroup_dbid);
    goto CPyL32;
CPyL150: ;
    CPy_DecRef(cpy_r_to_wallet);
    goto CPyL33;
CPyL151: ;
    CPy_DecRef(cpy_r_to_wallet);
    goto CPyL36;
CPyL152: ;
    CPy_DecRef(cpy_r_to_wallet);
    goto CPyL133;
CPyL153: ;
    CPy_DecRef(cpy_r_to_wallet);
    CPy_DecRef(cpy_r_r57);
    goto CPyL133;
CPyL154: ;
    CPy_DECREF(cpy_r_txgroup_dbid);
    goto CPyL42;
CPyL155: ;
    CPy_XDecRef(cpy_r_to_wallet);
    goto CPyL133;
CPyL156: ;
    CPy_XDecRef(cpy_r_to_wallet);
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_txhash);
    goto CPyL133;
CPyL157: ;
    CPy_XDecRef(cpy_r_to_wallet);
    CPy_DecRef(cpy_r_txhash);
    goto CPyL133;
CPyL158: ;
    CPy_DECREF(cpy_r_txgroup_dbid);
    goto CPyL52;
CPyL159: ;
    CPy_DECREF(cpy_r_txgroup_dbid);
    goto CPyL57;
CPyL160: ;
    CPy_DECREF(cpy_r_txgroup_dbid);
    goto CPyL62;
CPyL161: ;
    CPy_XDECREF(cpy_r_to_wallet);
    goto CPyL132;
CPyL162: ;
    CPy_DECREF(cpy_r_from_wallet);
    goto CPyL87;
CPyL163: ;
    CPy_XDecRef(cpy_r_to_wallet);
    CPy_DecRef(cpy_r_from_wallet);
    goto CPyL133;
CPyL164: ;
    CPy_XDecRef(cpy_r_to_wallet);
    CPy_DecRef(cpy_r_from_wallet);
    CPy_DecRef(cpy_r_r107);
    goto CPyL133;
CPyL165: ;
    CPy_XDECREF(cpy_r_to_wallet);
    CPy_DECREF(cpy_r_from_wallet);
    goto CPyL83;
CPyL166: ;
    CPy_XDecRef(cpy_r_to_wallet);
    CPy_DecRef(cpy_r_r119);
    goto CPyL133;
CPyL167: ;
    CPy_XDECREF(cpy_r_to_wallet);
    goto CPyL83;
CPyL168: ;
    CPy_XDECREF(cpy_r_to_wallet);
    goto CPyL90;
CPyL169: ;
    CPy_DecRef(cpy_r_to_wallet);
    CPy_DecRef(cpy_r_r139);
    goto CPyL133;
CPyL170: ;
    CPy_DECREF(cpy_r_to_wallet);
    goto CPyL124;
CPyL171: ;
    CPy_DECREF(cpy_r_r151);
    goto CPyL104;
CPyL172: ;
    CPy_DECREF(cpy_r_r151);
    goto CPyL107;
CPyL173: ;
    CPy_DECREF(cpy_r_r151);
    goto CPyL111;
CPyL174: ;
    CPy_DecRef(cpy_r_r151);
    goto CPyL133;
CPyL175: ;
    CPy_DECREF(cpy_r_r151);
    goto CPyL117;
}

PyObject *CPyPy_sorting___sort_basic(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"entry", 0};
    static CPyArg_Parser parser = {"O:sort_basic", kwlist, 0};
    PyObject *obj_entry;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_entry)) {
        return NULL;
    }
    PyObject *arg_entry = obj_entry;
    PyObject *retval = CPyDef_sorting___sort_basic(arg_entry);
    return retval;
fail: ;
    CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic", 62, CPyStatic_sorting___globals);
    return NULL;
}

PyObject *CPyDef_sorting___sort_basic_entity(PyObject *cpy_r_entry) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_to_wallet;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_txgroup_dbid;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_from_wallet;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_start_block_for_wallet;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_end_block_for_wallet;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    int32_t cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject **cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject **cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    int32_t cpy_r_r97;
    char cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    int32_t cpy_r_r111;
    char cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    char cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    int32_t cpy_r_r126;
    char cpy_r_r127;
    char cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    char cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    int32_t cpy_r_r138;
    char cpy_r_r139;
    char cpy_r_r140;
    PyObject *cpy_r_r141;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    int32_t cpy_r_r145;
    char cpy_r_r146;
    char cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    char cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    int32_t cpy_r_r160;
    char cpy_r_r161;
    char cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    char cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    char cpy_r_r170;
    CPyPtr cpy_r_r171;
    PyObject *cpy_r_r172;
    char cpy_r_r173;
    char cpy_r_r174;
    char cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    char cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    int32_t cpy_r_r184;
    char cpy_r_r185;
    char cpy_r_r186;
    PyObject *cpy_r_r187;
    char cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject **cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    char cpy_r_r197;
    PyObject *cpy_r_r198;
    char cpy_r_r199;
    PyObject *cpy_r_r200;
    char cpy_r_r201;
    PyObject *cpy_r_r202;
    char cpy_r_r203;
    PyObject *cpy_r_r204;
    char cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject **cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    cpy_r_r0 = NULL;
    cpy_r_to_wallet = cpy_r_r0;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_txgroup_dbid = cpy_r_r1;
    cpy_r_r2 = CPyStatics[3]; /* 'from_address' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_entry, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 120, CPyStatic_sorting___globals);
        goto CPyL161;
    }
    cpy_r_r4 = PyObject_IsTrue(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 120, CPyStatic_sorting___globals);
        goto CPyL161;
    }
    cpy_r_r6 = cpy_r_r4;
    if (!cpy_r_r6) goto CPyL49;
    cpy_r_r7 = CPyStatics[3]; /* 'from_address' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_entry, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 121, CPyStatic_sorting___globals);
        goto CPyL161;
    }
    cpy_r_r9 = CPyStatics[17]; /* 'address' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 121, CPyStatic_sorting___globals);
        goto CPyL161;
    }
    cpy_r_r11 = CPyDef__wallet___TreasuryWallet____get_instance(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 121, CPyStatic_sorting___globals);
        goto CPyL161;
    }
    CPy_INCREF(cpy_r_r11);
    cpy_r_from_wallet = cpy_r_r11;
    cpy_r_r12 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r13 = cpy_r_r11 != cpy_r_r12;
    CPy_DECREF(cpy_r_r11);
    if (!cpy_r_r13) goto CPyL162;
    if (likely(cpy_r_from_wallet != Py_None))
        cpy_r_r14 = cpy_r_from_wallet;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 123, CPyStatic_sorting___globals, "dao_treasury._wallet.TreasuryWallet", cpy_r_from_wallet);
        goto CPyL163;
    }
    cpy_r_r15 = CPyDef__wallet___TreasuryWallet____start_block(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 123, CPyStatic_sorting___globals);
        goto CPyL163;
    }
CPyL9: ;
    cpy_r_start_block_for_wallet = cpy_r_r15;
    if (likely(cpy_r_from_wallet != Py_None))
        cpy_r_r16 = cpy_r_from_wallet;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 124, CPyStatic_sorting___globals, "dao_treasury._wallet.TreasuryWallet", cpy_r_from_wallet);
        goto CPyL164;
    }
    cpy_r_r17 = CPyDef__wallet___TreasuryWallet____end_block(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 124, CPyStatic_sorting___globals);
        goto CPyL164;
    }
CPyL11: ;
    CPy_DECREF(cpy_r_from_wallet);
    cpy_r_end_block_for_wallet = cpy_r_r17;
    cpy_r_r18 = CPyStatics[18]; /* 'block' */
    cpy_r_r19 = CPyObject_GetAttr(cpy_r_entry, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 126, CPyStatic_sorting___globals);
        goto CPyL165;
    }
    cpy_r_r20 = PyObject_RichCompare(cpy_r_start_block_for_wallet, cpy_r_r19, 1);
    CPy_DECREF(cpy_r_start_block_for_wallet);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 126, CPyStatic_sorting___globals);
        goto CPyL166;
    }
    cpy_r_r21 = PyObject_IsTrue(cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 126, CPyStatic_sorting___globals);
        goto CPyL166;
    }
    cpy_r_r23 = cpy_r_r21;
    if (!cpy_r_r23) goto CPyL167;
    cpy_r_r24 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r25 = cpy_r_end_block_for_wallet == cpy_r_r24;
    if (cpy_r_r25) goto CPyL168;
    cpy_r_r26 = CPyStatics[18]; /* 'block' */
    cpy_r_r27 = CPyObject_GetAttr(cpy_r_entry, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 127, CPyStatic_sorting___globals);
        goto CPyL166;
    }
    cpy_r_r28 = PyObject_RichCompare(cpy_r_r27, cpy_r_end_block_for_wallet, 1);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_end_block_for_wallet);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 127, CPyStatic_sorting___globals);
        goto CPyL161;
    }
    cpy_r_r29 = PyObject_IsTrue(cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 127, CPyStatic_sorting___globals);
        goto CPyL161;
    }
    cpy_r_r31 = cpy_r_r29;
    if (!cpy_r_r31) goto CPyL49;
CPyL20: ;
    cpy_r_r32 = CPyStatics[5]; /* 'to_address' */
    cpy_r_r33 = CPyObject_GetAttr(cpy_r_entry, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 128, CPyStatic_sorting___globals);
        goto CPyL161;
    }
    cpy_r_r34 = PyObject_IsTrue(cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 128, CPyStatic_sorting___globals);
        goto CPyL161;
    }
    cpy_r_r36 = cpy_r_r34;
    if (cpy_r_r36) {
        goto CPyL169;
    } else
        goto CPyL49;
CPyL23: ;
    cpy_r_r37 = CPyStatics[5]; /* 'to_address' */
    cpy_r_r38 = CPyObject_GetAttr(cpy_r_entry, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 130, CPyStatic_sorting___globals);
        goto CPyL170;
    }
    cpy_r_r39 = CPyStatics[17]; /* 'address' */
    cpy_r_r40 = CPyObject_GetAttr(cpy_r_r38, cpy_r_r39);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 130, CPyStatic_sorting___globals);
        goto CPyL170;
    }
    cpy_r_r41 = CPyDef__wallet___TreasuryWallet____get_instance(cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 130, CPyStatic_sorting___globals);
        goto CPyL170;
    }
    CPy_INCREF(cpy_r_r41);
    cpy_r_to_wallet = cpy_r_r41;
    cpy_r_r42 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r43 = cpy_r_r41 != cpy_r_r42;
    CPy_DECREF(cpy_r_r41);
    if (!cpy_r_r43) goto CPyL49;
    if (likely(cpy_r_to_wallet != Py_None))
        cpy_r_r44 = cpy_r_to_wallet;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 131, CPyStatic_sorting___globals, "dao_treasury._wallet.TreasuryWallet", cpy_r_to_wallet);
        goto CPyL171;
    }
    cpy_r_r45 = CPyDef__wallet___TreasuryWallet____start_block(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 131, CPyStatic_sorting___globals);
        goto CPyL171;
    }
CPyL29: ;
    cpy_r_start_block_for_wallet = cpy_r_r45;
    if (likely(cpy_r_to_wallet != Py_None))
        cpy_r_r46 = cpy_r_to_wallet;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 132, CPyStatic_sorting___globals, "dao_treasury._wallet.TreasuryWallet", cpy_r_to_wallet);
        goto CPyL172;
    }
    cpy_r_r47 = CPyDef__wallet___TreasuryWallet____end_block(cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 132, CPyStatic_sorting___globals);
        goto CPyL172;
    }
CPyL31: ;
    cpy_r_end_block_for_wallet = cpy_r_r47;
    cpy_r_r48 = CPyStatics[18]; /* 'block' */
    cpy_r_r49 = CPyObject_GetAttr(cpy_r_entry, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 134, CPyStatic_sorting___globals);
        goto CPyL173;
    }
    cpy_r_r50 = PyObject_RichCompare(cpy_r_start_block_for_wallet, cpy_r_r49, 1);
    CPy_DECREF(cpy_r_start_block_for_wallet);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 134, CPyStatic_sorting___globals);
        goto CPyL174;
    }
    cpy_r_r51 = PyObject_IsTrue(cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 134, CPyStatic_sorting___globals);
        goto CPyL174;
    }
    cpy_r_r53 = cpy_r_r51;
    if (!cpy_r_r53) goto CPyL167;
    cpy_r_r54 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r55 = cpy_r_end_block_for_wallet == cpy_r_r54;
    if (cpy_r_r55) goto CPyL175;
    cpy_r_r56 = CPyStatics[18]; /* 'block' */
    cpy_r_r57 = CPyObject_GetAttr(cpy_r_entry, cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 135, CPyStatic_sorting___globals);
        goto CPyL174;
    }
    cpy_r_r58 = PyObject_RichCompare(cpy_r_r57, cpy_r_end_block_for_wallet, 1);
    CPy_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_end_block_for_wallet);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 135, CPyStatic_sorting___globals);
        goto CPyL171;
    }
    cpy_r_r59 = PyObject_IsTrue(cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r60 = cpy_r_r59 >= 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 135, CPyStatic_sorting___globals);
        goto CPyL171;
    }
    cpy_r_r61 = cpy_r_r59;
    if (cpy_r_r61) {
        goto CPyL176;
    } else
        goto CPyL49;
CPyL40: ;
    cpy_r_r62 = CPyStatic_sorting___TxGroup;
    if (unlikely(cpy_r_r62 == NULL)) {
        goto CPyL177;
    } else
        goto CPyL43;
CPyL41: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"TxGroup\" was not set");
    cpy_r_r63 = 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 137, CPyStatic_sorting___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL43: ;
    cpy_r_r64 = CPyStatics[6]; /* 'Internal Transfer' */
    cpy_r_r65 = CPyStatic_sorting___TxGroup;
    if (unlikely(cpy_r_r65 == NULL)) {
        goto CPyL178;
    } else
        goto CPyL46;
CPyL44: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"TxGroup\" was not set");
    cpy_r_r66 = 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 139, CPyStatic_sorting___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL46: ;
    cpy_r_r67 = CPyStatics[7]; /* 'Ignore' */
    cpy_r_r68 = CPyStatics[8]; /* 'get_dbid' */
    PyObject *cpy_r_r69[2] = {cpy_r_r65, cpy_r_r67};
    cpy_r_r70 = (PyObject **)&cpy_r_r69;
    cpy_r_r71 = PyObject_VectorcallMethod(cpy_r_r68, cpy_r_r70, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 139, CPyStatic_sorting___globals);
        goto CPyL179;
    }
    cpy_r_r72 = CPyStatics[8]; /* 'get_dbid' */
    PyObject *cpy_r_r73[3] = {cpy_r_r62, cpy_r_r64, cpy_r_r71};
    cpy_r_r74 = (PyObject **)&cpy_r_r73;
    cpy_r_r75 = CPyStatics[210]; /* ('name', 'parent') */
    cpy_r_r76 = PyObject_VectorcallMethod(cpy_r_r72, cpy_r_r74, 9223372036854775809ULL, cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 137, CPyStatic_sorting___globals);
        goto CPyL180;
    }
    CPy_DECREF(cpy_r_r71);
    cpy_r_txgroup_dbid = cpy_r_r76;
CPyL49: ;
    cpy_r_r77 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r78 = cpy_r_txgroup_dbid == cpy_r_r77;
    if (cpy_r_r78) {
        goto CPyL181;
    } else
        goto CPyL54;
CPyL50: ;
    cpy_r_r79 = (PyObject *)CPyType__matchers___HashMatcher;
    cpy_r_r80 = CPyStatics[11]; /* 'hash' */
    cpy_r_r81 = CPyObject_GetAttr(cpy_r_entry, cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 143, CPyStatic_sorting___globals);
        goto CPyL182;
    }
    if (likely(PyUnicode_Check(cpy_r_r81)))
        cpy_r_r82 = cpy_r_r81;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 143, CPyStatic_sorting___globals, "str", cpy_r_r81);
        goto CPyL182;
    }
    cpy_r_r83 = CPyDef__matchers____Matcher___match(cpy_r_r79, cpy_r_r82);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 143, CPyStatic_sorting___globals);
        goto CPyL182;
    }
    cpy_r_txgroup_dbid = cpy_r_r83;
CPyL54: ;
    cpy_r_r84 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r85 = cpy_r_txgroup_dbid == cpy_r_r84;
    if (cpy_r_r85) {
        goto CPyL183;
    } else
        goto CPyL60;
CPyL55: ;
    cpy_r_r86 = (PyObject *)CPyType__matchers___FromAddressMatcher;
    cpy_r_r87 = CPyStatics[3]; /* 'from_address' */
    cpy_r_r88 = CPyObject_GetAttr(cpy_r_entry, cpy_r_r87);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 146, CPyStatic_sorting___globals);
        goto CPyL182;
    }
    cpy_r_r89 = CPyStatics[17]; /* 'address' */
    cpy_r_r90 = CPyObject_GetAttr(cpy_r_r88, cpy_r_r89);
    CPy_DECREF(cpy_r_r88);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 146, CPyStatic_sorting___globals);
        goto CPyL182;
    }
    if (likely(PyUnicode_Check(cpy_r_r90)))
        cpy_r_r91 = cpy_r_r90;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 146, CPyStatic_sorting___globals, "str", cpy_r_r90);
        goto CPyL182;
    }
    cpy_r_r92 = CPyDef__matchers____Matcher___match(cpy_r_r86, cpy_r_r91);
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 146, CPyStatic_sorting___globals);
        goto CPyL182;
    }
    cpy_r_txgroup_dbid = cpy_r_r92;
CPyL60: ;
    cpy_r_r93 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r94 = cpy_r_txgroup_dbid == cpy_r_r93;
    if (!cpy_r_r94) goto CPyL69;
    cpy_r_r95 = CPyStatics[5]; /* 'to_address' */
    cpy_r_r96 = CPyObject_GetAttr(cpy_r_entry, cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 148, CPyStatic_sorting___globals);
        goto CPyL161;
    }
    cpy_r_r97 = PyObject_IsTrue(cpy_r_r96);
    CPy_DECREF(cpy_r_r96);
    cpy_r_r98 = cpy_r_r97 >= 0;
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 148, CPyStatic_sorting___globals);
        goto CPyL161;
    }
    cpy_r_r99 = cpy_r_r97;
    if (cpy_r_r99) {
        goto CPyL184;
    } else
        goto CPyL69;
CPyL64: ;
    cpy_r_r100 = (PyObject *)CPyType__matchers___ToAddressMatcher;
    cpy_r_r101 = CPyStatics[5]; /* 'to_address' */
    cpy_r_r102 = CPyObject_GetAttr(cpy_r_entry, cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 149, CPyStatic_sorting___globals);
        goto CPyL182;
    }
    cpy_r_r103 = CPyStatics[17]; /* 'address' */
    cpy_r_r104 = CPyObject_GetAttr(cpy_r_r102, cpy_r_r103);
    CPy_DECREF(cpy_r_r102);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 149, CPyStatic_sorting___globals);
        goto CPyL182;
    }
    if (likely(PyUnicode_Check(cpy_r_r104)))
        cpy_r_r105 = cpy_r_r104;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 149, CPyStatic_sorting___globals, "str", cpy_r_r104);
        goto CPyL182;
    }
    cpy_r_r106 = CPyDef__matchers____Matcher___match(cpy_r_r100, cpy_r_r105);
    CPy_DECREF(cpy_r_r105);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 149, CPyStatic_sorting___globals);
        goto CPyL182;
    }
    cpy_r_txgroup_dbid = cpy_r_r106;
CPyL69: ;
    cpy_r_r107 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r108 = cpy_r_txgroup_dbid == cpy_r_r107;
    if (cpy_r_r108) {
        goto CPyL185;
    } else
        goto CPyL186;
CPyL70: ;
    cpy_r_r109 = CPyStatics[3]; /* 'from_address' */
    cpy_r_r110 = CPyObject_GetAttr(cpy_r_entry, cpy_r_r109);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 153, CPyStatic_sorting___globals);
        goto CPyL182;
    }
    cpy_r_r111 = PyObject_IsTrue(cpy_r_r110);
    CPy_DECREF(cpy_r_r110);
    cpy_r_r112 = cpy_r_r111 >= 0;
    if (unlikely(!cpy_r_r112)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 153, CPyStatic_sorting___globals);
        goto CPyL182;
    }
    cpy_r_r113 = cpy_r_r111;
    if (!cpy_r_r113) goto CPyL96;
    cpy_r_r114 = CPyStatics[3]; /* 'from_address' */
    cpy_r_r115 = CPyObject_GetAttr(cpy_r_entry, cpy_r_r114);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 154, CPyStatic_sorting___globals);
        goto CPyL182;
    }
    cpy_r_r116 = CPyStatics[17]; /* 'address' */
    cpy_r_r117 = CPyObject_GetAttr(cpy_r_r115, cpy_r_r116);
    CPy_DECREF(cpy_r_r115);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 154, CPyStatic_sorting___globals);
        goto CPyL182;
    }
    cpy_r_r118 = CPyDef__wallet___TreasuryWallet____get_instance(cpy_r_r117);
    CPy_DECREF(cpy_r_r117);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 154, CPyStatic_sorting___globals);
        goto CPyL182;
    }
    CPy_INCREF(cpy_r_r118);
    cpy_r_from_wallet = cpy_r_r118;
    cpy_r_r119 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r120 = cpy_r_r118 != cpy_r_r119;
    CPy_DECREF(cpy_r_r118);
    if (!cpy_r_r120) goto CPyL187;
    if (likely(cpy_r_from_wallet != Py_None))
        cpy_r_r121 = cpy_r_from_wallet;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 156, CPyStatic_sorting___globals, "dao_treasury._wallet.TreasuryWallet", cpy_r_from_wallet);
        goto CPyL188;
    }
    cpy_r_r122 = CPyDef__wallet___TreasuryWallet____start_block(cpy_r_r121);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 156, CPyStatic_sorting___globals);
        goto CPyL188;
    }
CPyL79: ;
    cpy_r_r123 = CPyStatics[18]; /* 'block' */
    cpy_r_r124 = CPyObject_GetAttr(cpy_r_entry, cpy_r_r123);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 156, CPyStatic_sorting___globals);
        goto CPyL189;
    }
    cpy_r_r125 = PyObject_RichCompare(cpy_r_r122, cpy_r_r124, 1);
    CPy_DECREF(cpy_r_r122);
    CPy_DECREF(cpy_r_r124);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 156, CPyStatic_sorting___globals);
        goto CPyL188;
    }
    cpy_r_r126 = PyObject_IsTrue(cpy_r_r125);
    CPy_DECREF(cpy_r_r125);
    cpy_r_r127 = cpy_r_r126 >= 0;
    if (unlikely(!cpy_r_r127)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 156, CPyStatic_sorting___globals);
        goto CPyL188;
    }
    cpy_r_r128 = cpy_r_r126;
    if (!cpy_r_r128) goto CPyL187;
    if (likely(cpy_r_from_wallet != Py_None))
        cpy_r_r129 = cpy_r_from_wallet;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 157, CPyStatic_sorting___globals, "dao_treasury._wallet.TreasuryWallet", cpy_r_from_wallet);
        goto CPyL188;
    }
    cpy_r_r130 = CPyDef__wallet___TreasuryWallet____end_block(cpy_r_r129);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 157, CPyStatic_sorting___globals);
        goto CPyL188;
    }
CPyL85: ;
    cpy_r_r131 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r132 = cpy_r_r130 == cpy_r_r131;
    if (cpy_r_r132) goto CPyL190;
    if (likely(cpy_r_from_wallet != Py_None))
        cpy_r_r133 = cpy_r_from_wallet;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 157, CPyStatic_sorting___globals, "dao_treasury._wallet.TreasuryWallet", cpy_r_from_wallet);
        goto CPyL188;
    }
    cpy_r_r134 = CPyDef__wallet___TreasuryWallet____end_block(cpy_r_r133);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 157, CPyStatic_sorting___globals);
        goto CPyL188;
    }
CPyL88: ;
    CPy_DECREF(cpy_r_from_wallet);
    cpy_r_r135 = CPyStatics[18]; /* 'block' */
    cpy_r_r136 = CPyObject_GetAttr(cpy_r_entry, cpy_r_r135);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 157, CPyStatic_sorting___globals);
        goto CPyL191;
    }
    cpy_r_r137 = PyObject_RichCompare(cpy_r_r134, cpy_r_r136, 5);
    CPy_DECREF(cpy_r_r134);
    CPy_DECREF(cpy_r_r136);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 157, CPyStatic_sorting___globals);
        goto CPyL182;
    }
    cpy_r_r138 = PyObject_IsTrue(cpy_r_r137);
    CPy_DECREF(cpy_r_r137);
    cpy_r_r139 = cpy_r_r138 >= 0;
    if (unlikely(!cpy_r_r139)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 157, CPyStatic_sorting___globals);
        goto CPyL182;
    }
    cpy_r_r140 = cpy_r_r138;
    if (cpy_r_r140) {
        goto CPyL192;
    } else
        goto CPyL96;
CPyL92: ;
    cpy_r_r141 = CPyStatic_sorting___must_sort_outbound_txgroup_dbid;
    if (likely(cpy_r_r141 != NULL)) goto CPyL95;
    PyErr_SetString(PyExc_NameError, "value for final name \"must_sort_outbound_txgroup_dbid\" was not set");
    cpy_r_r142 = 0;
    if (unlikely(!cpy_r_r142)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 159, CPyStatic_sorting___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL95: ;
    CPy_INCREF(cpy_r_r141);
    cpy_r_txgroup_dbid = cpy_r_r141;
    goto CPyL142;
CPyL96: ;
    cpy_r_r143 = CPyStatics[5]; /* 'to_address' */
    cpy_r_r144 = CPyObject_GetAttr(cpy_r_entry, cpy_r_r143);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 162, CPyStatic_sorting___globals);
        goto CPyL182;
    }
    cpy_r_r145 = PyObject_IsTrue(cpy_r_r144);
    CPy_DECREF(cpy_r_r144);
    cpy_r_r146 = cpy_r_r145 >= 0;
    if (unlikely(!cpy_r_r146)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 162, CPyStatic_sorting___globals);
        goto CPyL182;
    }
    cpy_r_r147 = cpy_r_r145;
    if (cpy_r_r147) {
        goto CPyL193;
    } else
        goto CPyL112;
CPyL99: ;
    cpy_r_r148 = CPyStatics[5]; /* 'to_address' */
    cpy_r_r149 = CPyObject_GetAttr(cpy_r_entry, cpy_r_r148);
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 163, CPyStatic_sorting___globals);
        goto CPyL160;
    }
    cpy_r_r150 = CPyStatics[17]; /* 'address' */
    cpy_r_r151 = CPyObject_GetAttr(cpy_r_r149, cpy_r_r150);
    CPy_DECREF(cpy_r_r149);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 163, CPyStatic_sorting___globals);
        goto CPyL160;
    }
    cpy_r_r152 = CPyDef__wallet___TreasuryWallet____get_instance(cpy_r_r151);
    CPy_DECREF(cpy_r_r151);
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 163, CPyStatic_sorting___globals);
        goto CPyL160;
    }
    CPy_INCREF(cpy_r_r152);
    cpy_r_to_wallet = cpy_r_r152;
    cpy_r_r153 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r154 = cpy_r_r152 != cpy_r_r153;
    CPy_DECREF(cpy_r_r152);
    if (!cpy_r_r154) goto CPyL112;
    if (likely(cpy_r_to_wallet != Py_None))
        cpy_r_r155 = cpy_r_to_wallet;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 164, CPyStatic_sorting___globals, "dao_treasury._wallet.TreasuryWallet", cpy_r_to_wallet);
        goto CPyL179;
    }
    cpy_r_r156 = CPyDef__wallet___TreasuryWallet____start_block(cpy_r_r155);
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 164, CPyStatic_sorting___globals);
        goto CPyL179;
    }
CPyL105: ;
    cpy_r_r157 = CPyStatics[18]; /* 'block' */
    cpy_r_r158 = CPyObject_GetAttr(cpy_r_entry, cpy_r_r157);
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 164, CPyStatic_sorting___globals);
        goto CPyL194;
    }
    cpy_r_r159 = PyObject_RichCompare(cpy_r_r156, cpy_r_r158, 1);
    CPy_DECREF(cpy_r_r156);
    CPy_DECREF(cpy_r_r158);
    if (unlikely(cpy_r_r159 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 164, CPyStatic_sorting___globals);
        goto CPyL179;
    }
    cpy_r_r160 = PyObject_IsTrue(cpy_r_r159);
    CPy_DECREF(cpy_r_r159);
    cpy_r_r161 = cpy_r_r160 >= 0;
    if (unlikely(!cpy_r_r161)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 164, CPyStatic_sorting___globals);
        goto CPyL179;
    }
    cpy_r_r162 = cpy_r_r160;
    if (!cpy_r_r162) goto CPyL112;
    if (likely(cpy_r_to_wallet != Py_None))
        cpy_r_r163 = cpy_r_to_wallet;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 165, CPyStatic_sorting___globals, "dao_treasury._wallet.TreasuryWallet", cpy_r_to_wallet);
        goto CPyL179;
    }
    cpy_r_r164 = CPyDef__wallet___TreasuryWallet____end_block(cpy_r_r163);
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 165, CPyStatic_sorting___globals);
        goto CPyL179;
    }
CPyL111: ;
    cpy_r_r165 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r166 = cpy_r_r164 == cpy_r_r165;
    if (cpy_r_r166) goto CPyL195;
CPyL112: ;
    cpy_r_r167 = CPyStatics[18]; /* 'block' */
    cpy_r_r168 = CPyObject_GetAttr(cpy_r_entry, cpy_r_r167);
    if (unlikely(cpy_r_r168 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 165, CPyStatic_sorting___globals);
        goto CPyL182;
    }
    cpy_r_r169 = (PyObject *)CPyType__wallet___TreasuryWallet;
    if (cpy_r_to_wallet == NULL) {
        goto CPyL196;
    } else
        goto CPyL116;
CPyL114: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"to_wallet\" referenced before assignment");
    cpy_r_r170 = 0;
    if (unlikely(!cpy_r_r170)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 165, CPyStatic_sorting___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL116: ;
    cpy_r_r171 = (CPyPtr)&((PyObject *)cpy_r_to_wallet)->ob_type;
    cpy_r_r172 = *(PyObject * *)cpy_r_r171;
    if (cpy_r_to_wallet == NULL) {
        goto CPyL197;
    } else
        goto CPyL119;
CPyL117: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"to_wallet\" referenced before assignment");
    cpy_r_r173 = 0;
    if (unlikely(!cpy_r_r173)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", -1, CPyStatic_sorting___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL119: ;
    cpy_r_r174 = cpy_r_r172 == cpy_r_r169;
    if (!cpy_r_r174) goto CPyL126;
    if (cpy_r_to_wallet == NULL) {
        goto CPyL198;
    } else
        goto CPyL123;
CPyL121: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"to_wallet\" referenced before assignment");
    cpy_r_r175 = 0;
    if (unlikely(!cpy_r_r175)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 165, CPyStatic_sorting___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL123: ;
    if (likely(cpy_r_to_wallet != Py_None))
        cpy_r_r176 = cpy_r_to_wallet;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 165, CPyStatic_sorting___globals, "dao_treasury._wallet.TreasuryWallet", cpy_r_to_wallet);
        goto CPyL199;
    }
    cpy_r_r177 = CPyDef__wallet___TreasuryWallet____end_block(cpy_r_r176);
    CPy_DECREF(cpy_r_r176);
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 165, CPyStatic_sorting___globals);
        goto CPyL199;
    }
CPyL125: ;
    cpy_r_r178 = cpy_r_r177;
    goto CPyL131;
CPyL126: ;
    if (cpy_r_to_wallet == NULL) {
        goto CPyL200;
    } else
        goto CPyL129;
CPyL127: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"to_wallet\" referenced before assignment");
    cpy_r_r179 = 0;
    if (unlikely(!cpy_r_r179)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", -1, CPyStatic_sorting___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL129: ;
    cpy_r_r180 = cpy_r_to_wallet;
    cpy_r_r181 = CPyStatics[14]; /* '_end_block' */
    cpy_r_r182 = CPyObject_GetAttr(cpy_r_r180, cpy_r_r181);
    CPy_DECREF(cpy_r_r180);
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 165, CPyStatic_sorting___globals);
        goto CPyL199;
    }
    cpy_r_r178 = cpy_r_r182;
CPyL131: ;
    cpy_r_r183 = PyObject_RichCompare(cpy_r_r168, cpy_r_r178, 1);
    CPy_DECREF(cpy_r_r168);
    CPy_DECREF(cpy_r_r178);
    if (unlikely(cpy_r_r183 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 165, CPyStatic_sorting___globals);
        goto CPyL160;
    }
    cpy_r_r184 = PyObject_IsTrue(cpy_r_r183);
    CPy_DECREF(cpy_r_r183);
    cpy_r_r185 = cpy_r_r184 >= 0;
    if (unlikely(!cpy_r_r185)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 165, CPyStatic_sorting___globals);
        goto CPyL160;
    }
    cpy_r_r186 = cpy_r_r184;
    if (!cpy_r_r186) goto CPyL138;
CPyL134: ;
    cpy_r_r187 = CPyStatic_sorting___must_sort_inbound_txgroup_dbid;
    if (likely(cpy_r_r187 != NULL)) goto CPyL137;
    PyErr_SetString(PyExc_NameError, "value for final name \"must_sort_inbound_txgroup_dbid\" was not set");
    cpy_r_r188 = 0;
    if (unlikely(!cpy_r_r188)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 167, CPyStatic_sorting___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL137: ;
    CPy_INCREF(cpy_r_r187);
    cpy_r_txgroup_dbid = cpy_r_r187;
    goto CPyL142;
CPyL138: ;
    cpy_r_r189 = CPyStatics[15]; /* 'this isnt supposed to happen' */
    cpy_r_r190 = CPyModule_builtins;
    cpy_r_r191 = CPyStatics[16]; /* 'NotImplementedError' */
    cpy_r_r192 = CPyObject_GetAttr(cpy_r_r190, cpy_r_r191);
    if (unlikely(cpy_r_r192 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 170, CPyStatic_sorting___globals);
        goto CPyL160;
    }
    PyObject *cpy_r_r193[1] = {cpy_r_r189};
    cpy_r_r194 = (PyObject **)&cpy_r_r193;
    cpy_r_r195 = _PyObject_Vectorcall(cpy_r_r192, cpy_r_r194, 1, 0);
    CPy_DECREF(cpy_r_r192);
    if (unlikely(cpy_r_r195 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 170, CPyStatic_sorting___globals);
        goto CPyL160;
    }
    CPy_Raise(cpy_r_r195);
    CPy_DECREF(cpy_r_r195);
    if (unlikely(!0)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 170, CPyStatic_sorting___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL142: ;
    cpy_r_r196 = CPyStatic_sorting___must_sort_inbound_txgroup_dbid;
    if (unlikely(cpy_r_r196 == NULL)) {
        goto CPyL201;
    } else
        goto CPyL145;
CPyL143: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"must_sort_inbound_txgroup_dbid\" was not set");
    cpy_r_r197 = 0;
    if (unlikely(!cpy_r_r197)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 172, CPyStatic_sorting___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL145: ;
    cpy_r_r198 = PyObject_RichCompare(cpy_r_txgroup_dbid, cpy_r_r196, 3);
    if (unlikely(cpy_r_r198 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", -1, CPyStatic_sorting___globals);
        goto CPyL170;
    }
    if (unlikely(!PyBool_Check(cpy_r_r198))) {
        CPy_TypeError("bool", cpy_r_r198); cpy_r_r199 = 2;
    } else
        cpy_r_r199 = cpy_r_r198 == Py_True;
    CPy_DECREF(cpy_r_r198);
    if (unlikely(cpy_r_r199 == 2)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", -1, CPyStatic_sorting___globals);
        goto CPyL170;
    }
    if (cpy_r_r199) goto CPyL149;
    if (cpy_r_r199) {
        goto CPyL155;
    } else
        goto CPyL159;
CPyL149: ;
    cpy_r_r200 = CPyStatic_sorting___must_sort_outbound_txgroup_dbid;
    if (unlikely(cpy_r_r200 == NULL)) {
        goto CPyL202;
    } else
        goto CPyL152;
CPyL150: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"must_sort_outbound_txgroup_dbid\" was not set");
    cpy_r_r201 = 0;
    if (unlikely(!cpy_r_r201)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 172, CPyStatic_sorting___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL152: ;
    cpy_r_r202 = PyObject_RichCompare(cpy_r_txgroup_dbid, cpy_r_r200, 3);
    if (unlikely(cpy_r_r202 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", -1, CPyStatic_sorting___globals);
        goto CPyL170;
    }
    if (unlikely(!PyBool_Check(cpy_r_r202))) {
        CPy_TypeError("bool", cpy_r_r202); cpy_r_r203 = 2;
    } else
        cpy_r_r203 = cpy_r_r202 == Py_True;
    CPy_DECREF(cpy_r_r202);
    if (unlikely(cpy_r_r203 == 2)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", -1, CPyStatic_sorting___globals);
        goto CPyL170;
    }
    if (!cpy_r_r203) goto CPyL159;
CPyL155: ;
    cpy_r_r204 = CPyStatic_sorting___logger;
    if (unlikely(cpy_r_r204 == NULL)) {
        goto CPyL203;
    } else
        goto CPyL158;
CPyL156: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"logger\" was not set");
    cpy_r_r205 = 0;
    if (unlikely(!cpy_r_r205)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 173, CPyStatic_sorting___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL158: ;
    cpy_r_r206 = CPyStatics[19]; /* 'Sorted %s to txgroup %s' */
    cpy_r_r207 = CPyStatics[20]; /* 'info' */
    PyObject *cpy_r_r208[4] = {cpy_r_r204, cpy_r_r206, cpy_r_entry, cpy_r_txgroup_dbid};
    cpy_r_r209 = (PyObject **)&cpy_r_r208;
    cpy_r_r210 = PyObject_VectorcallMethod(cpy_r_r207, cpy_r_r209, 9223372036854775812ULL, 0);
    if (unlikely(cpy_r_r210 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 173, CPyStatic_sorting___globals);
        goto CPyL170;
    } else
        goto CPyL204;
CPyL159: ;
    return cpy_r_txgroup_dbid;
CPyL160: ;
    cpy_r_r211 = NULL;
    return cpy_r_r211;
CPyL161: ;
    CPy_XDecRef(cpy_r_to_wallet);
    CPy_DecRef(cpy_r_txgroup_dbid);
    goto CPyL160;
CPyL162: ;
    CPy_DECREF(cpy_r_from_wallet);
    goto CPyL49;
CPyL163: ;
    CPy_XDecRef(cpy_r_to_wallet);
    CPy_DecRef(cpy_r_txgroup_dbid);
    CPy_DecRef(cpy_r_from_wallet);
    goto CPyL160;
CPyL164: ;
    CPy_XDecRef(cpy_r_to_wallet);
    CPy_DecRef(cpy_r_txgroup_dbid);
    CPy_DecRef(cpy_r_from_wallet);
    CPy_DecRef(cpy_r_start_block_for_wallet);
    goto CPyL160;
CPyL165: ;
    CPy_XDecRef(cpy_r_to_wallet);
    CPy_DecRef(cpy_r_txgroup_dbid);
    CPy_DecRef(cpy_r_start_block_for_wallet);
    CPy_DecRef(cpy_r_end_block_for_wallet);
    goto CPyL160;
CPyL166: ;
    CPy_XDecRef(cpy_r_to_wallet);
    CPy_DecRef(cpy_r_txgroup_dbid);
    CPy_DecRef(cpy_r_end_block_for_wallet);
    goto CPyL160;
CPyL167: ;
    CPy_DECREF(cpy_r_end_block_for_wallet);
    goto CPyL49;
CPyL168: ;
    CPy_DECREF(cpy_r_end_block_for_wallet);
    goto CPyL20;
CPyL169: ;
    CPy_XDECREF(cpy_r_to_wallet);
    goto CPyL23;
CPyL170: ;
    CPy_DecRef(cpy_r_txgroup_dbid);
    goto CPyL160;
CPyL171: ;
    CPy_DecRef(cpy_r_to_wallet);
    CPy_DecRef(cpy_r_txgroup_dbid);
    goto CPyL160;
CPyL172: ;
    CPy_DecRef(cpy_r_to_wallet);
    CPy_DecRef(cpy_r_txgroup_dbid);
    CPy_DecRef(cpy_r_start_block_for_wallet);
    goto CPyL160;
CPyL173: ;
    CPy_DecRef(cpy_r_to_wallet);
    CPy_DecRef(cpy_r_txgroup_dbid);
    CPy_DecRef(cpy_r_start_block_for_wallet);
    CPy_DecRef(cpy_r_end_block_for_wallet);
    goto CPyL160;
CPyL174: ;
    CPy_DecRef(cpy_r_to_wallet);
    CPy_DecRef(cpy_r_txgroup_dbid);
    CPy_DecRef(cpy_r_end_block_for_wallet);
    goto CPyL160;
CPyL175: ;
    CPy_DECREF(cpy_r_txgroup_dbid);
    CPy_DECREF(cpy_r_end_block_for_wallet);
    goto CPyL40;
CPyL176: ;
    CPy_DECREF(cpy_r_txgroup_dbid);
    goto CPyL40;
CPyL177: ;
    CPy_DecRef(cpy_r_to_wallet);
    goto CPyL41;
CPyL178: ;
    CPy_DecRef(cpy_r_to_wallet);
    goto CPyL44;
CPyL179: ;
    CPy_DecRef(cpy_r_to_wallet);
    goto CPyL160;
CPyL180: ;
    CPy_DecRef(cpy_r_to_wallet);
    CPy_DecRef(cpy_r_r71);
    goto CPyL160;
CPyL181: ;
    CPy_DECREF(cpy_r_txgroup_dbid);
    goto CPyL50;
CPyL182: ;
    CPy_XDecRef(cpy_r_to_wallet);
    goto CPyL160;
CPyL183: ;
    CPy_DECREF(cpy_r_txgroup_dbid);
    goto CPyL55;
CPyL184: ;
    CPy_DECREF(cpy_r_txgroup_dbid);
    goto CPyL64;
CPyL185: ;
    CPy_DECREF(cpy_r_txgroup_dbid);
    goto CPyL70;
CPyL186: ;
    CPy_XDECREF(cpy_r_to_wallet);
    goto CPyL142;
CPyL187: ;
    CPy_DECREF(cpy_r_from_wallet);
    goto CPyL96;
CPyL188: ;
    CPy_XDecRef(cpy_r_to_wallet);
    CPy_DecRef(cpy_r_from_wallet);
    goto CPyL160;
CPyL189: ;
    CPy_XDecRef(cpy_r_to_wallet);
    CPy_DecRef(cpy_r_from_wallet);
    CPy_DecRef(cpy_r_r122);
    goto CPyL160;
CPyL190: ;
    CPy_XDECREF(cpy_r_to_wallet);
    CPy_DECREF(cpy_r_from_wallet);
    goto CPyL92;
CPyL191: ;
    CPy_XDecRef(cpy_r_to_wallet);
    CPy_DecRef(cpy_r_r134);
    goto CPyL160;
CPyL192: ;
    CPy_XDECREF(cpy_r_to_wallet);
    goto CPyL92;
CPyL193: ;
    CPy_XDECREF(cpy_r_to_wallet);
    goto CPyL99;
CPyL194: ;
    CPy_DecRef(cpy_r_to_wallet);
    CPy_DecRef(cpy_r_r156);
    goto CPyL160;
CPyL195: ;
    CPy_DECREF(cpy_r_to_wallet);
    goto CPyL134;
CPyL196: ;
    CPy_DECREF(cpy_r_r168);
    goto CPyL114;
CPyL197: ;
    CPy_DECREF(cpy_r_r168);
    goto CPyL117;
CPyL198: ;
    CPy_DECREF(cpy_r_r168);
    goto CPyL121;
CPyL199: ;
    CPy_DecRef(cpy_r_r168);
    goto CPyL160;
CPyL200: ;
    CPy_DECREF(cpy_r_r168);
    goto CPyL127;
CPyL201: ;
    CPy_DecRef(cpy_r_txgroup_dbid);
    goto CPyL143;
CPyL202: ;
    CPy_DecRef(cpy_r_txgroup_dbid);
    goto CPyL150;
CPyL203: ;
    CPy_DecRef(cpy_r_txgroup_dbid);
    goto CPyL156;
CPyL204: ;
    CPy_DECREF(cpy_r_r210);
    goto CPyL159;
}

PyObject *CPyPy_sorting___sort_basic_entity(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"entry", 0};
    static CPyArg_Parser parser = {"O:sort_basic_entity", kwlist, 0};
    PyObject *obj_entry;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_entry)) {
        return NULL;
    }
    PyObject *arg_entry = obj_entry;
    PyObject *retval = CPyDef_sorting___sort_basic_entity(arg_entry);
    return retval;
fail: ;
    CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_basic_entity", 118, CPyStatic_sorting___globals);
    return NULL;
}

PyObject *CPyDef_sorting___sort_advanced_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyPtr cpy_r_r26;
    int64_t cpy_r_r27;
    CPyTagged cpy_r_r28;
    CPyTagged cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyTagged cpy_r_r32;
    int64_t cpy_r_r33;
    CPyPtr cpy_r_r34;
    CPyPtr cpy_r_r35;
    int64_t cpy_r_r36;
    CPyPtr cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject **cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    tuple_T3OOO cpy_r_r56;
    char cpy_r_r57;
    PyObject **cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    tuple_T3OOO cpy_r_r62;
    char cpy_r_r63;
    tuple_T3OOO cpy_r_r64;
    tuple_T3OOO cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject **cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    CPyTagged cpy_r_r82;
    CPyTagged cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject **cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    char cpy_r_r105;
    char cpy_r_r106;
    char cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    cpy_r_r0 = NULL;
    cpy_r_r1 = cpy_r_r0;
    cpy_r_r2 = ((dao_treasury___sorting___sort_advanced_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("dao_treasury/sorting/__init__.py", "sort_advanced", "sort_advanced_gen", "__mypyc_env__", 178, CPyStatic_sorting___globals);
        goto CPyL114;
    }
    CPy_INCREF(cpy_r_r2);
CPyL1: ;
    cpy_r_r3 = ((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->___mypyc_next_label__;
    if (unlikely(cpy_r_r3 == CPY_INT_TAG)) {
        CPy_AttributeError("dao_treasury/sorting/__init__.py", "sort_advanced", "sort_advanced_env", "__mypyc_next_label__", 178, CPyStatic_sorting___globals);
        goto CPyL115;
    }
    CPyTagged_INCREF(cpy_r_r3);
    goto CPyL109;
CPyL2: ;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_type != cpy_r_r4;
    if (cpy_r_r5) {
        goto CPyL116;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", 178, CPyStatic_sorting___globals);
        goto CPyL113;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r6 = ((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->_entry;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("dao_treasury/sorting/__init__.py", "sort_advanced", "sort_advanced_env", "entry", 179, CPyStatic_sorting___globals);
        goto CPyL115;
    }
    CPy_INCREF(cpy_r_r6);
CPyL6: ;
    cpy_r_r7 = CPyDef_sorting___sort_basic(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", 179, CPyStatic_sorting___globals);
        goto CPyL115;
    }
    if (((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->_txgroup_dbid != NULL) {
        CPy_DECREF(((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->_txgroup_dbid);
    }
    ((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->_txgroup_dbid = cpy_r_r7;
    cpy_r_r8 = 1;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", 179, CPyStatic_sorting___globals);
        goto CPyL115;
    }
    cpy_r_r9 = ((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->_txgroup_dbid;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("dao_treasury/sorting/__init__.py", "sort_advanced", "sort_advanced_env", "txgroup_dbid", 181, CPyStatic_sorting___globals);
        goto CPyL115;
    }
    CPy_INCREF(cpy_r_r9);
CPyL9: ;
    cpy_r_r10 = CPyStatic_sorting___must_sort_inbound_txgroup_dbid;
    if (unlikely(cpy_r_r10 == NULL)) {
        goto CPyL117;
    } else
        goto CPyL12;
CPyL10: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"must_sort_inbound_txgroup_dbid\" was not set");
    cpy_r_r11 = 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", 181, CPyStatic_sorting___globals);
        goto CPyL113;
    }
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r12 = PyObject_RichCompare(cpy_r_r9, cpy_r_r10, 3);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", -1, CPyStatic_sorting___globals);
        goto CPyL115;
    }
    if (unlikely(!PyBool_Check(cpy_r_r12))) {
        CPy_TypeError("bool", cpy_r_r12); cpy_r_r13 = 2;
    } else
        cpy_r_r13 = cpy_r_r12 == Py_True;
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", -1, CPyStatic_sorting___globals);
        goto CPyL115;
    }
    if (cpy_r_r13) goto CPyL16;
    if (cpy_r_r13) {
        goto CPyL23;
    } else
        goto CPyL119;
CPyL16: ;
    cpy_r_r14 = ((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->_txgroup_dbid;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("dao_treasury/sorting/__init__.py", "sort_advanced", "sort_advanced_env", "txgroup_dbid", 181, CPyStatic_sorting___globals);
        goto CPyL115;
    }
    CPy_INCREF(cpy_r_r14);
CPyL17: ;
    cpy_r_r15 = CPyStatic_sorting___must_sort_outbound_txgroup_dbid;
    if (unlikely(cpy_r_r15 == NULL)) {
        goto CPyL118;
    } else
        goto CPyL20;
CPyL18: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"must_sort_outbound_txgroup_dbid\" was not set");
    cpy_r_r16 = 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", 181, CPyStatic_sorting___globals);
        goto CPyL113;
    }
    CPy_Unreachable();
CPyL20: ;
    cpy_r_r17 = PyObject_RichCompare(cpy_r_r14, cpy_r_r15, 3);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", -1, CPyStatic_sorting___globals);
        goto CPyL115;
    }
    if (unlikely(!PyBool_Check(cpy_r_r17))) {
        CPy_TypeError("bool", cpy_r_r17); cpy_r_r18 = 2;
    } else
        cpy_r_r18 = cpy_r_r17 == Py_True;
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", -1, CPyStatic_sorting___globals);
        goto CPyL115;
    }
    if (!cpy_r_r18) goto CPyL119;
CPyL23: ;
    cpy_r_r19 = CPyStatic_sorting___globals;
    cpy_r_r20 = CPyStatics[21]; /* 'SORT_RULES' */
    cpy_r_r21 = CPyDict_GetItem(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", 182, CPyStatic_sorting___globals);
        goto CPyL115;
    }
    if (likely(PyList_Check(cpy_r_r21)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", 182, CPyStatic_sorting___globals, "list", cpy_r_r21);
        goto CPyL115;
    }
    if (((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->___mypyc_temp__0 != NULL) {
        CPy_DECREF(((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->___mypyc_temp__0);
    }
    ((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->___mypyc_temp__0 = cpy_r_r22;
    cpy_r_r23 = 1;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", -1, CPyStatic_sorting___globals);
        goto CPyL115;
    }
    ((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->___mypyc_temp__1 = 0;
    cpy_r_r24 = 1;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", -1, CPyStatic_sorting___globals);
        goto CPyL115;
    }
CPyL27: ;
    cpy_r_r25 = ((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->___mypyc_temp__0;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("dao_treasury/sorting/__init__.py", "sort_advanced", "sort_advanced_env", "__mypyc_temp__0", 182, CPyStatic_sorting___globals);
        goto CPyL115;
    }
    CPy_INCREF(cpy_r_r25);
CPyL28: ;
    cpy_r_r26 = (CPyPtr)&((PyVarObject *)cpy_r_r25)->ob_size;
    cpy_r_r27 = *(int64_t *)cpy_r_r26;
    CPy_DECREF(cpy_r_r25);
    cpy_r_r28 = cpy_r_r27 << 1;
    cpy_r_r29 = ((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->___mypyc_temp__1;
    if (unlikely(cpy_r_r29 == CPY_INT_TAG)) {
        CPy_AttributeError("dao_treasury/sorting/__init__.py", "sort_advanced", "sort_advanced_env", "__mypyc_temp__1", 182, CPyStatic_sorting___globals);
        goto CPyL115;
    }
CPyL29: ;
    cpy_r_r30 = (Py_ssize_t)cpy_r_r29 < (Py_ssize_t)cpy_r_r28;
    if (!cpy_r_r30) goto CPyL119;
    cpy_r_r31 = ((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->___mypyc_temp__0;
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AttributeError("dao_treasury/sorting/__init__.py", "sort_advanced", "sort_advanced_env", "__mypyc_temp__0", 182, CPyStatic_sorting___globals);
        goto CPyL115;
    }
    CPy_INCREF(cpy_r_r31);
CPyL31: ;
    cpy_r_r32 = ((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->___mypyc_temp__1;
    if (unlikely(cpy_r_r32 == CPY_INT_TAG)) {
        CPy_AttributeError("dao_treasury/sorting/__init__.py", "sort_advanced", "sort_advanced_env", "__mypyc_temp__1", 182, CPyStatic_sorting___globals);
        goto CPyL120;
    }
CPyL32: ;
    cpy_r_r33 = (Py_ssize_t)cpy_r_r32 >> 1;
    cpy_r_r34 = (CPyPtr)&((PyListObject *)cpy_r_r31)->ob_item;
    cpy_r_r35 = *(CPyPtr *)cpy_r_r34;
    cpy_r_r36 = cpy_r_r33 * 8;
    cpy_r_r37 = cpy_r_r35 + cpy_r_r36;
    cpy_r_r38 = *(PyObject * *)cpy_r_r37;
    CPy_INCREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r31);
    if (((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->_rule != NULL) {
        CPy_DECREF(((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->_rule);
    }
    ((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->_rule = cpy_r_r38;
    cpy_r_r39 = 1;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", 182, CPyStatic_sorting___globals);
        goto CPyL115;
    }
    cpy_r_r40 = ((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->_rule;
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AttributeError("dao_treasury/sorting/__init__.py", "sort_advanced", "sort_advanced_env", "rule", 183, CPyStatic_sorting___globals);
        goto CPyL115;
    }
    CPy_INCREF(cpy_r_r40);
CPyL34: ;
    cpy_r_r41 = ((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->_entry;
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AttributeError("dao_treasury/sorting/__init__.py", "sort_advanced", "sort_advanced_env", "entry", 183, CPyStatic_sorting___globals);
        goto CPyL121;
    }
    CPy_INCREF(cpy_r_r41);
CPyL35: ;
    cpy_r_r42 = CPyStatics[22]; /* 'match' */
    PyObject *cpy_r_r43[2] = {cpy_r_r40, cpy_r_r41};
    cpy_r_r44 = (PyObject **)&cpy_r_r43;
    cpy_r_r45 = PyObject_VectorcallMethod(cpy_r_r42, cpy_r_r44, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", 183, CPyStatic_sorting___globals);
        goto CPyL122;
    }
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r46 = CPy_GetCoro(cpy_r_r45);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", 183, CPyStatic_sorting___globals);
        goto CPyL115;
    }
    if (((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->___mypyc_temp__2 != NULL) {
        CPy_DECREF(((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->___mypyc_temp__2);
    }
    ((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->___mypyc_temp__2 = cpy_r_r46;
    cpy_r_r47 = 1;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", -1, CPyStatic_sorting___globals);
        goto CPyL115;
    }
    cpy_r_r48 = ((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->___mypyc_temp__2;
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AttributeError("dao_treasury/sorting/__init__.py", "sort_advanced", "sort_advanced_env", "__mypyc_temp__2", -1, CPyStatic_sorting___globals);
        goto CPyL115;
    }
    CPy_INCREF(cpy_r_r48);
CPyL39: ;
    cpy_r_r49 = CPyIter_Next(cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    if (cpy_r_r49 != NULL) goto CPyL42;
    cpy_r_r50 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", 183, CPyStatic_sorting___globals);
        goto CPyL115;
    }
    cpy_r_r51 = cpy_r_r50;
    goto CPyL71;
CPyL42: ;
    cpy_r_r52 = cpy_r_r49;
CPyL43: ;
    if (((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->___mypyc_next_label__);
    }
    ((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->___mypyc_next_label__ = 2;
    cpy_r_r53 = 1;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", 183, CPyStatic_sorting___globals);
        goto CPyL123;
    } else
        goto CPyL124;
CPyL44: ;
    return cpy_r_r52;
CPyL45: ;
    cpy_r_r54 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r55 = cpy_r_type != cpy_r_r54;
    if (!cpy_r_r55) goto CPyL48;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", 183, CPyStatic_sorting___globals);
        goto CPyL49;
    } else
        goto CPyL125;
CPyL47: ;
    CPy_Unreachable();
CPyL48: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL66;
CPyL49: ;
    cpy_r_r56 = CPy_CatchError();
    if (((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->___mypyc_temp__3.f0 != NULL) {
        CPy_DECREF(((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->___mypyc_temp__3.f0);
        CPy_DECREF(((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->___mypyc_temp__3.f1);
        CPy_DECREF(((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->___mypyc_temp__3.f2);
    }
    ((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->___mypyc_temp__3 = cpy_r_r56;
    cpy_r_r57 = 1;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", -1, CPyStatic_sorting___globals);
        goto CPyL126;
    }
    cpy_r_r58 = (PyObject **)&cpy_r_r1;
    cpy_r_r59 = ((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->___mypyc_temp__2;
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AttributeError("dao_treasury/sorting/__init__.py", "sort_advanced", "sort_advanced_env", "__mypyc_temp__2", -1, CPyStatic_sorting___globals);
        goto CPyL126;
    }
    CPy_INCREF(cpy_r_r59);
CPyL51: ;
    cpy_r_r60 = CPy_YieldFromErrorHandle(cpy_r_r59, cpy_r_r58);
    CPy_DecRef(cpy_r_r59);
    if (unlikely(cpy_r_r60 == 2)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", 183, CPyStatic_sorting___globals);
        goto CPyL126;
    }
    if (cpy_r_r60) goto CPyL58;
    if (cpy_r_r1 != NULL) goto CPyL56;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"\" referenced before assignment");
    cpy_r_r61 = 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", -1, CPyStatic_sorting___globals);
        goto CPyL63;
    } else
        goto CPyL127;
CPyL55: ;
    CPy_Unreachable();
CPyL56: ;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r52 = cpy_r_r1;
    cpy_r_r62 = ((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->___mypyc_temp__3;
    if (unlikely(cpy_r_r62.f0 == NULL)) {
        CPy_AttributeError("dao_treasury/sorting/__init__.py", "sort_advanced", "sort_advanced_env", "__mypyc_temp__3", -1, CPyStatic_sorting___globals);
        goto CPyL128;
    }
    CPy_INCREF(cpy_r_r62.f0);
    CPy_INCREF(cpy_r_r62.f1);
    CPy_INCREF(cpy_r_r62.f2);
CPyL57: ;
    CPy_RestoreExcInfo(cpy_r_r62);
    CPy_DecRef(cpy_r_r62.f0);
    CPy_DecRef(cpy_r_r62.f1);
    CPy_DecRef(cpy_r_r62.f2);
    goto CPyL43;
CPyL58: ;
    if (cpy_r_r1 != NULL) goto CPyL61;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"\" referenced before assignment");
    cpy_r_r63 = 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", -1, CPyStatic_sorting___globals);
        goto CPyL63;
    } else
        goto CPyL129;
CPyL60: ;
    CPy_Unreachable();
CPyL61: ;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r51 = cpy_r_r1;
    cpy_r_r64 = ((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->___mypyc_temp__3;
    if (unlikely(cpy_r_r64.f0 == NULL)) {
        CPy_AttributeError("dao_treasury/sorting/__init__.py", "sort_advanced", "sort_advanced_env", "__mypyc_temp__3", -1, CPyStatic_sorting___globals);
        goto CPyL130;
    }
    CPy_INCREF(cpy_r_r64.f0);
    CPy_INCREF(cpy_r_r64.f1);
    CPy_INCREF(cpy_r_r64.f2);
CPyL62: ;
    CPy_RestoreExcInfo(cpy_r_r64);
    CPy_DecRef(cpy_r_r64.f0);
    CPy_DecRef(cpy_r_r64.f1);
    CPy_DecRef(cpy_r_r64.f2);
    goto CPyL71;
CPyL63: ;
    cpy_r_r65 = ((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->___mypyc_temp__3;
    if (unlikely(cpy_r_r65.f0 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '__mypyc_temp__3' of 'sort_advanced_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r65.f0);
        CPy_INCREF(cpy_r_r65.f1);
        CPy_INCREF(cpy_r_r65.f2);
    }
    CPy_DecRef(cpy_r_r2);
    if (unlikely(cpy_r_r65.f0 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", -1, CPyStatic_sorting___globals);
        goto CPyL113;
    }
CPyL64: ;
    CPy_RestoreExcInfo(cpy_r_r65);
    CPy_DecRef(cpy_r_r65.f0);
    CPy_DecRef(cpy_r_r65.f1);
    CPy_DecRef(cpy_r_r65.f2);
    cpy_r_r66 = CPy_KeepPropagating();
    if (!cpy_r_r66) goto CPyL113;
    CPy_Unreachable();
CPyL66: ;
    cpy_r_r67 = ((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->___mypyc_temp__2;
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AttributeError("dao_treasury/sorting/__init__.py", "sort_advanced", "sort_advanced_env", "__mypyc_temp__2", -1, CPyStatic_sorting___globals);
        goto CPyL131;
    }
    CPy_INCREF(cpy_r_r67);
CPyL67: ;
    cpy_r_r68 = CPyIter_Send(cpy_r_r67, cpy_r_arg);
    CPy_DECREF(cpy_r_r67);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r68 == NULL) goto CPyL69;
    cpy_r_r52 = cpy_r_r68;
    goto CPyL43;
CPyL69: ;
    cpy_r_r69 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", 183, CPyStatic_sorting___globals);
        goto CPyL115;
    }
    cpy_r_r51 = cpy_r_r69;
CPyL71: ;
    if (unlikely(!PyBool_Check(cpy_r_r51))) {
        CPy_TypeError("bool", cpy_r_r51); cpy_r_r70 = 2;
    } else
        cpy_r_r70 = cpy_r_r51 == Py_True;
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r70 == 2)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", 183, CPyStatic_sorting___globals);
        goto CPyL115;
    }
    if (cpy_r_r70) {
        goto CPyL132;
    } else
        goto CPyL81;
CPyL73: ;
    cpy_r_r71 = CPyStatic_sorting___TxGroup;
    if (unlikely(cpy_r_r71 == NULL)) {
        goto CPyL133;
    } else
        goto CPyL76;
CPyL74: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"TxGroup\" was not set");
    cpy_r_r72 = 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", 184, CPyStatic_sorting___globals);
        goto CPyL113;
    }
    CPy_Unreachable();
CPyL76: ;
    cpy_r_r73 = ((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->_rule;
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AttributeError("dao_treasury/sorting/__init__.py", "sort_advanced", "sort_advanced_env", "rule", 184, CPyStatic_sorting___globals);
        goto CPyL134;
    }
    CPy_INCREF(cpy_r_r73);
CPyL77: ;
    cpy_r_r74 = CPyStatics[23]; /* 'txgroup' */
    cpy_r_r75 = CPyObject_GetAttr(cpy_r_r73, cpy_r_r74);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", 184, CPyStatic_sorting___globals);
        goto CPyL134;
    }
    if (likely(PyUnicode_Check(cpy_r_r75)))
        cpy_r_r76 = cpy_r_r75;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", 184, CPyStatic_sorting___globals, "str", cpy_r_r75);
        goto CPyL134;
    }
    cpy_r_r77 = CPyStatics[8]; /* 'get_dbid' */
    PyObject *cpy_r_r78[2] = {cpy_r_r71, cpy_r_r76};
    cpy_r_r79 = (PyObject **)&cpy_r_r78;
    cpy_r_r80 = PyObject_VectorcallMethod(cpy_r_r77, cpy_r_r79, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", 184, CPyStatic_sorting___globals);
        goto CPyL135;
    }
    CPy_DECREF(cpy_r_r76);
    if (((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->_txgroup_dbid != NULL) {
        CPy_DECREF(((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->_txgroup_dbid);
    }
    ((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->_txgroup_dbid = cpy_r_r80;
    cpy_r_r81 = 1;
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", 184, CPyStatic_sorting___globals);
        goto CPyL134;
    } else
        goto CPyL83;
CPyL81: ;
    cpy_r_r82 = ((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->___mypyc_temp__1;
    if (unlikely(cpy_r_r82 == CPY_INT_TAG)) {
        CPy_AttributeError("dao_treasury/sorting/__init__.py", "sort_advanced", "sort_advanced_env", "__mypyc_temp__1", 182, CPyStatic_sorting___globals);
        goto CPyL115;
    }
CPyL82: ;
    cpy_r_r83 = cpy_r_r82 + 2;
    ((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->___mypyc_temp__1 = cpy_r_r83;
    cpy_r_r84 = 1;
    if (unlikely(!cpy_r_r84)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", 182, CPyStatic_sorting___globals);
        goto CPyL115;
    } else
        goto CPyL27;
CPyL83: ;
    cpy_r_r85 = ((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->_txgroup_dbid;
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AttributeError("dao_treasury/sorting/__init__.py", "sort_advanced", "sort_advanced_env", "txgroup_dbid", 187, CPyStatic_sorting___globals);
        goto CPyL134;
    }
    CPy_INCREF(cpy_r_r85);
CPyL84: ;
    cpy_r_r86 = CPyStatic_sorting___must_sort_inbound_txgroup_dbid;
    if (unlikely(cpy_r_r86 == NULL)) {
        goto CPyL136;
    } else
        goto CPyL87;
CPyL85: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"must_sort_inbound_txgroup_dbid\" was not set");
    cpy_r_r87 = 0;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", 187, CPyStatic_sorting___globals);
        goto CPyL113;
    }
    CPy_Unreachable();
CPyL87: ;
    cpy_r_r88 = PyObject_RichCompare(cpy_r_r85, cpy_r_r86, 3);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", -1, CPyStatic_sorting___globals);
        goto CPyL134;
    }
    if (unlikely(!PyBool_Check(cpy_r_r88))) {
        CPy_TypeError("bool", cpy_r_r88); cpy_r_r89 = 2;
    } else
        cpy_r_r89 = cpy_r_r88 == Py_True;
    CPy_DECREF(cpy_r_r88);
    if (unlikely(cpy_r_r89 == 2)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", -1, CPyStatic_sorting___globals);
        goto CPyL134;
    }
    if (cpy_r_r89) goto CPyL91;
    if (cpy_r_r89) {
        goto CPyL98;
    } else
        goto CPyL105;
CPyL91: ;
    cpy_r_r90 = ((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->_txgroup_dbid;
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AttributeError("dao_treasury/sorting/__init__.py", "sort_advanced", "sort_advanced_env", "txgroup_dbid", 187, CPyStatic_sorting___globals);
        goto CPyL134;
    }
    CPy_INCREF(cpy_r_r90);
CPyL92: ;
    cpy_r_r91 = CPyStatic_sorting___must_sort_outbound_txgroup_dbid;
    if (unlikely(cpy_r_r91 == NULL)) {
        goto CPyL137;
    } else
        goto CPyL95;
CPyL93: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"must_sort_outbound_txgroup_dbid\" was not set");
    cpy_r_r92 = 0;
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", 187, CPyStatic_sorting___globals);
        goto CPyL113;
    }
    CPy_Unreachable();
CPyL95: ;
    cpy_r_r93 = PyObject_RichCompare(cpy_r_r90, cpy_r_r91, 3);
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", -1, CPyStatic_sorting___globals);
        goto CPyL134;
    }
    if (unlikely(!PyBool_Check(cpy_r_r93))) {
        CPy_TypeError("bool", cpy_r_r93); cpy_r_r94 = 2;
    } else
        cpy_r_r94 = cpy_r_r93 == Py_True;
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r94 == 2)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", -1, CPyStatic_sorting___globals);
        goto CPyL134;
    }
    if (!cpy_r_r94) goto CPyL105;
CPyL98: ;
    cpy_r_r95 = CPyStatic_sorting___logger;
    if (unlikely(cpy_r_r95 == NULL)) {
        goto CPyL138;
    } else
        goto CPyL101;
CPyL99: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"logger\" was not set");
    cpy_r_r96 = 0;
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", 188, CPyStatic_sorting___globals);
        goto CPyL113;
    }
    CPy_Unreachable();
CPyL101: ;
    cpy_r_r97 = CPyStatics[19]; /* 'Sorted %s to txgroup %s' */
    cpy_r_r98 = ((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->_entry;
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AttributeError("dao_treasury/sorting/__init__.py", "sort_advanced", "sort_advanced_env", "entry", 188, CPyStatic_sorting___globals);
        goto CPyL134;
    }
    CPy_INCREF(cpy_r_r98);
CPyL102: ;
    cpy_r_r99 = ((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->_txgroup_dbid;
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AttributeError("dao_treasury/sorting/__init__.py", "sort_advanced", "sort_advanced_env", "txgroup_dbid", 188, CPyStatic_sorting___globals);
        goto CPyL139;
    }
    CPy_INCREF(cpy_r_r99);
CPyL103: ;
    cpy_r_r100 = CPyStatics[20]; /* 'info' */
    PyObject *cpy_r_r101[4] = {cpy_r_r95, cpy_r_r97, cpy_r_r98, cpy_r_r99};
    cpy_r_r102 = (PyObject **)&cpy_r_r101;
    cpy_r_r103 = PyObject_VectorcallMethod(cpy_r_r100, cpy_r_r102, 9223372036854775812ULL, 0);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", 188, CPyStatic_sorting___globals);
        goto CPyL140;
    } else
        goto CPyL141;
CPyL104: ;
    CPy_DECREF(cpy_r_r98);
    CPy_DECREF(cpy_r_r99);
CPyL105: ;
    cpy_r_r104 = ((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->_txgroup_dbid;
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AttributeError("dao_treasury/sorting/__init__.py", "sort_advanced", "sort_advanced_env", "txgroup_dbid", 190, CPyStatic_sorting___globals);
        goto CPyL134;
    }
    CPy_INCREF(cpy_r_r104);
CPyL106: ;
    if (((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->___mypyc_next_label__);
    }
    ((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r2)->___mypyc_next_label__ = -2;
    cpy_r_r105 = 1;
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!cpy_r_r105)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", 190, CPyStatic_sorting___globals);
        goto CPyL142;
    }
    CPyGen_SetStopIterationValue(cpy_r_r104);
    CPy_DECREF(cpy_r_r104);
    if (!0) goto CPyL113;
    CPy_Unreachable();
CPyL109: ;
    cpy_r_r106 = cpy_r_r3 == 0;
    if (cpy_r_r106) goto CPyL143;
    cpy_r_r107 = cpy_r_r3 == 2;
    CPyTagged_DECREF(cpy_r_r3);
    if (cpy_r_r107) {
        goto CPyL45;
    } else
        goto CPyL144;
CPyL111: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r108 = 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", 178, CPyStatic_sorting___globals);
        goto CPyL113;
    }
    CPy_Unreachable();
CPyL113: ;
    cpy_r_r109 = NULL;
    return cpy_r_r109;
CPyL114: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL113;
CPyL115: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    goto CPyL113;
CPyL116: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    goto CPyL3;
CPyL117: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r9);
    goto CPyL10;
CPyL118: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r14);
    goto CPyL18;
CPyL119: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL83;
CPyL120: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r31);
    goto CPyL113;
CPyL121: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r40);
    goto CPyL113;
CPyL122: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_r41);
    goto CPyL113;
CPyL123: ;
    CPy_DecRef(cpy_r_r52);
    goto CPyL49;
CPyL124: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    goto CPyL44;
CPyL125: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    goto CPyL47;
CPyL126: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL63;
CPyL127: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL55;
CPyL128: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r52);
    goto CPyL63;
CPyL129: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL60;
CPyL130: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r51);
    goto CPyL63;
CPyL131: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_arg);
    goto CPyL113;
CPyL132: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL73;
CPyL133: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL74;
CPyL134: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL113;
CPyL135: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r76);
    goto CPyL113;
CPyL136: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r85);
    goto CPyL85;
CPyL137: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r90);
    goto CPyL93;
CPyL138: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL99;
CPyL139: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r98);
    goto CPyL113;
CPyL140: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_r99);
    goto CPyL113;
CPyL141: ;
    CPy_DECREF(cpy_r_r103);
    goto CPyL104;
CPyL142: ;
    CPy_DecRef(cpy_r_r104);
    goto CPyL113;
CPyL143: ;
    CPyTagged_DECREF(cpy_r_r3);
    goto CPyL2;
CPyL144: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    goto CPyL111;
}

PyObject *CPyPy_sorting___sort_advanced_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", "arg", 0};
    static CPyArg_Parser parser = {"OOOO:__mypyc_generator_helper__", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value;
    PyObject *obj_traceback;
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_type = obj_type;
    PyObject *arg_value = obj_value;
    PyObject *arg_traceback = obj_traceback;
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_sorting___sort_advanced_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", 178, CPyStatic_sorting___globals);
    return NULL;
}

PyObject *CPyDef_sorting___sort_advanced_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_sorting___sort_advanced_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_sorting___sort_advanced_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_sorting___sort_advanced_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("dao_treasury.sorting.sort_advanced_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_sorting___sort_advanced_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("dao_treasury/sorting/__init__.py", "__next__", -1, CPyStatic_sorting___globals);
    return NULL;
}

PyObject *CPyDef_sorting___sort_advanced_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_sorting___sort_advanced_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_sorting___sort_advanced_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_sorting___sort_advanced_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("dao_treasury.sorting.sort_advanced_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_sorting___sort_advanced_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("dao_treasury/sorting/__init__.py", "send", -1, CPyStatic_sorting___globals);
    return NULL;
}

PyObject *CPyDef_sorting___sort_advanced_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_sorting___sort_advanced_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_sorting___sort_advanced_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("dao_treasury.sorting.sort_advanced_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_sorting___sort_advanced_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("dao_treasury/sorting/__init__.py", "__iter__", -1, CPyStatic_sorting___globals);
    return NULL;
}

PyObject *CPyDef_sorting___sort_advanced_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    if (cpy_r_value != NULL) goto CPyL7;
    CPy_INCREF(cpy_r_r0);
    cpy_r_value = cpy_r_r0;
CPyL2: ;
    if (cpy_r_traceback != NULL) goto CPyL8;
    CPy_INCREF(cpy_r_r0);
    cpy_r_traceback = cpy_r_r0;
CPyL4: ;
    cpy_r_r1 = CPyDef_sorting___sort_advanced_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_traceback);
    if (cpy_r_r1 == NULL) goto CPyL6;
    return cpy_r_r1;
CPyL6: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
CPyL7: ;
    CPy_INCREF(cpy_r_value);
    goto CPyL2;
CPyL8: ;
    CPy_INCREF(cpy_r_traceback);
    goto CPyL4;
}

PyObject *CPyPy_sorting___sort_advanced_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", 0};
    static CPyArg_Parser parser = {"O|OO:throw", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value = NULL;
    PyObject *obj_traceback = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_sorting___sort_advanced_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("dao_treasury.sorting.sort_advanced_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_type = obj_type;
    PyObject *arg_value;
    if (obj_value == NULL) {
        arg_value = NULL;
    } else {
        arg_value = obj_value; 
    }
    PyObject *arg_traceback;
    if (obj_traceback == NULL) {
        arg_traceback = NULL;
    } else {
        arg_traceback = obj_traceback; 
    }
    PyObject *retval = CPyDef_sorting___sort_advanced_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("dao_treasury/sorting/__init__.py", "throw", -1, CPyStatic_sorting___globals);
    return NULL;
}

PyObject *CPyDef_sorting___sort_advanced_gen___close(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T3OOO cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T2OO cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[24]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef_sorting___sort_advanced_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[25]; /* 'StopIteration' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL12;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp1);
    PyObject *__tmp2 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp2);
    cpy_r_r12 = CPy_ExceptionMatches(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (!cpy_r_r12) goto CPyL13;
    CPy_RestoreExcInfo(cpy_r_r6);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    CPy_INCREF(cpy_r_r13);
    return cpy_r_r13;
CPyL6: ;
    CPy_Reraise();
    if (!0) goto CPyL10;
    CPy_Unreachable();
CPyL8: ;
    PyErr_SetString(PyExc_RuntimeError, "generator ignored GeneratorExit");
    cpy_r_r14 = 0;
    if (!cpy_r_r14) goto CPyL10;
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL11: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    goto CPyL8;
CPyL12: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL6;
}

PyObject *CPyPy_sorting___sort_advanced_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_sorting___sort_advanced_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("dao_treasury.sorting.sort_advanced_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_sorting___sort_advanced_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("dao_treasury/sorting/__init__.py", "close", -1, CPyStatic_sorting___globals);
    return NULL;
}

PyObject *CPyDef_sorting___sort_advanced_gen_____await__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_sorting___sort_advanced_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__await__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_sorting___sort_advanced_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("dao_treasury.sorting.sort_advanced_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_sorting___sort_advanced_gen_____await__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("dao_treasury/sorting/__init__.py", "__await__", -1, CPyStatic_sorting___globals);
    return NULL;
}

PyObject *CPyDef_sorting___sort_advanced(PyObject *cpy_r_entry) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_sorting___sort_advanced_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", 178, CPyStatic_sorting___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_entry);
    if (((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r0)->_entry != NULL) {
        CPy_DECREF(((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r0)->_entry);
    }
    ((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r0)->_entry = cpy_r_entry;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", 178, CPyStatic_sorting___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyDef_sorting___sort_advanced_gen();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", 178, CPyStatic_sorting___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r0);
    if (((dao_treasury___sorting___sort_advanced_genObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF(((dao_treasury___sorting___sort_advanced_genObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((dao_treasury___sorting___sort_advanced_genObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", 178, CPyStatic_sorting___globals);
        goto CPyL8;
    }
    if (((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((dao_treasury___sorting___sort_advanced_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r4 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", 178, CPyStatic_sorting___globals);
        goto CPyL9;
    }
    return cpy_r_r2;
CPyL6: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
CPyL9: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
}

PyObject *CPyPy_sorting___sort_advanced(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"entry", 0};
    static CPyArg_Parser parser = {"O:sort_advanced", kwlist, 0};
    PyObject *obj_entry;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_entry)) {
        return NULL;
    }
    PyObject *arg_entry = obj_entry;
    PyObject *retval = CPyDef_sorting___sort_advanced(arg_entry);
    return retval;
fail: ;
    CPy_AddTraceback("dao_treasury/sorting/__init__.py", "sort_advanced", 178, CPyStatic_sorting___globals);
    return NULL;
}

char CPyDef_sorting_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject **cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    int32_t cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    int32_t cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    int32_t cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    int32_t cpy_r_r103;
    char cpy_r_r104;
    char cpy_r_r105;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[26]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "<module>", -1, CPyStatic_sorting___globals);
        goto CPyL28;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[211]; /* ('getLogger',) */
    cpy_r_r6 = CPyStatics[28]; /* 'logging' */
    cpy_r_r7 = CPyStatic_sorting___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "<module>", 4, CPyStatic_sorting___globals);
        goto CPyL28;
    }
    CPyModule_logging = cpy_r_r8;
    CPy_INCREF(CPyModule_logging);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[212]; /* ('Final', 'Optional') */
    cpy_r_r10 = CPyStatics[31]; /* 'typing' */
    cpy_r_r11 = CPyStatic_sorting___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "<module>", 5, CPyStatic_sorting___globals);
        goto CPyL28;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[213]; /* ('LedgerEntry',) */
    cpy_r_r14 = CPyStatics[33]; /* 'eth_portfolio.structs' */
    cpy_r_r15 = CPyStatic_sorting___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "<module>", 7, CPyStatic_sorting___globals);
        goto CPyL28;
    }
    CPyModule_eth_portfolio___structs = cpy_r_r16;
    CPy_INCREF(CPyModule_eth_portfolio___structs);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[214]; /* ('TransactionHash',) */
    cpy_r_r18 = CPyStatics[34]; /* 'evmspec.data' */
    cpy_r_r19 = CPyStatic_sorting___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "<module>", 8, CPyStatic_sorting___globals);
        goto CPyL28;
    }
    CPyModule_evmspec___data = cpy_r_r20;
    CPy_INCREF(CPyModule_evmspec___data);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[215]; /* ('db',) */
    cpy_r_r22 = CPyStatics[36]; /* 'dao_treasury' */
    cpy_r_r23 = CPyStatic_sorting___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "<module>", 10, CPyStatic_sorting___globals);
        goto CPyL28;
    }
    CPyModule_dao_treasury = cpy_r_r24;
    CPy_INCREF(CPyModule_dao_treasury);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[216]; /* ('TreasuryWallet',) */
    cpy_r_r26 = CPyStatics[38]; /* 'dao_treasury._wallet' */
    cpy_r_r27 = CPyStatic_sorting___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "<module>", 11, CPyStatic_sorting___globals);
        goto CPyL28;
    }
    CPyModule_dao_treasury____wallet = cpy_r_r28;
    CPy_INCREF(CPyModule_dao_treasury____wallet);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[217]; /* ('_Matcher', 'FromAddressMatcher', 'HashMatcher',
                                    'ToAddressMatcher') */
    cpy_r_r30 = CPyStatics[43]; /* 'dao_treasury.sorting._matchers' */
    cpy_r_r31 = CPyStatic_sorting___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "<module>", 12, CPyStatic_sorting___globals);
        goto CPyL28;
    }
    CPyModule_dao_treasury___sorting____matchers = cpy_r_r32;
    CPy_INCREF(CPyModule_dao_treasury___sorting____matchers);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[218]; /* ('cost_of_revenue', 'expense', 'ignore', 'other_expense',
                                    'other_income', 'revenue') */
    cpy_r_r34 = CPyStatics[50]; /* 'dao_treasury.sorting.decorator' */
    cpy_r_r35 = CPyStatic_sorting___globals;
    cpy_r_r36 = CPyImport_ImportFromMany(cpy_r_r34, cpy_r_r33, cpy_r_r33, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "<module>", 13, CPyStatic_sorting___globals);
        goto CPyL28;
    }
    CPyModule_dao_treasury___sorting___decorator = cpy_r_r36;
    CPy_INCREF(CPyModule_dao_treasury___sorting___decorator);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r37 = CPyStatics[219]; /* ('SORT_RULES', 'CostOfRevenueSortRule', 'ExpenseSortRule',
                                    'IgnoreSortRule', 'OtherExpenseSortRule',
                                    'OtherIncomeSortRule', 'RevenueSortRule') */
    cpy_r_r38 = CPyStatics[57]; /* 'dao_treasury.sorting.rule' */
    cpy_r_r39 = CPyStatic_sorting___globals;
    cpy_r_r40 = CPyImport_ImportFromMany(cpy_r_r38, cpy_r_r37, cpy_r_r37, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "<module>", 21, CPyStatic_sorting___globals);
        goto CPyL28;
    }
    CPyModule_dao_treasury___sorting___rule = cpy_r_r40;
    CPy_INCREF(CPyModule_dao_treasury___sorting___rule);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r41 = CPyStatics[220]; /* ('TxGroupDbid',) */
    cpy_r_r42 = CPyStatics[59]; /* 'dao_treasury.types' */
    cpy_r_r43 = CPyStatic_sorting___globals;
    cpy_r_r44 = CPyImport_ImportFromMany(cpy_r_r42, cpy_r_r41, cpy_r_r41, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "<module>", 30, CPyStatic_sorting___globals);
        goto CPyL28;
    }
    CPyModule_dao_treasury___types = cpy_r_r44;
    CPy_INCREF(CPyModule_dao_treasury___types);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r45 = CPyStatics[60]; /* 'dao_treasury.sorting' */
    cpy_r_r46 = CPyStatic_sorting___globals;
    cpy_r_r47 = CPyStatics[27]; /* 'getLogger' */
    cpy_r_r48 = CPyDict_GetItem(cpy_r_r46, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "<module>", 33, CPyStatic_sorting___globals);
        goto CPyL28;
    }
    PyObject *cpy_r_r49[1] = {cpy_r_r45};
    cpy_r_r50 = (PyObject **)&cpy_r_r49;
    cpy_r_r51 = _PyObject_Vectorcall(cpy_r_r48, cpy_r_r50, 1, 0);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "<module>", 33, CPyStatic_sorting___globals);
        goto CPyL28;
    }
    CPyStatic_sorting___logger = cpy_r_r51;
    CPy_INCREF(CPyStatic_sorting___logger);
    cpy_r_r52 = CPyStatic_sorting___globals;
    cpy_r_r53 = CPyStatics[61]; /* 'logger' */
    cpy_r_r54 = CPyDict_SetItem(cpy_r_r52, cpy_r_r53, cpy_r_r51);
    CPy_DECREF(cpy_r_r51);
    cpy_r_r55 = cpy_r_r54 >= 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "<module>", 33, CPyStatic_sorting___globals);
        goto CPyL28;
    }
    cpy_r_r56 = CPyStatics[51]; /* 'CostOfRevenueSortRule' */
    cpy_r_r57 = CPyStatics[52]; /* 'ExpenseSortRule' */
    cpy_r_r58 = CPyStatics[53]; /* 'IgnoreSortRule' */
    cpy_r_r59 = CPyStatics[54]; /* 'OtherExpenseSortRule' */
    cpy_r_r60 = CPyStatics[55]; /* 'OtherIncomeSortRule' */
    cpy_r_r61 = CPyStatics[56]; /* 'RevenueSortRule' */
    cpy_r_r62 = CPyStatics[44]; /* 'cost_of_revenue' */
    cpy_r_r63 = CPyStatics[45]; /* 'expense' */
    cpy_r_r64 = CPyStatics[46]; /* 'ignore' */
    cpy_r_r65 = CPyStatics[47]; /* 'other_expense' */
    cpy_r_r66 = CPyStatics[48]; /* 'other_income' */
    cpy_r_r67 = CPyStatics[49]; /* 'revenue' */
    cpy_r_r68 = CPyStatics[41]; /* 'HashMatcher' */
    cpy_r_r69 = CPyStatics[40]; /* 'FromAddressMatcher' */
    cpy_r_r70 = CPyStatics[42]; /* 'ToAddressMatcher' */
    cpy_r_r71 = CPyStatics[21]; /* 'SORT_RULES' */
    cpy_r_r72 = CPyStatics[39]; /* '_Matcher' */
    CPy_INCREF(cpy_r_r56);
    CPy_INCREF(cpy_r_r57);
    CPy_INCREF(cpy_r_r58);
    CPy_INCREF(cpy_r_r59);
    CPy_INCREF(cpy_r_r60);
    CPy_INCREF(cpy_r_r61);
    CPy_INCREF(cpy_r_r62);
    CPy_INCREF(cpy_r_r63);
    CPy_INCREF(cpy_r_r64);
    CPy_INCREF(cpy_r_r65);
    CPy_INCREF(cpy_r_r66);
    CPy_INCREF(cpy_r_r67);
    CPy_INCREF(cpy_r_r68);
    CPy_INCREF(cpy_r_r69);
    CPy_INCREF(cpy_r_r70);
    CPy_INCREF(cpy_r_r71);
    CPy_INCREF(cpy_r_r72);
    cpy_r_r73 = CPyList_Build(17, cpy_r_r56, cpy_r_r57, cpy_r_r58, cpy_r_r59, cpy_r_r60, cpy_r_r61, cpy_r_r62, cpy_r_r63, cpy_r_r64, cpy_r_r65, cpy_r_r66, cpy_r_r67, cpy_r_r68, cpy_r_r69, cpy_r_r70, cpy_r_r71, cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "<module>", 36, CPyStatic_sorting___globals);
        goto CPyL28;
    }
    cpy_r_r74 = CPyStatic_sorting___globals;
    cpy_r_r75 = CPyStatics[62]; /* '__all__' */
    cpy_r_r76 = CPyDict_SetItem(cpy_r_r74, cpy_r_r75, cpy_r_r73);
    CPy_DECREF(cpy_r_r73);
    cpy_r_r77 = cpy_r_r76 >= 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "<module>", 36, CPyStatic_sorting___globals);
        goto CPyL28;
    }
    cpy_r_r78 = CPyStatic_sorting___globals;
    cpy_r_r79 = CPyStatics[35]; /* 'db' */
    cpy_r_r80 = CPyDict_GetItem(cpy_r_r78, cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "<module>", 57, CPyStatic_sorting___globals);
        goto CPyL28;
    }
    cpy_r_r81 = CPyStatics[63]; /* 'TxGroup' */
    cpy_r_r82 = CPyObject_GetAttr(cpy_r_r80, cpy_r_r81);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "<module>", 57, CPyStatic_sorting___globals);
        goto CPyL28;
    }
    CPyStatic_sorting___TxGroup = cpy_r_r82;
    CPy_INCREF(CPyStatic_sorting___TxGroup);
    cpy_r_r83 = CPyStatic_sorting___globals;
    cpy_r_r84 = CPyStatics[63]; /* 'TxGroup' */
    cpy_r_r85 = CPyDict_SetItem(cpy_r_r83, cpy_r_r84, cpy_r_r82);
    CPy_DECREF(cpy_r_r82);
    cpy_r_r86 = cpy_r_r85 >= 0;
    if (unlikely(!cpy_r_r86)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "<module>", 57, CPyStatic_sorting___globals);
        goto CPyL28;
    }
    cpy_r_r87 = CPyStatic_sorting___globals;
    cpy_r_r88 = CPyStatics[35]; /* 'db' */
    cpy_r_r89 = CPyDict_GetItem(cpy_r_r87, cpy_r_r88);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "<module>", 58, CPyStatic_sorting___globals);
        goto CPyL28;
    }
    cpy_r_r90 = CPyStatics[64]; /* 'must_sort_inbound_txgroup_dbid' */
    cpy_r_r91 = CPyObject_GetAttr(cpy_r_r89, cpy_r_r90);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "<module>", 58, CPyStatic_sorting___globals);
        goto CPyL28;
    }
    CPyStatic_sorting___must_sort_inbound_txgroup_dbid = cpy_r_r91;
    CPy_INCREF(CPyStatic_sorting___must_sort_inbound_txgroup_dbid);
    cpy_r_r92 = CPyStatic_sorting___globals;
    cpy_r_r93 = CPyStatics[64]; /* 'must_sort_inbound_txgroup_dbid' */
    cpy_r_r94 = CPyDict_SetItem(cpy_r_r92, cpy_r_r93, cpy_r_r91);
    CPy_DECREF(cpy_r_r91);
    cpy_r_r95 = cpy_r_r94 >= 0;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "<module>", 58, CPyStatic_sorting___globals);
        goto CPyL28;
    }
    cpy_r_r96 = CPyStatic_sorting___globals;
    cpy_r_r97 = CPyStatics[35]; /* 'db' */
    cpy_r_r98 = CPyDict_GetItem(cpy_r_r96, cpy_r_r97);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "<module>", 59, CPyStatic_sorting___globals);
        goto CPyL28;
    }
    cpy_r_r99 = CPyStatics[65]; /* 'must_sort_outbound_txgroup_dbid' */
    cpy_r_r100 = CPyObject_GetAttr(cpy_r_r98, cpy_r_r99);
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "<module>", 59, CPyStatic_sorting___globals);
        goto CPyL28;
    }
    CPyStatic_sorting___must_sort_outbound_txgroup_dbid = cpy_r_r100;
    CPy_INCREF(CPyStatic_sorting___must_sort_outbound_txgroup_dbid);
    cpy_r_r101 = CPyStatic_sorting___globals;
    cpy_r_r102 = CPyStatics[65]; /* 'must_sort_outbound_txgroup_dbid' */
    cpy_r_r103 = CPyDict_SetItem(cpy_r_r101, cpy_r_r102, cpy_r_r100);
    CPy_DECREF(cpy_r_r100);
    cpy_r_r104 = cpy_r_r103 >= 0;
    if (unlikely(!cpy_r_r104)) {
        CPy_AddTraceback("dao_treasury/sorting/__init__.py", "<module>", 59, CPyStatic_sorting___globals);
        goto CPyL28;
    }
    return 1;
CPyL28: ;
    cpy_r_r105 = 2;
    return cpy_r_r105;
}

static int
_matchers____Matcher_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static int CPyDunder___contains___matchers____Matcher(PyObject *self, PyObject *obj_item) {
    PyObject *arg_item;
    if (likely(PyUnicode_Check(obj_item)))
        arg_item = obj_item;
    else {
        CPy_TypeError("str", obj_item); 
        return -1;
    }
    char val = CPyDef__matchers____Matcher_____contains__(self, arg_item);
    if (val == 2) {
        return -1;
    }
    return val;
}
static PySequenceMethods _matchers____Matcher_as_sequence = {
    .sq_contains = CPyDunder___contains___matchers____Matcher,
};
static PyObject *_matchers____Matcher_setup(PyTypeObject *type);
PyObject *CPyDef__matchers____Matcher(PyObject *cpy_r_txgroup, PyObject *cpy_r_validated_values);

static PyObject *
_matchers____Matcher_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType__matchers____Matcher) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = _matchers____Matcher_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy__matchers____Matcher_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
_matchers____Matcher_traverse(dao_treasury___sorting____matchers____MatcherObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_txgroup_id);
    Py_VISIT(self->___value);
    Py_VISIT(self->___values);
    return 0;
}

static int
_matchers____Matcher_clear(dao_treasury___sorting____matchers____MatcherObject *self)
{
    Py_CLEAR(self->_txgroup_id);
    Py_CLEAR(self->___value);
    Py_CLEAR(self->___values);
    return 0;
}

static void
_matchers____Matcher_dealloc(dao_treasury___sorting____matchers____MatcherObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, _matchers____Matcher_dealloc)
    _matchers____Matcher_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem _matchers____Matcher_vtable[4];
static bool
CPyDef__matchers____Matcher_trait_vtable_setup(void)
{
    CPyVTableItem _matchers____Matcher_vtable_scratch[] = {
        (CPyVTableItem)CPyDef__matchers____Matcher___match,
        (CPyVTableItem)CPyDef__matchers____Matcher_____init__,
        (CPyVTableItem)CPyDef__matchers____Matcher_____contains__,
        (CPyVTableItem)CPyDef__matchers____Matcher___values,
    };
    memcpy(_matchers____Matcher_vtable, _matchers____Matcher_vtable_scratch, sizeof(_matchers____Matcher_vtable));
    return 1;
}

static PyObject *
_matchers____Matcher_get_txgroup_id(dao_treasury___sorting____matchers____MatcherObject *self, void *closure);
static int
_matchers____Matcher_set_txgroup_id(dao_treasury___sorting____matchers____MatcherObject *self, PyObject *value, void *closure);
static PyObject *
_matchers____Matcher_get___3_one_value(dao_treasury___sorting____matchers____MatcherObject *self, void *closure);
static int
_matchers____Matcher_set___3_one_value(dao_treasury___sorting____matchers____MatcherObject *self, PyObject *value, void *closure);
static PyObject *
_matchers____Matcher_get___3_value(dao_treasury___sorting____matchers____MatcherObject *self, void *closure);
static int
_matchers____Matcher_set___3_value(dao_treasury___sorting____matchers____MatcherObject *self, PyObject *value, void *closure);
static PyObject *
_matchers____Matcher_get___3_values(dao_treasury___sorting____matchers____MatcherObject *self, void *closure);
static int
_matchers____Matcher_set___3_values(dao_treasury___sorting____matchers____MatcherObject *self, PyObject *value, void *closure);
static PyObject *
_matchers____Matcher_get_values(dao_treasury___sorting____matchers____MatcherObject *self, void *closure);

static PyGetSetDef _matchers____Matcher_getseters[] = {
    {"txgroup_id",
     (getter)_matchers____Matcher_get_txgroup_id, (setter)_matchers____Matcher_set_txgroup_id,
     NULL, NULL},
    {"__one_value",
     (getter)_matchers____Matcher_get___3_one_value, (setter)_matchers____Matcher_set___3_one_value,
     NULL, NULL},
    {"__value",
     (getter)_matchers____Matcher_get___3_value, (setter)_matchers____Matcher_set___3_value,
     NULL, NULL},
    {"__values",
     (getter)_matchers____Matcher_get___3_values, (setter)_matchers____Matcher_set___3_values,
     NULL, NULL},
    {"values",
     (getter)_matchers____Matcher_get_values,
    NULL, NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef _matchers____Matcher_methods[] = {
    {"match",
     (PyCFunction)CPyPy__matchers____Matcher___match,
     METH_FASTCALL | METH_KEYWORDS | METH_CLASS, NULL},
    {"__init__",
     (PyCFunction)CPyPy__matchers____Matcher_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__contains__",
     (PyCFunction)CPyPy__matchers____Matcher_____contains__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType__matchers____Matcher_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "_Matcher",
    .tp_new = _matchers____Matcher_new,
    .tp_dealloc = (destructor)_matchers____Matcher_dealloc,
    .tp_traverse = (traverseproc)_matchers____Matcher_traverse,
    .tp_clear = (inquiry)_matchers____Matcher_clear,
    .tp_getset = _matchers____Matcher_getseters,
    .tp_methods = _matchers____Matcher_methods,
    .tp_init = _matchers____Matcher_init,
    .tp_as_sequence = &_matchers____Matcher_as_sequence,
    .tp_basicsize = sizeof(dao_treasury___sorting____matchers____MatcherObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType__matchers____Matcher_template = &CPyType__matchers____Matcher_template_;

static PyObject *
_matchers____Matcher_setup(PyTypeObject *type)
{
    dao_treasury___sorting____matchers____MatcherObject *self;
    self = (dao_treasury___sorting____matchers____MatcherObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = _matchers____Matcher_vtable;
    self->___one_value = 2;
    return (PyObject *)self;
}

PyObject *CPyDef__matchers____Matcher(PyObject *cpy_r_txgroup, PyObject *cpy_r_validated_values)
{
    PyObject *self = _matchers____Matcher_setup(CPyType__matchers____Matcher);
    if (self == NULL)
        return NULL;
    char res = CPyDef__matchers____Matcher_____init__(self, cpy_r_txgroup, cpy_r_validated_values);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
_matchers____Matcher_get_txgroup_id(dao_treasury___sorting____matchers____MatcherObject *self, void *closure)
{
    if (unlikely(self->_txgroup_id == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'txgroup_id' of '_Matcher' undefined");
        return NULL;
    }
    CPy_INCREF(self->_txgroup_id);
    PyObject *retval = self->_txgroup_id;
    return retval;
}

static int
_matchers____Matcher_set_txgroup_id(dao_treasury___sorting____matchers____MatcherObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'_Matcher' object attribute 'txgroup_id' cannot be deleted");
        return -1;
    }
    if (self->_txgroup_id != NULL) {
        CPy_DECREF(self->_txgroup_id);
    }
    PyObject *tmp = value;
    CPy_INCREF(tmp);
    self->_txgroup_id = tmp;
    return 0;
}

static PyObject *
_matchers____Matcher_get___3_one_value(dao_treasury___sorting____matchers____MatcherObject *self, void *closure)
{
    if (unlikely(self->___one_value == 2)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__one_value' of '_Matcher' undefined");
        return NULL;
    }
    PyObject *retval = self->___one_value ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
_matchers____Matcher_set___3_one_value(dao_treasury___sorting____matchers____MatcherObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'_Matcher' object attribute '__one_value' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->___one_value = tmp;
    return 0;
}

static PyObject *
_matchers____Matcher_get___3_value(dao_treasury___sorting____matchers____MatcherObject *self, void *closure)
{
    if (unlikely(self->___value == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__value' of '_Matcher' undefined");
        return NULL;
    }
    CPy_INCREF(self->___value);
    PyObject *retval = self->___value;
    return retval;
}

static int
_matchers____Matcher_set___3_value(dao_treasury___sorting____matchers____MatcherObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'_Matcher' object attribute '__value' cannot be deleted");
        return -1;
    }
    if (self->___value != NULL) {
        CPy_DECREF(self->___value);
    }
    PyObject *tmp;
    if (likely(PyUnicode_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("str", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->___value = tmp;
    return 0;
}

static PyObject *
_matchers____Matcher_get___3_values(dao_treasury___sorting____matchers____MatcherObject *self, void *closure)
{
    if (unlikely(self->___values == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__values' of '_Matcher' undefined");
        return NULL;
    }
    CPy_INCREF(self->___values);
    PyObject *retval = self->___values;
    return retval;
}

static int
_matchers____Matcher_set___3_values(dao_treasury___sorting____matchers____MatcherObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'_Matcher' object attribute '__values' cannot be deleted");
        return -1;
    }
    if (self->___values != NULL) {
        CPy_DECREF(self->___values);
    }
    PyObject *tmp;
    if (likely(PySet_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("set", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->___values = tmp;
    return 0;
}

static PyObject *
_matchers____Matcher_get_values(dao_treasury___sorting____matchers____MatcherObject *self, void *closure)
{
    return CPyDef__matchers____Matcher___values((PyObject *) self);
}

static PyObject *_matchers____HexStringMatcher_setup(PyTypeObject *type);
PyObject *CPyDef__matchers____HexStringMatcher(PyObject *cpy_r_txgroup, PyObject *cpy_r_validated_values);

static PyObject *
_matchers____HexStringMatcher_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType__matchers____HexStringMatcher) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = _matchers____HexStringMatcher_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy__matchers____Matcher_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
_matchers____HexStringMatcher_traverse(dao_treasury___sorting____matchers____HexStringMatcherObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_txgroup_id);
    Py_VISIT(self->___value);
    Py_VISIT(self->___values);
    return 0;
}

static int
_matchers____HexStringMatcher_clear(dao_treasury___sorting____matchers____HexStringMatcherObject *self)
{
    Py_CLEAR(self->_txgroup_id);
    Py_CLEAR(self->___value);
    Py_CLEAR(self->___values);
    return 0;
}

static void
_matchers____HexStringMatcher_dealloc(dao_treasury___sorting____matchers____HexStringMatcherObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, _matchers____HexStringMatcher_dealloc)
    _matchers____HexStringMatcher_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem _matchers____HexStringMatcher_vtable[5];
static bool
CPyDef__matchers____HexStringMatcher_trait_vtable_setup(void)
{
    CPyVTableItem _matchers____HexStringMatcher_vtable_scratch[] = {
        (CPyVTableItem)CPyDef__matchers____Matcher___match,
        (CPyVTableItem)CPyDef__matchers____Matcher_____init__,
        (CPyVTableItem)CPyDef__matchers____Matcher_____contains__,
        (CPyVTableItem)CPyDef__matchers____Matcher___values,
        (CPyVTableItem)CPyDef__matchers____HexStringMatcher____validate_hexstr,
    };
    memcpy(_matchers____HexStringMatcher_vtable, _matchers____HexStringMatcher_vtable_scratch, sizeof(_matchers____HexStringMatcher_vtable));
    return 1;
}


static PyGetSetDef _matchers____HexStringMatcher_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef _matchers____HexStringMatcher_methods[] = {
    {"_validate_hexstr",
     (PyCFunction)CPyPy__matchers____HexStringMatcher____validate_hexstr,
     METH_FASTCALL | METH_KEYWORDS | METH_CLASS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType__matchers____HexStringMatcher_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "_HexStringMatcher",
    .tp_new = _matchers____HexStringMatcher_new,
    .tp_dealloc = (destructor)_matchers____HexStringMatcher_dealloc,
    .tp_traverse = (traverseproc)_matchers____HexStringMatcher_traverse,
    .tp_clear = (inquiry)_matchers____HexStringMatcher_clear,
    .tp_getset = _matchers____HexStringMatcher_getseters,
    .tp_methods = _matchers____HexStringMatcher_methods,
    .tp_basicsize = sizeof(dao_treasury___sorting____matchers____HexStringMatcherObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType__matchers____HexStringMatcher_template = &CPyType__matchers____HexStringMatcher_template_;

static PyObject *
_matchers____HexStringMatcher_setup(PyTypeObject *type)
{
    dao_treasury___sorting____matchers____HexStringMatcherObject *self;
    self = (dao_treasury___sorting____matchers____HexStringMatcherObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = _matchers____HexStringMatcher_vtable;
    self->___one_value = 2;
    return (PyObject *)self;
}

PyObject *CPyDef__matchers____HexStringMatcher(PyObject *cpy_r_txgroup, PyObject *cpy_r_validated_values)
{
    PyObject *self = _matchers____HexStringMatcher_setup(CPyType__matchers____HexStringMatcher);
    if (self == NULL)
        return NULL;
    char res = CPyDef__matchers____Matcher_____init__(self, cpy_r_txgroup, cpy_r_validated_values);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}


static int
_matchers____AddressMatcher_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *_matchers____AddressMatcher_setup(PyTypeObject *type);
PyObject *CPyDef__matchers____AddressMatcher(PyObject *cpy_r_txgroup, PyObject *cpy_r_addresses);

static PyObject *
_matchers____AddressMatcher_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType__matchers____AddressMatcher) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = _matchers____AddressMatcher_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy__matchers____AddressMatcher_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
_matchers____AddressMatcher_traverse(dao_treasury___sorting____matchers____AddressMatcherObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_txgroup_id);
    Py_VISIT(self->___value);
    Py_VISIT(self->___values);
    return 0;
}

static int
_matchers____AddressMatcher_clear(dao_treasury___sorting____matchers____AddressMatcherObject *self)
{
    Py_CLEAR(self->_txgroup_id);
    Py_CLEAR(self->___value);
    Py_CLEAR(self->___values);
    return 0;
}

static void
_matchers____AddressMatcher_dealloc(dao_treasury___sorting____matchers____AddressMatcherObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, _matchers____AddressMatcher_dealloc)
    _matchers____AddressMatcher_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem _matchers____AddressMatcher_vtable[7];
static bool
CPyDef__matchers____AddressMatcher_trait_vtable_setup(void)
{
    CPyVTableItem _matchers____AddressMatcher_vtable_scratch[] = {
        (CPyVTableItem)CPyDef__matchers____Matcher___match,
        (CPyVTableItem)CPyDef__matchers____AddressMatcher_____init__,
        (CPyVTableItem)CPyDef__matchers____Matcher_____contains__,
        (CPyVTableItem)CPyDef__matchers____Matcher___values,
        (CPyVTableItem)CPyDef__matchers____HexStringMatcher____validate_hexstr,
        (CPyVTableItem)CPyDef__matchers____AddressMatcher_____init__,
        (CPyVTableItem)CPyDef__matchers____AddressMatcher_____repr__,
    };
    memcpy(_matchers____AddressMatcher_vtable, _matchers____AddressMatcher_vtable_scratch, sizeof(_matchers____AddressMatcher_vtable));
    return 1;
}


static PyGetSetDef _matchers____AddressMatcher_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef _matchers____AddressMatcher_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy__matchers____AddressMatcher_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__repr__",
     (PyCFunction)CPyPy__matchers____AddressMatcher_____repr__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType__matchers____AddressMatcher_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "_AddressMatcher",
    .tp_new = _matchers____AddressMatcher_new,
    .tp_dealloc = (destructor)_matchers____AddressMatcher_dealloc,
    .tp_traverse = (traverseproc)_matchers____AddressMatcher_traverse,
    .tp_clear = (inquiry)_matchers____AddressMatcher_clear,
    .tp_getset = _matchers____AddressMatcher_getseters,
    .tp_methods = _matchers____AddressMatcher_methods,
    .tp_init = _matchers____AddressMatcher_init,
    .tp_repr = CPyDef__matchers____AddressMatcher_____repr__,
    .tp_basicsize = sizeof(dao_treasury___sorting____matchers____AddressMatcherObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType__matchers____AddressMatcher_template = &CPyType__matchers____AddressMatcher_template_;

static PyObject *
_matchers____AddressMatcher_setup(PyTypeObject *type)
{
    dao_treasury___sorting____matchers____AddressMatcherObject *self;
    self = (dao_treasury___sorting____matchers____AddressMatcherObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = _matchers____AddressMatcher_vtable;
    self->___one_value = 2;
    return (PyObject *)self;
}

PyObject *CPyDef__matchers____AddressMatcher(PyObject *cpy_r_txgroup, PyObject *cpy_r_addresses)
{
    PyObject *self = _matchers____AddressMatcher_setup(CPyType__matchers____AddressMatcher);
    if (self == NULL)
        return NULL;
    char res = CPyDef__matchers____AddressMatcher_____init__(self, cpy_r_txgroup, cpy_r_addresses);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}


static PyObject *_matchers___FromAddressMatcher_setup(PyTypeObject *type);
PyObject *CPyDef__matchers___FromAddressMatcher(PyObject *cpy_r_txgroup, PyObject *cpy_r_addresses);

static PyObject *
_matchers___FromAddressMatcher_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType__matchers___FromAddressMatcher) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = _matchers___FromAddressMatcher_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy__matchers____AddressMatcher_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
_matchers___FromAddressMatcher_traverse(dao_treasury___sorting____matchers___FromAddressMatcherObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_txgroup_id);
    Py_VISIT(self->___value);
    Py_VISIT(self->___values);
    return 0;
}

static int
_matchers___FromAddressMatcher_clear(dao_treasury___sorting____matchers___FromAddressMatcherObject *self)
{
    Py_CLEAR(self->_txgroup_id);
    Py_CLEAR(self->___value);
    Py_CLEAR(self->___values);
    return 0;
}

static void
_matchers___FromAddressMatcher_dealloc(dao_treasury___sorting____matchers___FromAddressMatcherObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, _matchers___FromAddressMatcher_dealloc)
    _matchers___FromAddressMatcher_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem _matchers___FromAddressMatcher_vtable[7];
static bool
CPyDef__matchers___FromAddressMatcher_trait_vtable_setup(void)
{
    CPyVTableItem _matchers___FromAddressMatcher_vtable_scratch[] = {
        (CPyVTableItem)CPyDef__matchers____Matcher___match,
        (CPyVTableItem)CPyDef__matchers____AddressMatcher_____init__,
        (CPyVTableItem)CPyDef__matchers____Matcher_____contains__,
        (CPyVTableItem)CPyDef__matchers____Matcher___values,
        (CPyVTableItem)CPyDef__matchers____HexStringMatcher____validate_hexstr,
        (CPyVTableItem)CPyDef__matchers____AddressMatcher_____init__,
        (CPyVTableItem)CPyDef__matchers____AddressMatcher_____repr__,
    };
    memcpy(_matchers___FromAddressMatcher_vtable, _matchers___FromAddressMatcher_vtable_scratch, sizeof(_matchers___FromAddressMatcher_vtable));
    return 1;
}


static PyGetSetDef _matchers___FromAddressMatcher_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef _matchers___FromAddressMatcher_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType__matchers___FromAddressMatcher_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "FromAddressMatcher",
    .tp_new = _matchers___FromAddressMatcher_new,
    .tp_dealloc = (destructor)_matchers___FromAddressMatcher_dealloc,
    .tp_traverse = (traverseproc)_matchers___FromAddressMatcher_traverse,
    .tp_clear = (inquiry)_matchers___FromAddressMatcher_clear,
    .tp_getset = _matchers___FromAddressMatcher_getseters,
    .tp_methods = _matchers___FromAddressMatcher_methods,
    .tp_basicsize = sizeof(dao_treasury___sorting____matchers___FromAddressMatcherObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType__matchers___FromAddressMatcher_template = &CPyType__matchers___FromAddressMatcher_template_;

static PyObject *
_matchers___FromAddressMatcher_setup(PyTypeObject *type)
{
    dao_treasury___sorting____matchers___FromAddressMatcherObject *self;
    self = (dao_treasury___sorting____matchers___FromAddressMatcherObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = _matchers___FromAddressMatcher_vtable;
    self->___one_value = 2;
    return (PyObject *)self;
}

PyObject *CPyDef__matchers___FromAddressMatcher(PyObject *cpy_r_txgroup, PyObject *cpy_r_addresses)
{
    PyObject *self = _matchers___FromAddressMatcher_setup(CPyType__matchers___FromAddressMatcher);
    if (self == NULL)
        return NULL;
    char res = CPyDef__matchers____AddressMatcher_____init__(self, cpy_r_txgroup, cpy_r_addresses);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}


static PyObject *_matchers___ToAddressMatcher_setup(PyTypeObject *type);
PyObject *CPyDef__matchers___ToAddressMatcher(PyObject *cpy_r_txgroup, PyObject *cpy_r_addresses);

static PyObject *
_matchers___ToAddressMatcher_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType__matchers___ToAddressMatcher) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = _matchers___ToAddressMatcher_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy__matchers____AddressMatcher_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
_matchers___ToAddressMatcher_traverse(dao_treasury___sorting____matchers___ToAddressMatcherObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_txgroup_id);
    Py_VISIT(self->___value);
    Py_VISIT(self->___values);
    return 0;
}

static int
_matchers___ToAddressMatcher_clear(dao_treasury___sorting____matchers___ToAddressMatcherObject *self)
{
    Py_CLEAR(self->_txgroup_id);
    Py_CLEAR(self->___value);
    Py_CLEAR(self->___values);
    return 0;
}

static void
_matchers___ToAddressMatcher_dealloc(dao_treasury___sorting____matchers___ToAddressMatcherObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, _matchers___ToAddressMatcher_dealloc)
    _matchers___ToAddressMatcher_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem _matchers___ToAddressMatcher_vtable[7];
static bool
CPyDef__matchers___ToAddressMatcher_trait_vtable_setup(void)
{
    CPyVTableItem _matchers___ToAddressMatcher_vtable_scratch[] = {
        (CPyVTableItem)CPyDef__matchers____Matcher___match,
        (CPyVTableItem)CPyDef__matchers____AddressMatcher_____init__,
        (CPyVTableItem)CPyDef__matchers____Matcher_____contains__,
        (CPyVTableItem)CPyDef__matchers____Matcher___values,
        (CPyVTableItem)CPyDef__matchers____HexStringMatcher____validate_hexstr,
        (CPyVTableItem)CPyDef__matchers____AddressMatcher_____init__,
        (CPyVTableItem)CPyDef__matchers____AddressMatcher_____repr__,
    };
    memcpy(_matchers___ToAddressMatcher_vtable, _matchers___ToAddressMatcher_vtable_scratch, sizeof(_matchers___ToAddressMatcher_vtable));
    return 1;
}


static PyGetSetDef _matchers___ToAddressMatcher_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef _matchers___ToAddressMatcher_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType__matchers___ToAddressMatcher_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ToAddressMatcher",
    .tp_new = _matchers___ToAddressMatcher_new,
    .tp_dealloc = (destructor)_matchers___ToAddressMatcher_dealloc,
    .tp_traverse = (traverseproc)_matchers___ToAddressMatcher_traverse,
    .tp_clear = (inquiry)_matchers___ToAddressMatcher_clear,
    .tp_getset = _matchers___ToAddressMatcher_getseters,
    .tp_methods = _matchers___ToAddressMatcher_methods,
    .tp_basicsize = sizeof(dao_treasury___sorting____matchers___ToAddressMatcherObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType__matchers___ToAddressMatcher_template = &CPyType__matchers___ToAddressMatcher_template_;

static PyObject *
_matchers___ToAddressMatcher_setup(PyTypeObject *type)
{
    dao_treasury___sorting____matchers___ToAddressMatcherObject *self;
    self = (dao_treasury___sorting____matchers___ToAddressMatcherObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = _matchers___ToAddressMatcher_vtable;
    self->___one_value = 2;
    return (PyObject *)self;
}

PyObject *CPyDef__matchers___ToAddressMatcher(PyObject *cpy_r_txgroup, PyObject *cpy_r_addresses)
{
    PyObject *self = _matchers___ToAddressMatcher_setup(CPyType__matchers___ToAddressMatcher);
    if (self == NULL)
        return NULL;
    char res = CPyDef__matchers____AddressMatcher_____init__(self, cpy_r_txgroup, cpy_r_addresses);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}


static int
_matchers___HashMatcher_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *_matchers___HashMatcher_setup(PyTypeObject *type);
PyObject *CPyDef__matchers___HashMatcher(PyObject *cpy_r_txgroup, PyObject *cpy_r_hashes);

static PyObject *
_matchers___HashMatcher_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType__matchers___HashMatcher) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = _matchers___HashMatcher_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy__matchers___HashMatcher_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
_matchers___HashMatcher_traverse(dao_treasury___sorting____matchers___HashMatcherObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_txgroup_id);
    Py_VISIT(self->___value);
    Py_VISIT(self->___values);
    return 0;
}

static int
_matchers___HashMatcher_clear(dao_treasury___sorting____matchers___HashMatcherObject *self)
{
    Py_CLEAR(self->_txgroup_id);
    Py_CLEAR(self->___value);
    Py_CLEAR(self->___values);
    return 0;
}

static void
_matchers___HashMatcher_dealloc(dao_treasury___sorting____matchers___HashMatcherObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, _matchers___HashMatcher_dealloc)
    _matchers___HashMatcher_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem _matchers___HashMatcher_vtable[7];
static bool
CPyDef__matchers___HashMatcher_trait_vtable_setup(void)
{
    CPyVTableItem _matchers___HashMatcher_vtable_scratch[] = {
        (CPyVTableItem)CPyDef__matchers____Matcher___match,
        (CPyVTableItem)CPyDef__matchers___HashMatcher_____init__,
        (CPyVTableItem)CPyDef__matchers____Matcher_____contains__,
        (CPyVTableItem)CPyDef__matchers____Matcher___values,
        (CPyVTableItem)CPyDef__matchers____HexStringMatcher____validate_hexstr,
        (CPyVTableItem)CPyDef__matchers___HashMatcher_____init__,
        (CPyVTableItem)CPyDef__matchers___HashMatcher_____repr__,
    };
    memcpy(_matchers___HashMatcher_vtable, _matchers___HashMatcher_vtable_scratch, sizeof(_matchers___HashMatcher_vtable));
    return 1;
}


static PyGetSetDef _matchers___HashMatcher_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef _matchers___HashMatcher_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy__matchers___HashMatcher_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__repr__",
     (PyCFunction)CPyPy__matchers___HashMatcher_____repr__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType__matchers___HashMatcher_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "HashMatcher",
    .tp_new = _matchers___HashMatcher_new,
    .tp_dealloc = (destructor)_matchers___HashMatcher_dealloc,
    .tp_traverse = (traverseproc)_matchers___HashMatcher_traverse,
    .tp_clear = (inquiry)_matchers___HashMatcher_clear,
    .tp_getset = _matchers___HashMatcher_getseters,
    .tp_methods = _matchers___HashMatcher_methods,
    .tp_init = _matchers___HashMatcher_init,
    .tp_repr = CPyDef__matchers___HashMatcher_____repr__,
    .tp_basicsize = sizeof(dao_treasury___sorting____matchers___HashMatcherObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType__matchers___HashMatcher_template = &CPyType__matchers___HashMatcher_template_;

static PyObject *
_matchers___HashMatcher_setup(PyTypeObject *type)
{
    dao_treasury___sorting____matchers___HashMatcherObject *self;
    self = (dao_treasury___sorting____matchers___HashMatcherObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = _matchers___HashMatcher_vtable;
    self->___one_value = 2;
    return (PyObject *)self;
}

PyObject *CPyDef__matchers___HashMatcher(PyObject *cpy_r_txgroup, PyObject *cpy_r_hashes)
{
    PyObject *self = _matchers___HashMatcher_setup(CPyType__matchers___HashMatcher);
    if (self == NULL)
        return NULL;
    char res = CPyDef__matchers___HashMatcher_____init__(self, cpy_r_txgroup, cpy_r_hashes);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyMethodDef _matchersmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef _matchersmodule = {
    PyModuleDef_HEAD_INIT,
    "dao_treasury.sorting._matchers",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    _matchersmodule_methods
};

PyObject *CPyInit_dao_treasury___sorting____matchers(void)
{
    PyObject* modname = NULL;
    if (CPyModule_dao_treasury___sorting____matchers_internal) {
        Py_INCREF(CPyModule_dao_treasury___sorting____matchers_internal);
        return CPyModule_dao_treasury___sorting____matchers_internal;
    }
    CPyModule_dao_treasury___sorting____matchers_internal = PyModule_Create(&_matchersmodule);
    if (unlikely(CPyModule_dao_treasury___sorting____matchers_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_dao_treasury___sorting____matchers_internal, "__name__");
    CPyStatic__matchers___globals = PyModule_GetDict(CPyModule_dao_treasury___sorting____matchers_internal);
    if (unlikely(CPyStatic__matchers___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef__matchers_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_dao_treasury___sorting____matchers_internal;
    fail:
    Py_CLEAR(CPyModule_dao_treasury___sorting____matchers_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic__matchers___logger);
    CPyStatic__matchers___logger = NULL;
    Py_CLEAR(CPyType__matchers____Matcher);
    Py_CLEAR(CPyType__matchers____HexStringMatcher);
    Py_CLEAR(CPyType__matchers____AddressMatcher);
    Py_CLEAR(CPyType__matchers___FromAddressMatcher);
    Py_CLEAR(CPyType__matchers___ToAddressMatcher);
    Py_CLEAR(CPyType__matchers___HashMatcher);
    return NULL;
}

PyObject *CPyDef__matchers____Matcher___match(PyObject *cpy_r_cls, PyObject *cpy_r_string) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    tuple_T3OOO cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyPtr cpy_r_r13;
    int64_t cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    int64_t cpy_r_r17;
    CPyPtr cpy_r_r18;
    CPyPtr cpy_r_r19;
    int64_t cpy_r_r20;
    CPyPtr cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    CPyTagged cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    cpy_r_r0 = CPyStatics[66]; /* '__cache__' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_cls, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "match", 24, CPyStatic__matchers___globals);
        goto CPyL5;
    }
    if (likely(PyDict_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/_matchers.py", "match", 24, CPyStatic__matchers___globals, "dict", cpy_r_r1);
        goto CPyL5;
    }
    cpy_r_r3 = CPyDict_GetItem(cpy_r_r2, cpy_r_string);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "match", 24, CPyStatic__matchers___globals);
        goto CPyL5;
    }
    return cpy_r_r3;
CPyL5: ;
    cpy_r_r4 = CPy_CatchError();
    cpy_r_r5 = CPyModule_builtins;
    cpy_r_r6 = CPyStatics[67]; /* 'KeyError' */
    cpy_r_r7 = CPyObject_GetAttr(cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "match", 25, CPyStatic__matchers___globals);
        goto CPyL23;
    }
    cpy_r_r8 = CPy_ExceptionMatches(cpy_r_r7);
    CPy_DecRef(cpy_r_r7);
    if (!cpy_r_r8) goto CPyL21;
    cpy_r_r9 = CPyStatics[68]; /* '__instances__' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_cls, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "match", 26, CPyStatic__matchers___globals);
        goto CPyL23;
    }
    if (likely(PyList_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/_matchers.py", "match", 26, CPyStatic__matchers___globals, "list", cpy_r_r10);
        goto CPyL23;
    }
    cpy_r_r12 = 0;
CPyL10: ;
    cpy_r_r13 = (CPyPtr)&((PyVarObject *)cpy_r_r11)->ob_size;
    cpy_r_r14 = *(int64_t *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 << 1;
    cpy_r_r16 = (Py_ssize_t)cpy_r_r12 < (Py_ssize_t)cpy_r_r15;
    if (!cpy_r_r16) goto CPyL26;
    cpy_r_r17 = (Py_ssize_t)cpy_r_r12 >> 1;
    cpy_r_r18 = (CPyPtr)&((PyListObject *)cpy_r_r11)->ob_item;
    cpy_r_r19 = *(CPyPtr *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r17 * 8;
    cpy_r_r21 = cpy_r_r19 + cpy_r_r20;
    cpy_r_r22 = *(PyObject * *)cpy_r_r21;
    CPy_INCREF(cpy_r_r22);
    if (likely(PyObject_TypeCheck(cpy_r_r22, CPyType__matchers____Matcher)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/_matchers.py", "match", 26, CPyStatic__matchers___globals, "dao_treasury.sorting._matchers._Matcher", cpy_r_r22);
        goto CPyL27;
    }
    cpy_r_r24 = CPyDef__matchers____Matcher_____contains__(cpy_r_r23, cpy_r_string);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "match", 27, CPyStatic__matchers___globals);
        goto CPyL28;
    }
    if (cpy_r_r24) {
        goto CPyL29;
    } else
        goto CPyL30;
CPyL14: ;
    cpy_r_r25 = ((dao_treasury___sorting____matchers____MatcherObject *)cpy_r_r23)->_txgroup_id;
    if (unlikely(cpy_r_r25 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'txgroup_id' of '_Matcher' undefined");
    } else {
        CPy_INCREF(cpy_r_r25);
    }
    CPy_DecRef(cpy_r_r23);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "match", 28, CPyStatic__matchers___globals);
        goto CPyL23;
    }
CPyL15: ;
    cpy_r_r26 = CPyStatics[66]; /* '__cache__' */
    cpy_r_r27 = CPyObject_GetAttr(cpy_r_cls, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "match", 29, CPyStatic__matchers___globals);
        goto CPyL31;
    }
    if (likely(PyDict_Check(cpy_r_r27)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/_matchers.py", "match", 29, CPyStatic__matchers___globals, "dict", cpy_r_r27);
        goto CPyL31;
    }
    cpy_r_r29 = CPyDict_SetItem(cpy_r_r28, cpy_r_string, cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "match", 29, CPyStatic__matchers___globals);
        goto CPyL31;
    }
    CPy_RestoreExcInfo(cpy_r_r4);
    CPy_DecRef(cpy_r_r4.f0);
    CPy_DecRef(cpy_r_r4.f1);
    CPy_DecRef(cpy_r_r4.f2);
    return cpy_r_r25;
CPyL19: ;
    cpy_r_r31 = cpy_r_r12 + 2;
    cpy_r_r12 = cpy_r_r31;
    goto CPyL10;
CPyL20: ;
    cpy_r_r32 = Py_None;
    CPy_RestoreExcInfo(cpy_r_r4);
    CPy_DecRef(cpy_r_r4.f0);
    CPy_DecRef(cpy_r_r4.f1);
    CPy_DecRef(cpy_r_r4.f2);
    CPy_INCREF(cpy_r_r32);
    return cpy_r_r32;
CPyL21: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL23;
    } else
        goto CPyL32;
CPyL22: ;
    CPy_Unreachable();
CPyL23: ;
    CPy_RestoreExcInfo(cpy_r_r4);
    CPy_DecRef(cpy_r_r4.f0);
    CPy_DecRef(cpy_r_r4.f1);
    CPy_DecRef(cpy_r_r4.f2);
    cpy_r_r33 = CPy_KeepPropagating();
    if (!cpy_r_r33) goto CPyL25;
    CPy_Unreachable();
CPyL25: ;
    cpy_r_r34 = NULL;
    return cpy_r_r34;
CPyL26: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL20;
CPyL27: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL23;
CPyL28: ;
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r23);
    goto CPyL23;
CPyL29: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL14;
CPyL30: ;
    CPy_DecRef(cpy_r_r23);
    goto CPyL19;
CPyL31: ;
    CPy_DecRef(cpy_r_r25);
    goto CPyL23;
CPyL32: ;
    CPy_DecRef(cpy_r_r4.f0);
    CPy_DecRef(cpy_r_r4.f1);
    CPy_DecRef(cpy_r_r4.f2);
    goto CPyL22;
}

PyObject *CPyPy__matchers____Matcher___match(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_cls = self;
    static const char * const kwlist[] = {"string", 0};
    static CPyArg_Parser parser = {"O:match", kwlist, 0};
    PyObject *obj_string;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_string)) {
        return NULL;
    }
    PyObject *arg_cls = obj_cls;
    PyObject *arg_string;
    if (likely(PyUnicode_Check(obj_string)))
        arg_string = obj_string;
    else {
        CPy_TypeError("str", obj_string); 
        goto fail;
    }
    PyObject *retval = CPyDef__matchers____Matcher___match(arg_cls, arg_string);
    return retval;
fail: ;
    CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "match", 21, CPyStatic__matchers___globals);
    return NULL;
}

char CPyDef__matchers____Matcher_____init__(PyObject *cpy_r_self, PyObject *cpy_r_txgroup, PyObject *cpy_r_validated_values) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyPtr cpy_r_r14;
    int64_t cpy_r_r15;
    CPyTagged cpy_r_r16;
    char cpy_r_r17;
    int64_t cpy_r_r18;
    CPyPtr cpy_r_r19;
    CPyPtr cpy_r_r20;
    int64_t cpy_r_r21;
    CPyPtr cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject **cpy_r_r42;
    PyObject *cpy_r_r43;
    CPyTagged cpy_r_r44;
    char cpy_r_r45;
    CPyPtr cpy_r_r46;
    int64_t cpy_r_r47;
    CPyTagged cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    cpy_r_r0 = (PyObject *)&PyLong_Type;
    cpy_r_r1 = PyObject_IsInstance(cpy_r_txgroup, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 34, CPyStatic__matchers___globals);
        goto CPyL37;
    }
    cpy_r_r3 = cpy_r_r1;
    if (cpy_r_r3) goto CPyL6;
    cpy_r_r4 = CPyModule_builtins;
    cpy_r_r5 = CPyStatics[69]; /* 'TypeError' */
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 35, CPyStatic__matchers___globals);
        goto CPyL37;
    }
    PyObject *cpy_r_r7[1] = {cpy_r_txgroup};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = _PyObject_Vectorcall(cpy_r_r6, cpy_r_r8, 1, 0);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 35, CPyStatic__matchers___globals);
        goto CPyL37;
    }
    CPy_Raise(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(!0)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 35, CPyStatic__matchers___globals);
        goto CPyL37;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r10 = CPyStatics[68]; /* '__instances__' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_self, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 37, CPyStatic__matchers___globals);
        goto CPyL37;
    }
    if (likely(PyList_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/_matchers.py", "__init__", 37, CPyStatic__matchers___globals, "list", cpy_r_r11);
        goto CPyL37;
    }
    cpy_r_r13 = 0;
CPyL9: ;
    cpy_r_r14 = (CPyPtr)&((PyVarObject *)cpy_r_r12)->ob_size;
    cpy_r_r15 = *(int64_t *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 << 1;
    cpy_r_r17 = (Py_ssize_t)cpy_r_r13 < (Py_ssize_t)cpy_r_r16;
    if (!cpy_r_r17) goto CPyL38;
    cpy_r_r18 = (Py_ssize_t)cpy_r_r13 >> 1;
    cpy_r_r19 = (CPyPtr)&((PyListObject *)cpy_r_r12)->ob_item;
    cpy_r_r20 = *(CPyPtr *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r18 * 8;
    cpy_r_r22 = cpy_r_r20 + cpy_r_r21;
    cpy_r_r23 = *(PyObject * *)cpy_r_r22;
    CPy_INCREF(cpy_r_r23);
    if (likely(PyObject_TypeCheck(cpy_r_r23, CPyType__matchers____Matcher)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/_matchers.py", "__init__", 37, CPyStatic__matchers___globals, "dao_treasury.sorting._matchers._Matcher", cpy_r_r23);
        goto CPyL39;
    }
    cpy_r_r25 = ((dao_treasury___sorting____matchers____MatcherObject *)cpy_r_r24)->_txgroup_id;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("dao_treasury/sorting/_matchers.py", "__init__", "_Matcher", "txgroup_id", 38, CPyStatic__matchers___globals);
        goto CPyL40;
    }
    CPy_INCREF(cpy_r_r25);
CPyL12: ;
    cpy_r_r26 = PyObject_RichCompare(cpy_r_r25, cpy_r_txgroup, 2);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 38, CPyStatic__matchers___globals);
        goto CPyL40;
    }
    if (unlikely(!PyBool_Check(cpy_r_r26))) {
        CPy_TypeError("bool", cpy_r_r26); cpy_r_r27 = 2;
    } else
        cpy_r_r27 = cpy_r_r26 == Py_True;
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 38, CPyStatic__matchers___globals);
        goto CPyL40;
    }
    if (cpy_r_r27) {
        goto CPyL41;
    } else
        goto CPyL42;
CPyL15: ;
    cpy_r_r28 = CPyStatics[70]; /* 'TxGroup[' */
    cpy_r_r29 = PyObject_Str(cpy_r_txgroup);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 39, CPyStatic__matchers___globals);
        goto CPyL43;
    }
    cpy_r_r30 = CPyStatics[71]; /* '] already has a ' */
    cpy_r_r31 = PyObject_Type(cpy_r_self);
    cpy_r_r32 = CPyStatics[72]; /* '__name__' */
    cpy_r_r33 = CPyObject_GetAttr(cpy_r_r31, cpy_r_r32);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 39, CPyStatic__matchers___globals);
        goto CPyL44;
    }
    if (likely(PyUnicode_Check(cpy_r_r33)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/_matchers.py", "__init__", 39, CPyStatic__matchers___globals, "str", cpy_r_r33);
        goto CPyL44;
    }
    cpy_r_r35 = CPyStatics[73]; /* ': ' */
    cpy_r_r36 = PyObject_Str(cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 39, CPyStatic__matchers___globals);
        goto CPyL45;
    }
    cpy_r_r37 = CPyStr_Build(6, cpy_r_r28, cpy_r_r29, cpy_r_r30, cpy_r_r34, cpy_r_r35, cpy_r_r36);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 39, CPyStatic__matchers___globals);
        goto CPyL37;
    }
    cpy_r_r38 = CPyModule_builtins;
    cpy_r_r39 = CPyStatics[74]; /* 'ValueError' */
    cpy_r_r40 = CPyObject_GetAttr(cpy_r_r38, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 39, CPyStatic__matchers___globals);
        goto CPyL46;
    }
    PyObject *cpy_r_r41[1] = {cpy_r_r37};
    cpy_r_r42 = (PyObject **)&cpy_r_r41;
    cpy_r_r43 = _PyObject_Vectorcall(cpy_r_r40, cpy_r_r42, 1, 0);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 39, CPyStatic__matchers___globals);
        goto CPyL46;
    }
    CPy_DECREF(cpy_r_r37);
    CPy_Raise(cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(!0)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 39, CPyStatic__matchers___globals);
        goto CPyL37;
    }
    CPy_Unreachable();
CPyL24: ;
    cpy_r_r44 = cpy_r_r13 + 2;
    cpy_r_r13 = cpy_r_r44;
    goto CPyL9;
CPyL25: ;
    CPy_INCREF(cpy_r_txgroup);
    if (((dao_treasury___sorting____matchers____MatcherObject *)cpy_r_self)->_txgroup_id != NULL) {
        CPy_DECREF(((dao_treasury___sorting____matchers____MatcherObject *)cpy_r_self)->_txgroup_id);
    }
    ((dao_treasury___sorting____matchers____MatcherObject *)cpy_r_self)->_txgroup_id = cpy_r_txgroup;
    cpy_r_r45 = 1;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 40, CPyStatic__matchers___globals);
        goto CPyL37;
    }
    cpy_r_r46 = (CPyPtr)&((PySetObject *)cpy_r_validated_values)->used;
    cpy_r_r47 = *(int64_t *)cpy_r_r46;
    cpy_r_r48 = cpy_r_r47 << 1;
    cpy_r_r49 = cpy_r_r48 == 2;
    ((dao_treasury___sorting____matchers____MatcherObject *)cpy_r_self)->___one_value = cpy_r_r49;
    cpy_r_r50 = 1;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 42, CPyStatic__matchers___globals);
        goto CPyL37;
    }
    cpy_r_r51 = ((dao_treasury___sorting____matchers____MatcherObject *)cpy_r_self)->___one_value;
    if (unlikely(cpy_r_r51 == 2)) {
        CPy_AttributeError("dao_treasury/sorting/_matchers.py", "__init__", "_Matcher", "__one_value", 43, CPyStatic__matchers___globals);
        goto CPyL37;
    }
CPyL28: ;
    if (!cpy_r_r51) goto CPyL33;
CPyL29: ;
    cpy_r_r52 = PySequence_List(cpy_r_validated_values);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 43, CPyStatic__matchers___globals);
        goto CPyL37;
    }
    cpy_r_r53 = CPyList_GetItemShort(cpy_r_r52, 0);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 43, CPyStatic__matchers___globals);
        goto CPyL37;
    }
    if (likely(PyUnicode_Check(cpy_r_r53)))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/_matchers.py", "__init__", 43, CPyStatic__matchers___globals, "str", cpy_r_r53);
        goto CPyL37;
    }
    cpy_r_r55 = cpy_r_r54;
    goto CPyL34;
CPyL33: ;
    cpy_r_r56 = CPyStatics[75]; /* '' */
    CPy_INCREF(cpy_r_r56);
    cpy_r_r55 = cpy_r_r56;
CPyL34: ;
    if (((dao_treasury___sorting____matchers____MatcherObject *)cpy_r_self)->___value != NULL) {
        CPy_DECREF(((dao_treasury___sorting____matchers____MatcherObject *)cpy_r_self)->___value);
    }
    ((dao_treasury___sorting____matchers____MatcherObject *)cpy_r_self)->___value = cpy_r_r55;
    cpy_r_r57 = 1;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 43, CPyStatic__matchers___globals);
        goto CPyL37;
    }
    CPy_INCREF(cpy_r_validated_values);
    if (((dao_treasury___sorting____matchers____MatcherObject *)cpy_r_self)->___values != NULL) {
        CPy_DECREF(((dao_treasury___sorting____matchers____MatcherObject *)cpy_r_self)->___values);
    }
    ((dao_treasury___sorting____matchers____MatcherObject *)cpy_r_self)->___values = cpy_r_validated_values;
    cpy_r_r58 = 1;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 44, CPyStatic__matchers___globals);
        goto CPyL37;
    }
    return 1;
CPyL37: ;
    cpy_r_r59 = 2;
    return cpy_r_r59;
CPyL38: ;
    CPy_DECREF(cpy_r_r12);
    goto CPyL25;
CPyL39: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL37;
CPyL40: ;
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r24);
    goto CPyL37;
CPyL41: ;
    CPy_DECREF(cpy_r_r12);
    goto CPyL15;
CPyL42: ;
    CPy_DECREF(cpy_r_r24);
    goto CPyL24;
CPyL43: ;
    CPy_DecRef(cpy_r_r24);
    goto CPyL37;
CPyL44: ;
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r29);
    goto CPyL37;
CPyL45: ;
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r34);
    goto CPyL37;
CPyL46: ;
    CPy_DecRef(cpy_r_r37);
    goto CPyL37;
}

PyObject *CPyPy__matchers____Matcher_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"txgroup", "validated_values", 0};
    PyObject *obj_txgroup;
    PyObject *obj_validated_values;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO", "__init__", kwlist, &obj_txgroup, &obj_validated_values)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType__matchers____Matcher)))
        arg_self = obj_self;
    else {
        CPy_TypeError("dao_treasury.sorting._matchers._Matcher", obj_self); 
        goto fail;
    }
    PyObject *arg_txgroup = obj_txgroup;
    PyObject *arg_validated_values;
    if (likely(PySet_Check(obj_validated_values)))
        arg_validated_values = obj_validated_values;
    else {
        CPy_TypeError("set", obj_validated_values); 
        goto fail;
    }
    char retval = CPyDef__matchers____Matcher_____init__(arg_self, arg_txgroup, arg_validated_values);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 33, CPyStatic__matchers___globals);
    return NULL;
}

char CPyDef__matchers____Matcher_____contains__(PyObject *cpy_r_self, PyObject *cpy_r_string) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    cpy_r_r0 = ((dao_treasury___sorting____matchers____MatcherObject *)cpy_r_self)->___one_value;
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AttributeError("dao_treasury/sorting/_matchers.py", "__contains__", "_Matcher", "__one_value", 47, CPyStatic__matchers___globals);
        goto CPyL11;
    }
CPyL1: ;
    if (!cpy_r_r0) goto CPyL7;
CPyL2: ;
    cpy_r_r1 = ((dao_treasury___sorting____matchers____MatcherObject *)cpy_r_self)->___value;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("dao_treasury/sorting/_matchers.py", "__contains__", "_Matcher", "__value", 47, CPyStatic__matchers___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r1);
CPyL3: ;
    cpy_r_r2 = PyUnicode_Compare(cpy_r_string, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 == -1;
    if (!cpy_r_r3) goto CPyL6;
    cpy_r_r4 = PyErr_Occurred();
    cpy_r_r5 = cpy_r_r4 != NULL;
    if (!cpy_r_r5) goto CPyL6;
    cpy_r_r6 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__contains__", 47, CPyStatic__matchers___globals);
        goto CPyL11;
    }
CPyL6: ;
    cpy_r_r7 = cpy_r_r2 == 0;
    cpy_r_r8 = cpy_r_r7;
    goto CPyL10;
CPyL7: ;
    cpy_r_r9 = CPyDef__matchers____Matcher___values(cpy_r_self);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__contains__", 47, CPyStatic__matchers___globals);
        goto CPyL11;
    }
CPyL8: ;
    cpy_r_r10 = PySet_Contains(cpy_r_r9, cpy_r_string);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__contains__", 47, CPyStatic__matchers___globals);
        goto CPyL11;
    }
    cpy_r_r12 = cpy_r_r10;
    cpy_r_r8 = cpy_r_r12;
CPyL10: ;
    return cpy_r_r8;
CPyL11: ;
    cpy_r_r13 = 2;
    return cpy_r_r13;
}

PyObject *CPyPy__matchers____Matcher_____contains__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"string", 0};
    static CPyArg_Parser parser = {"O:__contains__", kwlist, 0};
    PyObject *obj_string;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_string)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType__matchers____Matcher)))
        arg_self = obj_self;
    else {
        CPy_TypeError("dao_treasury.sorting._matchers._Matcher", obj_self); 
        goto fail;
    }
    PyObject *arg_string;
    if (likely(PyUnicode_Check(obj_string)))
        arg_string = obj_string;
    else {
        CPy_TypeError("str", obj_string); 
        goto fail;
    }
    char retval = CPyDef__matchers____Matcher_____contains__(arg_self, arg_string);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__contains__", 46, CPyStatic__matchers___globals);
    return NULL;
}

PyObject *CPyDef__matchers____Matcher___values(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = ((dao_treasury___sorting____matchers____MatcherObject *)cpy_r_self)->___values;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("dao_treasury/sorting/_matchers.py", "values", "_Matcher", "__values", 51, CPyStatic__matchers___globals);
        goto CPyL2;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy__matchers____Matcher___values(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":values", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType__matchers____Matcher)))
        arg_self = obj_self;
    else {
        CPy_TypeError("dao_treasury.sorting._matchers._Matcher", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef__matchers____Matcher___values(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "values", 50, CPyStatic__matchers___globals);
    return NULL;
}

PyObject *CPyDef__matchers____HexStringMatcher____validate_hexstr(PyObject *cpy_r_cls, PyObject *cpy_r_hexstr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject **cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject **cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject **cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyTagged cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyTagged cpy_r_r36;
    int64_t cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyTagged cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyTagged cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject **cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    cpy_r_r0 = CPyStatic__matchers___globals;
    cpy_r_r1 = CPyStatics[76]; /* 'is_hexstr' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "_validate_hexstr", 59, CPyStatic__matchers___globals);
        goto CPyL36;
    }
    PyObject *cpy_r_r3[1] = {cpy_r_hexstr};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = _PyObject_Vectorcall(cpy_r_r2, cpy_r_r4, 1, 0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "_validate_hexstr", 59, CPyStatic__matchers___globals);
        goto CPyL36;
    }
    cpy_r_r6 = PyObject_IsTrue(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "_validate_hexstr", 59, CPyStatic__matchers___globals);
        goto CPyL36;
    }
    cpy_r_r8 = cpy_r_r6;
    if (cpy_r_r8) goto CPyL10;
    cpy_r_r9 = CPyStatics[77]; /* 'value must be a hex string, not ' */
    cpy_r_r10 = PyObject_Str(cpy_r_hexstr);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "_validate_hexstr", 60, CPyStatic__matchers___globals);
        goto CPyL36;
    }
    cpy_r_r11 = CPyStr_Build(2, cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "_validate_hexstr", 60, CPyStatic__matchers___globals);
        goto CPyL36;
    }
    cpy_r_r12 = CPyModule_builtins;
    cpy_r_r13 = CPyStatics[74]; /* 'ValueError' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "_validate_hexstr", 60, CPyStatic__matchers___globals);
        goto CPyL37;
    }
    PyObject *cpy_r_r15[1] = {cpy_r_r11};
    cpy_r_r16 = (PyObject **)&cpy_r_r15;
    cpy_r_r17 = _PyObject_Vectorcall(cpy_r_r14, cpy_r_r16, 1, 0);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "_validate_hexstr", 60, CPyStatic__matchers___globals);
        goto CPyL37;
    }
    CPy_DECREF(cpy_r_r11);
    CPy_Raise(cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(!0)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "_validate_hexstr", 60, CPyStatic__matchers___globals);
        goto CPyL36;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r18 = CPyStatics[78]; /* 'lower' */
    PyObject *cpy_r_r19[1] = {cpy_r_hexstr};
    cpy_r_r20 = (PyObject **)&cpy_r_r19;
    cpy_r_r21 = PyObject_VectorcallMethod(cpy_r_r18, cpy_r_r20, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "_validate_hexstr", 61, CPyStatic__matchers___globals);
        goto CPyL36;
    }
    cpy_r_hexstr = cpy_r_r21;
    cpy_r_r22 = CPyStatics[79]; /* '0x' */
    cpy_r_r23 = CPyStatics[80]; /* 'startswith' */
    PyObject *cpy_r_r24[2] = {cpy_r_hexstr, cpy_r_r22};
    cpy_r_r25 = (PyObject **)&cpy_r_r24;
    cpy_r_r26 = PyObject_VectorcallMethod(cpy_r_r23, cpy_r_r25, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "_validate_hexstr", 62, CPyStatic__matchers___globals);
        goto CPyL38;
    }
    cpy_r_r27 = PyObject_IsTrue(cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "_validate_hexstr", 62, CPyStatic__matchers___globals);
        goto CPyL38;
    }
    cpy_r_r29 = cpy_r_r27;
    if (cpy_r_r29) goto CPyL17;
    cpy_r_r30 = CPyStatics[79]; /* '0x' */
    cpy_r_r31 = PyObject_Str(cpy_r_hexstr);
    CPy_DECREF(cpy_r_hexstr);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "_validate_hexstr", 63, CPyStatic__matchers___globals);
        goto CPyL36;
    }
    cpy_r_r32 = CPyStr_Build(2, cpy_r_r30, cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "_validate_hexstr", 63, CPyStatic__matchers___globals);
        goto CPyL36;
    }
    cpy_r_hexstr = cpy_r_r32;
CPyL17: ;
    cpy_r_r33 = CPyObject_Size(cpy_r_hexstr);
    if (unlikely(cpy_r_r33 == CPY_INT_TAG)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "_validate_hexstr", 64, CPyStatic__matchers___globals);
        goto CPyL38;
    }
    cpy_r_r34 = CPyStatics[81]; /* 'expected_length' */
    cpy_r_r35 = CPyObject_GetAttr(cpy_r_cls, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "_validate_hexstr", 64, CPyStatic__matchers___globals);
        goto CPyL39;
    }
    if (likely(PyLong_Check(cpy_r_r35)))
        cpy_r_r36 = CPyTagged_FromObject(cpy_r_r35);
    else {
        CPy_TypeError("int", cpy_r_r35); cpy_r_r36 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == CPY_INT_TAG)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "_validate_hexstr", 64, CPyStatic__matchers___globals);
        goto CPyL39;
    }
    cpy_r_r37 = cpy_r_r33 & 1;
    cpy_r_r38 = cpy_r_r37 != 0;
    if (!cpy_r_r38) goto CPyL22;
    cpy_r_r39 = CPyTagged_IsEq_(cpy_r_r33, cpy_r_r36);
    cpy_r_r40 = cpy_r_r39 ^ 1;
    cpy_r_r41 = cpy_r_r40;
    goto CPyL23;
CPyL22: ;
    cpy_r_r42 = cpy_r_r33 != cpy_r_r36;
    cpy_r_r41 = cpy_r_r42;
CPyL23: ;
    CPyTagged_DECREF(cpy_r_r33);
    CPyTagged_DECREF(cpy_r_r36);
    if (!cpy_r_r41) goto CPyL35;
    cpy_r_r43 = PyObject_Str(cpy_r_hexstr);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "_validate_hexstr", 65, CPyStatic__matchers___globals);
        goto CPyL38;
    }
    cpy_r_r44 = CPyStatics[82]; /* ' has incorrect length (expected ' */
    cpy_r_r45 = CPyStatics[81]; /* 'expected_length' */
    cpy_r_r46 = CPyObject_GetAttr(cpy_r_cls, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "_validate_hexstr", 65, CPyStatic__matchers___globals);
        goto CPyL40;
    }
    if (likely(PyLong_Check(cpy_r_r46)))
        cpy_r_r47 = CPyTagged_FromObject(cpy_r_r46);
    else {
        CPy_TypeError("int", cpy_r_r46); cpy_r_r47 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == CPY_INT_TAG)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "_validate_hexstr", 65, CPyStatic__matchers___globals);
        goto CPyL40;
    }
    cpy_r_r48 = CPyTagged_Str(cpy_r_r47);
    CPyTagged_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "_validate_hexstr", 65, CPyStatic__matchers___globals);
        goto CPyL40;
    }
    cpy_r_r49 = CPyStatics[83]; /* ', actual ' */
    cpy_r_r50 = CPyObject_Size(cpy_r_hexstr);
    CPy_DECREF(cpy_r_hexstr);
    if (unlikely(cpy_r_r50 == CPY_INT_TAG)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "_validate_hexstr", 65, CPyStatic__matchers___globals);
        goto CPyL41;
    }
    cpy_r_r51 = CPyTagged_Str(cpy_r_r50);
    CPyTagged_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "_validate_hexstr", 65, CPyStatic__matchers___globals);
        goto CPyL41;
    }
    cpy_r_r52 = CPyStatics[84]; /* ')' */
    cpy_r_r53 = CPyStr_Build(6, cpy_r_r43, cpy_r_r44, cpy_r_r48, cpy_r_r49, cpy_r_r51, cpy_r_r52);
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r48);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "_validate_hexstr", 65, CPyStatic__matchers___globals);
        goto CPyL36;
    }
    cpy_r_r54 = CPyModule_builtins;
    cpy_r_r55 = CPyStatics[74]; /* 'ValueError' */
    cpy_r_r56 = CPyObject_GetAttr(cpy_r_r54, cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "_validate_hexstr", 65, CPyStatic__matchers___globals);
        goto CPyL42;
    }
    PyObject *cpy_r_r57[1] = {cpy_r_r53};
    cpy_r_r58 = (PyObject **)&cpy_r_r57;
    cpy_r_r59 = _PyObject_Vectorcall(cpy_r_r56, cpy_r_r58, 1, 0);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "_validate_hexstr", 65, CPyStatic__matchers___globals);
        goto CPyL42;
    }
    CPy_DECREF(cpy_r_r53);
    CPy_Raise(cpy_r_r59);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(!0)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "_validate_hexstr", 65, CPyStatic__matchers___globals);
        goto CPyL36;
    }
    CPy_Unreachable();
CPyL35: ;
    return cpy_r_hexstr;
CPyL36: ;
    cpy_r_r60 = NULL;
    return cpy_r_r60;
CPyL37: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL36;
CPyL38: ;
    CPy_DecRef(cpy_r_hexstr);
    goto CPyL36;
CPyL39: ;
    CPy_DecRef(cpy_r_hexstr);
    CPyTagged_DecRef(cpy_r_r33);
    goto CPyL36;
CPyL40: ;
    CPy_DecRef(cpy_r_hexstr);
    CPy_DecRef(cpy_r_r43);
    goto CPyL36;
CPyL41: ;
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r48);
    goto CPyL36;
CPyL42: ;
    CPy_DecRef(cpy_r_r53);
    goto CPyL36;
}

PyObject *CPyPy__matchers____HexStringMatcher____validate_hexstr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_cls = self;
    static const char * const kwlist[] = {"hexstr", 0};
    static CPyArg_Parser parser = {"O:_validate_hexstr", kwlist, 0};
    PyObject *obj_hexstr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_hexstr)) {
        return NULL;
    }
    PyObject *arg_cls = obj_cls;
    PyObject *arg_hexstr = obj_hexstr;
    PyObject *retval = CPyDef__matchers____HexStringMatcher____validate_hexstr(arg_cls, arg_hexstr);
    return retval;
fail: ;
    CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "_validate_hexstr", 58, CPyStatic__matchers___globals);
    return NULL;
}

char CPyDef__matchers____AddressMatcher_____init__(PyObject *cpy_r_self, PyObject *cpy_r_txgroup, PyObject *cpy_r_addresses) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject **cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyPtr cpy_r_r16;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    int64_t cpy_r_r20;
    CPyPtr cpy_r_r21;
    CPyPtr cpy_r_r22;
    int64_t cpy_r_r23;
    CPyPtr cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_address;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject **cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyTagged cpy_r_r37;
    CPyPtr cpy_r_r38;
    int64_t cpy_r_r39;
    CPyTagged cpy_r_r40;
    char cpy_r_r41;
    int64_t cpy_r_r42;
    CPyPtr cpy_r_r43;
    CPyPtr cpy_r_r44;
    int64_t cpy_r_r45;
    CPyPtr cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject **cpy_r_r60;
    PyObject *cpy_r_r61;
    CPyTagged cpy_r_r62;
    int32_t cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject **cpy_r_r71;
    PyObject *cpy_r_r72;
    int32_t cpy_r_r73;
    char cpy_r_r74;
    CPyTagged cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject **cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    int32_t cpy_r_r87;
    char cpy_r_r88;
    char cpy_r_r89;
    cpy_r_r0 = PySequence_List(cpy_r_addresses);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 73, CPyStatic__matchers___globals);
        goto CPyL47;
    }
    cpy_r_addresses = cpy_r_r0;
    CPy_INCREF(cpy_r_addresses);
    if (likely(PyList_Check(cpy_r_addresses)))
        cpy_r_r1 = cpy_r_addresses;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/_matchers.py", "__init__", 74, CPyStatic__matchers___globals, "list", cpy_r_addresses);
        goto CPyL48;
    }
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    CPy_DECREF(cpy_r_r1);
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = cpy_r_r4 != 0;
    if (cpy_r_r5) {
        goto CPyL7;
    } else
        goto CPyL49;
CPyL3: ;
    cpy_r_r6 = CPyStatics[85]; /* 'You must provide at least one address' */
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[74]; /* 'ValueError' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 75, CPyStatic__matchers___globals);
        goto CPyL47;
    }
    PyObject *cpy_r_r10[1] = {cpy_r_r6};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = _PyObject_Vectorcall(cpy_r_r9, cpy_r_r11, 1, 0);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 75, CPyStatic__matchers___globals);
        goto CPyL47;
    }
    CPy_Raise(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(!0)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 75, CPyStatic__matchers___globals);
        goto CPyL47;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r13 = PySet_New(NULL);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 77, CPyStatic__matchers___globals);
        goto CPyL48;
    }
    if (likely(PyList_Check(cpy_r_addresses)))
        cpy_r_r14 = cpy_r_addresses;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/_matchers.py", "__init__", 78, CPyStatic__matchers___globals, "list", cpy_r_addresses);
        goto CPyL50;
    }
    cpy_r_r15 = 0;
CPyL10: ;
    cpy_r_r16 = (CPyPtr)&((PyVarObject *)cpy_r_r14)->ob_size;
    cpy_r_r17 = *(int64_t *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_r19 = (Py_ssize_t)cpy_r_r15 < (Py_ssize_t)cpy_r_r18;
    if (!cpy_r_r19) goto CPyL51;
    cpy_r_r20 = (Py_ssize_t)cpy_r_r15 >> 1;
    cpy_r_r21 = (CPyPtr)&((PyListObject *)cpy_r_r14)->ob_item;
    cpy_r_r22 = *(CPyPtr *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r20 * 8;
    cpy_r_r24 = cpy_r_r22 + cpy_r_r23;
    cpy_r_r25 = *(PyObject * *)cpy_r_r24;
    CPy_INCREF(cpy_r_r25);
    cpy_r_address = cpy_r_r25;
    cpy_r_r26 = CPyStatic__matchers___globals;
    cpy_r_r27 = CPyStatics[86]; /* 'convert' */
    cpy_r_r28 = CPyDict_GetItem(cpy_r_r26, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 79, CPyStatic__matchers___globals);
        goto CPyL52;
    }
    cpy_r_r29 = CPyDef__matchers____HexStringMatcher____validate_hexstr((PyObject *)Py_TYPE(cpy_r_self), cpy_r_address);
    CPy_DECREF(cpy_r_address);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 79, CPyStatic__matchers___globals);
        goto CPyL53;
    }
    cpy_r_r30 = CPyStatics[5]; /* 'to_address' */
    PyObject *cpy_r_r31[2] = {cpy_r_r28, cpy_r_r29};
    cpy_r_r32 = (PyObject **)&cpy_r_r31;
    cpy_r_r33 = PyObject_VectorcallMethod(cpy_r_r30, cpy_r_r32, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 79, CPyStatic__matchers___globals);
        goto CPyL54;
    }
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r29);
    cpy_r_address = cpy_r_r33;
    cpy_r_r34 = CPyStatics[68]; /* '__instances__' */
    cpy_r_r35 = CPyObject_GetAttr(cpy_r_self, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 80, CPyStatic__matchers___globals);
        goto CPyL52;
    }
    if (likely(PyList_Check(cpy_r_r35)))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/_matchers.py", "__init__", 80, CPyStatic__matchers___globals, "list", cpy_r_r35);
        goto CPyL52;
    }
    cpy_r_r37 = 0;
CPyL17: ;
    cpy_r_r38 = (CPyPtr)&((PyVarObject *)cpy_r_r36)->ob_size;
    cpy_r_r39 = *(int64_t *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 << 1;
    cpy_r_r41 = (Py_ssize_t)cpy_r_r37 < (Py_ssize_t)cpy_r_r40;
    if (!cpy_r_r41) goto CPyL55;
    cpy_r_r42 = (Py_ssize_t)cpy_r_r37 >> 1;
    cpy_r_r43 = (CPyPtr)&((PyListObject *)cpy_r_r36)->ob_item;
    cpy_r_r44 = *(CPyPtr *)cpy_r_r43;
    cpy_r_r45 = cpy_r_r42 * 8;
    cpy_r_r46 = cpy_r_r44 + cpy_r_r45;
    cpy_r_r47 = *(PyObject * *)cpy_r_r46;
    CPy_INCREF(cpy_r_r47);
    if (likely((Py_TYPE(cpy_r_r47) == CPyType__matchers___FromAddressMatcher) || (Py_TYPE(cpy_r_r47) == CPyType__matchers___ToAddressMatcher) || (Py_TYPE(cpy_r_r47) == CPyType__matchers____AddressMatcher)))
        cpy_r_r48 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/_matchers.py", "__init__", 80, CPyStatic__matchers___globals, "dao_treasury.sorting._matchers._AddressMatcher", cpy_r_r47);
        goto CPyL56;
    }
    CPy_INCREF(cpy_r_address);
    if (likely(PyUnicode_Check(cpy_r_address)))
        cpy_r_r49 = cpy_r_address;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/_matchers.py", "__init__", 81, CPyStatic__matchers___globals, "str", cpy_r_address);
        goto CPyL57;
    }
    cpy_r_r50 = CPyDef__matchers____Matcher_____contains__(cpy_r_r48, cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r50 == 2)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 81, CPyStatic__matchers___globals);
        goto CPyL57;
    }
    if (cpy_r_r50) {
        goto CPyL58;
    } else
        goto CPyL59;
CPyL22: ;
    cpy_r_r51 = CPyStatics[87]; /* 'address ' */
    cpy_r_r52 = PyObject_Str(cpy_r_address);
    CPy_DECREF(cpy_r_address);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 82, CPyStatic__matchers___globals);
        goto CPyL60;
    }
    cpy_r_r53 = CPyStatics[88]; /* ' already has a matcher: ' */
    cpy_r_r54 = PyObject_Str(cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 82, CPyStatic__matchers___globals);
        goto CPyL61;
    }
    cpy_r_r55 = CPyStr_Build(4, cpy_r_r51, cpy_r_r52, cpy_r_r53, cpy_r_r54);
    CPy_DECREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 82, CPyStatic__matchers___globals);
        goto CPyL47;
    }
    cpy_r_r56 = CPyModule_builtins;
    cpy_r_r57 = CPyStatics[74]; /* 'ValueError' */
    cpy_r_r58 = CPyObject_GetAttr(cpy_r_r56, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 82, CPyStatic__matchers___globals);
        goto CPyL62;
    }
    PyObject *cpy_r_r59[1] = {cpy_r_r55};
    cpy_r_r60 = (PyObject **)&cpy_r_r59;
    cpy_r_r61 = _PyObject_Vectorcall(cpy_r_r58, cpy_r_r60, 1, 0);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 82, CPyStatic__matchers___globals);
        goto CPyL62;
    }
    CPy_DECREF(cpy_r_r55);
    CPy_Raise(cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(!0)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 82, CPyStatic__matchers___globals);
        goto CPyL47;
    }
    CPy_Unreachable();
CPyL29: ;
    cpy_r_r62 = cpy_r_r37 + 2;
    cpy_r_r37 = cpy_r_r62;
    goto CPyL17;
CPyL30: ;
    cpy_r_r63 = PySet_Contains(cpy_r_r13, cpy_r_address);
    cpy_r_r64 = cpy_r_r63 >= 0;
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 83, CPyStatic__matchers___globals);
        goto CPyL52;
    }
    cpy_r_r65 = cpy_r_r63;
    if (!cpy_r_r65) goto CPyL36;
    cpy_r_r66 = CPyStatic__matchers___logger;
    if (unlikely(cpy_r_r66 == NULL)) {
        goto CPyL63;
    } else
        goto CPyL35;
CPyL33: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"logger\" was not set");
    cpy_r_r67 = 0;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 84, CPyStatic__matchers___globals);
        goto CPyL47;
    }
    CPy_Unreachable();
CPyL35: ;
    cpy_r_r68 = CPyStatics[89]; /* 'duplicate hash %s' */
    cpy_r_r69 = CPyStatics[90]; /* 'warning' */
    PyObject *cpy_r_r70[3] = {cpy_r_r66, cpy_r_r68, cpy_r_address};
    cpy_r_r71 = (PyObject **)&cpy_r_r70;
    cpy_r_r72 = PyObject_VectorcallMethod(cpy_r_r69, cpy_r_r71, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 84, CPyStatic__matchers___globals);
        goto CPyL52;
    } else
        goto CPyL64;
CPyL36: ;
    cpy_r_r73 = PySet_Add(cpy_r_r13, cpy_r_address);
    CPy_DECREF(cpy_r_address);
    cpy_r_r74 = cpy_r_r73 >= 0;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 85, CPyStatic__matchers___globals);
        goto CPyL65;
    }
    cpy_r_r75 = cpy_r_r15 + 2;
    cpy_r_r15 = cpy_r_r75;
    goto CPyL10;
CPyL38: ;
    cpy_r_r76 = CPyDef__matchers____Matcher_____init__(cpy_r_self, cpy_r_txgroup, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r76 == 2)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 87, CPyStatic__matchers___globals);
        goto CPyL47;
    }
    cpy_r_r77 = CPyStatic__matchers___logger;
    if (likely(cpy_r_r77 != NULL)) goto CPyL42;
    PyErr_SetString(PyExc_NameError, "value for final name \"logger\" was not set");
    cpy_r_r78 = 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 89, CPyStatic__matchers___globals);
        goto CPyL47;
    }
    CPy_Unreachable();
CPyL42: ;
    cpy_r_r79 = CPyStatics[91]; /* '%s created' */
    cpy_r_r80 = CPyStatics[20]; /* 'info' */
    PyObject *cpy_r_r81[3] = {cpy_r_r77, cpy_r_r79, cpy_r_self};
    cpy_r_r82 = (PyObject **)&cpy_r_r81;
    cpy_r_r83 = PyObject_VectorcallMethod(cpy_r_r80, cpy_r_r82, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 89, CPyStatic__matchers___globals);
        goto CPyL47;
    } else
        goto CPyL66;
CPyL43: ;
    cpy_r_r84 = CPyStatics[68]; /* '__instances__' */
    cpy_r_r85 = CPyObject_GetAttr(cpy_r_self, cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 90, CPyStatic__matchers___globals);
        goto CPyL47;
    }
    if (likely(PyList_Check(cpy_r_r85)))
        cpy_r_r86 = cpy_r_r85;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/_matchers.py", "__init__", 90, CPyStatic__matchers___globals, "list", cpy_r_r85);
        goto CPyL47;
    }
    cpy_r_r87 = PyList_Append(cpy_r_r86, cpy_r_self);
    CPy_DECREF(cpy_r_r86);
    cpy_r_r88 = cpy_r_r87 >= 0;
    if (unlikely(!cpy_r_r88)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 90, CPyStatic__matchers___globals);
        goto CPyL47;
    }
    return 1;
CPyL47: ;
    cpy_r_r89 = 2;
    return cpy_r_r89;
CPyL48: ;
    CPy_DecRef(cpy_r_addresses);
    goto CPyL47;
CPyL49: ;
    CPy_DECREF(cpy_r_addresses);
    goto CPyL3;
CPyL50: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL47;
CPyL51: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL38;
CPyL52: ;
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_address);
    goto CPyL47;
CPyL53: ;
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r28);
    goto CPyL47;
CPyL54: ;
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r29);
    goto CPyL47;
CPyL55: ;
    CPy_DECREF(cpy_r_r36);
    goto CPyL30;
CPyL56: ;
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_address);
    CPy_DecRef(cpy_r_r36);
    goto CPyL47;
CPyL57: ;
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_address);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_r48);
    goto CPyL47;
CPyL58: ;
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r36);
    goto CPyL22;
CPyL59: ;
    CPy_DECREF(cpy_r_r48);
    goto CPyL29;
CPyL60: ;
    CPy_DecRef(cpy_r_r48);
    goto CPyL47;
CPyL61: ;
    CPy_DecRef(cpy_r_r52);
    goto CPyL47;
CPyL62: ;
    CPy_DecRef(cpy_r_r55);
    goto CPyL47;
CPyL63: ;
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_address);
    goto CPyL33;
CPyL64: ;
    CPy_DECREF(cpy_r_r72);
    goto CPyL36;
CPyL65: ;
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r14);
    goto CPyL47;
CPyL66: ;
    CPy_DECREF(cpy_r_r83);
    goto CPyL43;
}

PyObject *CPyPy__matchers____AddressMatcher_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"txgroup", "addresses", 0};
    PyObject *obj_txgroup;
    PyObject *obj_addresses;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO", "__init__", kwlist, &obj_txgroup, &obj_addresses)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType__matchers___FromAddressMatcher) || (Py_TYPE(obj_self) == CPyType__matchers___ToAddressMatcher) || (Py_TYPE(obj_self) == CPyType__matchers____AddressMatcher)))
        arg_self = obj_self;
    else {
        CPy_TypeError("dao_treasury.sorting._matchers._AddressMatcher", obj_self); 
        goto fail;
    }
    PyObject *arg_txgroup = obj_txgroup;
    PyObject *arg_addresses = obj_addresses;
    char retval = CPyDef__matchers____AddressMatcher_____init__(arg_self, arg_txgroup, arg_addresses);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 72, CPyStatic__matchers___globals);
    return NULL;
}

PyObject *CPyDef__matchers____AddressMatcher_____repr__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    cpy_r_r0 = CPyStatics[221]; /* ('TxGroup',) */
    cpy_r_r1 = CPyStatics[92]; /* 'dao_treasury.db' */
    cpy_r_r2 = CPyStatic__matchers___globals;
    cpy_r_r3 = CPyImport_ImportFromMany(cpy_r_r1, cpy_r_r0, cpy_r_r0, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__repr__", 94, CPyStatic__matchers___globals);
        goto CPyL13;
    }
    CPyModule_dao_treasury___db = cpy_r_r3;
    CPy_INCREF(CPyModule_dao_treasury___db);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r4 = CPyStatic__matchers___globals;
    cpy_r_r5 = CPyStatics[63]; /* 'TxGroup' */
    cpy_r_r6 = CPyDict_GetItem(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__repr__", 96, CPyStatic__matchers___globals);
        goto CPyL13;
    }
    cpy_r_r7 = ((dao_treasury___sorting____matchers____AddressMatcherObject *)cpy_r_self)->_txgroup_id;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("dao_treasury/sorting/_matchers.py", "__repr__", "_AddressMatcher", "txgroup_id", 96, CPyStatic__matchers___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r7);
CPyL3: ;
    cpy_r_r8 = CPyStatics[93]; /* 'get' */
    PyObject *cpy_r_r9[2] = {cpy_r_r6, cpy_r_r7};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = CPyStatics[222]; /* ('txgroup_id',) */
    cpy_r_r12 = PyObject_VectorcallMethod(cpy_r_r8, cpy_r_r10, 9223372036854775809ULL, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__repr__", 96, CPyStatic__matchers___globals);
        goto CPyL15;
    }
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r13 = PyObject_Type(cpy_r_self);
    cpy_r_r14 = CPyStatics[72]; /* '__name__' */
    cpy_r_r15 = CPyObject_GetAttr(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__repr__", 97, CPyStatic__matchers___globals);
        goto CPyL16;
    }
    if (likely(PyUnicode_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/_matchers.py", "__repr__", 97, CPyStatic__matchers___globals, "str", cpy_r_r15);
        goto CPyL16;
    }
    cpy_r_r17 = CPyStatics[95]; /* "(txgroup='" */
    cpy_r_r18 = CPyStatics[96]; /* 'full_string' */
    cpy_r_r19 = CPyObject_GetAttr(cpy_r_r12, cpy_r_r18);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__repr__", 97, CPyStatic__matchers___globals);
        goto CPyL17;
    }
    cpy_r_r20 = PyObject_Str(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__repr__", 97, CPyStatic__matchers___globals);
        goto CPyL17;
    }
    cpy_r_r21 = CPyStatics[97]; /* "', addresses=" */
    cpy_r_r22 = CPyDef__matchers____Matcher___values(cpy_r_self);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__repr__", 97, CPyStatic__matchers___globals);
        goto CPyL18;
    }
CPyL9: ;
    cpy_r_r23 = PySequence_List(cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__repr__", 97, CPyStatic__matchers___globals);
        goto CPyL18;
    }
    cpy_r_r24 = PyObject_Str(cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__repr__", 97, CPyStatic__matchers___globals);
        goto CPyL18;
    }
    cpy_r_r25 = CPyStatics[84]; /* ')' */
    cpy_r_r26 = CPyStr_Build(6, cpy_r_r16, cpy_r_r17, cpy_r_r20, cpy_r_r21, cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__repr__", 97, CPyStatic__matchers___globals);
        goto CPyL13;
    }
    return cpy_r_r26;
CPyL13: ;
    cpy_r_r27 = NULL;
    return cpy_r_r27;
CPyL14: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL13;
CPyL15: ;
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r7);
    goto CPyL13;
CPyL16: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL13;
CPyL17: ;
    CPy_DecRef(cpy_r_r16);
    goto CPyL13;
CPyL18: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r20);
    goto CPyL13;
}

PyObject *CPyPy__matchers____AddressMatcher_____repr__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__repr__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType__matchers___FromAddressMatcher) || (Py_TYPE(obj_self) == CPyType__matchers___ToAddressMatcher) || (Py_TYPE(obj_self) == CPyType__matchers____AddressMatcher)))
        arg_self = obj_self;
    else {
        CPy_TypeError("dao_treasury.sorting._matchers._AddressMatcher", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef__matchers____AddressMatcher_____repr__(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__repr__", 93, CPyStatic__matchers___globals);
    return NULL;
}

char CPyDef__matchers___HashMatcher_____init__(PyObject *cpy_r_self, PyObject *cpy_r_txgroup, PyObject *cpy_r_hashes) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject **cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyPtr cpy_r_r16;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    int64_t cpy_r_r20;
    CPyPtr cpy_r_r21;
    CPyPtr cpy_r_r22;
    int64_t cpy_r_r23;
    CPyPtr cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_txhash;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyTagged cpy_r_r30;
    CPyPtr cpy_r_r31;
    int64_t cpy_r_r32;
    CPyTagged cpy_r_r33;
    char cpy_r_r34;
    int64_t cpy_r_r35;
    CPyPtr cpy_r_r36;
    CPyPtr cpy_r_r37;
    int64_t cpy_r_r38;
    CPyPtr cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject **cpy_r_r53;
    PyObject *cpy_r_r54;
    CPyTagged cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject **cpy_r_r64;
    PyObject *cpy_r_r65;
    int32_t cpy_r_r66;
    char cpy_r_r67;
    CPyTagged cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject **cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    int32_t cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    cpy_r_r0 = PySequence_List(cpy_r_hashes);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 119, CPyStatic__matchers___globals);
        goto CPyL45;
    }
    cpy_r_hashes = cpy_r_r0;
    CPy_INCREF(cpy_r_hashes);
    if (likely(PyList_Check(cpy_r_hashes)))
        cpy_r_r1 = cpy_r_hashes;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/_matchers.py", "__init__", 120, CPyStatic__matchers___globals, "list", cpy_r_hashes);
        goto CPyL46;
    }
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    CPy_DECREF(cpy_r_r1);
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = cpy_r_r4 != 0;
    if (cpy_r_r5) {
        goto CPyL7;
    } else
        goto CPyL47;
CPyL3: ;
    cpy_r_r6 = CPyStatics[98]; /* 'You must provide at least one transaction hash' */
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[74]; /* 'ValueError' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 121, CPyStatic__matchers___globals);
        goto CPyL45;
    }
    PyObject *cpy_r_r10[1] = {cpy_r_r6};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = _PyObject_Vectorcall(cpy_r_r9, cpy_r_r11, 1, 0);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 121, CPyStatic__matchers___globals);
        goto CPyL45;
    }
    CPy_Raise(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(!0)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 121, CPyStatic__matchers___globals);
        goto CPyL45;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r13 = PySet_New(NULL);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 123, CPyStatic__matchers___globals);
        goto CPyL46;
    }
    if (likely(PyList_Check(cpy_r_hashes)))
        cpy_r_r14 = cpy_r_hashes;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/_matchers.py", "__init__", 124, CPyStatic__matchers___globals, "list", cpy_r_hashes);
        goto CPyL48;
    }
    cpy_r_r15 = 0;
CPyL10: ;
    cpy_r_r16 = (CPyPtr)&((PyVarObject *)cpy_r_r14)->ob_size;
    cpy_r_r17 = *(int64_t *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_r19 = (Py_ssize_t)cpy_r_r15 < (Py_ssize_t)cpy_r_r18;
    if (!cpy_r_r19) goto CPyL49;
    cpy_r_r20 = (Py_ssize_t)cpy_r_r15 >> 1;
    cpy_r_r21 = (CPyPtr)&((PyListObject *)cpy_r_r14)->ob_item;
    cpy_r_r22 = *(CPyPtr *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r20 * 8;
    cpy_r_r24 = cpy_r_r22 + cpy_r_r23;
    cpy_r_r25 = *(PyObject * *)cpy_r_r24;
    CPy_INCREF(cpy_r_r25);
    cpy_r_txhash = cpy_r_r25;
    cpy_r_r26 = CPyDef__matchers____HexStringMatcher____validate_hexstr((PyObject *)Py_TYPE(cpy_r_self), cpy_r_txhash);
    CPy_DECREF(cpy_r_txhash);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 125, CPyStatic__matchers___globals);
        goto CPyL50;
    }
    cpy_r_txhash = cpy_r_r26;
    cpy_r_r27 = CPyStatics[68]; /* '__instances__' */
    cpy_r_r28 = CPyObject_GetAttr(cpy_r_self, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 126, CPyStatic__matchers___globals);
        goto CPyL51;
    }
    if (likely(PyList_Check(cpy_r_r28)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/_matchers.py", "__init__", 126, CPyStatic__matchers___globals, "list", cpy_r_r28);
        goto CPyL51;
    }
    cpy_r_r30 = 0;
CPyL15: ;
    cpy_r_r31 = (CPyPtr)&((PyVarObject *)cpy_r_r29)->ob_size;
    cpy_r_r32 = *(int64_t *)cpy_r_r31;
    cpy_r_r33 = cpy_r_r32 << 1;
    cpy_r_r34 = (Py_ssize_t)cpy_r_r30 < (Py_ssize_t)cpy_r_r33;
    if (!cpy_r_r34) goto CPyL52;
    cpy_r_r35 = (Py_ssize_t)cpy_r_r30 >> 1;
    cpy_r_r36 = (CPyPtr)&((PyListObject *)cpy_r_r29)->ob_item;
    cpy_r_r37 = *(CPyPtr *)cpy_r_r36;
    cpy_r_r38 = cpy_r_r35 * 8;
    cpy_r_r39 = cpy_r_r37 + cpy_r_r38;
    cpy_r_r40 = *(PyObject * *)cpy_r_r39;
    CPy_INCREF(cpy_r_r40);
    if (likely(Py_TYPE(cpy_r_r40) == CPyType__matchers___HashMatcher))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/_matchers.py", "__init__", 126, CPyStatic__matchers___globals, "dao_treasury.sorting._matchers.HashMatcher", cpy_r_r40);
        goto CPyL53;
    }
    CPy_INCREF(cpy_r_txhash);
    if (likely(PyUnicode_Check(cpy_r_txhash)))
        cpy_r_r42 = cpy_r_txhash;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/_matchers.py", "__init__", 127, CPyStatic__matchers___globals, "str", cpy_r_txhash);
        goto CPyL54;
    }
    cpy_r_r43 = CPyDef__matchers____Matcher_____contains__(cpy_r_r41, cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == 2)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 127, CPyStatic__matchers___globals);
        goto CPyL54;
    }
    if (cpy_r_r43) {
        goto CPyL55;
    } else
        goto CPyL56;
CPyL20: ;
    cpy_r_r44 = CPyStatics[99]; /* 'hash ' */
    cpy_r_r45 = PyObject_Str(cpy_r_txhash);
    CPy_DECREF(cpy_r_txhash);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 128, CPyStatic__matchers___globals);
        goto CPyL57;
    }
    cpy_r_r46 = CPyStatics[88]; /* ' already has a matcher: ' */
    cpy_r_r47 = PyObject_Str(cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 128, CPyStatic__matchers___globals);
        goto CPyL58;
    }
    cpy_r_r48 = CPyStr_Build(4, cpy_r_r44, cpy_r_r45, cpy_r_r46, cpy_r_r47);
    CPy_DECREF(cpy_r_r45);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 128, CPyStatic__matchers___globals);
        goto CPyL45;
    }
    cpy_r_r49 = CPyModule_builtins;
    cpy_r_r50 = CPyStatics[74]; /* 'ValueError' */
    cpy_r_r51 = CPyObject_GetAttr(cpy_r_r49, cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 128, CPyStatic__matchers___globals);
        goto CPyL59;
    }
    PyObject *cpy_r_r52[1] = {cpy_r_r48};
    cpy_r_r53 = (PyObject **)&cpy_r_r52;
    cpy_r_r54 = _PyObject_Vectorcall(cpy_r_r51, cpy_r_r53, 1, 0);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 128, CPyStatic__matchers___globals);
        goto CPyL59;
    }
    CPy_DECREF(cpy_r_r48);
    CPy_Raise(cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(!0)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 128, CPyStatic__matchers___globals);
        goto CPyL45;
    }
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r55 = cpy_r_r30 + 2;
    cpy_r_r30 = cpy_r_r55;
    goto CPyL15;
CPyL28: ;
    cpy_r_r56 = PySet_Contains(cpy_r_r13, cpy_r_txhash);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 129, CPyStatic__matchers___globals);
        goto CPyL51;
    }
    cpy_r_r58 = cpy_r_r56;
    if (!cpy_r_r58) goto CPyL34;
    cpy_r_r59 = CPyStatic__matchers___logger;
    if (unlikely(cpy_r_r59 == NULL)) {
        goto CPyL60;
    } else
        goto CPyL33;
CPyL31: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"logger\" was not set");
    cpy_r_r60 = 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 130, CPyStatic__matchers___globals);
        goto CPyL45;
    }
    CPy_Unreachable();
CPyL33: ;
    cpy_r_r61 = CPyStatics[89]; /* 'duplicate hash %s' */
    cpy_r_r62 = CPyStatics[90]; /* 'warning' */
    PyObject *cpy_r_r63[3] = {cpy_r_r59, cpy_r_r61, cpy_r_txhash};
    cpy_r_r64 = (PyObject **)&cpy_r_r63;
    cpy_r_r65 = PyObject_VectorcallMethod(cpy_r_r62, cpy_r_r64, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 130, CPyStatic__matchers___globals);
        goto CPyL51;
    } else
        goto CPyL61;
CPyL34: ;
    cpy_r_r66 = PySet_Add(cpy_r_r13, cpy_r_txhash);
    CPy_DECREF(cpy_r_txhash);
    cpy_r_r67 = cpy_r_r66 >= 0;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 131, CPyStatic__matchers___globals);
        goto CPyL50;
    }
    cpy_r_r68 = cpy_r_r15 + 2;
    cpy_r_r15 = cpy_r_r68;
    goto CPyL10;
CPyL36: ;
    cpy_r_r69 = CPyDef__matchers____Matcher_____init__(cpy_r_self, cpy_r_txgroup, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r69 == 2)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 133, CPyStatic__matchers___globals);
        goto CPyL45;
    }
    cpy_r_r70 = CPyStatic__matchers___logger;
    if (likely(cpy_r_r70 != NULL)) goto CPyL40;
    PyErr_SetString(PyExc_NameError, "value for final name \"logger\" was not set");
    cpy_r_r71 = 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 135, CPyStatic__matchers___globals);
        goto CPyL45;
    }
    CPy_Unreachable();
CPyL40: ;
    cpy_r_r72 = CPyStatics[91]; /* '%s created' */
    cpy_r_r73 = CPyStatics[20]; /* 'info' */
    PyObject *cpy_r_r74[3] = {cpy_r_r70, cpy_r_r72, cpy_r_self};
    cpy_r_r75 = (PyObject **)&cpy_r_r74;
    cpy_r_r76 = PyObject_VectorcallMethod(cpy_r_r73, cpy_r_r75, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 135, CPyStatic__matchers___globals);
        goto CPyL45;
    } else
        goto CPyL62;
CPyL41: ;
    cpy_r_r77 = (PyObject *)CPyType__matchers___HashMatcher;
    cpy_r_r78 = CPyStatics[68]; /* '__instances__' */
    cpy_r_r79 = CPyObject_GetAttr(cpy_r_r77, cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 136, CPyStatic__matchers___globals);
        goto CPyL45;
    }
    if (likely(PyList_Check(cpy_r_r79)))
        cpy_r_r80 = cpy_r_r79;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/_matchers.py", "__init__", 136, CPyStatic__matchers___globals, "list", cpy_r_r79);
        goto CPyL45;
    }
    cpy_r_r81 = PyList_Append(cpy_r_r80, cpy_r_self);
    CPy_DECREF(cpy_r_r80);
    cpy_r_r82 = cpy_r_r81 >= 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 136, CPyStatic__matchers___globals);
        goto CPyL45;
    }
    return 1;
CPyL45: ;
    cpy_r_r83 = 2;
    return cpy_r_r83;
CPyL46: ;
    CPy_DecRef(cpy_r_hashes);
    goto CPyL45;
CPyL47: ;
    CPy_DECREF(cpy_r_hashes);
    goto CPyL3;
CPyL48: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL45;
CPyL49: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL36;
CPyL50: ;
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r14);
    goto CPyL45;
CPyL51: ;
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_txhash);
    goto CPyL45;
CPyL52: ;
    CPy_DECREF(cpy_r_r29);
    goto CPyL28;
CPyL53: ;
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_txhash);
    CPy_DecRef(cpy_r_r29);
    goto CPyL45;
CPyL54: ;
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_txhash);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r41);
    goto CPyL45;
CPyL55: ;
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r29);
    goto CPyL20;
CPyL56: ;
    CPy_DECREF(cpy_r_r41);
    goto CPyL27;
CPyL57: ;
    CPy_DecRef(cpy_r_r41);
    goto CPyL45;
CPyL58: ;
    CPy_DecRef(cpy_r_r45);
    goto CPyL45;
CPyL59: ;
    CPy_DecRef(cpy_r_r48);
    goto CPyL45;
CPyL60: ;
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_txhash);
    goto CPyL31;
CPyL61: ;
    CPy_DECREF(cpy_r_r65);
    goto CPyL34;
CPyL62: ;
    CPy_DECREF(cpy_r_r76);
    goto CPyL41;
}

PyObject *CPyPy__matchers___HashMatcher_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"txgroup", "hashes", 0};
    PyObject *obj_txgroup;
    PyObject *obj_hashes;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO", "__init__", kwlist, &obj_txgroup, &obj_hashes)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__matchers___HashMatcher))
        arg_self = obj_self;
    else {
        CPy_TypeError("dao_treasury.sorting._matchers.HashMatcher", obj_self); 
        goto fail;
    }
    PyObject *arg_txgroup = obj_txgroup;
    PyObject *arg_hashes = obj_hashes;
    char retval = CPyDef__matchers___HashMatcher_____init__(arg_self, arg_txgroup, arg_hashes);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__init__", 118, CPyStatic__matchers___globals);
    return NULL;
}

PyObject *CPyDef__matchers___HashMatcher_____repr__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    cpy_r_r0 = CPyStatics[221]; /* ('TxGroup',) */
    cpy_r_r1 = CPyStatics[92]; /* 'dao_treasury.db' */
    cpy_r_r2 = CPyStatic__matchers___globals;
    cpy_r_r3 = CPyImport_ImportFromMany(cpy_r_r1, cpy_r_r0, cpy_r_r0, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__repr__", 140, CPyStatic__matchers___globals);
        goto CPyL13;
    }
    CPyModule_dao_treasury___db = cpy_r_r3;
    CPy_INCREF(CPyModule_dao_treasury___db);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r4 = CPyStatic__matchers___globals;
    cpy_r_r5 = CPyStatics[63]; /* 'TxGroup' */
    cpy_r_r6 = CPyDict_GetItem(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__repr__", 142, CPyStatic__matchers___globals);
        goto CPyL13;
    }
    cpy_r_r7 = ((dao_treasury___sorting____matchers___HashMatcherObject *)cpy_r_self)->_txgroup_id;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("dao_treasury/sorting/_matchers.py", "__repr__", "HashMatcher", "txgroup_id", 142, CPyStatic__matchers___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r7);
CPyL3: ;
    cpy_r_r8 = CPyStatics[93]; /* 'get' */
    PyObject *cpy_r_r9[2] = {cpy_r_r6, cpy_r_r7};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = CPyStatics[222]; /* ('txgroup_id',) */
    cpy_r_r12 = PyObject_VectorcallMethod(cpy_r_r8, cpy_r_r10, 9223372036854775809ULL, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__repr__", 142, CPyStatic__matchers___globals);
        goto CPyL15;
    }
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r13 = PyObject_Type(cpy_r_self);
    cpy_r_r14 = CPyStatics[72]; /* '__name__' */
    cpy_r_r15 = CPyObject_GetAttr(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__repr__", 143, CPyStatic__matchers___globals);
        goto CPyL16;
    }
    if (likely(PyUnicode_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/_matchers.py", "__repr__", 143, CPyStatic__matchers___globals, "str", cpy_r_r15);
        goto CPyL16;
    }
    cpy_r_r17 = CPyStatics[95]; /* "(txgroup='" */
    cpy_r_r18 = CPyStatics[96]; /* 'full_string' */
    cpy_r_r19 = CPyObject_GetAttr(cpy_r_r12, cpy_r_r18);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__repr__", 143, CPyStatic__matchers___globals);
        goto CPyL17;
    }
    cpy_r_r20 = PyObject_Str(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__repr__", 143, CPyStatic__matchers___globals);
        goto CPyL17;
    }
    cpy_r_r21 = CPyStatics[100]; /* "', hashes=" */
    cpy_r_r22 = CPyDef__matchers____Matcher___values(cpy_r_self);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__repr__", 143, CPyStatic__matchers___globals);
        goto CPyL18;
    }
CPyL9: ;
    cpy_r_r23 = PySequence_List(cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__repr__", 143, CPyStatic__matchers___globals);
        goto CPyL18;
    }
    cpy_r_r24 = PyObject_Str(cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__repr__", 143, CPyStatic__matchers___globals);
        goto CPyL18;
    }
    cpy_r_r25 = CPyStatics[84]; /* ')' */
    cpy_r_r26 = CPyStr_Build(6, cpy_r_r16, cpy_r_r17, cpy_r_r20, cpy_r_r21, cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__repr__", 143, CPyStatic__matchers___globals);
        goto CPyL13;
    }
    return cpy_r_r26;
CPyL13: ;
    cpy_r_r27 = NULL;
    return cpy_r_r27;
CPyL14: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL13;
CPyL15: ;
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r7);
    goto CPyL13;
CPyL16: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL13;
CPyL17: ;
    CPy_DecRef(cpy_r_r16);
    goto CPyL13;
CPyL18: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r20);
    goto CPyL13;
}

PyObject *CPyPy__matchers___HashMatcher_____repr__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__repr__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__matchers___HashMatcher))
        arg_self = obj_self;
    else {
        CPy_TypeError("dao_treasury.sorting._matchers.HashMatcher", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef__matchers___HashMatcher_____repr__(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "__repr__", 139, CPyStatic__matchers___globals);
    return NULL;
}

char CPyDef__matchers_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject **cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    int32_t cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    int32_t cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    int32_t cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    int32_t cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    int32_t cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    int32_t cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    int32_t cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject **cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    int32_t cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    int32_t cpy_r_r130;
    char cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    int32_t cpy_r_r134;
    char cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    int32_t cpy_r_r139;
    char cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    int32_t cpy_r_r144;
    char cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    char cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    int32_t cpy_r_r158;
    char cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    int32_t cpy_r_r162;
    char cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    int32_t cpy_r_r167;
    char cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    int32_t cpy_r_r172;
    char cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    char cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    int32_t cpy_r_r186;
    char cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    int32_t cpy_r_r190;
    char cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    int32_t cpy_r_r195;
    char cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    int32_t cpy_r_r200;
    char cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    int32_t cpy_r_r205;
    char cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject **cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    int32_t cpy_r_r217;
    char cpy_r_r218;
    char cpy_r_r219;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[26]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", -1, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[211]; /* ('getLogger',) */
    cpy_r_r6 = CPyStatics[28]; /* 'logging' */
    cpy_r_r7 = CPyStatic__matchers___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 1, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    CPyModule_logging = cpy_r_r8;
    CPy_INCREF(CPyModule_logging);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[223]; /* ('ClassVar', 'Dict', 'Final', 'Iterable', 'List',
                                   'Optional', 'Set', 'final') */
    cpy_r_r10 = CPyStatics[31]; /* 'typing' */
    cpy_r_r11 = CPyStatic__matchers___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 2, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[224]; /* ('ChecksumAddress', 'HexAddress', 'HexStr') */
    cpy_r_r14 = CPyStatics[110]; /* 'eth_typing' */
    cpy_r_r15 = CPyStatic__matchers___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 4, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    CPyModule_eth_typing = cpy_r_r16;
    CPy_INCREF(CPyModule_eth_typing);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[225]; /* ('is_hexstr',) */
    cpy_r_r18 = CPyStatics[111]; /* 'eth_utils' */
    cpy_r_r19 = CPyStatic__matchers___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 5, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    CPyModule_eth_utils = cpy_r_r20;
    CPy_INCREF(CPyModule_eth_utils);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[226]; /* ('db_session',) */
    cpy_r_r22 = CPyStatics[113]; /* 'pony.orm' */
    cpy_r_r23 = CPyStatic__matchers___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 6, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    CPyModule_pony___orm = cpy_r_r24;
    CPy_INCREF(CPyModule_pony___orm);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[227]; /* ('Self',) */
    cpy_r_r26 = CPyStatics[115]; /* 'typing_extensions' */
    cpy_r_r27 = CPyStatic__matchers___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 7, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    CPyModule_typing_extensions = cpy_r_r28;
    CPy_INCREF(CPyModule_typing_extensions);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[228]; /* ('convert',) */
    cpy_r_r30 = CPyStatics[116]; /* 'y' */
    cpy_r_r31 = CPyStatic__matchers___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 8, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    CPyModule_y = cpy_r_r32;
    CPy_INCREF(CPyModule_y);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[220]; /* ('TxGroupDbid',) */
    cpy_r_r34 = CPyStatics[59]; /* 'dao_treasury.types' */
    cpy_r_r35 = CPyStatic__matchers___globals;
    cpy_r_r36 = CPyImport_ImportFromMany(cpy_r_r34, cpy_r_r33, cpy_r_r33, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 10, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    CPyModule_dao_treasury___types = cpy_r_r36;
    CPy_INCREF(CPyModule_dao_treasury___types);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r37 = CPyStatics[36]; /* 'dao_treasury' */
    cpy_r_r38 = CPyStatic__matchers___globals;
    cpy_r_r39 = CPyStatics[27]; /* 'getLogger' */
    cpy_r_r40 = CPyDict_GetItem(cpy_r_r38, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 13, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    PyObject *cpy_r_r41[1] = {cpy_r_r37};
    cpy_r_r42 = (PyObject **)&cpy_r_r41;
    cpy_r_r43 = _PyObject_Vectorcall(cpy_r_r40, cpy_r_r42, 1, 0);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 13, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    CPyStatic__matchers___logger = cpy_r_r43;
    CPy_INCREF(CPyStatic__matchers___logger);
    cpy_r_r44 = CPyStatic__matchers___globals;
    cpy_r_r45 = CPyStatics[61]; /* 'logger' */
    cpy_r_r46 = CPyDict_SetItem(cpy_r_r44, cpy_r_r45, cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r47 = cpy_r_r46 >= 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 13, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    cpy_r_r48 = NULL;
    cpy_r_r49 = CPyStatics[43]; /* 'dao_treasury.sorting._matchers' */
    cpy_r_r50 = (PyObject *)CPyType__matchers____Matcher_template;
    cpy_r_r51 = CPyType_FromTemplate(cpy_r_r50, cpy_r_r48, cpy_r_r49);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 16, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    cpy_r_r52 = CPyDef__matchers____Matcher_trait_vtable_setup();
    if (unlikely(cpy_r_r52 == 2)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", -1, CPyStatic__matchers___globals);
        goto CPyL73;
    }
    cpy_r_r53 = CPyStatics[117]; /* '__mypyc_attrs__' */
    cpy_r_r54 = CPyStatics[94]; /* 'txgroup_id' */
    cpy_r_r55 = CPyStatics[118]; /* '__one_value' */
    cpy_r_r56 = CPyStatics[119]; /* '__value' */
    cpy_r_r57 = CPyStatics[120]; /* '__values' */
    cpy_r_r58 = PyTuple_Pack(4, cpy_r_r54, cpy_r_r55, cpy_r_r56, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 16, CPyStatic__matchers___globals);
        goto CPyL73;
    }
    cpy_r_r59 = PyObject_SetAttr(cpy_r_r51, cpy_r_r53, cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r60 = cpy_r_r59 >= 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 16, CPyStatic__matchers___globals);
        goto CPyL73;
    }
    CPyType__matchers____Matcher = (PyTypeObject *)cpy_r_r51;
    CPy_INCREF(CPyType__matchers____Matcher);
    cpy_r_r61 = CPyStatic__matchers___globals;
    cpy_r_r62 = CPyStatics[39]; /* '_Matcher' */
    cpy_r_r63 = CPyDict_SetItem(cpy_r_r61, cpy_r_r62, cpy_r_r51);
    CPy_DECREF(cpy_r_r51);
    cpy_r_r64 = cpy_r_r63 >= 0;
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 16, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    cpy_r_r65 = (PyObject *)CPyType__matchers____Matcher;
    cpy_r_r66 = PyTuple_Pack(1, cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 54, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    cpy_r_r67 = CPyStatics[43]; /* 'dao_treasury.sorting._matchers' */
    cpy_r_r68 = (PyObject *)CPyType__matchers____HexStringMatcher_template;
    cpy_r_r69 = CPyType_FromTemplate(cpy_r_r68, cpy_r_r66, cpy_r_r67);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 54, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    cpy_r_r70 = CPyDef__matchers____HexStringMatcher_trait_vtable_setup();
    if (unlikely(cpy_r_r70 == 2)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", -1, CPyStatic__matchers___globals);
        goto CPyL74;
    }
    cpy_r_r71 = CPyStatics[117]; /* '__mypyc_attrs__' */
    cpy_r_r72 = CPyStatics[94]; /* 'txgroup_id' */
    cpy_r_r73 = CPyStatics[118]; /* '__one_value' */
    cpy_r_r74 = CPyStatics[119]; /* '__value' */
    cpy_r_r75 = CPyStatics[120]; /* '__values' */
    cpy_r_r76 = PyTuple_Pack(4, cpy_r_r72, cpy_r_r73, cpy_r_r74, cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 54, CPyStatic__matchers___globals);
        goto CPyL74;
    }
    cpy_r_r77 = PyObject_SetAttr(cpy_r_r69, cpy_r_r71, cpy_r_r76);
    CPy_DECREF(cpy_r_r76);
    cpy_r_r78 = cpy_r_r77 >= 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 54, CPyStatic__matchers___globals);
        goto CPyL74;
    }
    CPyType__matchers____HexStringMatcher = (PyTypeObject *)cpy_r_r69;
    CPy_INCREF(CPyType__matchers____HexStringMatcher);
    cpy_r_r79 = CPyStatic__matchers___globals;
    cpy_r_r80 = CPyStatics[121]; /* '_HexStringMatcher' */
    cpy_r_r81 = CPyDict_SetItem(cpy_r_r79, cpy_r_r80, cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    cpy_r_r82 = cpy_r_r81 >= 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 54, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    cpy_r_r83 = (PyObject *)CPyType__matchers____HexStringMatcher;
    cpy_r_r84 = PyTuple_Pack(1, cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 69, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    cpy_r_r85 = CPyStatics[43]; /* 'dao_treasury.sorting._matchers' */
    cpy_r_r86 = (PyObject *)CPyType__matchers____AddressMatcher_template;
    cpy_r_r87 = CPyType_FromTemplate(cpy_r_r86, cpy_r_r84, cpy_r_r85);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 69, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    cpy_r_r88 = CPyDef__matchers____AddressMatcher_trait_vtable_setup();
    if (unlikely(cpy_r_r88 == 2)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", -1, CPyStatic__matchers___globals);
        goto CPyL75;
    }
    cpy_r_r89 = CPyStatics[117]; /* '__mypyc_attrs__' */
    cpy_r_r90 = CPyStatics[94]; /* 'txgroup_id' */
    cpy_r_r91 = CPyStatics[118]; /* '__one_value' */
    cpy_r_r92 = CPyStatics[119]; /* '__value' */
    cpy_r_r93 = CPyStatics[120]; /* '__values' */
    cpy_r_r94 = PyTuple_Pack(4, cpy_r_r90, cpy_r_r91, cpy_r_r92, cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 69, CPyStatic__matchers___globals);
        goto CPyL75;
    }
    cpy_r_r95 = PyObject_SetAttr(cpy_r_r87, cpy_r_r89, cpy_r_r94);
    CPy_DECREF(cpy_r_r94);
    cpy_r_r96 = cpy_r_r95 >= 0;
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 69, CPyStatic__matchers___globals);
        goto CPyL75;
    }
    CPyType__matchers____AddressMatcher = (PyTypeObject *)cpy_r_r87;
    CPy_INCREF(CPyType__matchers____AddressMatcher);
    cpy_r_r97 = CPyStatic__matchers___globals;
    cpy_r_r98 = CPyStatics[122]; /* '_AddressMatcher' */
    cpy_r_r99 = CPyDict_SetItem(cpy_r_r97, cpy_r_r98, cpy_r_r87);
    CPy_DECREF(cpy_r_r87);
    cpy_r_r100 = cpy_r_r99 >= 0;
    if (unlikely(!cpy_r_r100)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 69, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    cpy_r_r101 = (PyObject *)CPyType__matchers____AddressMatcher;
    cpy_r_r102 = CPyStatics[81]; /* 'expected_length' */
    cpy_r_r103 = CPyStatics[206]; /* 42 */
    cpy_r_r104 = PyObject_SetAttr(cpy_r_r101, cpy_r_r102, cpy_r_r103);
    cpy_r_r105 = cpy_r_r104 >= 0;
    if (unlikely(!cpy_r_r105)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 70, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    cpy_r_r106 = (PyObject *)CPyType__matchers____AddressMatcher;
    cpy_r_r107 = CPyStatics[123]; /* '__repr__' */
    cpy_r_r108 = CPyObject_GetAttr(cpy_r_r106, cpy_r_r107);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 93, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    cpy_r_r109 = CPyStatic__matchers___globals;
    cpy_r_r110 = CPyStatics[112]; /* 'db_session' */
    cpy_r_r111 = CPyDict_GetItem(cpy_r_r109, cpy_r_r110);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 92, CPyStatic__matchers___globals);
        goto CPyL76;
    }
    PyObject *cpy_r_r112[1] = {cpy_r_r108};
    cpy_r_r113 = (PyObject **)&cpy_r_r112;
    cpy_r_r114 = _PyObject_Vectorcall(cpy_r_r111, cpy_r_r113, 1, 0);
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 93, CPyStatic__matchers___globals);
        goto CPyL76;
    }
    CPy_DECREF(cpy_r_r108);
    cpy_r_r115 = CPyStatics[123]; /* '__repr__' */
    cpy_r_r116 = PyObject_SetAttr(cpy_r_r106, cpy_r_r115, cpy_r_r114);
    CPy_DECREF(cpy_r_r114);
    cpy_r_r117 = cpy_r_r116 >= 0;
    if (unlikely(!cpy_r_r117)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 93, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    cpy_r_r118 = (PyObject *)CPyType__matchers____AddressMatcher;
    cpy_r_r119 = PyTuple_Pack(1, cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 101, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    cpy_r_r120 = CPyStatics[43]; /* 'dao_treasury.sorting._matchers' */
    cpy_r_r121 = (PyObject *)CPyType__matchers___FromAddressMatcher_template;
    cpy_r_r122 = CPyType_FromTemplate(cpy_r_r121, cpy_r_r119, cpy_r_r120);
    CPy_DECREF(cpy_r_r119);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 101, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    cpy_r_r123 = CPyDef__matchers___FromAddressMatcher_trait_vtable_setup();
    if (unlikely(cpy_r_r123 == 2)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", -1, CPyStatic__matchers___globals);
        goto CPyL77;
    }
    cpy_r_r124 = CPyStatics[117]; /* '__mypyc_attrs__' */
    cpy_r_r125 = CPyStatics[94]; /* 'txgroup_id' */
    cpy_r_r126 = CPyStatics[118]; /* '__one_value' */
    cpy_r_r127 = CPyStatics[119]; /* '__value' */
    cpy_r_r128 = CPyStatics[120]; /* '__values' */
    cpy_r_r129 = PyTuple_Pack(4, cpy_r_r125, cpy_r_r126, cpy_r_r127, cpy_r_r128);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 101, CPyStatic__matchers___globals);
        goto CPyL77;
    }
    cpy_r_r130 = PyObject_SetAttr(cpy_r_r122, cpy_r_r124, cpy_r_r129);
    CPy_DECREF(cpy_r_r129);
    cpy_r_r131 = cpy_r_r130 >= 0;
    if (unlikely(!cpy_r_r131)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 101, CPyStatic__matchers___globals);
        goto CPyL77;
    }
    CPyType__matchers___FromAddressMatcher = (PyTypeObject *)cpy_r_r122;
    CPy_INCREF(CPyType__matchers___FromAddressMatcher);
    cpy_r_r132 = CPyStatic__matchers___globals;
    cpy_r_r133 = CPyStatics[40]; /* 'FromAddressMatcher' */
    cpy_r_r134 = CPyDict_SetItem(cpy_r_r132, cpy_r_r133, cpy_r_r122);
    CPy_DECREF(cpy_r_r122);
    cpy_r_r135 = cpy_r_r134 >= 0;
    if (unlikely(!cpy_r_r135)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 101, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    cpy_r_r136 = (PyObject *)CPyType__matchers___FromAddressMatcher;
    cpy_r_r137 = PyList_New(0);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 102, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    cpy_r_r138 = CPyStatics[68]; /* '__instances__' */
    cpy_r_r139 = PyObject_SetAttr(cpy_r_r136, cpy_r_r138, cpy_r_r137);
    CPy_DECREF(cpy_r_r137);
    cpy_r_r140 = cpy_r_r139 >= 0;
    if (unlikely(!cpy_r_r140)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 102, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    cpy_r_r141 = (PyObject *)CPyType__matchers___FromAddressMatcher;
    cpy_r_r142 = PyDict_New();
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 103, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    cpy_r_r143 = CPyStatics[66]; /* '__cache__' */
    cpy_r_r144 = PyObject_SetAttr(cpy_r_r141, cpy_r_r143, cpy_r_r142);
    CPy_DECREF(cpy_r_r142);
    cpy_r_r145 = cpy_r_r144 >= 0;
    if (unlikely(!cpy_r_r145)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 103, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    cpy_r_r146 = (PyObject *)CPyType__matchers____AddressMatcher;
    cpy_r_r147 = PyTuple_Pack(1, cpy_r_r146);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 107, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    cpy_r_r148 = CPyStatics[43]; /* 'dao_treasury.sorting._matchers' */
    cpy_r_r149 = (PyObject *)CPyType__matchers___ToAddressMatcher_template;
    cpy_r_r150 = CPyType_FromTemplate(cpy_r_r149, cpy_r_r147, cpy_r_r148);
    CPy_DECREF(cpy_r_r147);
    if (unlikely(cpy_r_r150 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 107, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    cpy_r_r151 = CPyDef__matchers___ToAddressMatcher_trait_vtable_setup();
    if (unlikely(cpy_r_r151 == 2)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", -1, CPyStatic__matchers___globals);
        goto CPyL78;
    }
    cpy_r_r152 = CPyStatics[117]; /* '__mypyc_attrs__' */
    cpy_r_r153 = CPyStatics[94]; /* 'txgroup_id' */
    cpy_r_r154 = CPyStatics[118]; /* '__one_value' */
    cpy_r_r155 = CPyStatics[119]; /* '__value' */
    cpy_r_r156 = CPyStatics[120]; /* '__values' */
    cpy_r_r157 = PyTuple_Pack(4, cpy_r_r153, cpy_r_r154, cpy_r_r155, cpy_r_r156);
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 107, CPyStatic__matchers___globals);
        goto CPyL78;
    }
    cpy_r_r158 = PyObject_SetAttr(cpy_r_r150, cpy_r_r152, cpy_r_r157);
    CPy_DECREF(cpy_r_r157);
    cpy_r_r159 = cpy_r_r158 >= 0;
    if (unlikely(!cpy_r_r159)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 107, CPyStatic__matchers___globals);
        goto CPyL78;
    }
    CPyType__matchers___ToAddressMatcher = (PyTypeObject *)cpy_r_r150;
    CPy_INCREF(CPyType__matchers___ToAddressMatcher);
    cpy_r_r160 = CPyStatic__matchers___globals;
    cpy_r_r161 = CPyStatics[42]; /* 'ToAddressMatcher' */
    cpy_r_r162 = CPyDict_SetItem(cpy_r_r160, cpy_r_r161, cpy_r_r150);
    CPy_DECREF(cpy_r_r150);
    cpy_r_r163 = cpy_r_r162 >= 0;
    if (unlikely(!cpy_r_r163)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 107, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    cpy_r_r164 = (PyObject *)CPyType__matchers___ToAddressMatcher;
    cpy_r_r165 = PyList_New(0);
    if (unlikely(cpy_r_r165 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 108, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    cpy_r_r166 = CPyStatics[68]; /* '__instances__' */
    cpy_r_r167 = PyObject_SetAttr(cpy_r_r164, cpy_r_r166, cpy_r_r165);
    CPy_DECREF(cpy_r_r165);
    cpy_r_r168 = cpy_r_r167 >= 0;
    if (unlikely(!cpy_r_r168)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 108, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    cpy_r_r169 = (PyObject *)CPyType__matchers___ToAddressMatcher;
    cpy_r_r170 = PyDict_New();
    if (unlikely(cpy_r_r170 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 109, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    cpy_r_r171 = CPyStatics[66]; /* '__cache__' */
    cpy_r_r172 = PyObject_SetAttr(cpy_r_r169, cpy_r_r171, cpy_r_r170);
    CPy_DECREF(cpy_r_r170);
    cpy_r_r173 = cpy_r_r172 >= 0;
    if (unlikely(!cpy_r_r173)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 109, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    cpy_r_r174 = (PyObject *)CPyType__matchers____HexStringMatcher;
    cpy_r_r175 = PyTuple_Pack(1, cpy_r_r174);
    if (unlikely(cpy_r_r175 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 113, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    cpy_r_r176 = CPyStatics[43]; /* 'dao_treasury.sorting._matchers' */
    cpy_r_r177 = (PyObject *)CPyType__matchers___HashMatcher_template;
    cpy_r_r178 = CPyType_FromTemplate(cpy_r_r177, cpy_r_r175, cpy_r_r176);
    CPy_DECREF(cpy_r_r175);
    if (unlikely(cpy_r_r178 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 113, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    cpy_r_r179 = CPyDef__matchers___HashMatcher_trait_vtable_setup();
    if (unlikely(cpy_r_r179 == 2)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", -1, CPyStatic__matchers___globals);
        goto CPyL79;
    }
    cpy_r_r180 = CPyStatics[117]; /* '__mypyc_attrs__' */
    cpy_r_r181 = CPyStatics[94]; /* 'txgroup_id' */
    cpy_r_r182 = CPyStatics[118]; /* '__one_value' */
    cpy_r_r183 = CPyStatics[119]; /* '__value' */
    cpy_r_r184 = CPyStatics[120]; /* '__values' */
    cpy_r_r185 = PyTuple_Pack(4, cpy_r_r181, cpy_r_r182, cpy_r_r183, cpy_r_r184);
    if (unlikely(cpy_r_r185 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 113, CPyStatic__matchers___globals);
        goto CPyL79;
    }
    cpy_r_r186 = PyObject_SetAttr(cpy_r_r178, cpy_r_r180, cpy_r_r185);
    CPy_DECREF(cpy_r_r185);
    cpy_r_r187 = cpy_r_r186 >= 0;
    if (unlikely(!cpy_r_r187)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 113, CPyStatic__matchers___globals);
        goto CPyL79;
    }
    CPyType__matchers___HashMatcher = (PyTypeObject *)cpy_r_r178;
    CPy_INCREF(CPyType__matchers___HashMatcher);
    cpy_r_r188 = CPyStatic__matchers___globals;
    cpy_r_r189 = CPyStatics[41]; /* 'HashMatcher' */
    cpy_r_r190 = CPyDict_SetItem(cpy_r_r188, cpy_r_r189, cpy_r_r178);
    CPy_DECREF(cpy_r_r178);
    cpy_r_r191 = cpy_r_r190 >= 0;
    if (unlikely(!cpy_r_r191)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 113, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    cpy_r_r192 = (PyObject *)CPyType__matchers___HashMatcher;
    cpy_r_r193 = CPyStatics[81]; /* 'expected_length' */
    cpy_r_r194 = CPyStatics[207]; /* 66 */
    cpy_r_r195 = PyObject_SetAttr(cpy_r_r192, cpy_r_r193, cpy_r_r194);
    cpy_r_r196 = cpy_r_r195 >= 0;
    if (unlikely(!cpy_r_r196)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 114, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    cpy_r_r197 = (PyObject *)CPyType__matchers___HashMatcher;
    cpy_r_r198 = PyList_New(0);
    if (unlikely(cpy_r_r198 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 115, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    cpy_r_r199 = CPyStatics[68]; /* '__instances__' */
    cpy_r_r200 = PyObject_SetAttr(cpy_r_r197, cpy_r_r199, cpy_r_r198);
    CPy_DECREF(cpy_r_r198);
    cpy_r_r201 = cpy_r_r200 >= 0;
    if (unlikely(!cpy_r_r201)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 115, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    cpy_r_r202 = (PyObject *)CPyType__matchers___HashMatcher;
    cpy_r_r203 = PyDict_New();
    if (unlikely(cpy_r_r203 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 116, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    cpy_r_r204 = CPyStatics[66]; /* '__cache__' */
    cpy_r_r205 = PyObject_SetAttr(cpy_r_r202, cpy_r_r204, cpy_r_r203);
    CPy_DECREF(cpy_r_r203);
    cpy_r_r206 = cpy_r_r205 >= 0;
    if (unlikely(!cpy_r_r206)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 116, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    cpy_r_r207 = (PyObject *)CPyType__matchers___HashMatcher;
    cpy_r_r208 = CPyStatics[123]; /* '__repr__' */
    cpy_r_r209 = CPyObject_GetAttr(cpy_r_r207, cpy_r_r208);
    if (unlikely(cpy_r_r209 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 139, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    cpy_r_r210 = CPyStatic__matchers___globals;
    cpy_r_r211 = CPyStatics[112]; /* 'db_session' */
    cpy_r_r212 = CPyDict_GetItem(cpy_r_r210, cpy_r_r211);
    if (unlikely(cpy_r_r212 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 138, CPyStatic__matchers___globals);
        goto CPyL80;
    }
    PyObject *cpy_r_r213[1] = {cpy_r_r209};
    cpy_r_r214 = (PyObject **)&cpy_r_r213;
    cpy_r_r215 = _PyObject_Vectorcall(cpy_r_r212, cpy_r_r214, 1, 0);
    CPy_DECREF(cpy_r_r212);
    if (unlikely(cpy_r_r215 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 139, CPyStatic__matchers___globals);
        goto CPyL80;
    }
    CPy_DECREF(cpy_r_r209);
    cpy_r_r216 = CPyStatics[123]; /* '__repr__' */
    cpy_r_r217 = PyObject_SetAttr(cpy_r_r207, cpy_r_r216, cpy_r_r215);
    CPy_DECREF(cpy_r_r215);
    cpy_r_r218 = cpy_r_r217 >= 0;
    if (unlikely(!cpy_r_r218)) {
        CPy_AddTraceback("dao_treasury/sorting/_matchers.py", "<module>", 139, CPyStatic__matchers___globals);
        goto CPyL72;
    }
    return 1;
CPyL72: ;
    cpy_r_r219 = 2;
    return cpy_r_r219;
CPyL73: ;
    CPy_DecRef(cpy_r_r51);
    goto CPyL72;
CPyL74: ;
    CPy_DecRef(cpy_r_r69);
    goto CPyL72;
CPyL75: ;
    CPy_DecRef(cpy_r_r87);
    goto CPyL72;
CPyL76: ;
    CPy_DecRef(cpy_r_r108);
    goto CPyL72;
CPyL77: ;
    CPy_DecRef(cpy_r_r122);
    goto CPyL72;
CPyL78: ;
    CPy_DecRef(cpy_r_r150);
    goto CPyL72;
CPyL79: ;
    CPy_DecRef(cpy_r_r178);
    goto CPyL72;
CPyL80: ;
    CPy_DecRef(cpy_r_r209);
    goto CPyL72;
}

static int
_rules___Rules_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *_rules___Rules_setup(PyTypeObject *type);
PyObject *CPyDef__rules___Rules(PyObject *cpy_r_path);

static PyObject *
_rules___Rules_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType__rules___Rules) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = _rules___Rules_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy__rules___Rules_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
_rules___Rules_traverse(dao_treasury___sorting____rules___RulesObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_rules_dir);
    Py_VISIT(self->_revenue_dir);
    Py_VISIT(self->_cost_of_revenue_dir);
    Py_VISIT(self->_expenses_dir);
    Py_VISIT(self->_other_income_dir);
    Py_VISIT(self->_other_expense_dir);
    Py_VISIT(self->_ignore_dir);
    return 0;
}

static int
_rules___Rules_clear(dao_treasury___sorting____rules___RulesObject *self)
{
    Py_CLEAR(self->_rules_dir);
    Py_CLEAR(self->_revenue_dir);
    Py_CLEAR(self->_cost_of_revenue_dir);
    Py_CLEAR(self->_expenses_dir);
    Py_CLEAR(self->_other_income_dir);
    Py_CLEAR(self->_other_expense_dir);
    Py_CLEAR(self->_ignore_dir);
    return 0;
}

static void
_rules___Rules_dealloc(dao_treasury___sorting____rules___RulesObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, _rules___Rules_dealloc)
    _rules___Rules_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem _rules___Rules_vtable[5];
static bool
CPyDef__rules___Rules_trait_vtable_setup(void)
{
    CPyVTableItem _rules___Rules_vtable_scratch[] = {
        (CPyVTableItem)CPyDef__rules___Rules_____init__,
        (CPyVTableItem)CPyDef__rules___Rules_____build_matchers,
        (CPyVTableItem)CPyDef__rules___Rules_____build_matchers_for_all_groups,
        (CPyVTableItem)CPyDef__rules___Rules_____build_matchers_for_group,
        (CPyVTableItem)CPyDef__rules___Rules_____get_rule_file,
    };
    memcpy(_rules___Rules_vtable, _rules___Rules_vtable_scratch, sizeof(_rules___Rules_vtable));
    return 1;
}

static PyObject *
_rules___Rules_get___3_initialized(dao_treasury___sorting____rules___RulesObject *self, void *closure);
static int
_rules___Rules_set___3_initialized(dao_treasury___sorting____rules___RulesObject *self, PyObject *value, void *closure);
static PyObject *
_rules___Rules_get_rules_dir(dao_treasury___sorting____rules___RulesObject *self, void *closure);
static int
_rules___Rules_set_rules_dir(dao_treasury___sorting____rules___RulesObject *self, PyObject *value, void *closure);
static PyObject *
_rules___Rules_get_revenue_dir(dao_treasury___sorting____rules___RulesObject *self, void *closure);
static int
_rules___Rules_set_revenue_dir(dao_treasury___sorting____rules___RulesObject *self, PyObject *value, void *closure);
static PyObject *
_rules___Rules_get_cost_of_revenue_dir(dao_treasury___sorting____rules___RulesObject *self, void *closure);
static int
_rules___Rules_set_cost_of_revenue_dir(dao_treasury___sorting____rules___RulesObject *self, PyObject *value, void *closure);
static PyObject *
_rules___Rules_get_expenses_dir(dao_treasury___sorting____rules___RulesObject *self, void *closure);
static int
_rules___Rules_set_expenses_dir(dao_treasury___sorting____rules___RulesObject *self, PyObject *value, void *closure);
static PyObject *
_rules___Rules_get_other_income_dir(dao_treasury___sorting____rules___RulesObject *self, void *closure);
static int
_rules___Rules_set_other_income_dir(dao_treasury___sorting____rules___RulesObject *self, PyObject *value, void *closure);
static PyObject *
_rules___Rules_get_other_expense_dir(dao_treasury___sorting____rules___RulesObject *self, void *closure);
static int
_rules___Rules_set_other_expense_dir(dao_treasury___sorting____rules___RulesObject *self, PyObject *value, void *closure);
static PyObject *
_rules___Rules_get_ignore_dir(dao_treasury___sorting____rules___RulesObject *self, void *closure);
static int
_rules___Rules_set_ignore_dir(dao_treasury___sorting____rules___RulesObject *self, PyObject *value, void *closure);

static PyGetSetDef _rules___Rules_getseters[] = {
    {"__initialized",
     (getter)_rules___Rules_get___3_initialized, (setter)_rules___Rules_set___3_initialized,
     NULL, NULL},
    {"rules_dir",
     (getter)_rules___Rules_get_rules_dir, (setter)_rules___Rules_set_rules_dir,
     NULL, NULL},
    {"revenue_dir",
     (getter)_rules___Rules_get_revenue_dir, (setter)_rules___Rules_set_revenue_dir,
     NULL, NULL},
    {"cost_of_revenue_dir",
     (getter)_rules___Rules_get_cost_of_revenue_dir, (setter)_rules___Rules_set_cost_of_revenue_dir,
     NULL, NULL},
    {"expenses_dir",
     (getter)_rules___Rules_get_expenses_dir, (setter)_rules___Rules_set_expenses_dir,
     NULL, NULL},
    {"other_income_dir",
     (getter)_rules___Rules_get_other_income_dir, (setter)_rules___Rules_set_other_income_dir,
     NULL, NULL},
    {"other_expense_dir",
     (getter)_rules___Rules_get_other_expense_dir, (setter)_rules___Rules_set_other_expense_dir,
     NULL, NULL},
    {"ignore_dir",
     (getter)_rules___Rules_get_ignore_dir, (setter)_rules___Rules_set_ignore_dir,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef _rules___Rules_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy__rules___Rules_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__build_matchers",
     (PyCFunction)CPyPy__rules___Rules_____build_matchers,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__build_matchers_for_all_groups",
     (PyCFunction)CPyPy__rules___Rules_____build_matchers_for_all_groups,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__build_matchers_for_group",
     (PyCFunction)CPyPy__rules___Rules_____build_matchers_for_group,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get_rule_file",
     (PyCFunction)CPyPy__rules___Rules_____get_rule_file,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType__rules___Rules_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "Rules",
    .tp_new = _rules___Rules_new,
    .tp_dealloc = (destructor)_rules___Rules_dealloc,
    .tp_traverse = (traverseproc)_rules___Rules_traverse,
    .tp_clear = (inquiry)_rules___Rules_clear,
    .tp_getset = _rules___Rules_getseters,
    .tp_methods = _rules___Rules_methods,
    .tp_init = _rules___Rules_init,
    .tp_basicsize = sizeof(dao_treasury___sorting____rules___RulesObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType__rules___Rules_template = &CPyType__rules___Rules_template_;

static PyObject *
_rules___Rules_setup(PyTypeObject *type)
{
    dao_treasury___sorting____rules___RulesObject *self;
    self = (dao_treasury___sorting____rules___RulesObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = _rules___Rules_vtable;
    self->___initialized = 2;
    return (PyObject *)self;
}

PyObject *CPyDef__rules___Rules(PyObject *cpy_r_path)
{
    PyObject *self = _rules___Rules_setup(CPyType__rules___Rules);
    if (self == NULL)
        return NULL;
    char res = CPyDef__rules___Rules_____init__(self, cpy_r_path);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
_rules___Rules_get___3_initialized(dao_treasury___sorting____rules___RulesObject *self, void *closure)
{
    PyObject *retval = self->___initialized ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
_rules___Rules_set___3_initialized(dao_treasury___sorting____rules___RulesObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Rules' object attribute '__initialized' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->___initialized = tmp;
    return 0;
}

static PyObject *
_rules___Rules_get_rules_dir(dao_treasury___sorting____rules___RulesObject *self, void *closure)
{
    if (unlikely(self->_rules_dir == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'rules_dir' of 'Rules' undefined");
        return NULL;
    }
    CPy_INCREF(self->_rules_dir);
    PyObject *retval = self->_rules_dir;
    return retval;
}

static int
_rules___Rules_set_rules_dir(dao_treasury___sorting____rules___RulesObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Rules' object attribute 'rules_dir' cannot be deleted");
        return -1;
    }
    if (self->_rules_dir != NULL) {
        CPy_DECREF(self->_rules_dir);
    }
    PyObject *tmp = value;
    CPy_INCREF(tmp);
    self->_rules_dir = tmp;
    return 0;
}

static PyObject *
_rules___Rules_get_revenue_dir(dao_treasury___sorting____rules___RulesObject *self, void *closure)
{
    if (unlikely(self->_revenue_dir == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'revenue_dir' of 'Rules' undefined");
        return NULL;
    }
    CPy_INCREF(self->_revenue_dir);
    PyObject *retval = self->_revenue_dir;
    return retval;
}

static int
_rules___Rules_set_revenue_dir(dao_treasury___sorting____rules___RulesObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Rules' object attribute 'revenue_dir' cannot be deleted");
        return -1;
    }
    if (self->_revenue_dir != NULL) {
        CPy_DECREF(self->_revenue_dir);
    }
    PyObject *tmp = value;
    CPy_INCREF(tmp);
    self->_revenue_dir = tmp;
    return 0;
}

static PyObject *
_rules___Rules_get_cost_of_revenue_dir(dao_treasury___sorting____rules___RulesObject *self, void *closure)
{
    if (unlikely(self->_cost_of_revenue_dir == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'cost_of_revenue_dir' of 'Rules' undefined");
        return NULL;
    }
    CPy_INCREF(self->_cost_of_revenue_dir);
    PyObject *retval = self->_cost_of_revenue_dir;
    return retval;
}

static int
_rules___Rules_set_cost_of_revenue_dir(dao_treasury___sorting____rules___RulesObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Rules' object attribute 'cost_of_revenue_dir' cannot be deleted");
        return -1;
    }
    if (self->_cost_of_revenue_dir != NULL) {
        CPy_DECREF(self->_cost_of_revenue_dir);
    }
    PyObject *tmp = value;
    CPy_INCREF(tmp);
    self->_cost_of_revenue_dir = tmp;
    return 0;
}

static PyObject *
_rules___Rules_get_expenses_dir(dao_treasury___sorting____rules___RulesObject *self, void *closure)
{
    if (unlikely(self->_expenses_dir == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'expenses_dir' of 'Rules' undefined");
        return NULL;
    }
    CPy_INCREF(self->_expenses_dir);
    PyObject *retval = self->_expenses_dir;
    return retval;
}

static int
_rules___Rules_set_expenses_dir(dao_treasury___sorting____rules___RulesObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Rules' object attribute 'expenses_dir' cannot be deleted");
        return -1;
    }
    if (self->_expenses_dir != NULL) {
        CPy_DECREF(self->_expenses_dir);
    }
    PyObject *tmp = value;
    CPy_INCREF(tmp);
    self->_expenses_dir = tmp;
    return 0;
}

static PyObject *
_rules___Rules_get_other_income_dir(dao_treasury___sorting____rules___RulesObject *self, void *closure)
{
    if (unlikely(self->_other_income_dir == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'other_income_dir' of 'Rules' undefined");
        return NULL;
    }
    CPy_INCREF(self->_other_income_dir);
    PyObject *retval = self->_other_income_dir;
    return retval;
}

static int
_rules___Rules_set_other_income_dir(dao_treasury___sorting____rules___RulesObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Rules' object attribute 'other_income_dir' cannot be deleted");
        return -1;
    }
    if (self->_other_income_dir != NULL) {
        CPy_DECREF(self->_other_income_dir);
    }
    PyObject *tmp = value;
    CPy_INCREF(tmp);
    self->_other_income_dir = tmp;
    return 0;
}

static PyObject *
_rules___Rules_get_other_expense_dir(dao_treasury___sorting____rules___RulesObject *self, void *closure)
{
    if (unlikely(self->_other_expense_dir == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'other_expense_dir' of 'Rules' undefined");
        return NULL;
    }
    CPy_INCREF(self->_other_expense_dir);
    PyObject *retval = self->_other_expense_dir;
    return retval;
}

static int
_rules___Rules_set_other_expense_dir(dao_treasury___sorting____rules___RulesObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Rules' object attribute 'other_expense_dir' cannot be deleted");
        return -1;
    }
    if (self->_other_expense_dir != NULL) {
        CPy_DECREF(self->_other_expense_dir);
    }
    PyObject *tmp = value;
    CPy_INCREF(tmp);
    self->_other_expense_dir = tmp;
    return 0;
}

static PyObject *
_rules___Rules_get_ignore_dir(dao_treasury___sorting____rules___RulesObject *self, void *closure)
{
    if (unlikely(self->_ignore_dir == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'ignore_dir' of 'Rules' undefined");
        return NULL;
    }
    CPy_INCREF(self->_ignore_dir);
    PyObject *retval = self->_ignore_dir;
    return retval;
}

static int
_rules___Rules_set_ignore_dir(dao_treasury___sorting____rules___RulesObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Rules' object attribute 'ignore_dir' cannot be deleted");
        return -1;
    }
    if (self->_ignore_dir != NULL) {
        CPy_DECREF(self->_ignore_dir);
    }
    PyObject *tmp = value;
    CPy_INCREF(tmp);
    self->_ignore_dir = tmp;
    return 0;
}
static PyMethodDef _rulesmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef _rulesmodule = {
    PyModuleDef_HEAD_INIT,
    "dao_treasury.sorting._rules",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    _rulesmodule_methods
};

PyObject *CPyInit_dao_treasury___sorting____rules(void)
{
    PyObject* modname = NULL;
    if (CPyModule_dao_treasury___sorting____rules_internal) {
        Py_INCREF(CPyModule_dao_treasury___sorting____rules_internal);
        return CPyModule_dao_treasury___sorting____rules_internal;
    }
    CPyModule_dao_treasury___sorting____rules_internal = PyModule_Create(&_rulesmodule);
    if (unlikely(CPyModule_dao_treasury___sorting____rules_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_dao_treasury___sorting____rules_internal, "__name__");
    CPyStatic__rules___globals = PyModule_GetDict(CPyModule_dao_treasury___sorting____rules_internal);
    if (unlikely(CPyStatic__rules___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef__rules_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_dao_treasury___sorting____rules_internal;
    fail:
    Py_CLEAR(CPyModule_dao_treasury___sorting____rules_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic__rules___CHAINID);
    CPyStatic__rules___CHAINID = NULL;
    CPy_XDECREF(CPyStatic__rules___logger);
    CPyStatic__rules___logger = NULL;
    Py_CLEAR(CPyType__rules___Rules);
    return NULL;
}

char CPyDef__rules___Rules_____init__(PyObject *cpy_r_self, PyObject *cpy_r_path) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject **cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    ((dao_treasury___sorting____rules___RulesObject *)cpy_r_self)->___initialized = 0;
    CPy_INCREF(cpy_r_path);
    ((dao_treasury___sorting____rules___RulesObject *)cpy_r_self)->_rules_dir = cpy_r_path;
    cpy_r_r0 = CPyStatics[49]; /* 'revenue' */
    cpy_r_r1 = PyNumber_TrueDivide(cpy_r_path, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__init__", 23, CPyStatic__rules___globals);
        goto CPyL8;
    }
    ((dao_treasury___sorting____rules___RulesObject *)cpy_r_self)->_revenue_dir = cpy_r_r1;
    cpy_r_r2 = CPyStatics[44]; /* 'cost_of_revenue' */
    cpy_r_r3 = PyNumber_TrueDivide(cpy_r_path, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__init__", 24, CPyStatic__rules___globals);
        goto CPyL8;
    }
    ((dao_treasury___sorting____rules___RulesObject *)cpy_r_self)->_cost_of_revenue_dir = cpy_r_r3;
    cpy_r_r4 = CPyStatics[124]; /* 'expenses' */
    cpy_r_r5 = PyNumber_TrueDivide(cpy_r_path, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__init__", 25, CPyStatic__rules___globals);
        goto CPyL8;
    }
    ((dao_treasury___sorting____rules___RulesObject *)cpy_r_self)->_expenses_dir = cpy_r_r5;
    cpy_r_r6 = CPyStatics[48]; /* 'other_income' */
    cpy_r_r7 = PyNumber_TrueDivide(cpy_r_path, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__init__", 26, CPyStatic__rules___globals);
        goto CPyL8;
    }
    ((dao_treasury___sorting____rules___RulesObject *)cpy_r_self)->_other_income_dir = cpy_r_r7;
    cpy_r_r8 = CPyStatics[47]; /* 'other_expense' */
    cpy_r_r9 = PyNumber_TrueDivide(cpy_r_path, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__init__", 27, CPyStatic__rules___globals);
        goto CPyL8;
    }
    ((dao_treasury___sorting____rules___RulesObject *)cpy_r_self)->_other_expense_dir = cpy_r_r9;
    cpy_r_r10 = CPyStatics[46]; /* 'ignore' */
    cpy_r_r11 = PyNumber_TrueDivide(cpy_r_path, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__init__", 28, CPyStatic__rules___globals);
        goto CPyL8;
    }
    ((dao_treasury___sorting____rules___RulesObject *)cpy_r_self)->_ignore_dir = cpy_r_r11;
    cpy_r_r12 = CPyStatics[125]; /* '__build_matchers' */
    PyObject *cpy_r_r13[1] = {cpy_r_self};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = PyObject_VectorcallMethod(cpy_r_r12, cpy_r_r14, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__init__", 29, CPyStatic__rules___globals);
        goto CPyL8;
    } else
        goto CPyL9;
CPyL7: ;
    return 1;
CPyL8: ;
    cpy_r_r16 = 2;
    return cpy_r_r16;
CPyL9: ;
    CPy_DECREF(cpy_r_r15);
    goto CPyL7;
}

PyObject *CPyPy__rules___Rules_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"path", 0};
    PyObject *obj_path;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_path)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__rules___Rules))
        arg_self = obj_self;
    else {
        CPy_TypeError("dao_treasury.sorting._rules.Rules", obj_self); 
        goto fail;
    }
    PyObject *arg_path = obj_path;
    char retval = CPyDef__rules___Rules_____init__(arg_self, arg_path);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__init__", 20, CPyStatic__rules___globals);
    return NULL;
}

char CPyDef__rules___Rules_____build_matchers(PyObject *cpy_r_self) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    cpy_r_r0 = ((dao_treasury___sorting____rules___RulesObject *)cpy_r_self)->___initialized;
    if (!cpy_r_r0) goto CPyL5;
CPyL1: ;
    cpy_r_r1 = CPyStatics[126]; /* 'You cannot initialize the rules more than once' */
    cpy_r_r2 = CPyModule_builtins;
    cpy_r_r3 = CPyStatics[127]; /* 'RuntimeError' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers", 34, CPyStatic__rules___globals);
        goto CPyL9;
    }
    PyObject *cpy_r_r5[1] = {cpy_r_r1};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = _PyObject_Vectorcall(cpy_r_r4, cpy_r_r6, 1, 0);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers", 34, CPyStatic__rules___globals);
        goto CPyL9;
    }
    CPy_Raise(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(!0)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers", 34, CPyStatic__rules___globals);
        goto CPyL9;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r8 = CPyStatics[128]; /* 'match_on_hash' */
    cpy_r_r9 = (PyObject *)CPyType__matchers___HashMatcher;
    cpy_r_r10 = CPyDef__rules___Rules_____build_matchers_for_all_groups(cpy_r_self, cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers", 35, CPyStatic__rules___globals);
        goto CPyL9;
    }
    cpy_r_r11 = CPyStatics[129]; /* 'match_on_from_address' */
    cpy_r_r12 = (PyObject *)CPyType__matchers___FromAddressMatcher;
    cpy_r_r13 = CPyDef__rules___Rules_____build_matchers_for_all_groups(cpy_r_self, cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers", 36, CPyStatic__rules___globals);
        goto CPyL9;
    }
    cpy_r_r14 = CPyStatics[130]; /* 'match_on_to_address' */
    cpy_r_r15 = (PyObject *)CPyType__matchers___ToAddressMatcher;
    cpy_r_r16 = CPyDef__rules___Rules_____build_matchers_for_all_groups(cpy_r_self, cpy_r_r14, cpy_r_r15);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers", 37, CPyStatic__rules___globals);
        goto CPyL9;
    }
    ((dao_treasury___sorting____rules___RulesObject *)cpy_r_self)->___initialized = 1;
    return 1;
CPyL9: ;
    cpy_r_r18 = 2;
    return cpy_r_r18;
}

PyObject *CPyPy__rules___Rules_____build_matchers(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__build_matchers", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__rules___Rules))
        arg_self = obj_self;
    else {
        CPy_TypeError("dao_treasury.sorting._rules.Rules", obj_self); 
        goto fail;
    }
    char retval = CPyDef__rules___Rules_____build_matchers(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers", 32, CPyStatic__rules___globals);
    return NULL;
}

char CPyDef__rules___Rules_____build_matchers_for_all_groups(PyObject *cpy_r_self, PyObject *cpy_r_match_rules_filename, PyObject *cpy_r_matcher_cls) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    cpy_r_r0 = CPyStatics[131]; /* 'Revenue' */
    cpy_r_r1 = ((dao_treasury___sorting____rules___RulesObject *)cpy_r_self)->_revenue_dir;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef__rules___Rules_____build_matchers_for_group(cpy_r_self, cpy_r_r0, cpy_r_r1, cpy_r_match_rules_filename, cpy_r_matcher_cls);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_all_groups", 41, CPyStatic__rules___globals);
        goto CPyL7;
    }
    cpy_r_r3 = CPyStatics[132]; /* 'Cost of Revenue' */
    cpy_r_r4 = ((dao_treasury___sorting____rules___RulesObject *)cpy_r_self)->_cost_of_revenue_dir;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef__rules___Rules_____build_matchers_for_group(cpy_r_self, cpy_r_r3, cpy_r_r4, cpy_r_match_rules_filename, cpy_r_matcher_cls);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_all_groups", 42, CPyStatic__rules___globals);
        goto CPyL7;
    }
    cpy_r_r6 = CPyStatics[133]; /* 'Expenses' */
    cpy_r_r7 = ((dao_treasury___sorting____rules___RulesObject *)cpy_r_self)->_expenses_dir;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = CPyDef__rules___Rules_____build_matchers_for_group(cpy_r_self, cpy_r_r6, cpy_r_r7, cpy_r_match_rules_filename, cpy_r_matcher_cls);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_all_groups", 43, CPyStatic__rules___globals);
        goto CPyL7;
    }
    cpy_r_r9 = CPyStatics[134]; /* 'Other Income' */
    cpy_r_r10 = ((dao_treasury___sorting____rules___RulesObject *)cpy_r_self)->_other_income_dir;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = CPyDef__rules___Rules_____build_matchers_for_group(cpy_r_self, cpy_r_r9, cpy_r_r10, cpy_r_match_rules_filename, cpy_r_matcher_cls);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_all_groups", 44, CPyStatic__rules___globals);
        goto CPyL7;
    }
    cpy_r_r12 = CPyStatics[135]; /* 'Other Expenses' */
    cpy_r_r13 = ((dao_treasury___sorting____rules___RulesObject *)cpy_r_self)->_other_expense_dir;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = CPyDef__rules___Rules_____build_matchers_for_group(cpy_r_self, cpy_r_r12, cpy_r_r13, cpy_r_match_rules_filename, cpy_r_matcher_cls);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_all_groups", 45, CPyStatic__rules___globals);
        goto CPyL7;
    }
    cpy_r_r15 = CPyStatics[7]; /* 'Ignore' */
    cpy_r_r16 = ((dao_treasury___sorting____rules___RulesObject *)cpy_r_self)->_ignore_dir;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = CPyDef__rules___Rules_____build_matchers_for_group(cpy_r_self, cpy_r_r15, cpy_r_r16, cpy_r_match_rules_filename, cpy_r_matcher_cls);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_all_groups", 46, CPyStatic__rules___globals);
        goto CPyL7;
    }
    return 1;
CPyL7: ;
    cpy_r_r18 = 2;
    return cpy_r_r18;
}

PyObject *CPyPy__rules___Rules_____build_matchers_for_all_groups(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"match_rules_filename", "matcher_cls", 0};
    static CPyArg_Parser parser = {"OO:__build_matchers_for_all_groups", kwlist, 0};
    PyObject *obj_match_rules_filename;
    PyObject *obj_matcher_cls;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_match_rules_filename, &obj_matcher_cls)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__rules___Rules))
        arg_self = obj_self;
    else {
        CPy_TypeError("dao_treasury.sorting._rules.Rules", obj_self); 
        goto fail;
    }
    PyObject *arg_match_rules_filename;
    if (likely(PyUnicode_Check(obj_match_rules_filename)))
        arg_match_rules_filename = obj_match_rules_filename;
    else {
        CPy_TypeError("str", obj_match_rules_filename); 
        goto fail;
    }
    PyObject *arg_matcher_cls = obj_matcher_cls;
    char retval = CPyDef__rules___Rules_____build_matchers_for_all_groups(arg_self, arg_match_rules_filename, arg_matcher_cls);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_all_groups", 40, CPyStatic__rules___globals);
    return NULL;
}

char CPyDef__rules___Rules_____build_matchers_for_group(PyObject *cpy_r_self, PyObject *cpy_r_top_level_name, PyObject *cpy_r_rules, PyObject *cpy_r_filename, PyObject *cpy_r_matcher_cls) {
    PyObject *cpy_r_r0;
    tuple_T3OOO cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject **cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_parent;
    PyObject *cpy_r_r19;
    PyObject **cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject **cpy_r_r28;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject **cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject **cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyTagged cpy_r_r50;
    int64_t cpy_r_r51;
    CPyTagged cpy_r_r52;
    PyObject *cpy_r_r53;
    tuple_T4CIOO cpy_r_r54;
    CPyTagged cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_name;
    PyObject *cpy_r_hashes;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject **cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_txgroup_dbid;
    PyObject *cpy_r_r66;
    int32_t cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject **cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    int32_t cpy_r_r75;
    char cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    CPyTagged cpy_r_r79;
    int64_t cpy_r_r80;
    CPyTagged cpy_r_r81;
    PyObject *cpy_r_r82;
    tuple_T4CIOO cpy_r_r83;
    CPyTagged cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject **cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject **cpy_r_r96;
    PyObject *cpy_r_r97;
    char cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject **cpy_r_r104;
    PyObject *cpy_r_r105;
    char cpy_r_r106;
    char cpy_r_r107;
    char cpy_r_r108;
    cpy_r_r0 = CPyDef__rules___Rules_____get_rule_file(cpy_r_self, cpy_r_rules, cpy_r_filename);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_group", 56, CPyStatic__rules___globals);
        goto CPyL3;
    }
    goto CPyL10;
CPyL3: ;
    cpy_r_r1 = CPy_CatchError();
    cpy_r_r2 = CPyModule_builtins;
    cpy_r_r3 = CPyStatics[136]; /* 'FileNotFoundError' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_group", 57, CPyStatic__rules___globals);
        goto CPyL8;
    }
    cpy_r_r5 = CPy_ExceptionMatches(cpy_r_r4);
    CPy_DecRef(cpy_r_r4);
    if (!cpy_r_r5) goto CPyL6;
    CPy_RestoreExcInfo(cpy_r_r1);
    CPy_DecRef(cpy_r_r1.f0);
    CPy_DecRef(cpy_r_r1.f1);
    CPy_DecRef(cpy_r_r1.f2);
    return 1;
CPyL6: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL8;
    } else
        goto CPyL60;
CPyL7: ;
    CPy_Unreachable();
CPyL8: ;
    CPy_RestoreExcInfo(cpy_r_r1);
    CPy_DecRef(cpy_r_r1.f0);
    CPy_DecRef(cpy_r_r1.f1);
    CPy_DecRef(cpy_r_r1.f2);
    cpy_r_r6 = CPy_KeepPropagating();
    if (!cpy_r_r6) goto CPyL59;
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r7 = CPyStatics[221]; /* ('TxGroup',) */
    cpy_r_r8 = CPyStatics[92]; /* 'dao_treasury.db' */
    cpy_r_r9 = CPyStatic__rules___globals;
    cpy_r_r10 = CPyImport_ImportFromMany(cpy_r_r8, cpy_r_r7, cpy_r_r7, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_group", 60, CPyStatic__rules___globals);
        goto CPyL61;
    }
    CPyModule_dao_treasury___db = cpy_r_r10;
    CPy_INCREF(CPyModule_dao_treasury___db);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r11 = CPyStatic__rules___globals;
    cpy_r_r12 = CPyStatics[63]; /* 'TxGroup' */
    cpy_r_r13 = CPyDict_GetItem(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_group", 62, CPyStatic__rules___globals);
        goto CPyL61;
    }
    cpy_r_r14 = CPyStatics[137]; /* 'get_or_insert' */
    cpy_r_r15 = Py_None;
    PyObject *cpy_r_r16[3] = {cpy_r_r13, cpy_r_top_level_name, cpy_r_r15};
    cpy_r_r17 = (PyObject **)&cpy_r_r16;
    cpy_r_r18 = PyObject_VectorcallMethod(cpy_r_r14, cpy_r_r17, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_group", 62, CPyStatic__rules___globals);
        goto CPyL62;
    }
    CPy_DECREF(cpy_r_r13);
    cpy_r_parent = cpy_r_r18;
    cpy_r_r19 = CPyStatics[138]; /* 'read_bytes' */
    PyObject *cpy_r_r20[1] = {cpy_r_r0};
    cpy_r_r21 = (PyObject **)&cpy_r_r20;
    cpy_r_r22 = PyObject_VectorcallMethod(cpy_r_r19, cpy_r_r21, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_group", 63, CPyStatic__rules___globals);
        goto CPyL63;
    }
    CPy_DECREF(cpy_r_r0);
    if (likely(PyBytes_Check(cpy_r_r22) || PyByteArray_Check(cpy_r_r22)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_group", 63, CPyStatic__rules___globals, "bytes", cpy_r_r22);
        goto CPyL64;
    }
    cpy_r_r24 = CPyModule_yaml;
    cpy_r_r25 = CPyStatics[139]; /* 'safe_load' */
    cpy_r_r26 = CPyObject_GetAttr(cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_group", 63, CPyStatic__rules___globals);
        goto CPyL65;
    }
    PyObject *cpy_r_r27[1] = {cpy_r_r23};
    cpy_r_r28 = (PyObject **)&cpy_r_r27;
    cpy_r_r29 = _PyObject_Vectorcall(cpy_r_r26, cpy_r_r28, 1, 0);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_group", 63, CPyStatic__rules___globals);
        goto CPyL65;
    }
    CPy_DECREF(cpy_r_r23);
    cpy_r_r30 = PyObject_IsTrue(cpy_r_r29);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_group", 63, CPyStatic__rules___globals);
        goto CPyL66;
    }
    cpy_r_r32 = cpy_r_r30;
    if (cpy_r_r32) {
        goto CPyL26;
    } else
        goto CPyL67;
CPyL19: ;
    cpy_r_r33 = CPyStatic__rules___logger;
    if (likely(cpy_r_r33 != NULL)) goto CPyL22;
    PyErr_SetString(PyExc_NameError, "value for final name \"logger\" was not set");
    cpy_r_r34 = 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_group", 65, CPyStatic__rules___globals);
        goto CPyL59;
    }
    CPy_Unreachable();
CPyL22: ;
    cpy_r_r35 = CPyStatics[140]; /* 'no content in rule file: ' */
    cpy_r_r36 = PyObject_Str(cpy_r_rules);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_group", 65, CPyStatic__rules___globals);
        goto CPyL59;
    }
    cpy_r_r37 = CPyStr_Build(2, cpy_r_r35, cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_group", 65, CPyStatic__rules___globals);
        goto CPyL59;
    }
    cpy_r_r38 = CPyStatics[90]; /* 'warning' */
    PyObject *cpy_r_r39[2] = {cpy_r_r33, cpy_r_r37};
    cpy_r_r40 = (PyObject **)&cpy_r_r39;
    cpy_r_r41 = PyObject_VectorcallMethod(cpy_r_r38, cpy_r_r40, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_group", 65, CPyStatic__rules___globals);
        goto CPyL68;
    } else
        goto CPyL69;
CPyL25: ;
    CPy_DECREF(cpy_r_r37);
    return 1;
CPyL26: ;
    cpy_r_r42 = CPyStatic__rules___CHAINID;
    if (unlikely(cpy_r_r42 == NULL)) {
        goto CPyL70;
    } else
        goto CPyL29;
CPyL27: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"CHAINID\" was not set");
    cpy_r_r43 = 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_group", 68, CPyStatic__rules___globals);
        goto CPyL59;
    }
    CPy_Unreachable();
CPyL29: ;
    cpy_r_r44 = PyDict_New();
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_group", 68, CPyStatic__rules___globals);
        goto CPyL66;
    }
    cpy_r_r45 = CPyStatics[93]; /* 'get' */
    PyObject *cpy_r_r46[3] = {cpy_r_r29, cpy_r_r42, cpy_r_r44};
    cpy_r_r47 = (PyObject **)&cpy_r_r46;
    cpy_r_r48 = PyObject_VectorcallMethod(cpy_r_r45, cpy_r_r47, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_group", 68, CPyStatic__rules___globals);
        goto CPyL71;
    }
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r44);
    if (likely(PyDict_Check(cpy_r_r48)))
        cpy_r_r49 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_group", 68, CPyStatic__rules___globals, "dict", cpy_r_r48);
        goto CPyL64;
    }
    cpy_r_r50 = 0;
    cpy_r_r51 = PyDict_Size(cpy_r_r49);
    cpy_r_r52 = cpy_r_r51 << 1;
    cpy_r_r53 = CPyDict_GetItemsIter(cpy_r_r49);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_group", 69, CPyStatic__rules___globals);
        goto CPyL72;
    }
CPyL33: ;
    cpy_r_r54 = CPyDict_NextItem(cpy_r_r53, cpy_r_r50);
    cpy_r_r55 = cpy_r_r54.f1;
    cpy_r_r50 = cpy_r_r55;
    cpy_r_r56 = cpy_r_r54.f0;
    if (!cpy_r_r56) goto CPyL73;
    cpy_r_r57 = cpy_r_r54.f2;
    CPy_INCREF(cpy_r_r57);
    cpy_r_r58 = cpy_r_r54.f3;
    CPy_INCREF(cpy_r_r58);
    CPy_DECREF(cpy_r_r54.f2);
    CPy_DECREF(cpy_r_r54.f3);
    cpy_r_name = cpy_r_r57;
    cpy_r_hashes = cpy_r_r58;
    cpy_r_r59 = CPyStatic__rules___globals;
    cpy_r_r60 = CPyStatics[63]; /* 'TxGroup' */
    cpy_r_r61 = CPyDict_GetItem(cpy_r_r59, cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_group", 70, CPyStatic__rules___globals);
        goto CPyL74;
    }
    cpy_r_r62 = CPyStatics[8]; /* 'get_dbid' */
    PyObject *cpy_r_r63[3] = {cpy_r_r61, cpy_r_name, cpy_r_parent};
    cpy_r_r64 = (PyObject **)&cpy_r_r63;
    cpy_r_r65 = PyObject_VectorcallMethod(cpy_r_r62, cpy_r_r64, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_group", 70, CPyStatic__rules___globals);
        goto CPyL75;
    }
    CPy_DECREF(cpy_r_r61);
    CPy_DECREF(cpy_r_name);
    cpy_r_txgroup_dbid = cpy_r_r65;
    cpy_r_r66 = (PyObject *)&PyList_Type;
    cpy_r_r67 = PyObject_IsInstance(cpy_r_hashes, cpy_r_r66);
    cpy_r_r68 = cpy_r_r67 >= 0;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_group", 71, CPyStatic__rules___globals);
        goto CPyL76;
    }
    cpy_r_r69 = cpy_r_r67;
    if (!cpy_r_r69) goto CPyL77;
    if (likely(PyList_Check(cpy_r_hashes)))
        cpy_r_r70 = cpy_r_hashes;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_group", 73, CPyStatic__rules___globals, "list", cpy_r_hashes);
        goto CPyL78;
    }
    PyObject *cpy_r_r71[2] = {cpy_r_txgroup_dbid, cpy_r_r70};
    cpy_r_r72 = (PyObject **)&cpy_r_r71;
    cpy_r_r73 = _PyObject_Vectorcall(cpy_r_matcher_cls, cpy_r_r72, 2, 0);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_group", 73, CPyStatic__rules___globals);
        goto CPyL79;
    } else
        goto CPyL80;
CPyL40: ;
    CPy_DECREF(cpy_r_txgroup_dbid);
    CPy_DECREF(cpy_r_r70);
    goto CPyL56;
CPyL41: ;
    cpy_r_r74 = (PyObject *)&PyDict_Type;
    cpy_r_r75 = PyObject_IsInstance(cpy_r_hashes, cpy_r_r74);
    cpy_r_r76 = cpy_r_r75 >= 0;
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_group", 74, CPyStatic__rules___globals);
        goto CPyL81;
    }
    cpy_r_r77 = cpy_r_r75;
    if (!cpy_r_r77) goto CPyL82;
    cpy_r_parent = cpy_r_txgroup_dbid;
    if (likely(PyDict_Check(cpy_r_hashes)))
        cpy_r_r78 = cpy_r_hashes;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_group", 76, CPyStatic__rules___globals, "dict", cpy_r_hashes);
        goto CPyL83;
    }
    cpy_r_r79 = 0;
    cpy_r_r80 = PyDict_Size(cpy_r_r78);
    cpy_r_r81 = cpy_r_r80 << 1;
    cpy_r_r82 = CPyDict_GetItemsIter(cpy_r_r78);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_group", 76, CPyStatic__rules___globals);
        goto CPyL84;
    }
CPyL45: ;
    cpy_r_r83 = CPyDict_NextItem(cpy_r_r82, cpy_r_r79);
    cpy_r_r84 = cpy_r_r83.f1;
    cpy_r_r79 = cpy_r_r84;
    cpy_r_r85 = cpy_r_r83.f0;
    if (!cpy_r_r85) goto CPyL85;
    cpy_r_r86 = cpy_r_r83.f2;
    CPy_INCREF(cpy_r_r86);
    cpy_r_r87 = cpy_r_r83.f3;
    CPy_INCREF(cpy_r_r87);
    CPy_DECREF(cpy_r_r83.f2);
    CPy_DECREF(cpy_r_r83.f3);
    cpy_r_name = cpy_r_r86;
    cpy_r_hashes = cpy_r_r87;
    cpy_r_r88 = CPyStatic__rules___globals;
    cpy_r_r89 = CPyStatics[63]; /* 'TxGroup' */
    cpy_r_r90 = CPyDict_GetItem(cpy_r_r88, cpy_r_r89);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_group", 77, CPyStatic__rules___globals);
        goto CPyL86;
    }
    cpy_r_r91 = CPyStatics[8]; /* 'get_dbid' */
    PyObject *cpy_r_r92[3] = {cpy_r_r90, cpy_r_name, cpy_r_parent};
    cpy_r_r93 = (PyObject **)&cpy_r_r92;
    cpy_r_r94 = PyObject_VectorcallMethod(cpy_r_r91, cpy_r_r93, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_group", 77, CPyStatic__rules___globals);
        goto CPyL87;
    }
    CPy_DECREF(cpy_r_r90);
    CPy_DECREF(cpy_r_name);
    cpy_r_txgroup_dbid = cpy_r_r94;
    PyObject *cpy_r_r95[2] = {cpy_r_txgroup_dbid, cpy_r_hashes};
    cpy_r_r96 = (PyObject **)&cpy_r_r95;
    cpy_r_r97 = _PyObject_Vectorcall(cpy_r_matcher_cls, cpy_r_r96, 2, 0);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_group", 79, CPyStatic__rules___globals);
        goto CPyL88;
    } else
        goto CPyL89;
CPyL49: ;
    CPy_DECREF(cpy_r_txgroup_dbid);
    CPy_DECREF(cpy_r_hashes);
    cpy_r_r98 = CPyDict_CheckSize(cpy_r_r78, cpy_r_r81);
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_group", 76, CPyStatic__rules___globals);
        goto CPyL90;
    } else
        goto CPyL45;
CPyL51: ;
    cpy_r_r99 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_group", 76, CPyStatic__rules___globals);
        goto CPyL83;
    } else
        goto CPyL56;
CPyL52: ;
    cpy_r_r100 = CPyModule_builtins;
    cpy_r_r101 = CPyStatics[74]; /* 'ValueError' */
    cpy_r_r102 = CPyObject_GetAttr(cpy_r_r100, cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_group", 81, CPyStatic__rules___globals);
        goto CPyL91;
    }
    PyObject *cpy_r_r103[1] = {cpy_r_hashes};
    cpy_r_r104 = (PyObject **)&cpy_r_r103;
    cpy_r_r105 = _PyObject_Vectorcall(cpy_r_r102, cpy_r_r104, 1, 0);
    CPy_DECREF(cpy_r_r102);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_group", 81, CPyStatic__rules___globals);
        goto CPyL91;
    }
    CPy_DECREF(cpy_r_hashes);
    CPy_Raise(cpy_r_r105);
    CPy_DECREF(cpy_r_r105);
    if (unlikely(!0)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_group", 81, CPyStatic__rules___globals);
        goto CPyL59;
    }
    CPy_Unreachable();
CPyL56: ;
    cpy_r_r106 = CPyDict_CheckSize(cpy_r_r49, cpy_r_r52);
    if (unlikely(!cpy_r_r106)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_group", 69, CPyStatic__rules___globals);
        goto CPyL83;
    } else
        goto CPyL33;
CPyL57: ;
    cpy_r_r107 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r107)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_group", 69, CPyStatic__rules___globals);
        goto CPyL59;
    }
    return 1;
CPyL59: ;
    cpy_r_r108 = 2;
    return cpy_r_r108;
CPyL60: ;
    CPy_DecRef(cpy_r_r1.f0);
    CPy_DecRef(cpy_r_r1.f1);
    CPy_DecRef(cpy_r_r1.f2);
    goto CPyL7;
CPyL61: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL59;
CPyL62: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r13);
    goto CPyL59;
CPyL63: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_parent);
    goto CPyL59;
CPyL64: ;
    CPy_DecRef(cpy_r_parent);
    goto CPyL59;
CPyL65: ;
    CPy_DecRef(cpy_r_parent);
    CPy_DecRef(cpy_r_r23);
    goto CPyL59;
CPyL66: ;
    CPy_DecRef(cpy_r_parent);
    CPy_DecRef(cpy_r_r29);
    goto CPyL59;
CPyL67: ;
    CPy_DECREF(cpy_r_parent);
    CPy_DECREF(cpy_r_r29);
    goto CPyL19;
CPyL68: ;
    CPy_DecRef(cpy_r_r37);
    goto CPyL59;
CPyL69: ;
    CPy_DECREF(cpy_r_r41);
    goto CPyL25;
CPyL70: ;
    CPy_DecRef(cpy_r_parent);
    CPy_DecRef(cpy_r_r29);
    goto CPyL27;
CPyL71: ;
    CPy_DecRef(cpy_r_parent);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r44);
    goto CPyL59;
CPyL72: ;
    CPy_DecRef(cpy_r_parent);
    CPy_DecRef(cpy_r_r49);
    goto CPyL59;
CPyL73: ;
    CPy_DECREF(cpy_r_parent);
    CPy_DECREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r53);
    CPy_DECREF(cpy_r_r54.f2);
    CPy_DECREF(cpy_r_r54.f3);
    goto CPyL57;
CPyL74: ;
    CPy_DecRef(cpy_r_parent);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_hashes);
    goto CPyL59;
CPyL75: ;
    CPy_DecRef(cpy_r_parent);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_hashes);
    CPy_DecRef(cpy_r_r61);
    goto CPyL59;
CPyL76: ;
    CPy_DecRef(cpy_r_parent);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_hashes);
    CPy_DecRef(cpy_r_txgroup_dbid);
    goto CPyL59;
CPyL77: ;
    CPy_DECREF(cpy_r_parent);
    goto CPyL41;
CPyL78: ;
    CPy_DecRef(cpy_r_parent);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_txgroup_dbid);
    goto CPyL59;
CPyL79: ;
    CPy_DecRef(cpy_r_parent);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_txgroup_dbid);
    CPy_DecRef(cpy_r_r70);
    goto CPyL59;
CPyL80: ;
    CPy_DECREF(cpy_r_r73);
    goto CPyL40;
CPyL81: ;
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_hashes);
    CPy_DecRef(cpy_r_txgroup_dbid);
    goto CPyL59;
CPyL82: ;
    CPy_DECREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r53);
    CPy_DECREF(cpy_r_txgroup_dbid);
    goto CPyL52;
CPyL83: ;
    CPy_DecRef(cpy_r_parent);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r53);
    goto CPyL59;
CPyL84: ;
    CPy_DecRef(cpy_r_parent);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r78);
    goto CPyL59;
CPyL85: ;
    CPy_DECREF(cpy_r_r78);
    CPy_DECREF(cpy_r_r82);
    CPy_DECREF(cpy_r_r83.f2);
    CPy_DECREF(cpy_r_r83.f3);
    goto CPyL51;
CPyL86: ;
    CPy_DecRef(cpy_r_parent);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_hashes);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r82);
    goto CPyL59;
CPyL87: ;
    CPy_DecRef(cpy_r_parent);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_hashes);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r82);
    CPy_DecRef(cpy_r_r90);
    goto CPyL59;
CPyL88: ;
    CPy_DecRef(cpy_r_parent);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_hashes);
    CPy_DecRef(cpy_r_txgroup_dbid);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r82);
    goto CPyL59;
CPyL89: ;
    CPy_DECREF(cpy_r_r97);
    goto CPyL49;
CPyL90: ;
    CPy_DecRef(cpy_r_parent);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r82);
    goto CPyL59;
CPyL91: ;
    CPy_DecRef(cpy_r_hashes);
    goto CPyL59;
}

PyObject *CPyPy__rules___Rules_____build_matchers_for_group(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"top_level_name", "rules", "filename", "matcher_cls", 0};
    static CPyArg_Parser parser = {"OOOO:__build_matchers_for_group", kwlist, 0};
    PyObject *obj_top_level_name;
    PyObject *obj_rules;
    PyObject *obj_filename;
    PyObject *obj_matcher_cls;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_top_level_name, &obj_rules, &obj_filename, &obj_matcher_cls)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__rules___Rules))
        arg_self = obj_self;
    else {
        CPy_TypeError("dao_treasury.sorting._rules.Rules", obj_self); 
        goto fail;
    }
    PyObject *arg_top_level_name;
    if (likely(PyUnicode_Check(obj_top_level_name)))
        arg_top_level_name = obj_top_level_name;
    else {
        CPy_TypeError("str", obj_top_level_name); 
        goto fail;
    }
    PyObject *arg_rules = obj_rules;
    PyObject *arg_filename;
    if (likely(PyUnicode_Check(obj_filename)))
        arg_filename = obj_filename;
    else {
        CPy_TypeError("str", obj_filename); 
        goto fail;
    }
    PyObject *arg_matcher_cls = obj_matcher_cls;
    char retval = CPyDef__rules___Rules_____build_matchers_for_group(arg_self, arg_top_level_name, arg_rules, arg_filename, arg_matcher_cls);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__build_matchers_for_group", 48, CPyStatic__rules___globals);
    return NULL;
}

PyObject *CPyDef__rules___Rules_____get_rule_file(PyObject *cpy_r_self, PyObject *cpy_r_path, PyObject *cpy_r_filename) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_p;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject **cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject **cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject **cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    cpy_r_r0 = NULL;
    cpy_r_p = cpy_r_r0;
    cpy_r_r1 = CPyStatics[141]; /* '.yml' */
    cpy_r_r2 = CPyStatics[142]; /* '.yaml' */
    CPy_INCREF(cpy_r_r1);
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3.f0 = cpy_r_r1;
    cpy_r_r3.f1 = cpy_r_r2;
    cpy_r_r4 = PyTuple_New(2);
    if (unlikely(cpy_r_r4 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3 = cpy_r_r3.f0;
    PyTuple_SET_ITEM(cpy_r_r4, 0, __tmp3);
    PyObject *__tmp4 = cpy_r_r3.f1;
    PyTuple_SET_ITEM(cpy_r_r4, 1, __tmp4);
    cpy_r_r5 = PyObject_GetIter(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__get_rule_file", 84, CPyStatic__rules___globals);
        goto CPyL31;
    }
CPyL1: ;
    cpy_r_r6 = PyIter_Next(cpy_r_r5);
    if (cpy_r_r6 == NULL) {
        goto CPyL32;
    } else
        goto CPyL33;
CPyL2: ;
    if (likely(PyUnicode_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/_rules.py", "__get_rule_file", 84, CPyStatic__rules___globals, "str", cpy_r_r6);
        goto CPyL34;
    }
    cpy_r_r8 = PyUnicode_Concat(cpy_r_filename, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__get_rule_file", 85, CPyStatic__rules___globals);
        goto CPyL34;
    }
    cpy_r_r9 = PyNumber_TrueDivide(cpy_r_path, cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__get_rule_file", 86, CPyStatic__rules___globals);
        goto CPyL34;
    }
    cpy_r_p = cpy_r_r9;
    cpy_r_r10 = CPyStatics[143]; /* 'exists' */
    PyObject *cpy_r_r11[1] = {cpy_r_p};
    cpy_r_r12 = (PyObject **)&cpy_r_r11;
    cpy_r_r13 = PyObject_VectorcallMethod(cpy_r_r10, cpy_r_r12, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__get_rule_file", 87, CPyStatic__rules___globals);
        goto CPyL35;
    }
    if (unlikely(!PyBool_Check(cpy_r_r13))) {
        CPy_TypeError("bool", cpy_r_r13); cpy_r_r14 = 2;
    } else
        cpy_r_r14 = cpy_r_r13 == Py_True;
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__get_rule_file", 87, CPyStatic__rules___globals);
        goto CPyL35;
    }
    if (cpy_r_r14) {
        goto CPyL36;
    } else
        goto CPyL1;
CPyL8: ;
    return cpy_r_p;
CPyL9: ;
    cpy_r_r15 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__get_rule_file", 84, CPyStatic__rules___globals);
        goto CPyL31;
    }
    cpy_r_r16 = CPyStatic__rules___logger;
    if (unlikely(cpy_r_r16 == NULL)) {
        goto CPyL37;
    } else
        goto CPyL13;
CPyL11: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"logger\" was not set");
    cpy_r_r17 = 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__get_rule_file", 89, CPyStatic__rules___globals);
        goto CPyL30;
    }
    CPy_Unreachable();
CPyL13: ;
    cpy_r_r18 = CPyStatics[144]; /* '%s does not exist' */
    cpy_r_r19 = CPyStatics[90]; /* 'warning' */
    if (cpy_r_p != NULL) goto CPyL16;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"p\" referenced before assignment");
    cpy_r_r20 = 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__get_rule_file", -1, CPyStatic__rules___globals);
        goto CPyL30;
    }
    CPy_Unreachable();
CPyL16: ;
    PyObject *cpy_r_r21[3] = {cpy_r_r16, cpy_r_r18, cpy_r_p};
    cpy_r_r22 = (PyObject **)&cpy_r_r21;
    cpy_r_r23 = PyObject_VectorcallMethod(cpy_r_r19, cpy_r_r22, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__get_rule_file", 89, CPyStatic__rules___globals);
        goto CPyL31;
    } else
        goto CPyL38;
CPyL17: ;
    if (cpy_r_p != NULL) goto CPyL20;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"p\" referenced before assignment");
    cpy_r_r24 = 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__get_rule_file", -1, CPyStatic__rules___globals);
        goto CPyL30;
    }
    CPy_Unreachable();
CPyL20: ;
    cpy_r_r25 = CPyModule_builtins;
    cpy_r_r26 = CPyStatics[136]; /* 'FileNotFoundError' */
    cpy_r_r27 = CPyObject_GetAttr(cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__get_rule_file", 90, CPyStatic__rules___globals);
        goto CPyL31;
    }
    if (cpy_r_p == NULL) {
        goto CPyL39;
    } else
        goto CPyL24;
CPyL22: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"p\" referenced before assignment");
    cpy_r_r28 = 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__get_rule_file", -1, CPyStatic__rules___globals);
        goto CPyL30;
    }
    CPy_Unreachable();
CPyL24: ;
    PyObject *cpy_r_r29[1] = {cpy_r_p};
    cpy_r_r30 = (PyObject **)&cpy_r_r29;
    cpy_r_r31 = _PyObject_Vectorcall(cpy_r_r27, cpy_r_r30, 1, 0);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__get_rule_file", 90, CPyStatic__rules___globals);
        goto CPyL31;
    }
    if (cpy_r_p == NULL) {
        goto CPyL40;
    } else
        goto CPyL28;
CPyL26: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"p\" referenced before assignment");
    cpy_r_r32 = 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__get_rule_file", -1, CPyStatic__rules___globals);
        goto CPyL30;
    }
    CPy_Unreachable();
CPyL28: ;
    CPy_XDECREF(cpy_r_p);
    CPy_Raise(cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(!0)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__get_rule_file", 90, CPyStatic__rules___globals);
        goto CPyL30;
    }
    CPy_Unreachable();
CPyL30: ;
    cpy_r_r33 = NULL;
    return cpy_r_r33;
CPyL31: ;
    CPy_XDecRef(cpy_r_p);
    goto CPyL30;
CPyL32: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL9;
CPyL33: ;
    CPy_XDECREF(cpy_r_p);
    goto CPyL2;
CPyL34: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL30;
CPyL35: ;
    CPy_DecRef(cpy_r_p);
    CPy_DecRef(cpy_r_r5);
    goto CPyL30;
CPyL36: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL8;
CPyL37: ;
    CPy_XDecRef(cpy_r_p);
    goto CPyL11;
CPyL38: ;
    CPy_DECREF(cpy_r_r23);
    goto CPyL17;
CPyL39: ;
    CPy_DECREF(cpy_r_r27);
    goto CPyL22;
CPyL40: ;
    CPy_DECREF(cpy_r_r31);
    goto CPyL26;
}

PyObject *CPyPy__rules___Rules_____get_rule_file(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"path", "filename", 0};
    static CPyArg_Parser parser = {"OO:__get_rule_file", kwlist, 0};
    PyObject *obj_path;
    PyObject *obj_filename;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_path, &obj_filename)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__rules___Rules))
        arg_self = obj_self;
    else {
        CPy_TypeError("dao_treasury.sorting._rules.Rules", obj_self); 
        goto fail;
    }
    PyObject *arg_path = obj_path;
    PyObject *arg_filename;
    if (likely(PyUnicode_Check(obj_filename)))
        arg_filename = obj_filename;
    else {
        CPy_TypeError("str", obj_filename); 
        goto fail;
    }
    PyObject *retval = CPyDef__rules___Rules_____get_rule_file(arg_self, arg_path, arg_filename);
    return retval;
fail: ;
    CPy_AddTraceback("dao_treasury/sorting/_rules.py", "__get_rule_file", 83, CPyStatic__rules___globals);
    return NULL;
}

char CPyDef__rules_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject **cpy_r_r17;
    void *cpy_r_r19;
    void *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject **cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    int32_t cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    int32_t cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    int32_t cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject **cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    int32_t cpy_r_r94;
    char cpy_r_r95;
    char cpy_r_r96;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[26]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "<module>", -1, CPyStatic__rules___globals);
        goto CPyL27;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[211]; /* ('getLogger',) */
    cpy_r_r6 = CPyStatics[28]; /* 'logging' */
    cpy_r_r7 = CPyStatic__rules___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "<module>", 1, CPyStatic__rules___globals);
        goto CPyL27;
    }
    CPyModule_logging = cpy_r_r8;
    CPy_INCREF(CPyModule_logging);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[229]; /* ('Path',) */
    cpy_r_r10 = CPyStatics[146]; /* 'pathlib' */
    cpy_r_r11 = CPyStatic__rules___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "<module>", 2, CPyStatic__rules___globals);
        goto CPyL27;
    }
    CPyModule_pathlib = cpy_r_r12;
    CPy_INCREF(CPyModule_pathlib);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[230]; /* ('Final', 'Type', 'Union', 'final') */
    cpy_r_r14 = CPyStatics[31]; /* 'typing' */
    cpy_r_r15 = CPyStatic__rules___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "<module>", 3, CPyStatic__rules___globals);
        goto CPyL27;
    }
    CPyModule_typing = cpy_r_r16;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = (PyObject **)&CPyModule_yaml;
    PyObject **cpy_r_r18[1] = {cpy_r_r17};
    cpy_r_r19 = (void *)&cpy_r_r18;
    int64_t cpy_r_r20[1] = {5};
    cpy_r_r21 = (void *)&cpy_r_r20;
    cpy_r_r22 = CPyStatics[232]; /* (('yaml', 'yaml', 'yaml'),) */
    cpy_r_r23 = CPyStatic__rules___globals;
    cpy_r_r24 = CPyStatics[150]; /* 'dao_treasury/sorting/_rules.py' */
    cpy_r_r25 = CPyStatics[151]; /* '<module>' */
    cpy_r_r26 = CPyImport_ImportMany(cpy_r_r22, cpy_r_r19, cpy_r_r23, cpy_r_r24, cpy_r_r25, cpy_r_r21);
    if (!cpy_r_r26) goto CPyL27;
    cpy_r_r27 = CPyStatics[226]; /* ('db_session',) */
    cpy_r_r28 = CPyStatics[113]; /* 'pony.orm' */
    cpy_r_r29 = CPyStatic__rules___globals;
    cpy_r_r30 = CPyImport_ImportFromMany(cpy_r_r28, cpy_r_r27, cpy_r_r27, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "<module>", 6, CPyStatic__rules___globals);
        goto CPyL27;
    }
    CPyModule_pony___orm = cpy_r_r30;
    CPy_INCREF(CPyModule_pony___orm);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r31 = CPyStatics[233]; /* ('constants',) */
    cpy_r_r32 = CPyStatics[116]; /* 'y' */
    cpy_r_r33 = CPyStatic__rules___globals;
    cpy_r_r34 = CPyImport_ImportFromMany(cpy_r_r32, cpy_r_r31, cpy_r_r31, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "<module>", 7, CPyStatic__rules___globals);
        goto CPyL27;
    }
    CPyModule_y = cpy_r_r34;
    CPy_INCREF(CPyModule_y);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r35 = CPyStatics[217]; /* ('_Matcher', 'FromAddressMatcher', 'HashMatcher',
                                    'ToAddressMatcher') */
    cpy_r_r36 = CPyStatics[60]; /* 'dao_treasury.sorting' */
    cpy_r_r37 = CPyStatic__rules___globals;
    cpy_r_r38 = CPyImport_ImportFromMany(cpy_r_r36, cpy_r_r35, cpy_r_r35, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "<module>", 9, CPyStatic__rules___globals);
        goto CPyL27;
    }
    CPyModule_dao_treasury___sorting = cpy_r_r38;
    CPy_INCREF(CPyModule_dao_treasury___sorting);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r39 = CPyStatics[234]; /* ('TopLevelCategory', 'TxGroupDbid') */
    cpy_r_r40 = CPyStatics[59]; /* 'dao_treasury.types' */
    cpy_r_r41 = CPyStatic__rules___globals;
    cpy_r_r42 = CPyImport_ImportFromMany(cpy_r_r40, cpy_r_r39, cpy_r_r39, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "<module>", 10, CPyStatic__rules___globals);
        goto CPyL27;
    }
    CPyModule_dao_treasury___types = cpy_r_r42;
    CPy_INCREF(CPyModule_dao_treasury___types);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r43 = CPyStatic__rules___globals;
    cpy_r_r44 = CPyStatics[152]; /* 'constants' */
    cpy_r_r45 = CPyDict_GetItem(cpy_r_r43, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "<module>", 13, CPyStatic__rules___globals);
        goto CPyL27;
    }
    cpy_r_r46 = CPyStatics[154]; /* 'CHAINID' */
    cpy_r_r47 = CPyObject_GetAttr(cpy_r_r45, cpy_r_r46);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "<module>", 13, CPyStatic__rules___globals);
        goto CPyL27;
    }
    CPyStatic__rules___CHAINID = cpy_r_r47;
    CPy_INCREF(CPyStatic__rules___CHAINID);
    cpy_r_r48 = CPyStatic__rules___globals;
    cpy_r_r49 = CPyStatics[154]; /* 'CHAINID' */
    cpy_r_r50 = CPyDict_SetItem(cpy_r_r48, cpy_r_r49, cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "<module>", 13, CPyStatic__rules___globals);
        goto CPyL27;
    }
    cpy_r_r52 = CPyStatics[155]; /* 'dao_treasury.rules' */
    cpy_r_r53 = CPyStatic__rules___globals;
    cpy_r_r54 = CPyStatics[27]; /* 'getLogger' */
    cpy_r_r55 = CPyDict_GetItem(cpy_r_r53, cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "<module>", 15, CPyStatic__rules___globals);
        goto CPyL27;
    }
    PyObject *cpy_r_r56[1] = {cpy_r_r52};
    cpy_r_r57 = (PyObject **)&cpy_r_r56;
    cpy_r_r58 = _PyObject_Vectorcall(cpy_r_r55, cpy_r_r57, 1, 0);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "<module>", 15, CPyStatic__rules___globals);
        goto CPyL27;
    }
    CPyStatic__rules___logger = cpy_r_r58;
    CPy_INCREF(CPyStatic__rules___logger);
    cpy_r_r59 = CPyStatic__rules___globals;
    cpy_r_r60 = CPyStatics[61]; /* 'logger' */
    cpy_r_r61 = CPyDict_SetItem(cpy_r_r59, cpy_r_r60, cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r62 = cpy_r_r61 >= 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "<module>", 15, CPyStatic__rules___globals);
        goto CPyL27;
    }
    cpy_r_r63 = NULL;
    cpy_r_r64 = CPyStatics[156]; /* 'dao_treasury.sorting._rules' */
    cpy_r_r65 = (PyObject *)CPyType__rules___Rules_template;
    cpy_r_r66 = CPyType_FromTemplate(cpy_r_r65, cpy_r_r63, cpy_r_r64);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "<module>", 19, CPyStatic__rules___globals);
        goto CPyL27;
    }
    cpy_r_r67 = CPyDef__rules___Rules_trait_vtable_setup();
    if (unlikely(cpy_r_r67 == 2)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "<module>", -1, CPyStatic__rules___globals);
        goto CPyL28;
    }
    cpy_r_r68 = CPyStatics[117]; /* '__mypyc_attrs__' */
    cpy_r_r69 = CPyStatics[157]; /* '__initialized' */
    cpy_r_r70 = CPyStatics[158]; /* 'rules_dir' */
    cpy_r_r71 = CPyStatics[159]; /* 'revenue_dir' */
    cpy_r_r72 = CPyStatics[160]; /* 'cost_of_revenue_dir' */
    cpy_r_r73 = CPyStatics[161]; /* 'expenses_dir' */
    cpy_r_r74 = CPyStatics[162]; /* 'other_income_dir' */
    cpy_r_r75 = CPyStatics[163]; /* 'other_expense_dir' */
    cpy_r_r76 = CPyStatics[164]; /* 'ignore_dir' */
    cpy_r_r77 = PyTuple_Pack(8, cpy_r_r69, cpy_r_r70, cpy_r_r71, cpy_r_r72, cpy_r_r73, cpy_r_r74, cpy_r_r75, cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "<module>", 19, CPyStatic__rules___globals);
        goto CPyL28;
    }
    cpy_r_r78 = PyObject_SetAttr(cpy_r_r66, cpy_r_r68, cpy_r_r77);
    CPy_DECREF(cpy_r_r77);
    cpy_r_r79 = cpy_r_r78 >= 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "<module>", 19, CPyStatic__rules___globals);
        goto CPyL28;
    }
    CPyType__rules___Rules = (PyTypeObject *)cpy_r_r66;
    CPy_INCREF(CPyType__rules___Rules);
    cpy_r_r80 = CPyStatic__rules___globals;
    cpy_r_r81 = CPyStatics[165]; /* 'Rules' */
    cpy_r_r82 = CPyDict_SetItem(cpy_r_r80, cpy_r_r81, cpy_r_r66);
    CPy_DECREF(cpy_r_r66);
    cpy_r_r83 = cpy_r_r82 >= 0;
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "<module>", 19, CPyStatic__rules___globals);
        goto CPyL27;
    }
    cpy_r_r84 = (PyObject *)CPyType__rules___Rules;
    cpy_r_r85 = CPyStatics[125]; /* '__build_matchers' */
    cpy_r_r86 = CPyObject_GetAttr(cpy_r_r84, cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "<module>", 32, CPyStatic__rules___globals);
        goto CPyL27;
    }
    cpy_r_r87 = CPyStatic__rules___globals;
    cpy_r_r88 = CPyStatics[112]; /* 'db_session' */
    cpy_r_r89 = CPyDict_GetItem(cpy_r_r87, cpy_r_r88);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "<module>", 31, CPyStatic__rules___globals);
        goto CPyL29;
    }
    PyObject *cpy_r_r90[1] = {cpy_r_r86};
    cpy_r_r91 = (PyObject **)&cpy_r_r90;
    cpy_r_r92 = _PyObject_Vectorcall(cpy_r_r89, cpy_r_r91, 1, 0);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "<module>", 32, CPyStatic__rules___globals);
        goto CPyL29;
    }
    CPy_DECREF(cpy_r_r86);
    cpy_r_r93 = CPyStatics[125]; /* '__build_matchers' */
    cpy_r_r94 = PyObject_SetAttr(cpy_r_r84, cpy_r_r93, cpy_r_r92);
    CPy_DECREF(cpy_r_r92);
    cpy_r_r95 = cpy_r_r94 >= 0;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("dao_treasury/sorting/_rules.py", "<module>", 32, CPyStatic__rules___globals);
        goto CPyL27;
    }
    return 1;
CPyL27: ;
    cpy_r_r96 = 2;
    return cpy_r_r96;
CPyL28: ;
    CPy_DecRef(cpy_r_r66);
    goto CPyL27;
CPyL29: ;
    CPy_DecRef(cpy_r_r86);
    goto CPyL27;
}

static int
decorator___SortRuleDecorator_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *decorator___SortRuleDecorator_setup(PyTypeObject *type);
PyObject *CPyDef_decorator___SortRuleDecorator(PyObject *cpy_r_txgroup, PyObject *cpy_r_networks, PyObject *cpy_r_rule_type);

static PyObject *
decorator___SortRuleDecorator_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_decorator___SortRuleDecorator) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = decorator___SortRuleDecorator_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_decorator___SortRuleDecorator_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
decorator___SortRuleDecorator_traverse(dao_treasury___sorting___decorator___SortRuleDecoratorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_txgroup);
    Py_VISIT(self->_networks);
    Py_VISIT(self->_rule_type);
    PyObject_VisitManagedDict((PyObject *)self, visit, arg);
    return 0;
}

static int
decorator___SortRuleDecorator_clear(dao_treasury___sorting___decorator___SortRuleDecoratorObject *self)
{
    Py_CLEAR(self->_txgroup);
    Py_CLEAR(self->_networks);
    Py_CLEAR(self->_rule_type);
    PyObject_ClearManagedDict((PyObject *)self);
    return 0;
}

static void
decorator___SortRuleDecorator_dealloc(dao_treasury___sorting___decorator___SortRuleDecoratorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, decorator___SortRuleDecorator_dealloc)
    decorator___SortRuleDecorator_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem decorator___SortRuleDecorator_vtable[2];
static bool
CPyDef_decorator___SortRuleDecorator_trait_vtable_setup(void)
{
    CPyVTableItem decorator___SortRuleDecorator_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_decorator___SortRuleDecorator_____init__,
        (CPyVTableItem)CPyDef_decorator___SortRuleDecorator_____call__,
    };
    memcpy(decorator___SortRuleDecorator_vtable, decorator___SortRuleDecorator_vtable_scratch, sizeof(decorator___SortRuleDecorator_vtable));
    return 1;
}

static PyObject *
decorator___SortRuleDecorator_get_txgroup(dao_treasury___sorting___decorator___SortRuleDecoratorObject *self, void *closure);
static int
decorator___SortRuleDecorator_set_txgroup(dao_treasury___sorting___decorator___SortRuleDecoratorObject *self, PyObject *value, void *closure);
static PyObject *
decorator___SortRuleDecorator_get_networks(dao_treasury___sorting___decorator___SortRuleDecoratorObject *self, void *closure);
static int
decorator___SortRuleDecorator_set_networks(dao_treasury___sorting___decorator___SortRuleDecoratorObject *self, PyObject *value, void *closure);
static PyObject *
decorator___SortRuleDecorator_get_rule_type(dao_treasury___sorting___decorator___SortRuleDecoratorObject *self, void *closure);
static int
decorator___SortRuleDecorator_set_rule_type(dao_treasury___sorting___decorator___SortRuleDecoratorObject *self, PyObject *value, void *closure);

static PyGetSetDef decorator___SortRuleDecorator_getseters[] = {
    {"txgroup",
     (getter)decorator___SortRuleDecorator_get_txgroup, (setter)decorator___SortRuleDecorator_set_txgroup,
     NULL, NULL},
    {"networks",
     (getter)decorator___SortRuleDecorator_get_networks, (setter)decorator___SortRuleDecorator_set_networks,
     NULL, NULL},
    {"rule_type",
     (getter)decorator___SortRuleDecorator_get_rule_type, (setter)decorator___SortRuleDecorator_set_rule_type,
     NULL, NULL},
    {"__dict__", PyObject_GenericGetDict, PyObject_GenericSetDict},
    {NULL}  /* Sentinel */
};

static PyMethodDef decorator___SortRuleDecorator_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_decorator___SortRuleDecorator_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__call__",
     (PyCFunction)CPyPy_decorator___SortRuleDecorator_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_decorator___SortRuleDecorator_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "SortRuleDecorator",
    .tp_new = decorator___SortRuleDecorator_new,
    .tp_dealloc = (destructor)decorator___SortRuleDecorator_dealloc,
    .tp_traverse = (traverseproc)decorator___SortRuleDecorator_traverse,
    .tp_clear = (inquiry)decorator___SortRuleDecorator_clear,
    .tp_getset = decorator___SortRuleDecorator_getseters,
    .tp_methods = decorator___SortRuleDecorator_methods,
    .tp_call = PyVectorcall_Call,
    .tp_init = decorator___SortRuleDecorator_init,
    .tp_basicsize = sizeof(dao_treasury___sorting___decorator___SortRuleDecoratorObject),
    .tp_vectorcall_offset = offsetof(dao_treasury___sorting___decorator___SortRuleDecoratorObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL | Py_TPFLAGS_MANAGED_DICT,
};
static PyTypeObject *CPyType_decorator___SortRuleDecorator_template = &CPyType_decorator___SortRuleDecorator_template_;

static PyObject *
decorator___SortRuleDecorator_setup(PyTypeObject *type)
{
    dao_treasury___sorting___decorator___SortRuleDecoratorObject *self;
    self = (dao_treasury___sorting___decorator___SortRuleDecoratorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = decorator___SortRuleDecorator_vtable;
    self->vectorcall = CPyPy_decorator___SortRuleDecorator_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_decorator___SortRuleDecorator(PyObject *cpy_r_txgroup, PyObject *cpy_r_networks, PyObject *cpy_r_rule_type)
{
    PyObject *self = decorator___SortRuleDecorator_setup(CPyType_decorator___SortRuleDecorator);
    if (self == NULL)
        return NULL;
    char res = CPyDef_decorator___SortRuleDecorator_____init__(self, cpy_r_txgroup, cpy_r_networks, cpy_r_rule_type);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
decorator___SortRuleDecorator_get_txgroup(dao_treasury___sorting___decorator___SortRuleDecoratorObject *self, void *closure)
{
    if (unlikely(self->_txgroup == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'txgroup' of 'SortRuleDecorator' undefined");
        return NULL;
    }
    CPy_INCREF(self->_txgroup);
    PyObject *retval = self->_txgroup;
    return retval;
}

static int
decorator___SortRuleDecorator_set_txgroup(dao_treasury___sorting___decorator___SortRuleDecoratorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SortRuleDecorator' object attribute 'txgroup' cannot be deleted");
        return -1;
    }
    if (self->_txgroup != NULL) {
        CPy_DECREF(self->_txgroup);
    }
    PyObject *tmp;
    if (likely(PyUnicode_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("str", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_txgroup = tmp;
    return 0;
}

static PyObject *
decorator___SortRuleDecorator_get_networks(dao_treasury___sorting___decorator___SortRuleDecoratorObject *self, void *closure)
{
    if (unlikely(self->_networks == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'networks' of 'SortRuleDecorator' undefined");
        return NULL;
    }
    CPy_INCREF(self->_networks);
    PyObject *retval = self->_networks;
    return retval;
}

static int
decorator___SortRuleDecorator_set_networks(dao_treasury___sorting___decorator___SortRuleDecoratorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SortRuleDecorator' object attribute 'networks' cannot be deleted");
        return -1;
    }
    if (self->_networks != NULL) {
        CPy_DECREF(self->_networks);
    }
    PyObject *tmp;
    if (likely(PyList_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("list", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_networks = tmp;
    return 0;
}

static PyObject *
decorator___SortRuleDecorator_get_rule_type(dao_treasury___sorting___decorator___SortRuleDecoratorObject *self, void *closure)
{
    if (unlikely(self->_rule_type == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'rule_type' of 'SortRuleDecorator' undefined");
        return NULL;
    }
    CPy_INCREF(self->_rule_type);
    PyObject *retval = self->_rule_type;
    return retval;
}

static int
decorator___SortRuleDecorator_set_rule_type(dao_treasury___sorting___decorator___SortRuleDecoratorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SortRuleDecorator' object attribute 'rule_type' cannot be deleted");
        return -1;
    }
    if (self->_rule_type != NULL) {
        CPy_DECREF(self->_rule_type);
    }
    PyObject *tmp = value;
    CPy_INCREF(tmp);
    self->_rule_type = tmp;
    return 0;
}
static PyMethodDef decoratormodule_methods[] = {
    {"revenue", (PyCFunction)CPyPy_decorator___revenue, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"cost_of_revenue", (PyCFunction)CPyPy_decorator___cost_of_revenue, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"expense", (PyCFunction)CPyPy_decorator___expense, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"other_income", (PyCFunction)CPyPy_decorator___other_income, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"other_expense", (PyCFunction)CPyPy_decorator___other_expense, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"ignore", (PyCFunction)CPyPy_decorator___ignore, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef decoratormodule = {
    PyModuleDef_HEAD_INIT,
    "dao_treasury.sorting.decorator",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    decoratormodule_methods
};

PyObject *CPyInit_dao_treasury___sorting___decorator(void)
{
    PyObject* modname = NULL;
    if (CPyModule_dao_treasury___sorting___decorator_internal) {
        Py_INCREF(CPyModule_dao_treasury___sorting___decorator_internal);
        return CPyModule_dao_treasury___sorting___decorator_internal;
    }
    CPyModule_dao_treasury___sorting___decorator_internal = PyModule_Create(&decoratormodule);
    if (unlikely(CPyModule_dao_treasury___sorting___decorator_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_dao_treasury___sorting___decorator_internal, "__name__");
    CPyStatic_decorator___globals = PyModule_GetDict(CPyModule_dao_treasury___sorting___decorator_internal);
    if (unlikely(CPyStatic_decorator___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_decorator_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_dao_treasury___sorting___decorator_internal;
    fail:
    Py_CLEAR(CPyModule_dao_treasury___sorting___decorator_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_decorator___CHAINID);
    CPyStatic_decorator___CHAINID = NULL;
    Py_CLEAR(CPyType_decorator___SortRuleDecorator);
    return NULL;
}

PyObject *CPyDef_decorator___revenue(PyObject *cpy_r_txgroup, PyObject *cpy_r_networks) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    if (cpy_r_networks != NULL) goto CPyL9;
    cpy_r_r0 = CPyStatic_decorator___CHAINID;
    if (likely(cpy_r_r0 != NULL)) goto CPyL4;
    PyErr_SetString(PyExc_NameError, "value for final name \"CHAINID\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "revenue", 32, CPyStatic_decorator___globals);
        goto CPyL8;
    }
    CPy_Unreachable();
CPyL4: ;
    CPy_INCREF(cpy_r_r0);
    cpy_r_networks = cpy_r_r0;
CPyL5: ;
    cpy_r_r2 = CPyStatic_decorator___globals;
    cpy_r_r3 = CPyStatics[56]; /* 'RevenueSortRule' */
    cpy_r_r4 = CPyDict_GetItem(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "revenue", 33, CPyStatic_decorator___globals);
        goto CPyL10;
    }
    cpy_r_r5 = CPyDef_decorator___SortRuleDecorator(cpy_r_txgroup, cpy_r_networks, cpy_r_r4);
    CPy_DECREF(cpy_r_networks);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "revenue", 33, CPyStatic_decorator___globals);
        goto CPyL8;
    }
    return cpy_r_r5;
CPyL8: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
CPyL9: ;
    CPy_INCREF(cpy_r_networks);
    goto CPyL5;
CPyL10: ;
    CPy_DecRef(cpy_r_networks);
    goto CPyL8;
}

PyObject *CPyPy_decorator___revenue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"txgroup", "networks", 0};
    static CPyArg_Parser parser = {"O|O:revenue", kwlist, 0};
    PyObject *obj_txgroup;
    PyObject *obj_networks = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_txgroup, &obj_networks)) {
        return NULL;
    }
    PyObject *arg_txgroup;
    if (likely(PyUnicode_Check(obj_txgroup)))
        arg_txgroup = obj_txgroup;
    else {
        CPy_TypeError("str", obj_txgroup); 
        goto fail;
    }
    PyObject *arg_networks;
    if (obj_networks == NULL) {
        arg_networks = NULL;
    } else {
        arg_networks = obj_networks; 
    }
    PyObject *retval = CPyDef_decorator___revenue(arg_txgroup, arg_networks);
    return retval;
fail: ;
    CPy_AddTraceback("dao_treasury/sorting/decorator.py", "revenue", 32, CPyStatic_decorator___globals);
    return NULL;
}

PyObject *CPyDef_decorator___cost_of_revenue(PyObject *cpy_r_txgroup, PyObject *cpy_r_networks) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    if (cpy_r_networks != NULL) goto CPyL9;
    cpy_r_r0 = CPyStatic_decorator___CHAINID;
    if (likely(cpy_r_r0 != NULL)) goto CPyL4;
    PyErr_SetString(PyExc_NameError, "value for final name \"CHAINID\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "cost_of_revenue", 35, CPyStatic_decorator___globals);
        goto CPyL8;
    }
    CPy_Unreachable();
CPyL4: ;
    CPy_INCREF(cpy_r_r0);
    cpy_r_networks = cpy_r_r0;
CPyL5: ;
    cpy_r_r2 = CPyStatic_decorator___globals;
    cpy_r_r3 = CPyStatics[51]; /* 'CostOfRevenueSortRule' */
    cpy_r_r4 = CPyDict_GetItem(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "cost_of_revenue", 36, CPyStatic_decorator___globals);
        goto CPyL10;
    }
    cpy_r_r5 = CPyDef_decorator___SortRuleDecorator(cpy_r_txgroup, cpy_r_networks, cpy_r_r4);
    CPy_DECREF(cpy_r_networks);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "cost_of_revenue", 36, CPyStatic_decorator___globals);
        goto CPyL8;
    }
    return cpy_r_r5;
CPyL8: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
CPyL9: ;
    CPy_INCREF(cpy_r_networks);
    goto CPyL5;
CPyL10: ;
    CPy_DecRef(cpy_r_networks);
    goto CPyL8;
}

PyObject *CPyPy_decorator___cost_of_revenue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"txgroup", "networks", 0};
    static CPyArg_Parser parser = {"O|O:cost_of_revenue", kwlist, 0};
    PyObject *obj_txgroup;
    PyObject *obj_networks = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_txgroup, &obj_networks)) {
        return NULL;
    }
    PyObject *arg_txgroup;
    if (likely(PyUnicode_Check(obj_txgroup)))
        arg_txgroup = obj_txgroup;
    else {
        CPy_TypeError("str", obj_txgroup); 
        goto fail;
    }
    PyObject *arg_networks;
    if (obj_networks == NULL) {
        arg_networks = NULL;
    } else {
        arg_networks = obj_networks; 
    }
    PyObject *retval = CPyDef_decorator___cost_of_revenue(arg_txgroup, arg_networks);
    return retval;
fail: ;
    CPy_AddTraceback("dao_treasury/sorting/decorator.py", "cost_of_revenue", 35, CPyStatic_decorator___globals);
    return NULL;
}

PyObject *CPyDef_decorator___expense(PyObject *cpy_r_txgroup, PyObject *cpy_r_networks) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    if (cpy_r_networks != NULL) goto CPyL9;
    cpy_r_r0 = CPyStatic_decorator___CHAINID;
    if (likely(cpy_r_r0 != NULL)) goto CPyL4;
    PyErr_SetString(PyExc_NameError, "value for final name \"CHAINID\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "expense", 38, CPyStatic_decorator___globals);
        goto CPyL8;
    }
    CPy_Unreachable();
CPyL4: ;
    CPy_INCREF(cpy_r_r0);
    cpy_r_networks = cpy_r_r0;
CPyL5: ;
    cpy_r_r2 = CPyStatic_decorator___globals;
    cpy_r_r3 = CPyStatics[52]; /* 'ExpenseSortRule' */
    cpy_r_r4 = CPyDict_GetItem(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "expense", 39, CPyStatic_decorator___globals);
        goto CPyL10;
    }
    cpy_r_r5 = CPyDef_decorator___SortRuleDecorator(cpy_r_txgroup, cpy_r_networks, cpy_r_r4);
    CPy_DECREF(cpy_r_networks);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "expense", 39, CPyStatic_decorator___globals);
        goto CPyL8;
    }
    return cpy_r_r5;
CPyL8: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
CPyL9: ;
    CPy_INCREF(cpy_r_networks);
    goto CPyL5;
CPyL10: ;
    CPy_DecRef(cpy_r_networks);
    goto CPyL8;
}

PyObject *CPyPy_decorator___expense(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"txgroup", "networks", 0};
    static CPyArg_Parser parser = {"O|O:expense", kwlist, 0};
    PyObject *obj_txgroup;
    PyObject *obj_networks = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_txgroup, &obj_networks)) {
        return NULL;
    }
    PyObject *arg_txgroup;
    if (likely(PyUnicode_Check(obj_txgroup)))
        arg_txgroup = obj_txgroup;
    else {
        CPy_TypeError("str", obj_txgroup); 
        goto fail;
    }
    PyObject *arg_networks;
    if (obj_networks == NULL) {
        arg_networks = NULL;
    } else {
        arg_networks = obj_networks; 
    }
    PyObject *retval = CPyDef_decorator___expense(arg_txgroup, arg_networks);
    return retval;
fail: ;
    CPy_AddTraceback("dao_treasury/sorting/decorator.py", "expense", 38, CPyStatic_decorator___globals);
    return NULL;
}

PyObject *CPyDef_decorator___other_income(PyObject *cpy_r_txgroup, PyObject *cpy_r_networks) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    if (cpy_r_networks != NULL) goto CPyL9;
    cpy_r_r0 = CPyStatic_decorator___CHAINID;
    if (likely(cpy_r_r0 != NULL)) goto CPyL4;
    PyErr_SetString(PyExc_NameError, "value for final name \"CHAINID\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "other_income", 41, CPyStatic_decorator___globals);
        goto CPyL8;
    }
    CPy_Unreachable();
CPyL4: ;
    CPy_INCREF(cpy_r_r0);
    cpy_r_networks = cpy_r_r0;
CPyL5: ;
    cpy_r_r2 = CPyStatic_decorator___globals;
    cpy_r_r3 = CPyStatics[55]; /* 'OtherIncomeSortRule' */
    cpy_r_r4 = CPyDict_GetItem(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "other_income", 42, CPyStatic_decorator___globals);
        goto CPyL10;
    }
    cpy_r_r5 = CPyDef_decorator___SortRuleDecorator(cpy_r_txgroup, cpy_r_networks, cpy_r_r4);
    CPy_DECREF(cpy_r_networks);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "other_income", 42, CPyStatic_decorator___globals);
        goto CPyL8;
    }
    return cpy_r_r5;
CPyL8: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
CPyL9: ;
    CPy_INCREF(cpy_r_networks);
    goto CPyL5;
CPyL10: ;
    CPy_DecRef(cpy_r_networks);
    goto CPyL8;
}

PyObject *CPyPy_decorator___other_income(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"txgroup", "networks", 0};
    static CPyArg_Parser parser = {"O|O:other_income", kwlist, 0};
    PyObject *obj_txgroup;
    PyObject *obj_networks = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_txgroup, &obj_networks)) {
        return NULL;
    }
    PyObject *arg_txgroup;
    if (likely(PyUnicode_Check(obj_txgroup)))
        arg_txgroup = obj_txgroup;
    else {
        CPy_TypeError("str", obj_txgroup); 
        goto fail;
    }
    PyObject *arg_networks;
    if (obj_networks == NULL) {
        arg_networks = NULL;
    } else {
        arg_networks = obj_networks; 
    }
    PyObject *retval = CPyDef_decorator___other_income(arg_txgroup, arg_networks);
    return retval;
fail: ;
    CPy_AddTraceback("dao_treasury/sorting/decorator.py", "other_income", 41, CPyStatic_decorator___globals);
    return NULL;
}

PyObject *CPyDef_decorator___other_expense(PyObject *cpy_r_txgroup, PyObject *cpy_r_networks) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    if (cpy_r_networks != NULL) goto CPyL9;
    cpy_r_r0 = CPyStatic_decorator___CHAINID;
    if (likely(cpy_r_r0 != NULL)) goto CPyL4;
    PyErr_SetString(PyExc_NameError, "value for final name \"CHAINID\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "other_expense", 44, CPyStatic_decorator___globals);
        goto CPyL8;
    }
    CPy_Unreachable();
CPyL4: ;
    CPy_INCREF(cpy_r_r0);
    cpy_r_networks = cpy_r_r0;
CPyL5: ;
    cpy_r_r2 = CPyStatic_decorator___globals;
    cpy_r_r3 = CPyStatics[54]; /* 'OtherExpenseSortRule' */
    cpy_r_r4 = CPyDict_GetItem(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "other_expense", 45, CPyStatic_decorator___globals);
        goto CPyL10;
    }
    cpy_r_r5 = CPyDef_decorator___SortRuleDecorator(cpy_r_txgroup, cpy_r_networks, cpy_r_r4);
    CPy_DECREF(cpy_r_networks);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "other_expense", 45, CPyStatic_decorator___globals);
        goto CPyL8;
    }
    return cpy_r_r5;
CPyL8: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
CPyL9: ;
    CPy_INCREF(cpy_r_networks);
    goto CPyL5;
CPyL10: ;
    CPy_DecRef(cpy_r_networks);
    goto CPyL8;
}

PyObject *CPyPy_decorator___other_expense(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"txgroup", "networks", 0};
    static CPyArg_Parser parser = {"O|O:other_expense", kwlist, 0};
    PyObject *obj_txgroup;
    PyObject *obj_networks = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_txgroup, &obj_networks)) {
        return NULL;
    }
    PyObject *arg_txgroup;
    if (likely(PyUnicode_Check(obj_txgroup)))
        arg_txgroup = obj_txgroup;
    else {
        CPy_TypeError("str", obj_txgroup); 
        goto fail;
    }
    PyObject *arg_networks;
    if (obj_networks == NULL) {
        arg_networks = NULL;
    } else {
        arg_networks = obj_networks; 
    }
    PyObject *retval = CPyDef_decorator___other_expense(arg_txgroup, arg_networks);
    return retval;
fail: ;
    CPy_AddTraceback("dao_treasury/sorting/decorator.py", "other_expense", 44, CPyStatic_decorator___globals);
    return NULL;
}

PyObject *CPyDef_decorator___ignore(PyObject *cpy_r_txgroup, PyObject *cpy_r_networks) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    if (cpy_r_networks != NULL) goto CPyL9;
    cpy_r_r0 = CPyStatic_decorator___CHAINID;
    if (likely(cpy_r_r0 != NULL)) goto CPyL4;
    PyErr_SetString(PyExc_NameError, "value for final name \"CHAINID\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "ignore", 47, CPyStatic_decorator___globals);
        goto CPyL8;
    }
    CPy_Unreachable();
CPyL4: ;
    CPy_INCREF(cpy_r_r0);
    cpy_r_networks = cpy_r_r0;
CPyL5: ;
    cpy_r_r2 = CPyStatic_decorator___globals;
    cpy_r_r3 = CPyStatics[53]; /* 'IgnoreSortRule' */
    cpy_r_r4 = CPyDict_GetItem(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "ignore", 48, CPyStatic_decorator___globals);
        goto CPyL10;
    }
    cpy_r_r5 = CPyDef_decorator___SortRuleDecorator(cpy_r_txgroup, cpy_r_networks, cpy_r_r4);
    CPy_DECREF(cpy_r_networks);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "ignore", 48, CPyStatic_decorator___globals);
        goto CPyL8;
    }
    return cpy_r_r5;
CPyL8: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
CPyL9: ;
    CPy_INCREF(cpy_r_networks);
    goto CPyL5;
CPyL10: ;
    CPy_DecRef(cpy_r_networks);
    goto CPyL8;
}

PyObject *CPyPy_decorator___ignore(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"txgroup", "networks", 0};
    static CPyArg_Parser parser = {"O|O:ignore", kwlist, 0};
    PyObject *obj_txgroup;
    PyObject *obj_networks = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_txgroup, &obj_networks)) {
        return NULL;
    }
    PyObject *arg_txgroup;
    if (likely(PyUnicode_Check(obj_txgroup)))
        arg_txgroup = obj_txgroup;
    else {
        CPy_TypeError("str", obj_txgroup); 
        goto fail;
    }
    PyObject *arg_networks;
    if (obj_networks == NULL) {
        arg_networks = NULL;
    } else {
        arg_networks = obj_networks; 
    }
    PyObject *retval = CPyDef_decorator___ignore(arg_txgroup, arg_networks);
    return retval;
fail: ;
    CPy_AddTraceback("dao_treasury/sorting/decorator.py", "ignore", 47, CPyStatic_decorator___globals);
    return NULL;
}

char CPyDef_decorator___SortRuleDecorator_____init__(PyObject *cpy_r_self, PyObject *cpy_r_txgroup, PyObject *cpy_r_networks, PyObject *cpy_r_rule_type) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    CPy_INCREF(cpy_r_txgroup);
    if (((dao_treasury___sorting___decorator___SortRuleDecoratorObject *)cpy_r_self)->_txgroup != NULL) {
        CPy_DECREF(((dao_treasury___sorting___decorator___SortRuleDecoratorObject *)cpy_r_self)->_txgroup);
    }
    ((dao_treasury___sorting___decorator___SortRuleDecoratorObject *)cpy_r_self)->_txgroup = cpy_r_txgroup;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "__init__", 59, CPyStatic_decorator___globals);
        goto CPyL11;
    }
    cpy_r_r1 = (PyObject *)&PyLong_Type;
    cpy_r_r2 = PyObject_IsInstance(cpy_r_networks, cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "__init__", 60, CPyStatic_decorator___globals);
        goto CPyL11;
    }
    cpy_r_r4 = cpy_r_r2;
    if (!cpy_r_r4) goto CPyL6;
    if (likely(PyLong_Check(cpy_r_networks)))
        cpy_r_r5 = CPyTagged_FromObject(cpy_r_networks);
    else {
        CPy_TypeError("int", cpy_r_networks); cpy_r_r5 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r5 == CPY_INT_TAG)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "__init__", 60, CPyStatic_decorator___globals);
        goto CPyL11;
    }
    cpy_r_r6 = PyList_New(1);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "__init__", 60, CPyStatic_decorator___globals);
        goto CPyL12;
    }
    cpy_r_r7 = CPyTagged_StealAsObject(cpy_r_r5);
    cpy_r_r8 = (CPyPtr)&((PyListObject *)cpy_r_r6)->ob_item;
    cpy_r_r9 = *(CPyPtr *)cpy_r_r8;
    *(PyObject * *)cpy_r_r9 = cpy_r_r7;
    cpy_r_r10 = cpy_r_r6;
    goto CPyL8;
CPyL6: ;
    cpy_r_r11 = PySequence_List(cpy_r_networks);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "__init__", 60, CPyStatic_decorator___globals);
        goto CPyL11;
    }
    cpy_r_r10 = cpy_r_r11;
CPyL8: ;
    if (((dao_treasury___sorting___decorator___SortRuleDecoratorObject *)cpy_r_self)->_networks != NULL) {
        CPy_DECREF(((dao_treasury___sorting___decorator___SortRuleDecoratorObject *)cpy_r_self)->_networks);
    }
    ((dao_treasury___sorting___decorator___SortRuleDecoratorObject *)cpy_r_self)->_networks = cpy_r_r10;
    cpy_r_r12 = 1;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "__init__", 60, CPyStatic_decorator___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_rule_type);
    if (((dao_treasury___sorting___decorator___SortRuleDecoratorObject *)cpy_r_self)->_rule_type != NULL) {
        CPy_DECREF(((dao_treasury___sorting___decorator___SortRuleDecoratorObject *)cpy_r_self)->_rule_type);
    }
    ((dao_treasury___sorting___decorator___SortRuleDecoratorObject *)cpy_r_self)->_rule_type = cpy_r_rule_type;
    cpy_r_r13 = 1;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "__init__", 61, CPyStatic_decorator___globals);
        goto CPyL11;
    }
    return 1;
CPyL11: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
CPyL12: ;
    CPyTagged_DecRef(cpy_r_r5);
    goto CPyL11;
}

PyObject *CPyPy_decorator___SortRuleDecorator_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"txgroup", "networks", "rule_type", 0};
    PyObject *obj_txgroup;
    PyObject *obj_networks;
    PyObject *obj_rule_type;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OOO", "__init__", kwlist, &obj_txgroup, &obj_networks, &obj_rule_type)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_decorator___SortRuleDecorator))
        arg_self = obj_self;
    else {
        CPy_TypeError("dao_treasury.sorting.decorator.SortRuleDecorator", obj_self); 
        goto fail;
    }
    PyObject *arg_txgroup;
    if (likely(PyUnicode_Check(obj_txgroup)))
        arg_txgroup = obj_txgroup;
    else {
        CPy_TypeError("str", obj_txgroup); 
        goto fail;
    }
    PyObject *arg_networks = obj_networks;
    PyObject *arg_rule_type = obj_rule_type;
    char retval = CPyDef_decorator___SortRuleDecorator_____init__(arg_self, arg_txgroup, arg_networks, arg_rule_type);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("dao_treasury/sorting/decorator.py", "__init__", 53, CPyStatic_decorator___globals);
    return NULL;
}

PyObject *CPyDef_decorator___SortRuleDecorator_____call__(PyObject *cpy_r_self, PyObject *cpy_r_func, PyObject *cpy_r_networks) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject **cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject **cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject **cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject **cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    if (cpy_r_networks != NULL) goto CPyL45;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_networks = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = (PyObject *)&PyUnicode_Type;
    cpy_r_r2 = PyObject_IsInstance(cpy_r_func, cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "__call__", 71, CPyStatic_decorator___globals);
        goto CPyL46;
    }
    cpy_r_r4 = cpy_r_r2;
    if (!cpy_r_r4) goto CPyL17;
    cpy_r_r5 = ((dao_treasury___sorting___decorator___SortRuleDecoratorObject *)cpy_r_self)->_txgroup;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("dao_treasury/sorting/decorator.py", "__call__", "SortRuleDecorator", "txgroup", 72, CPyStatic_decorator___globals);
        goto CPyL46;
    }
    CPy_INCREF(cpy_r_r5);
CPyL5: ;
    cpy_r_r6 = CPyStatics[166]; /* ':' */
    CPy_INCREF(cpy_r_func);
    if (likely(PyUnicode_Check(cpy_r_func)))
        cpy_r_r7 = cpy_r_func;
    else {
        CPy_TypeErrorTraceback("dao_treasury/sorting/decorator.py", "__call__", 72, CPyStatic_decorator___globals, "str", cpy_r_func);
        goto CPyL47;
    }
    cpy_r_r8 = CPyStr_Build(3, cpy_r_r5, cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "__call__", 72, CPyStatic_decorator___globals);
        goto CPyL46;
    }
    cpy_r_r9 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r10 = cpy_r_networks != cpy_r_r9;
    if (!cpy_r_r10) goto CPyL48;
    CPy_INCREF(cpy_r_networks);
    cpy_r_r11 = cpy_r_networks;
    cpy_r_r12 = PyObject_IsTrue(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "__call__", 69, CPyStatic_decorator___globals);
        goto CPyL49;
    }
    cpy_r_r14 = cpy_r_r12;
    if (!cpy_r_r14) goto CPyL48;
    cpy_r_r15 = cpy_r_networks;
    goto CPyL14;
CPyL12: ;
    cpy_r_r16 = ((dao_treasury___sorting___decorator___SortRuleDecoratorObject *)cpy_r_self)->_networks;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("dao_treasury/sorting/decorator.py", "__call__", "SortRuleDecorator", "networks", 72, CPyStatic_decorator___globals);
        goto CPyL50;
    }
    CPy_INCREF(cpy_r_r16);
CPyL13: ;
    cpy_r_r15 = cpy_r_r16;
CPyL14: ;
    cpy_r_r17 = ((dao_treasury___sorting___decorator___SortRuleDecoratorObject *)cpy_r_self)->_rule_type;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("dao_treasury/sorting/decorator.py", "__call__", "SortRuleDecorator", "rule_type", 72, CPyStatic_decorator___globals);
        goto CPyL51;
    }
    CPy_INCREF(cpy_r_r17);
CPyL15: ;
    cpy_r_r18 = CPyDef_decorator___SortRuleDecorator(cpy_r_r8, cpy_r_r15, cpy_r_r17);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "__call__", 72, CPyStatic_decorator___globals);
        goto CPyL44;
    }
    return cpy_r_r18;
CPyL17: ;
    cpy_r_r19 = CPyModule_builtins;
    cpy_r_r20 = CPyStatics[167]; /* 'callable' */
    cpy_r_r21 = CPyObject_GetAttr(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "__call__", 73, CPyStatic_decorator___globals);
        goto CPyL46;
    }
    PyObject *cpy_r_r22[1] = {cpy_r_func};
    cpy_r_r23 = (PyObject **)&cpy_r_r22;
    cpy_r_r24 = _PyObject_Vectorcall(cpy_r_r21, cpy_r_r23, 1, 0);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "__call__", 73, CPyStatic_decorator___globals);
        goto CPyL46;
    }
    if (unlikely(!PyBool_Check(cpy_r_r24))) {
        CPy_TypeError("bool", cpy_r_r24); cpy_r_r25 = 2;
    } else
        cpy_r_r25 = cpy_r_r24 == Py_True;
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "__call__", 73, CPyStatic_decorator___globals);
        goto CPyL46;
    }
    if (!cpy_r_r25) goto CPyL52;
    cpy_r_r26 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r27 = cpy_r_networks != cpy_r_r26;
    if (!cpy_r_r27) goto CPyL53;
    cpy_r_r28 = cpy_r_networks;
    cpy_r_r29 = PyObject_IsTrue(cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "__call__", 69, CPyStatic_decorator___globals);
        goto CPyL44;
    }
    cpy_r_r31 = cpy_r_r29;
    if (!cpy_r_r31) goto CPyL29;
    cpy_r_r32 = CPyStatics[168]; /* 'you can only pass networks if `func` is a string' */
    cpy_r_r33 = CPyModule_builtins;
    cpy_r_r34 = CPyStatics[127]; /* 'RuntimeError' */
    cpy_r_r35 = CPyObject_GetAttr(cpy_r_r33, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "__call__", 75, CPyStatic_decorator___globals);
        goto CPyL44;
    }
    PyObject *cpy_r_r36[1] = {cpy_r_r32};
    cpy_r_r37 = (PyObject **)&cpy_r_r36;
    cpy_r_r38 = _PyObject_Vectorcall(cpy_r_r35, cpy_r_r37, 1, 0);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "__call__", 75, CPyStatic_decorator___globals);
        goto CPyL44;
    }
    CPy_Raise(cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(!0)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "__call__", 75, CPyStatic_decorator___globals);
        goto CPyL44;
    }
    CPy_Unreachable();
CPyL29: ;
    cpy_r_r39 = CPyStatic_decorator___CHAINID;
    if (likely(cpy_r_r39 != NULL)) goto CPyL32;
    PyErr_SetString(PyExc_NameError, "value for final name \"CHAINID\" was not set");
    cpy_r_r40 = 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "__call__", 76, CPyStatic_decorator___globals);
        goto CPyL44;
    }
    CPy_Unreachable();
CPyL32: ;
    cpy_r_r41 = ((dao_treasury___sorting___decorator___SortRuleDecoratorObject *)cpy_r_self)->_networks;
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AttributeError("dao_treasury/sorting/decorator.py", "__call__", "SortRuleDecorator", "networks", 76, CPyStatic_decorator___globals);
        goto CPyL44;
    }
    CPy_INCREF(cpy_r_r41);
CPyL33: ;
    cpy_r_r42 = PySequence_Contains(cpy_r_r41, cpy_r_r39);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "__call__", 76, CPyStatic_decorator___globals);
        goto CPyL44;
    }
    cpy_r_r44 = cpy_r_r42;
    if (!cpy_r_r44) goto CPyL39;
    cpy_r_r45 = ((dao_treasury___sorting___decorator___SortRuleDecoratorObject *)cpy_r_self)->_txgroup;
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AttributeError("dao_treasury/sorting/decorator.py", "__call__", "SortRuleDecorator", "txgroup", 77, CPyStatic_decorator___globals);
        goto CPyL44;
    }
    CPy_INCREF(cpy_r_r45);
CPyL36: ;
    cpy_r_r46 = ((dao_treasury___sorting___decorator___SortRuleDecoratorObject *)cpy_r_self)->_rule_type;
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AttributeError("dao_treasury/sorting/decorator.py", "__call__", "SortRuleDecorator", "rule_type", 77, CPyStatic_decorator___globals);
        goto CPyL54;
    }
    CPy_INCREF(cpy_r_r46);
CPyL37: ;
    PyObject *cpy_r_r47[2] = {cpy_r_r45, cpy_r_func};
    cpy_r_r48 = (PyObject **)&cpy_r_r47;
    cpy_r_r49 = CPyStatics[235]; /* ('txgroup', 'func') */
    cpy_r_r50 = _PyObject_Vectorcall(cpy_r_r46, cpy_r_r48, 0, cpy_r_r49);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "__call__", 77, CPyStatic_decorator___globals);
        goto CPyL54;
    } else
        goto CPyL55;
CPyL38: ;
    CPy_DECREF(cpy_r_r45);
CPyL39: ;
    CPy_INCREF(cpy_r_func);
    return cpy_r_func;
CPyL40: ;
    cpy_r_r51 = CPyModule_builtins;
    cpy_r_r52 = CPyStatics[74]; /* 'ValueError' */
    cpy_r_r53 = CPyObject_GetAttr(cpy_r_r51, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "__call__", 79, CPyStatic_decorator___globals);
        goto CPyL44;
    }
    PyObject *cpy_r_r54[1] = {cpy_r_func};
    cpy_r_r55 = (PyObject **)&cpy_r_r54;
    cpy_r_r56 = _PyObject_Vectorcall(cpy_r_r53, cpy_r_r55, 1, 0);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "__call__", 79, CPyStatic_decorator___globals);
        goto CPyL44;
    }
    CPy_Raise(cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(!0)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "__call__", 79, CPyStatic_decorator___globals);
        goto CPyL44;
    }
    CPy_Unreachable();
CPyL44: ;
    cpy_r_r57 = NULL;
    return cpy_r_r57;
CPyL45: ;
    CPy_INCREF(cpy_r_networks);
    goto CPyL2;
CPyL46: ;
    CPy_DecRef(cpy_r_networks);
    goto CPyL44;
CPyL47: ;
    CPy_DecRef(cpy_r_networks);
    CPy_DecRef(cpy_r_r5);
    goto CPyL44;
CPyL48: ;
    CPy_DECREF(cpy_r_networks);
    goto CPyL12;
CPyL49: ;
    CPy_DecRef(cpy_r_networks);
    CPy_DecRef(cpy_r_r8);
    goto CPyL44;
CPyL50: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL44;
CPyL51: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r15);
    goto CPyL44;
CPyL52: ;
    CPy_DECREF(cpy_r_networks);
    goto CPyL40;
CPyL53: ;
    CPy_DECREF(cpy_r_networks);
    goto CPyL29;
CPyL54: ;
    CPy_DecRef(cpy_r_r45);
    goto CPyL44;
CPyL55: ;
    CPy_DECREF(cpy_r_r50);
    goto CPyL38;
}

PyObject *CPyPy_decorator___SortRuleDecorator_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"func", "networks", 0};
    static CPyArg_Parser parser = {"O|O:__call__", kwlist, 0};
    PyObject *obj_func;
    PyObject *obj_networks = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_func, &obj_networks)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_decorator___SortRuleDecorator))
        arg_self = obj_self;
    else {
        CPy_TypeError("dao_treasury.sorting.decorator.SortRuleDecorator", obj_self); 
        goto fail;
    }
    PyObject *arg_func;
    if (PyUnicode_Check(obj_func))
        arg_func = obj_func;
    else {
        arg_func = NULL;
    }
    if (arg_func != NULL) goto __LL5;
    arg_func = obj_func;
    if (arg_func != NULL) goto __LL5;
    CPy_TypeError("union[str, object]", obj_func); 
    goto fail;
__LL5: ;
    PyObject *arg_networks;
    if (obj_networks == NULL) {
        arg_networks = NULL;
        goto __LL6;
    }
    arg_networks = obj_networks;
    if (arg_networks != NULL) goto __LL6;
    if (obj_networks == Py_None)
        arg_networks = obj_networks;
    else {
        arg_networks = NULL;
    }
    if (arg_networks != NULL) goto __LL6;
    CPy_TypeError("object or None", obj_networks); 
    goto fail;
__LL6: ;
    PyObject *retval = CPyDef_decorator___SortRuleDecorator_____call__(arg_self, arg_func, arg_networks);
    return retval;
fail: ;
    CPy_AddTraceback("dao_treasury/sorting/decorator.py", "__call__", 66, CPyStatic_decorator___globals);
    return NULL;
}

char CPyDef_decorator_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject **cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    int32_t cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    tuple_T2OO cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    int32_t cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    int32_t cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    int32_t cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    int32_t cpy_r_r101;
    char cpy_r_r102;
    char cpy_r_r103;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[26]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "<module>", -1, CPyStatic_decorator___globals);
        goto CPyL36;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[236]; /* ('Final', 'Generic', 'Iterable', 'Optional', 'TypeVar',
                                   'Union', 'final', 'overload') */
    cpy_r_r6 = CPyStatics[31]; /* 'typing' */
    cpy_r_r7 = CPyStatic_decorator___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "<module>", 1, CPyStatic_decorator___globals);
        goto CPyL36;
    }
    CPyModule_typing = cpy_r_r8;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[237]; /* ('Network', 'constants') */
    cpy_r_r10 = CPyStatics[116]; /* 'y' */
    cpy_r_r11 = CPyStatic_decorator___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "<module>", 3, CPyStatic_decorator___globals);
        goto CPyL36;
    }
    CPyModule_y = cpy_r_r12;
    CPy_INCREF(CPyModule_y);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[238]; /* ('CostOfRevenueSortRule', 'ExpenseSortRule',
                                    'IgnoreSortRule', 'OtherExpenseSortRule',
                                    'OtherIncomeSortRule', 'RevenueSortRule') */
    cpy_r_r14 = CPyStatics[57]; /* 'dao_treasury.sorting.rule' */
    cpy_r_r15 = CPyStatic_decorator___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "<module>", 5, CPyStatic_decorator___globals);
        goto CPyL36;
    }
    CPyModule_dao_treasury___sorting___rule = cpy_r_r16;
    CPy_INCREF(CPyModule_dao_treasury___sorting___rule);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[239]; /* ('SortFunction', 'TxGroupName') */
    cpy_r_r18 = CPyStatics[59]; /* 'dao_treasury.types' */
    cpy_r_r19 = CPyStatic_decorator___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "<module>", 13, CPyStatic_decorator___globals);
        goto CPyL36;
    }
    CPyModule_dao_treasury___types = cpy_r_r20;
    CPy_INCREF(CPyModule_dao_treasury___types);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[176]; /* 'TRule' */
    cpy_r_r22 = CPyStatic_decorator___globals;
    cpy_r_r23 = CPyStatics[56]; /* 'RevenueSortRule' */
    cpy_r_r24 = CPyDict_GetItem(cpy_r_r22, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "<module>", 18, CPyStatic_decorator___globals);
        goto CPyL36;
    }
    cpy_r_r25 = CPyStatic_decorator___globals;
    cpy_r_r26 = CPyStatics[51]; /* 'CostOfRevenueSortRule' */
    cpy_r_r27 = CPyDict_GetItem(cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "<module>", 19, CPyStatic_decorator___globals);
        goto CPyL37;
    }
    cpy_r_r28 = CPyStatic_decorator___globals;
    cpy_r_r29 = CPyStatics[52]; /* 'ExpenseSortRule' */
    cpy_r_r30 = CPyDict_GetItem(cpy_r_r28, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "<module>", 20, CPyStatic_decorator___globals);
        goto CPyL38;
    }
    cpy_r_r31 = CPyStatic_decorator___globals;
    cpy_r_r32 = CPyStatics[55]; /* 'OtherIncomeSortRule' */
    cpy_r_r33 = CPyDict_GetItem(cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "<module>", 21, CPyStatic_decorator___globals);
        goto CPyL39;
    }
    cpy_r_r34 = CPyStatic_decorator___globals;
    cpy_r_r35 = CPyStatics[54]; /* 'OtherExpenseSortRule' */
    cpy_r_r36 = CPyDict_GetItem(cpy_r_r34, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "<module>", 22, CPyStatic_decorator___globals);
        goto CPyL40;
    }
    cpy_r_r37 = CPyStatic_decorator___globals;
    cpy_r_r38 = CPyStatics[53]; /* 'IgnoreSortRule' */
    cpy_r_r39 = CPyDict_GetItem(cpy_r_r37, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "<module>", 23, CPyStatic_decorator___globals);
        goto CPyL41;
    }
    cpy_r_r40 = CPyStatic_decorator___globals;
    cpy_r_r41 = CPyStatics[171]; /* 'TypeVar' */
    cpy_r_r42 = CPyDict_GetItem(cpy_r_r40, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "<module>", 16, CPyStatic_decorator___globals);
        goto CPyL42;
    }
    PyObject *cpy_r_r43[7] = {
        cpy_r_r21, cpy_r_r24, cpy_r_r27, cpy_r_r30, cpy_r_r33,
        cpy_r_r36, cpy_r_r39
    };
    cpy_r_r44 = (PyObject **)&cpy_r_r43;
    cpy_r_r45 = _PyObject_Vectorcall(cpy_r_r42, cpy_r_r44, 7, 0);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "<module>", 16, CPyStatic_decorator___globals);
        goto CPyL42;
    }
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r46 = CPyStatic_decorator___globals;
    cpy_r_r47 = CPyStatics[176]; /* 'TRule' */
    cpy_r_r48 = CPyDict_SetItem(cpy_r_r46, cpy_r_r47, cpy_r_r45);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r49 = cpy_r_r48 >= 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "<module>", 16, CPyStatic_decorator___globals);
        goto CPyL36;
    }
    cpy_r_r50 = CPyStatic_decorator___globals;
    cpy_r_r51 = CPyStatics[148]; /* 'Union' */
    cpy_r_r52 = CPyDict_GetItem(cpy_r_r50, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "<module>", 26, CPyStatic_decorator___globals);
        goto CPyL36;
    }
    cpy_r_r53 = CPyStatic_decorator___globals;
    cpy_r_r54 = CPyStatics[173]; /* 'Network' */
    cpy_r_r55 = CPyDict_GetItem(cpy_r_r53, cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "<module>", 26, CPyStatic_decorator___globals);
        goto CPyL43;
    }
    cpy_r_r56 = CPyStatic_decorator___globals;
    cpy_r_r57 = CPyStatics[103]; /* 'Iterable' */
    cpy_r_r58 = CPyDict_GetItem(cpy_r_r56, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "<module>", 26, CPyStatic_decorator___globals);
        goto CPyL44;
    }
    cpy_r_r59 = CPyStatic_decorator___globals;
    cpy_r_r60 = CPyStatics[173]; /* 'Network' */
    cpy_r_r61 = CPyDict_GetItem(cpy_r_r59, cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "<module>", 26, CPyStatic_decorator___globals);
        goto CPyL45;
    }
    cpy_r_r62 = PyObject_GetItem(cpy_r_r58, cpy_r_r61);
    CPy_DECREF(cpy_r_r58);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "<module>", 26, CPyStatic_decorator___globals);
        goto CPyL44;
    }
    cpy_r_r63.f0 = cpy_r_r55;
    cpy_r_r63.f1 = cpy_r_r62;
    cpy_r_r64 = PyTuple_New(2);
    if (unlikely(cpy_r_r64 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp7 = cpy_r_r63.f0;
    PyTuple_SET_ITEM(cpy_r_r64, 0, __tmp7);
    PyObject *__tmp8 = cpy_r_r63.f1;
    PyTuple_SET_ITEM(cpy_r_r64, 1, __tmp8);
    cpy_r_r65 = PyObject_GetItem(cpy_r_r52, cpy_r_r64);
    CPy_DECREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "<module>", 26, CPyStatic_decorator___globals);
        goto CPyL36;
    }
    cpy_r_r66 = CPyStatic_decorator___globals;
    cpy_r_r67 = CPyStatics[177]; /* 'Networks' */
    cpy_r_r68 = CPyDict_SetItem(cpy_r_r66, cpy_r_r67, cpy_r_r65);
    CPy_DECREF(cpy_r_r65);
    cpy_r_r69 = cpy_r_r68 >= 0;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "<module>", 26, CPyStatic_decorator___globals);
        goto CPyL36;
    }
    cpy_r_r70 = CPyStatic_decorator___globals;
    cpy_r_r71 = CPyStatics[152]; /* 'constants' */
    cpy_r_r72 = CPyDict_GetItem(cpy_r_r70, cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "<module>", 29, CPyStatic_decorator___globals);
        goto CPyL36;
    }
    cpy_r_r73 = CPyStatics[154]; /* 'CHAINID' */
    cpy_r_r74 = CPyObject_GetAttr(cpy_r_r72, cpy_r_r73);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "<module>", 29, CPyStatic_decorator___globals);
        goto CPyL36;
    }
    CPyStatic_decorator___CHAINID = cpy_r_r74;
    CPy_INCREF(CPyStatic_decorator___CHAINID);
    cpy_r_r75 = CPyStatic_decorator___globals;
    cpy_r_r76 = CPyStatics[154]; /* 'CHAINID' */
    cpy_r_r77 = CPyDict_SetItem(cpy_r_r75, cpy_r_r76, cpy_r_r74);
    CPy_DECREF(cpy_r_r74);
    cpy_r_r78 = cpy_r_r77 >= 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "<module>", 29, CPyStatic_decorator___globals);
        goto CPyL36;
    }
    cpy_r_r79 = CPyStatic_decorator___globals;
    cpy_r_r80 = CPyStatics[170]; /* 'Generic' */
    cpy_r_r81 = CPyDict_GetItem(cpy_r_r79, cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "<module>", 52, CPyStatic_decorator___globals);
        goto CPyL36;
    }
    cpy_r_r82 = CPyStatic_decorator___globals;
    cpy_r_r83 = CPyStatics[176]; /* 'TRule' */
    cpy_r_r84 = CPyDict_GetItem(cpy_r_r82, cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "<module>", 52, CPyStatic_decorator___globals);
        goto CPyL46;
    }
    cpy_r_r85 = PyObject_GetItem(cpy_r_r81, cpy_r_r84);
    CPy_DECREF(cpy_r_r81);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "<module>", 52, CPyStatic_decorator___globals);
        goto CPyL36;
    }
    cpy_r_r86 = PyTuple_Pack(1, cpy_r_r85);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "<module>", 52, CPyStatic_decorator___globals);
        goto CPyL36;
    }
    cpy_r_r87 = CPyStatics[50]; /* 'dao_treasury.sorting.decorator' */
    cpy_r_r88 = (PyObject *)CPyType_decorator___SortRuleDecorator_template;
    cpy_r_r89 = CPyType_FromTemplate(cpy_r_r88, cpy_r_r86, cpy_r_r87);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "<module>", 52, CPyStatic_decorator___globals);
        goto CPyL36;
    }
    cpy_r_r90 = CPyDef_decorator___SortRuleDecorator_trait_vtable_setup();
    if (unlikely(cpy_r_r90 == 2)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "<module>", -1, CPyStatic_decorator___globals);
        goto CPyL47;
    }
    cpy_r_r91 = CPyStatics[117]; /* '__mypyc_attrs__' */
    cpy_r_r92 = CPyStatics[23]; /* 'txgroup' */
    cpy_r_r93 = CPyStatics[178]; /* 'networks' */
    cpy_r_r94 = CPyStatics[179]; /* 'rule_type' */
    cpy_r_r95 = CPyStatics[180]; /* '__dict__' */
    cpy_r_r96 = PyTuple_Pack(4, cpy_r_r92, cpy_r_r93, cpy_r_r94, cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "<module>", 52, CPyStatic_decorator___globals);
        goto CPyL47;
    }
    cpy_r_r97 = PyObject_SetAttr(cpy_r_r89, cpy_r_r91, cpy_r_r96);
    CPy_DECREF(cpy_r_r96);
    cpy_r_r98 = cpy_r_r97 >= 0;
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "<module>", 52, CPyStatic_decorator___globals);
        goto CPyL47;
    }
    CPyType_decorator___SortRuleDecorator = (PyTypeObject *)cpy_r_r89;
    CPy_INCREF(CPyType_decorator___SortRuleDecorator);
    cpy_r_r99 = CPyStatic_decorator___globals;
    cpy_r_r100 = CPyStatics[181]; /* 'SortRuleDecorator' */
    cpy_r_r101 = CPyDict_SetItem(cpy_r_r99, cpy_r_r100, cpy_r_r89);
    CPy_DECREF(cpy_r_r89);
    cpy_r_r102 = cpy_r_r101 >= 0;
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("dao_treasury/sorting/decorator.py", "<module>", 52, CPyStatic_decorator___globals);
        goto CPyL36;
    }
    return 1;
CPyL36: ;
    cpy_r_r103 = 2;
    return cpy_r_r103;
CPyL37: ;
    CPy_DecRef(cpy_r_r24);
    goto CPyL36;
CPyL38: ;
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r27);
    goto CPyL36;
CPyL39: ;
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r30);
    goto CPyL36;
CPyL40: ;
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r33);
    goto CPyL36;
CPyL41: ;
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r36);
    goto CPyL36;
CPyL42: ;
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_r39);
    goto CPyL36;
CPyL43: ;
    CPy_DecRef(cpy_r_r52);
    goto CPyL36;
CPyL44: ;
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_r55);
    goto CPyL36;
CPyL45: ;
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_r58);
    goto CPyL36;
CPyL46: ;
    CPy_DecRef(cpy_r_r81);
    goto CPyL36;
CPyL47: ;
    CPy_DecRef(cpy_r_r89);
    goto CPyL36;
}

static PyObject *_wallet___TreasuryWallet_setup(PyTypeObject *type);
PyObject *CPyDef__wallet___TreasuryWallet(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);

static PyObject *
_wallet___TreasuryWallet_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType__wallet___TreasuryWallet) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return _wallet___TreasuryWallet_setup(type);
}

static int
_wallet___TreasuryWallet_traverse(dao_treasury____wallet___TreasuryWalletObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_address);
    Py_VISIT(self->_start_block);
    Py_VISIT(self->_end_block);
    Py_VISIT(self->_start_timestamp);
    Py_VISIT(self->_end_timestamp);
    return 0;
}

static int
_wallet___TreasuryWallet_clear(dao_treasury____wallet___TreasuryWalletObject *self)
{
    Py_CLEAR(self->_address);
    Py_CLEAR(self->_start_block);
    Py_CLEAR(self->_end_block);
    Py_CLEAR(self->_start_timestamp);
    Py_CLEAR(self->_end_timestamp);
    return 0;
}

static void
_wallet___TreasuryWallet_dealloc(dao_treasury____wallet___TreasuryWalletObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, _wallet___TreasuryWallet_dealloc)
    _wallet___TreasuryWallet_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem _wallet___TreasuryWallet_vtable[4];
static bool
CPyDef__wallet___TreasuryWallet_trait_vtable_setup(void)
{
    CPyVTableItem _wallet___TreasuryWallet_vtable_scratch[] = {
        (CPyVTableItem)CPyDef__wallet___TreasuryWallet_____post_init__,
        (CPyVTableItem)CPyDef__wallet___TreasuryWallet____start_block,
        (CPyVTableItem)CPyDef__wallet___TreasuryWallet____end_block,
        (CPyVTableItem)CPyDef__wallet___TreasuryWallet____get_instance,
    };
    memcpy(_wallet___TreasuryWallet_vtable, _wallet___TreasuryWallet_vtable_scratch, sizeof(_wallet___TreasuryWallet_vtable));
    return 1;
}

static PyObject *
_wallet___TreasuryWallet_get_address(dao_treasury____wallet___TreasuryWalletObject *self, void *closure);
static int
_wallet___TreasuryWallet_set_address(dao_treasury____wallet___TreasuryWalletObject *self, PyObject *value, void *closure);
static PyObject *
_wallet___TreasuryWallet_get_start_block(dao_treasury____wallet___TreasuryWalletObject *self, void *closure);
static int
_wallet___TreasuryWallet_set_start_block(dao_treasury____wallet___TreasuryWalletObject *self, PyObject *value, void *closure);
static PyObject *
_wallet___TreasuryWallet_get_end_block(dao_treasury____wallet___TreasuryWalletObject *self, void *closure);
static int
_wallet___TreasuryWallet_set_end_block(dao_treasury____wallet___TreasuryWalletObject *self, PyObject *value, void *closure);
static PyObject *
_wallet___TreasuryWallet_get_start_timestamp(dao_treasury____wallet___TreasuryWalletObject *self, void *closure);
static int
_wallet___TreasuryWallet_set_start_timestamp(dao_treasury____wallet___TreasuryWalletObject *self, PyObject *value, void *closure);
static PyObject *
_wallet___TreasuryWallet_get_end_timestamp(dao_treasury____wallet___TreasuryWalletObject *self, void *closure);
static int
_wallet___TreasuryWallet_set_end_timestamp(dao_treasury____wallet___TreasuryWalletObject *self, PyObject *value, void *closure);
static PyObject *
_wallet___TreasuryWallet_get__start_block(dao_treasury____wallet___TreasuryWalletObject *self, void *closure);
static PyObject *
_wallet___TreasuryWallet_get__end_block(dao_treasury____wallet___TreasuryWalletObject *self, void *closure);

static PyGetSetDef _wallet___TreasuryWallet_getseters[] = {
    {"address",
     (getter)_wallet___TreasuryWallet_get_address, (setter)_wallet___TreasuryWallet_set_address,
     NULL, NULL},
    {"start_block",
     (getter)_wallet___TreasuryWallet_get_start_block, (setter)_wallet___TreasuryWallet_set_start_block,
     NULL, NULL},
    {"end_block",
     (getter)_wallet___TreasuryWallet_get_end_block, (setter)_wallet___TreasuryWallet_set_end_block,
     NULL, NULL},
    {"start_timestamp",
     (getter)_wallet___TreasuryWallet_get_start_timestamp, (setter)_wallet___TreasuryWallet_set_start_timestamp,
     NULL, NULL},
    {"end_timestamp",
     (getter)_wallet___TreasuryWallet_get_end_timestamp, (setter)_wallet___TreasuryWallet_set_end_timestamp,
     NULL, NULL},
    {"_start_block",
     (getter)_wallet___TreasuryWallet_get__start_block,
    NULL, NULL, NULL},
    {"_end_block",
     (getter)_wallet___TreasuryWallet_get__end_block,
    NULL, NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef _wallet___TreasuryWallet_methods[] = {
    {"__post_init__",
     (PyCFunction)CPyPy__wallet___TreasuryWallet_____post_init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_get_instance",
     (PyCFunction)CPyPy__wallet___TreasuryWallet____get_instance,
     METH_FASTCALL | METH_KEYWORDS | METH_STATIC, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType__wallet___TreasuryWallet_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "TreasuryWallet",
    .tp_new = _wallet___TreasuryWallet_new,
    .tp_dealloc = (destructor)_wallet___TreasuryWallet_dealloc,
    .tp_traverse = (traverseproc)_wallet___TreasuryWallet_traverse,
    .tp_clear = (inquiry)_wallet___TreasuryWallet_clear,
    .tp_getset = _wallet___TreasuryWallet_getseters,
    .tp_methods = _wallet___TreasuryWallet_methods,
    .tp_basicsize = sizeof(dao_treasury____wallet___TreasuryWalletObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType__wallet___TreasuryWallet_template = &CPyType__wallet___TreasuryWallet_template_;

static PyObject *
_wallet___TreasuryWallet_setup(PyTypeObject *type)
{
    dao_treasury____wallet___TreasuryWalletObject *self;
    self = (dao_treasury____wallet___TreasuryWalletObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = _wallet___TreasuryWallet_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef__wallet___TreasuryWallet(PyObject *cpy_r_args, PyObject *cpy_r_kwargs)
{
    PyObject *self = _wallet___TreasuryWallet_setup(CPyType__wallet___TreasuryWallet);
    if (self == NULL)
        return NULL;
    int res = CPyType__wallet___TreasuryWallet->tp_init(self, cpy_r_args, cpy_r_kwargs);
    if (res < 0) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
_wallet___TreasuryWallet_get_address(dao_treasury____wallet___TreasuryWalletObject *self, void *closure)
{
    if (unlikely(self->_address == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'address' of 'TreasuryWallet' undefined");
        return NULL;
    }
    CPy_INCREF(self->_address);
    PyObject *retval = self->_address;
    return retval;
}

static int
_wallet___TreasuryWallet_set_address(dao_treasury____wallet___TreasuryWalletObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TreasuryWallet' object attribute 'address' cannot be deleted");
        return -1;
    }
    if (self->_address != NULL) {
        CPy_DECREF(self->_address);
    }
    PyObject *tmp = value;
    CPy_INCREF(tmp);
    self->_address = tmp;
    return 0;
}

static PyObject *
_wallet___TreasuryWallet_get_start_block(dao_treasury____wallet___TreasuryWalletObject *self, void *closure)
{
    if (unlikely(self->_start_block == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'start_block' of 'TreasuryWallet' undefined");
        return NULL;
    }
    CPy_INCREF(self->_start_block);
    PyObject *retval = self->_start_block;
    return retval;
}

static int
_wallet___TreasuryWallet_set_start_block(dao_treasury____wallet___TreasuryWalletObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TreasuryWallet' object attribute 'start_block' cannot be deleted");
        return -1;
    }
    if (self->_start_block != NULL) {
        CPy_DECREF(self->_start_block);
    }
    PyObject *tmp;
    if (PyLong_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL9;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL9;
    CPy_TypeError("int or None", value); 
    tmp = NULL;
__LL9: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_start_block = tmp;
    return 0;
}

static PyObject *
_wallet___TreasuryWallet_get_end_block(dao_treasury____wallet___TreasuryWalletObject *self, void *closure)
{
    if (unlikely(self->_end_block == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'end_block' of 'TreasuryWallet' undefined");
        return NULL;
    }
    CPy_INCREF(self->_end_block);
    PyObject *retval = self->_end_block;
    return retval;
}

static int
_wallet___TreasuryWallet_set_end_block(dao_treasury____wallet___TreasuryWalletObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TreasuryWallet' object attribute 'end_block' cannot be deleted");
        return -1;
    }
    if (self->_end_block != NULL) {
        CPy_DECREF(self->_end_block);
    }
    PyObject *tmp;
    if (PyLong_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10;
    CPy_TypeError("int or None", value); 
    tmp = NULL;
__LL10: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_end_block = tmp;
    return 0;
}

static PyObject *
_wallet___TreasuryWallet_get_start_timestamp(dao_treasury____wallet___TreasuryWalletObject *self, void *closure)
{
    if (unlikely(self->_start_timestamp == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'start_timestamp' of 'TreasuryWallet' undefined");
        return NULL;
    }
    CPy_INCREF(self->_start_timestamp);
    PyObject *retval = self->_start_timestamp;
    return retval;
}

static int
_wallet___TreasuryWallet_set_start_timestamp(dao_treasury____wallet___TreasuryWalletObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TreasuryWallet' object attribute 'start_timestamp' cannot be deleted");
        return -1;
    }
    if (self->_start_timestamp != NULL) {
        CPy_DECREF(self->_start_timestamp);
    }
    PyObject *tmp;
    if (PyLong_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL11;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL11;
    CPy_TypeError("int or None", value); 
    tmp = NULL;
__LL11: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_start_timestamp = tmp;
    return 0;
}

static PyObject *
_wallet___TreasuryWallet_get_end_timestamp(dao_treasury____wallet___TreasuryWalletObject *self, void *closure)
{
    if (unlikely(self->_end_timestamp == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'end_timestamp' of 'TreasuryWallet' undefined");
        return NULL;
    }
    CPy_INCREF(self->_end_timestamp);
    PyObject *retval = self->_end_timestamp;
    return retval;
}

static int
_wallet___TreasuryWallet_set_end_timestamp(dao_treasury____wallet___TreasuryWalletObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TreasuryWallet' object attribute 'end_timestamp' cannot be deleted");
        return -1;
    }
    if (self->_end_timestamp != NULL) {
        CPy_DECREF(self->_end_timestamp);
    }
    PyObject *tmp;
    if (PyLong_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL12;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL12;
    CPy_TypeError("int or None", value); 
    tmp = NULL;
__LL12: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_end_timestamp = tmp;
    return 0;
}

static PyObject *
_wallet___TreasuryWallet_get__start_block(dao_treasury____wallet___TreasuryWalletObject *self, void *closure)
{
    return CPyDef__wallet___TreasuryWallet____start_block((PyObject *) self);
}

static PyObject *
_wallet___TreasuryWallet_get__end_block(dao_treasury____wallet___TreasuryWalletObject *self, void *closure)
{
    return CPyDef__wallet___TreasuryWallet____end_block((PyObject *) self);
}
static PyMethodDef _walletmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef _walletmodule = {
    PyModuleDef_HEAD_INIT,
    "dao_treasury._wallet",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    _walletmodule_methods
};

PyObject *CPyInit_dao_treasury____wallet(void)
{
    PyObject* modname = NULL;
    if (CPyModule_dao_treasury____wallet_internal) {
        Py_INCREF(CPyModule_dao_treasury____wallet_internal);
        return CPyModule_dao_treasury____wallet_internal;
    }
    CPyModule_dao_treasury____wallet_internal = PyModule_Create(&_walletmodule);
    if (unlikely(CPyModule_dao_treasury____wallet_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_dao_treasury____wallet_internal, "__name__");
    CPyStatic__wallet___globals = PyModule_GetDict(CPyModule_dao_treasury____wallet_internal);
    if (unlikely(CPyStatic__wallet___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef__wallet_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_dao_treasury____wallet_internal;
    fail:
    Py_CLEAR(CPyModule_dao_treasury____wallet_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic__wallet___WALLETS);
    CPyStatic__wallet___WALLETS = NULL;
    Py_CLEAR(CPyType__wallet___TreasuryWallet);
    return NULL;
}

char CPyDef__wallet___TreasuryWallet_____post_init__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject **cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    int64_t cpy_r_r22;
    char cpy_r_r23;
    int64_t cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject **cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    CPyTagged cpy_r_r38;
    int64_t cpy_r_r39;
    char cpy_r_r40;
    int64_t cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject **cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject **cpy_r_r64;
    PyObject *cpy_r_r65;
    CPyTagged cpy_r_r66;
    int64_t cpy_r_r67;
    char cpy_r_r68;
    int64_t cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject **cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    CPyTagged cpy_r_r83;
    int64_t cpy_r_r84;
    char cpy_r_r85;
    int64_t cpy_r_r86;
    char cpy_r_r87;
    char cpy_r_r88;
    char cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject **cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject **cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    char cpy_r_r107;
    int32_t cpy_r_r108;
    char cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject **cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    char cpy_r_r122;
    int32_t cpy_r_r123;
    char cpy_r_r124;
    char cpy_r_r125;
    cpy_r_r0 = ((dao_treasury____wallet___TreasuryWalletObject *)cpy_r_self)->_address;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("dao_treasury/_wallet.py", "__post_init__", "TreasuryWallet", "address", 34, CPyStatic__wallet___globals);
        goto CPyL82;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyStatic__wallet___globals;
    cpy_r_r2 = CPyStatics[182]; /* 'EthAddress' */
    cpy_r_r3 = CPyDict_GetItem(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "__post_init__", 34, CPyStatic__wallet___globals);
        goto CPyL83;
    }
    PyObject *cpy_r_r4[1] = {cpy_r_r0};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = _PyObject_Vectorcall(cpy_r_r3, cpy_r_r5, 1, 0);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "__post_init__", 34, CPyStatic__wallet___globals);
        goto CPyL83;
    }
    CPy_DECREF(cpy_r_r0);
    if (((dao_treasury____wallet___TreasuryWalletObject *)cpy_r_self)->_address != NULL) {
        CPy_DECREF(((dao_treasury____wallet___TreasuryWalletObject *)cpy_r_self)->_address);
    }
    ((dao_treasury____wallet___TreasuryWalletObject *)cpy_r_self)->_address = cpy_r_r6;
    cpy_r_r7 = 1;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "__post_init__", 34, CPyStatic__wallet___globals);
        goto CPyL82;
    }
    cpy_r_r8 = ((dao_treasury____wallet___TreasuryWalletObject *)cpy_r_self)->_start_block;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("dao_treasury/_wallet.py", "__post_init__", "TreasuryWallet", "start_block", 36, CPyStatic__wallet___globals);
        goto CPyL82;
    }
    CPy_INCREF(cpy_r_r8);
CPyL5: ;
    cpy_r_r9 = ((dao_treasury____wallet___TreasuryWalletObject *)cpy_r_self)->_start_timestamp;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("dao_treasury/_wallet.py", "__post_init__", "TreasuryWallet", "start_timestamp", 37, CPyStatic__wallet___globals);
        goto CPyL84;
    }
    CPy_INCREF(cpy_r_r9);
CPyL6: ;
    cpy_r_r10 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r11 = cpy_r_r8 != cpy_r_r10;
    if (!cpy_r_r11) goto CPyL85;
    cpy_r_r12 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r13 = cpy_r_r9 != cpy_r_r12;
    if (cpy_r_r13) {
        goto CPyL86;
    } else
        goto CPyL12;
CPyL8: ;
    cpy_r_r14 = CPyStatics[183]; /* ('You can only pass a start block or a start timestamp, '
                                    'not both.') */
    cpy_r_r15 = CPyModule_builtins;
    cpy_r_r16 = CPyStatics[74]; /* 'ValueError' */
    cpy_r_r17 = CPyObject_GetAttr(cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "__post_init__", 40, CPyStatic__wallet___globals);
        goto CPyL82;
    }
    PyObject *cpy_r_r18[1] = {cpy_r_r14};
    cpy_r_r19 = (PyObject **)&cpy_r_r18;
    cpy_r_r20 = _PyObject_Vectorcall(cpy_r_r17, cpy_r_r19, 1, 0);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "__post_init__", 40, CPyStatic__wallet___globals);
        goto CPyL82;
    }
    CPy_Raise(cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(!0)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "__post_init__", 40, CPyStatic__wallet___globals);
        goto CPyL82;
    }
    CPy_Unreachable();
CPyL12: ;
    if (likely(PyLong_Check(cpy_r_r8)))
        cpy_r_r21 = CPyTagged_FromObject(cpy_r_r8);
    else {
        CPy_TypeError("int", cpy_r_r8); cpy_r_r21 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r21 == CPY_INT_TAG)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "__post_init__", 43, CPyStatic__wallet___globals);
        goto CPyL87;
    }
    cpy_r_r22 = cpy_r_r21 & 1;
    cpy_r_r23 = cpy_r_r22 != 0;
    if (cpy_r_r23) goto CPyL15;
    cpy_r_r24 = 0 & 1;
    cpy_r_r25 = cpy_r_r24 != 0;
    if (!cpy_r_r25) goto CPyL16;
CPyL15: ;
    cpy_r_r26 = CPyTagged_IsLt_(cpy_r_r21, 0);
    cpy_r_r27 = cpy_r_r26;
    goto CPyL17;
CPyL16: ;
    cpy_r_r28 = (Py_ssize_t)cpy_r_r21 < (Py_ssize_t)0;
    cpy_r_r27 = cpy_r_r28;
CPyL17: ;
    CPyTagged_DECREF(cpy_r_r21);
    if (cpy_r_r27) {
        goto CPyL88;
    } else
        goto CPyL22;
CPyL18: ;
    cpy_r_r29 = CPyStatics[184]; /* 'start_block can not be negative' */
    cpy_r_r30 = CPyModule_builtins;
    cpy_r_r31 = CPyStatics[74]; /* 'ValueError' */
    cpy_r_r32 = CPyObject_GetAttr(cpy_r_r30, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "__post_init__", 44, CPyStatic__wallet___globals);
        goto CPyL82;
    }
    PyObject *cpy_r_r33[1] = {cpy_r_r29};
    cpy_r_r34 = (PyObject **)&cpy_r_r33;
    cpy_r_r35 = _PyObject_Vectorcall(cpy_r_r32, cpy_r_r34, 1, 0);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "__post_init__", 44, CPyStatic__wallet___globals);
        goto CPyL82;
    }
    CPy_Raise(cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(!0)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "__post_init__", 44, CPyStatic__wallet___globals);
        goto CPyL82;
    }
    CPy_Unreachable();
CPyL22: ;
    cpy_r_r36 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r37 = cpy_r_r9 != cpy_r_r36;
    if (!cpy_r_r37) goto CPyL89;
    if (likely(PyLong_Check(cpy_r_r9)))
        cpy_r_r38 = CPyTagged_FromObject(cpy_r_r9);
    else {
        CPy_TypeError("int", cpy_r_r9); cpy_r_r38 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r38 == CPY_INT_TAG)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "__post_init__", 45, CPyStatic__wallet___globals);
        goto CPyL82;
    }
    cpy_r_r39 = cpy_r_r38 & 1;
    cpy_r_r40 = cpy_r_r39 != 0;
    if (cpy_r_r40) goto CPyL26;
    cpy_r_r41 = 0 & 1;
    cpy_r_r42 = cpy_r_r41 != 0;
    if (!cpy_r_r42) goto CPyL27;
CPyL26: ;
    cpy_r_r43 = CPyTagged_IsLt_(cpy_r_r38, 0);
    cpy_r_r44 = cpy_r_r43;
    goto CPyL28;
CPyL27: ;
    cpy_r_r45 = (Py_ssize_t)cpy_r_r38 < (Py_ssize_t)0;
    cpy_r_r44 = cpy_r_r45;
CPyL28: ;
    CPyTagged_DECREF(cpy_r_r38);
    if (!cpy_r_r44) goto CPyL33;
    cpy_r_r46 = CPyStatics[185]; /* 'start_timestamp can not be negative' */
    cpy_r_r47 = CPyModule_builtins;
    cpy_r_r48 = CPyStatics[74]; /* 'ValueError' */
    cpy_r_r49 = CPyObject_GetAttr(cpy_r_r47, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "__post_init__", 46, CPyStatic__wallet___globals);
        goto CPyL82;
    }
    PyObject *cpy_r_r50[1] = {cpy_r_r46};
    cpy_r_r51 = (PyObject **)&cpy_r_r50;
    cpy_r_r52 = _PyObject_Vectorcall(cpy_r_r49, cpy_r_r51, 1, 0);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "__post_init__", 46, CPyStatic__wallet___globals);
        goto CPyL82;
    }
    CPy_Raise(cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(!0)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "__post_init__", 46, CPyStatic__wallet___globals);
        goto CPyL82;
    }
    CPy_Unreachable();
CPyL33: ;
    cpy_r_r53 = ((dao_treasury____wallet___TreasuryWalletObject *)cpy_r_self)->_end_block;
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AttributeError("dao_treasury/_wallet.py", "__post_init__", "TreasuryWallet", "end_block", 48, CPyStatic__wallet___globals);
        goto CPyL82;
    }
    CPy_INCREF(cpy_r_r53);
CPyL34: ;
    cpy_r_r54 = ((dao_treasury____wallet___TreasuryWalletObject *)cpy_r_self)->_end_timestamp;
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AttributeError("dao_treasury/_wallet.py", "__post_init__", "TreasuryWallet", "end_timestamp", 49, CPyStatic__wallet___globals);
        goto CPyL90;
    }
    CPy_INCREF(cpy_r_r54);
CPyL35: ;
    cpy_r_r55 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r56 = cpy_r_r53 != cpy_r_r55;
    if (!cpy_r_r56) goto CPyL91;
    cpy_r_r57 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r58 = cpy_r_r54 != cpy_r_r57;
    if (cpy_r_r58) {
        goto CPyL92;
    } else
        goto CPyL41;
CPyL37: ;
    cpy_r_r59 = CPyStatics[186]; /* ('You can only pass an end block or an end timestamp, '
                                    'not both.') */
    cpy_r_r60 = CPyModule_builtins;
    cpy_r_r61 = CPyStatics[74]; /* 'ValueError' */
    cpy_r_r62 = CPyObject_GetAttr(cpy_r_r60, cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "__post_init__", 52, CPyStatic__wallet___globals);
        goto CPyL82;
    }
    PyObject *cpy_r_r63[1] = {cpy_r_r59};
    cpy_r_r64 = (PyObject **)&cpy_r_r63;
    cpy_r_r65 = _PyObject_Vectorcall(cpy_r_r62, cpy_r_r64, 1, 0);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "__post_init__", 52, CPyStatic__wallet___globals);
        goto CPyL82;
    }
    CPy_Raise(cpy_r_r65);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(!0)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "__post_init__", 52, CPyStatic__wallet___globals);
        goto CPyL82;
    }
    CPy_Unreachable();
CPyL41: ;
    if (likely(PyLong_Check(cpy_r_r53)))
        cpy_r_r66 = CPyTagged_FromObject(cpy_r_r53);
    else {
        CPy_TypeError("int", cpy_r_r53); cpy_r_r66 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r66 == CPY_INT_TAG)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "__post_init__", 55, CPyStatic__wallet___globals);
        goto CPyL93;
    }
    cpy_r_r67 = cpy_r_r66 & 1;
    cpy_r_r68 = cpy_r_r67 != 0;
    if (cpy_r_r68) goto CPyL44;
    cpy_r_r69 = 0 & 1;
    cpy_r_r70 = cpy_r_r69 != 0;
    if (!cpy_r_r70) goto CPyL45;
CPyL44: ;
    cpy_r_r71 = CPyTagged_IsLt_(cpy_r_r66, 0);
    cpy_r_r72 = cpy_r_r71;
    goto CPyL46;
CPyL45: ;
    cpy_r_r73 = (Py_ssize_t)cpy_r_r66 < (Py_ssize_t)0;
    cpy_r_r72 = cpy_r_r73;
CPyL46: ;
    CPyTagged_DECREF(cpy_r_r66);
    if (cpy_r_r72) {
        goto CPyL94;
    } else
        goto CPyL51;
CPyL47: ;
    cpy_r_r74 = CPyStatics[187]; /* 'end_block can not be negative' */
    cpy_r_r75 = CPyModule_builtins;
    cpy_r_r76 = CPyStatics[74]; /* 'ValueError' */
    cpy_r_r77 = CPyObject_GetAttr(cpy_r_r75, cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "__post_init__", 56, CPyStatic__wallet___globals);
        goto CPyL82;
    }
    PyObject *cpy_r_r78[1] = {cpy_r_r74};
    cpy_r_r79 = (PyObject **)&cpy_r_r78;
    cpy_r_r80 = _PyObject_Vectorcall(cpy_r_r77, cpy_r_r79, 1, 0);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "__post_init__", 56, CPyStatic__wallet___globals);
        goto CPyL82;
    }
    CPy_Raise(cpy_r_r80);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(!0)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "__post_init__", 56, CPyStatic__wallet___globals);
        goto CPyL82;
    }
    CPy_Unreachable();
CPyL51: ;
    cpy_r_r81 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r82 = cpy_r_r54 != cpy_r_r81;
    if (!cpy_r_r82) goto CPyL95;
    if (likely(PyLong_Check(cpy_r_r54)))
        cpy_r_r83 = CPyTagged_FromObject(cpy_r_r54);
    else {
        CPy_TypeError("int", cpy_r_r54); cpy_r_r83 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r83 == CPY_INT_TAG)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "__post_init__", 57, CPyStatic__wallet___globals);
        goto CPyL82;
    }
    cpy_r_r84 = cpy_r_r83 & 1;
    cpy_r_r85 = cpy_r_r84 != 0;
    if (cpy_r_r85) goto CPyL55;
    cpy_r_r86 = 0 & 1;
    cpy_r_r87 = cpy_r_r86 != 0;
    if (!cpy_r_r87) goto CPyL56;
CPyL55: ;
    cpy_r_r88 = CPyTagged_IsLt_(cpy_r_r83, 0);
    cpy_r_r89 = cpy_r_r88;
    goto CPyL57;
CPyL56: ;
    cpy_r_r90 = (Py_ssize_t)cpy_r_r83 < (Py_ssize_t)0;
    cpy_r_r89 = cpy_r_r90;
CPyL57: ;
    CPyTagged_DECREF(cpy_r_r83);
    if (!cpy_r_r89) goto CPyL62;
    cpy_r_r91 = CPyStatics[188]; /* 'end_timestamp can not be negative' */
    cpy_r_r92 = CPyModule_builtins;
    cpy_r_r93 = CPyStatics[74]; /* 'ValueError' */
    cpy_r_r94 = CPyObject_GetAttr(cpy_r_r92, cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "__post_init__", 58, CPyStatic__wallet___globals);
        goto CPyL82;
    }
    PyObject *cpy_r_r95[1] = {cpy_r_r91};
    cpy_r_r96 = (PyObject **)&cpy_r_r95;
    cpy_r_r97 = _PyObject_Vectorcall(cpy_r_r94, cpy_r_r96, 1, 0);
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "__post_init__", 58, CPyStatic__wallet___globals);
        goto CPyL82;
    }
    CPy_Raise(cpy_r_r97);
    CPy_DECREF(cpy_r_r97);
    if (unlikely(!0)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "__post_init__", 58, CPyStatic__wallet___globals);
        goto CPyL82;
    }
    CPy_Unreachable();
CPyL62: ;
    cpy_r_r98 = ((dao_treasury____wallet___TreasuryWalletObject *)cpy_r_self)->_address;
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AttributeError("dao_treasury/_wallet.py", "__post_init__", "TreasuryWallet", "address", 60, CPyStatic__wallet___globals);
        goto CPyL82;
    }
    CPy_INCREF(cpy_r_r98);
CPyL63: ;
    cpy_r_r99 = PyObject_Str(cpy_r_r98);
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "__post_init__", 60, CPyStatic__wallet___globals);
        goto CPyL82;
    }
    cpy_r_r100 = CPyStatic__wallet___globals;
    cpy_r_r101 = CPyStatics[107]; /* 'ChecksumAddress' */
    cpy_r_r102 = CPyDict_GetItem(cpy_r_r100, cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "__post_init__", 60, CPyStatic__wallet___globals);
        goto CPyL96;
    }
    PyObject *cpy_r_r103[1] = {cpy_r_r99};
    cpy_r_r104 = (PyObject **)&cpy_r_r103;
    cpy_r_r105 = _PyObject_Vectorcall(cpy_r_r102, cpy_r_r104, 1, 0);
    CPy_DECREF(cpy_r_r102);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "__post_init__", 60, CPyStatic__wallet___globals);
        goto CPyL96;
    }
    CPy_DECREF(cpy_r_r99);
    cpy_r_r106 = CPyStatic__wallet___WALLETS;
    if (unlikely(cpy_r_r106 == NULL)) {
        goto CPyL97;
    } else
        goto CPyL69;
CPyL67: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"WALLETS\" was not set");
    cpy_r_r107 = 0;
    if (unlikely(!cpy_r_r107)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "__post_init__", 61, CPyStatic__wallet___globals);
        goto CPyL82;
    }
    CPy_Unreachable();
CPyL69: ;
    cpy_r_r108 = PyDict_Contains(cpy_r_r106, cpy_r_r105);
    cpy_r_r109 = cpy_r_r108 >= 0;
    if (unlikely(!cpy_r_r109)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "__post_init__", 61, CPyStatic__wallet___globals);
        goto CPyL98;
    }
    cpy_r_r110 = cpy_r_r108;
    if (!cpy_r_r110) goto CPyL77;
    cpy_r_r111 = CPyStatics[189]; /* 'TreasuryWallet ' */
    cpy_r_r112 = PyObject_Str(cpy_r_r105);
    CPy_DECREF(cpy_r_r105);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "__post_init__", 62, CPyStatic__wallet___globals);
        goto CPyL82;
    }
    cpy_r_r113 = CPyStatics[190]; /* ' already exists' */
    cpy_r_r114 = CPyStr_Build(3, cpy_r_r111, cpy_r_r112, cpy_r_r113);
    CPy_DECREF(cpy_r_r112);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "__post_init__", 62, CPyStatic__wallet___globals);
        goto CPyL82;
    }
    cpy_r_r115 = CPyModule_builtins;
    cpy_r_r116 = CPyStatics[74]; /* 'ValueError' */
    cpy_r_r117 = CPyObject_GetAttr(cpy_r_r115, cpy_r_r116);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "__post_init__", 62, CPyStatic__wallet___globals);
        goto CPyL99;
    }
    PyObject *cpy_r_r118[1] = {cpy_r_r114};
    cpy_r_r119 = (PyObject **)&cpy_r_r118;
    cpy_r_r120 = _PyObject_Vectorcall(cpy_r_r117, cpy_r_r119, 1, 0);
    CPy_DECREF(cpy_r_r117);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "__post_init__", 62, CPyStatic__wallet___globals);
        goto CPyL99;
    }
    CPy_DECREF(cpy_r_r114);
    CPy_Raise(cpy_r_r120);
    CPy_DECREF(cpy_r_r120);
    if (unlikely(!0)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "__post_init__", 62, CPyStatic__wallet___globals);
        goto CPyL82;
    }
    CPy_Unreachable();
CPyL77: ;
    cpy_r_r121 = CPyStatic__wallet___WALLETS;
    if (unlikely(cpy_r_r121 == NULL)) {
        goto CPyL100;
    } else
        goto CPyL80;
CPyL78: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"WALLETS\" was not set");
    cpy_r_r122 = 0;
    if (unlikely(!cpy_r_r122)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "__post_init__", 63, CPyStatic__wallet___globals);
        goto CPyL82;
    }
    CPy_Unreachable();
CPyL80: ;
    cpy_r_r123 = CPyDict_SetItem(cpy_r_r121, cpy_r_r105, cpy_r_self);
    CPy_DECREF(cpy_r_r105);
    cpy_r_r124 = cpy_r_r123 >= 0;
    if (unlikely(!cpy_r_r124)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "__post_init__", 63, CPyStatic__wallet___globals);
        goto CPyL82;
    }
    return 1;
CPyL82: ;
    cpy_r_r125 = 2;
    return cpy_r_r125;
CPyL83: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL82;
CPyL84: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL82;
CPyL85: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL22;
CPyL86: ;
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r9);
    goto CPyL8;
CPyL87: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL82;
CPyL88: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL18;
CPyL89: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL33;
CPyL90: ;
    CPy_DecRef(cpy_r_r53);
    goto CPyL82;
CPyL91: ;
    CPy_DECREF(cpy_r_r53);
    goto CPyL51;
CPyL92: ;
    CPy_DECREF(cpy_r_r53);
    CPy_DECREF(cpy_r_r54);
    goto CPyL37;
CPyL93: ;
    CPy_DecRef(cpy_r_r54);
    goto CPyL82;
CPyL94: ;
    CPy_DECREF(cpy_r_r54);
    goto CPyL47;
CPyL95: ;
    CPy_DECREF(cpy_r_r54);
    goto CPyL62;
CPyL96: ;
    CPy_DecRef(cpy_r_r99);
    goto CPyL82;
CPyL97: ;
    CPy_DecRef(cpy_r_r105);
    goto CPyL67;
CPyL98: ;
    CPy_DecRef(cpy_r_r105);
    goto CPyL82;
CPyL99: ;
    CPy_DecRef(cpy_r_r114);
    goto CPyL82;
CPyL100: ;
    CPy_DecRef(cpy_r_r105);
    goto CPyL78;
}

PyObject *CPyPy__wallet___TreasuryWallet_____post_init__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__post_init__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__wallet___TreasuryWallet))
        arg_self = obj_self;
    else {
        CPy_TypeError("dao_treasury._wallet.TreasuryWallet", obj_self); 
        goto fail;
    }
    char retval = CPyDef__wallet___TreasuryWallet_____post_init__(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("dao_treasury/_wallet.py", "__post_init__", 33, CPyStatic__wallet___globals);
    return NULL;
}

PyObject *CPyDef__wallet___TreasuryWallet____start_block(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject **cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject **cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    cpy_r_r0 = ((dao_treasury____wallet___TreasuryWalletObject *)cpy_r_self)->_start_block;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("dao_treasury/_wallet.py", "_start_block", "TreasuryWallet", "start_block", 67, CPyStatic__wallet___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL15;
    if (likely(PyLong_Check(cpy_r_r0)))
        cpy_r_r3 = CPyTagged_FromObject(cpy_r_r0);
    else {
        CPy_TypeError("int", cpy_r_r0); cpy_r_r3 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r3 == CPY_INT_TAG)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "_start_block", 69, CPyStatic__wallet___globals);
        goto CPyL14;
    }
    cpy_r_r4 = CPyTagged_StealAsObject(cpy_r_r3);
    return cpy_r_r4;
CPyL4: ;
    cpy_r_r5 = ((dao_treasury____wallet___TreasuryWalletObject *)cpy_r_self)->_start_timestamp;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("dao_treasury/_wallet.py", "_start_block", "TreasuryWallet", "start_timestamp", 70, CPyStatic__wallet___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r5);
CPyL5: ;
    cpy_r_r6 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r7 = cpy_r_r5 != cpy_r_r6;
    if (!cpy_r_r7) goto CPyL16;
    if (likely(PyLong_Check(cpy_r_r5)))
        cpy_r_r8 = CPyTagged_FromObject(cpy_r_r5);
    else {
        CPy_TypeError("int", cpy_r_r5); cpy_r_r8 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r8 == CPY_INT_TAG)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "_start_block", 72, CPyStatic__wallet___globals);
        goto CPyL14;
    }
    cpy_r_r9 = CPyStatic__wallet___globals;
    cpy_r_r10 = CPyStatics[191]; /* 'closest_block_after_timestamp' */
    cpy_r_r11 = CPyDict_GetItem(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "_start_block", 72, CPyStatic__wallet___globals);
        goto CPyL17;
    }
    cpy_r_r12 = CPyTagged_StealAsObject(cpy_r_r8);
    PyObject *cpy_r_r13[1] = {cpy_r_r12};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = _PyObject_Vectorcall(cpy_r_r11, cpy_r_r14, 1, 0);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "_start_block", 72, CPyStatic__wallet___globals);
        goto CPyL18;
    }
    CPy_DECREF(cpy_r_r12);
    cpy_r_r16 = CPyStatics[208]; /* 1 */
    cpy_r_r17 = PyNumber_Subtract(cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "_start_block", 72, CPyStatic__wallet___globals);
        goto CPyL14;
    }
    return cpy_r_r17;
CPyL11: ;
    cpy_r_r18 = CPyStatic__wallet___globals;
    cpy_r_r19 = CPyStatics[192]; /* 'BlockNumber' */
    cpy_r_r20 = CPyDict_GetItem(cpy_r_r18, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "_start_block", 73, CPyStatic__wallet___globals);
        goto CPyL14;
    }
    cpy_r_r21 = CPyStatics[209]; /* 0 */
    PyObject *cpy_r_r22[1] = {cpy_r_r21};
    cpy_r_r23 = (PyObject **)&cpy_r_r22;
    cpy_r_r24 = _PyObject_Vectorcall(cpy_r_r20, cpy_r_r23, 1, 0);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "_start_block", 73, CPyStatic__wallet___globals);
        goto CPyL14;
    }
    return cpy_r_r24;
CPyL14: ;
    cpy_r_r25 = NULL;
    return cpy_r_r25;
CPyL15: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL4;
CPyL16: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL11;
CPyL17: ;
    CPyTagged_DecRef(cpy_r_r8);
    goto CPyL14;
CPyL18: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL14;
}

PyObject *CPyPy__wallet___TreasuryWallet____start_block(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":_start_block", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__wallet___TreasuryWallet))
        arg_self = obj_self;
    else {
        CPy_TypeError("dao_treasury._wallet.TreasuryWallet", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef__wallet___TreasuryWallet____start_block(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("dao_treasury/_wallet.py", "_start_block", 66, CPyStatic__wallet___globals);
    return NULL;
}

PyObject *CPyDef__wallet___TreasuryWallet____end_block(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject **cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    cpy_r_r0 = ((dao_treasury____wallet___TreasuryWalletObject *)cpy_r_self)->_end_block;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("dao_treasury/_wallet.py", "_end_block", "TreasuryWallet", "end_block", 77, CPyStatic__wallet___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL13;
    if (likely(PyLong_Check(cpy_r_r0)))
        cpy_r_r3 = CPyTagged_FromObject(cpy_r_r0);
    else {
        CPy_TypeError("int", cpy_r_r0); cpy_r_r3 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r3 == CPY_INT_TAG)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "_end_block", 79, CPyStatic__wallet___globals);
        goto CPyL12;
    }
    cpy_r_r4 = CPyTagged_StealAsObject(cpy_r_r3);
    return cpy_r_r4;
CPyL4: ;
    cpy_r_r5 = ((dao_treasury____wallet___TreasuryWalletObject *)cpy_r_self)->_end_timestamp;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("dao_treasury/_wallet.py", "_end_block", "TreasuryWallet", "end_timestamp", 80, CPyStatic__wallet___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r5);
CPyL5: ;
    cpy_r_r6 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r7 = cpy_r_r5 != cpy_r_r6;
    if (!cpy_r_r7) goto CPyL14;
    if (likely(PyLong_Check(cpy_r_r5)))
        cpy_r_r8 = CPyTagged_FromObject(cpy_r_r5);
    else {
        CPy_TypeError("int", cpy_r_r5); cpy_r_r8 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r8 == CPY_INT_TAG)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "_end_block", 82, CPyStatic__wallet___globals);
        goto CPyL12;
    }
    cpy_r_r9 = CPyStatic__wallet___globals;
    cpy_r_r10 = CPyStatics[191]; /* 'closest_block_after_timestamp' */
    cpy_r_r11 = CPyDict_GetItem(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "_end_block", 82, CPyStatic__wallet___globals);
        goto CPyL15;
    }
    cpy_r_r12 = CPyTagged_StealAsObject(cpy_r_r8);
    PyObject *cpy_r_r13[1] = {cpy_r_r12};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = _PyObject_Vectorcall(cpy_r_r11, cpy_r_r14, 1, 0);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "_end_block", 82, CPyStatic__wallet___globals);
        goto CPyL16;
    }
    CPy_DECREF(cpy_r_r12);
    cpy_r_r16 = CPyStatics[208]; /* 1 */
    cpy_r_r17 = PyNumber_Subtract(cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "_end_block", 82, CPyStatic__wallet___globals);
        goto CPyL12;
    }
    return cpy_r_r17;
CPyL11: ;
    cpy_r_r18 = Py_None;
    CPy_INCREF(cpy_r_r18);
    return cpy_r_r18;
CPyL12: ;
    cpy_r_r19 = NULL;
    return cpy_r_r19;
CPyL13: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL4;
CPyL14: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL11;
CPyL15: ;
    CPyTagged_DecRef(cpy_r_r8);
    goto CPyL12;
CPyL16: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL12;
}

PyObject *CPyPy__wallet___TreasuryWallet____end_block(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":_end_block", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__wallet___TreasuryWallet))
        arg_self = obj_self;
    else {
        CPy_TypeError("dao_treasury._wallet.TreasuryWallet", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef__wallet___TreasuryWallet____end_block(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("dao_treasury/_wallet.py", "_end_block", 76, CPyStatic__wallet___globals);
    return NULL;
}

PyObject *CPyDef__wallet___TreasuryWallet____get_instance(PyObject *cpy_r_address) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    tuple_T3OOO cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject **cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    tuple_T3OOO cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    cpy_r_r0 = CPyStatic__wallet___WALLETS;
    if (likely(cpy_r_r0 != NULL)) goto CPyL4;
    PyErr_SetString(PyExc_NameError, "value for final name \"WALLETS\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "_get_instance", 89, CPyStatic__wallet___globals);
        goto CPyL7;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_address);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "_get_instance", 89, CPyStatic__wallet___globals);
        goto CPyL7;
    }
    if (likely(Py_TYPE(cpy_r_r2) == CPyType__wallet___TreasuryWallet))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("dao_treasury/_wallet.py", "_get_instance", 89, CPyStatic__wallet___globals, "dao_treasury._wallet.TreasuryWallet", cpy_r_r2);
        goto CPyL7;
    }
    return cpy_r_r3;
CPyL7: ;
    cpy_r_r4 = CPy_CatchError();
    cpy_r_r5 = CPyModule_builtins;
    cpy_r_r6 = CPyStatics[67]; /* 'KeyError' */
    cpy_r_r7 = CPyObject_GetAttr(cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "_get_instance", 90, CPyStatic__wallet___globals);
        goto CPyL12;
    }
    cpy_r_r8 = CPy_ExceptionMatches(cpy_r_r7);
    CPy_DecRef(cpy_r_r7);
    if (cpy_r_r8) goto CPyL11;
    CPy_Reraise();
    if (!0) {
        goto CPyL12;
    } else
        goto CPyL35;
CPyL10: ;
    CPy_Unreachable();
CPyL11: ;
    CPy_RestoreExcInfo(cpy_r_r4);
    CPy_DecRef(cpy_r_r4.f0);
    CPy_DecRef(cpy_r_r4.f1);
    CPy_DecRef(cpy_r_r4.f2);
    goto CPyL14;
CPyL12: ;
    CPy_RestoreExcInfo(cpy_r_r4);
    CPy_DecRef(cpy_r_r4.f0);
    CPy_DecRef(cpy_r_r4.f1);
    CPy_DecRef(cpy_r_r4.f2);
    cpy_r_r9 = CPy_KeepPropagating();
    if (!cpy_r_r9) goto CPyL34;
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r10 = CPyStatic__wallet___globals;
    cpy_r_r11 = CPyStatics[86]; /* 'convert' */
    cpy_r_r12 = CPyDict_GetItem(cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "_get_instance", 92, CPyStatic__wallet___globals);
        goto CPyL34;
    }
    cpy_r_r13 = CPyStatics[5]; /* 'to_address' */
    PyObject *cpy_r_r14[2] = {cpy_r_r12, cpy_r_address};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = PyObject_VectorcallMethod(cpy_r_r13, cpy_r_r15, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "_get_instance", 92, CPyStatic__wallet___globals);
        goto CPyL36;
    }
    CPy_DecRef(cpy_r_r12);
    cpy_r_r17 = CPyStatic__wallet___WALLETS;
    if (unlikely(cpy_r_r17 == NULL)) {
        goto CPyL37;
    } else
        goto CPyL20;
CPyL18: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"WALLETS\" was not set");
    cpy_r_r18 = 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "_get_instance", 94, CPyStatic__wallet___globals);
        goto CPyL26;
    }
    CPy_Unreachable();
CPyL20: ;
    cpy_r_r19 = CPyDict_GetItem(cpy_r_r17, cpy_r_r16);
    CPy_DecRef(cpy_r_r16);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "_get_instance", 94, CPyStatic__wallet___globals);
        goto CPyL26;
    }
    if (likely(Py_TYPE(cpy_r_r19) == CPyType__wallet___TreasuryWallet))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("dao_treasury/_wallet.py", "_get_instance", 94, CPyStatic__wallet___globals, "dao_treasury._wallet.TreasuryWallet", cpy_r_r19);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_r20);
    cpy_r_r21 = CPyStatic__wallet___WALLETS;
    if (unlikely(cpy_r_r21 == NULL)) {
        goto CPyL38;
    } else
        goto CPyL25;
CPyL23: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"WALLETS\" was not set");
    cpy_r_r22 = 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "_get_instance", 94, CPyStatic__wallet___globals);
        goto CPyL26;
    }
    CPy_Unreachable();
CPyL25: ;
    cpy_r_r23 = CPyDict_SetItem(cpy_r_r21, cpy_r_address, cpy_r_r20);
    CPy_DecRef(cpy_r_r20);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "_get_instance", 94, CPyStatic__wallet___globals);
        goto CPyL39;
    } else
        goto CPyL33;
CPyL26: ;
    cpy_r_r25 = CPy_CatchError();
    cpy_r_r26 = CPyModule_builtins;
    cpy_r_r27 = CPyStatics[67]; /* 'KeyError' */
    cpy_r_r28 = CPyObject_GetAttr(cpy_r_r26, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "_get_instance", 95, CPyStatic__wallet___globals);
        goto CPyL31;
    }
    cpy_r_r29 = CPy_ExceptionMatches(cpy_r_r28);
    CPy_DecRef(cpy_r_r28);
    if (!cpy_r_r29) goto CPyL29;
    cpy_r_r30 = Py_None;
    CPy_RestoreExcInfo(cpy_r_r25);
    CPy_DecRef(cpy_r_r25.f0);
    CPy_DecRef(cpy_r_r25.f1);
    CPy_DecRef(cpy_r_r25.f2);
    CPy_INCREF(cpy_r_r30);
    return cpy_r_r30;
CPyL29: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL31;
    } else
        goto CPyL40;
CPyL30: ;
    CPy_Unreachable();
CPyL31: ;
    CPy_RestoreExcInfo(cpy_r_r25);
    CPy_DecRef(cpy_r_r25.f0);
    CPy_DecRef(cpy_r_r25.f1);
    CPy_DecRef(cpy_r_r25.f2);
    cpy_r_r31 = CPy_KeepPropagating();
    if (!cpy_r_r31) goto CPyL34;
    CPy_Unreachable();
CPyL33: ;
    return cpy_r_r20;
CPyL34: ;
    cpy_r_r32 = NULL;
    return cpy_r_r32;
CPyL35: ;
    CPy_DecRef(cpy_r_r4.f0);
    CPy_DecRef(cpy_r_r4.f1);
    CPy_DecRef(cpy_r_r4.f2);
    goto CPyL10;
CPyL36: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL34;
CPyL37: ;
    CPy_DecRef(cpy_r_r16);
    goto CPyL18;
CPyL38: ;
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r20);
    goto CPyL23;
CPyL39: ;
    CPy_DecRef(cpy_r_r20);
    goto CPyL26;
CPyL40: ;
    CPy_DecRef(cpy_r_r25.f0);
    CPy_DecRef(cpy_r_r25.f1);
    CPy_DecRef(cpy_r_r25.f2);
    goto CPyL30;
}

PyObject *CPyPy__wallet___TreasuryWallet____get_instance(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"address", 0};
    static CPyArg_Parser parser = {"O:_get_instance", kwlist, 0};
    PyObject *obj_address;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_address)) {
        return NULL;
    }
    PyObject *arg_address = obj_address;
    PyObject *retval = CPyDef__wallet___TreasuryWallet____get_instance(arg_address);
    return retval;
fail: ;
    CPy_AddTraceback("dao_treasury/_wallet.py", "_get_instance", 86, CPyStatic__wallet___globals);
    return NULL;
}

char CPyDef__wallet_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    tuple_T0 cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    int32_t cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    int32_t cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    int32_t cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    int32_t cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    int32_t cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    int32_t cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    int32_t cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    int32_t cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    int32_t cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    int32_t cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    int32_t cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    char cpy_r_r107;
    char cpy_r_r108;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[26]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "<module>", -1, CPyStatic__wallet___globals);
        goto CPyL33;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[240]; /* ('dataclass',) */
    cpy_r_r6 = CPyStatics[194]; /* 'dataclasses' */
    cpy_r_r7 = CPyStatic__wallet___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "<module>", 1, CPyStatic__wallet___globals);
        goto CPyL33;
    }
    CPyModule_dataclasses = cpy_r_r8;
    CPy_INCREF(CPyModule_dataclasses);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[241]; /* ('Dict', 'Final', 'Optional', 'final') */
    cpy_r_r10 = CPyStatics[31]; /* 'typing' */
    cpy_r_r11 = CPyStatic__wallet___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "<module>", 2, CPyStatic__wallet___globals);
        goto CPyL33;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[242]; /* ('EthAddress',) */
    cpy_r_r14 = CPyStatics[195]; /* 'brownie.convert.datatypes' */
    cpy_r_r15 = CPyStatic__wallet___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "<module>", 4, CPyStatic__wallet___globals);
        goto CPyL33;
    }
    CPyModule_brownie___convert___datatypes = cpy_r_r16;
    CPy_INCREF(CPyModule_brownie___convert___datatypes);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[243]; /* ('BlockNumber', 'ChecksumAddress', 'HexAddress') */
    cpy_r_r18 = CPyStatics[110]; /* 'eth_typing' */
    cpy_r_r19 = CPyStatic__wallet___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "<module>", 5, CPyStatic__wallet___globals);
        goto CPyL33;
    }
    CPyModule_eth_typing = cpy_r_r20;
    CPy_INCREF(CPyModule_eth_typing);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[228]; /* ('convert',) */
    cpy_r_r22 = CPyStatics[116]; /* 'y' */
    cpy_r_r23 = CPyStatic__wallet___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "<module>", 6, CPyStatic__wallet___globals);
        goto CPyL33;
    }
    CPyModule_y = cpy_r_r24;
    CPy_INCREF(CPyModule_y);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[244]; /* ('closest_block_after_timestamp',) */
    cpy_r_r26 = CPyStatics[196]; /* 'y.time' */
    cpy_r_r27 = CPyStatic__wallet___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "<module>", 7, CPyStatic__wallet___globals);
        goto CPyL33;
    }
    CPyModule_y___time = cpy_r_r28;
    CPy_INCREF(CPyModule_y___time);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = PyDict_New();
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "<module>", 10, CPyStatic__wallet___globals);
        goto CPyL33;
    }
    CPyStatic__wallet___WALLETS = cpy_r_r29;
    CPy_INCREF(CPyStatic__wallet___WALLETS);
    cpy_r_r30 = CPyStatic__wallet___globals;
    cpy_r_r31 = CPyStatics[197]; /* 'WALLETS' */
    cpy_r_r32 = CPyDict_SetItem(cpy_r_r30, cpy_r_r31, cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "<module>", 10, CPyStatic__wallet___globals);
        goto CPyL33;
    }
    cpy_r_r34 = NULL;
    cpy_r_r35 = CPyStatics[38]; /* 'dao_treasury._wallet' */
    cpy_r_r36 = (PyObject *)CPyType__wallet___TreasuryWallet_template;
    cpy_r_r37 = CPyType_FromTemplate(cpy_r_r36, cpy_r_r34, cpy_r_r35);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "<module>", 15, CPyStatic__wallet___globals);
        goto CPyL33;
    }
    cpy_r_r38 = CPyDef__wallet___TreasuryWallet_trait_vtable_setup();
    if (unlikely(cpy_r_r38 == 2)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "<module>", -1, CPyStatic__wallet___globals);
        goto CPyL34;
    }
    cpy_r_r39 = CPyStatics[117]; /* '__mypyc_attrs__' */
    cpy_r_r40 = CPyStatics[17]; /* 'address' */
    cpy_r_r41 = CPyStatics[198]; /* 'start_block' */
    cpy_r_r42 = CPyStatics[199]; /* 'end_block' */
    cpy_r_r43 = CPyStatics[200]; /* 'start_timestamp' */
    cpy_r_r44 = CPyStatics[201]; /* 'end_timestamp' */
    cpy_r_r45 = PyTuple_Pack(5, cpy_r_r40, cpy_r_r41, cpy_r_r42, cpy_r_r43, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "<module>", 15, CPyStatic__wallet___globals);
        goto CPyL34;
    }
    cpy_r_r46 = PyObject_SetAttr(cpy_r_r37, cpy_r_r39, cpy_r_r45);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r47 = cpy_r_r46 >= 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "<module>", 15, CPyStatic__wallet___globals);
        goto CPyL34;
    }
    CPyType__wallet___TreasuryWallet = (PyTypeObject *)cpy_r_r37;
    CPy_INCREF(CPyType__wallet___TreasuryWallet);
    cpy_r_r48 = CPyStatic__wallet___globals;
    cpy_r_r49 = CPyStatics[37]; /* 'TreasuryWallet' */
    cpy_r_r50 = CPyDict_SetItem(cpy_r_r48, cpy_r_r49, cpy_r_r37);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "<module>", 15, CPyStatic__wallet___globals);
        goto CPyL34;
    }
    cpy_r_r52 = PyDict_New();
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "<module>", 15, CPyStatic__wallet___globals);
        goto CPyL34;
    }
    cpy_r_r53.empty_struct_error_flag = 0;
    cpy_r_r54 = PyDict_New();
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "<module>", 15, CPyStatic__wallet___globals);
        goto CPyL35;
    }
    cpy_r_r55 = (PyObject *)&PyType_Type;
    cpy_r_r56 = (PyObject *)&PyType_Type;
    cpy_r_r57 = CPyStatics[17]; /* 'address' */
    cpy_r_r58 = CPyDict_SetItem(cpy_r_r54, cpy_r_r57, cpy_r_r56);
    cpy_r_r59 = cpy_r_r58 >= 0;
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "<module>", 18, CPyStatic__wallet___globals);
        goto CPyL36;
    }
    cpy_r_r60 = (PyObject *)&PyType_Type;
    cpy_r_r61 = CPyStatics[198]; /* 'start_block' */
    cpy_r_r62 = CPyDict_SetItem(cpy_r_r54, cpy_r_r61, cpy_r_r60);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "<module>", 21, CPyStatic__wallet___globals);
        goto CPyL36;
    }
    cpy_r_r64 = CPyStatics[198]; /* 'start_block' */
    cpy_r_r65 = Py_None;
    cpy_r_r66 = CPyDict_SetItem(cpy_r_r52, cpy_r_r64, cpy_r_r65);
    cpy_r_r67 = cpy_r_r66 >= 0;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "<module>", 21, CPyStatic__wallet___globals);
        goto CPyL36;
    }
    cpy_r_r68 = (PyObject *)&PyType_Type;
    cpy_r_r69 = CPyStatics[199]; /* 'end_block' */
    cpy_r_r70 = CPyDict_SetItem(cpy_r_r54, cpy_r_r69, cpy_r_r68);
    cpy_r_r71 = cpy_r_r70 >= 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "<module>", 24, CPyStatic__wallet___globals);
        goto CPyL36;
    }
    cpy_r_r72 = CPyStatics[199]; /* 'end_block' */
    cpy_r_r73 = Py_None;
    cpy_r_r74 = CPyDict_SetItem(cpy_r_r52, cpy_r_r72, cpy_r_r73);
    cpy_r_r75 = cpy_r_r74 >= 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "<module>", 24, CPyStatic__wallet___globals);
        goto CPyL36;
    }
    cpy_r_r76 = (PyObject *)&PyType_Type;
    cpy_r_r77 = CPyStatics[200]; /* 'start_timestamp' */
    cpy_r_r78 = CPyDict_SetItem(cpy_r_r54, cpy_r_r77, cpy_r_r76);
    cpy_r_r79 = cpy_r_r78 >= 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "<module>", 27, CPyStatic__wallet___globals);
        goto CPyL36;
    }
    cpy_r_r80 = CPyStatics[200]; /* 'start_timestamp' */
    cpy_r_r81 = Py_None;
    cpy_r_r82 = CPyDict_SetItem(cpy_r_r52, cpy_r_r80, cpy_r_r81);
    cpy_r_r83 = cpy_r_r82 >= 0;
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "<module>", 27, CPyStatic__wallet___globals);
        goto CPyL36;
    }
    cpy_r_r84 = (PyObject *)&PyType_Type;
    cpy_r_r85 = CPyStatics[201]; /* 'end_timestamp' */
    cpy_r_r86 = CPyDict_SetItem(cpy_r_r54, cpy_r_r85, cpy_r_r84);
    cpy_r_r87 = cpy_r_r86 >= 0;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "<module>", 30, CPyStatic__wallet___globals);
        goto CPyL36;
    }
    cpy_r_r88 = CPyStatics[201]; /* 'end_timestamp' */
    cpy_r_r89 = Py_None;
    cpy_r_r90 = CPyDict_SetItem(cpy_r_r52, cpy_r_r88, cpy_r_r89);
    cpy_r_r91 = cpy_r_r90 >= 0;
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "<module>", 30, CPyStatic__wallet___globals);
        goto CPyL36;
    }
    cpy_r_r92 = CPyStatics[202]; /* '__annotations__' */
    cpy_r_r93 = CPyDict_SetItem(cpy_r_r52, cpy_r_r92, cpy_r_r54);
    cpy_r_r94 = cpy_r_r93 >= 0;
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "<module>", 15, CPyStatic__wallet___globals);
        goto CPyL36;
    }
    cpy_r_r95 = CPyStatics[203]; /* 'mypyc filler docstring' */
    cpy_r_r96 = CPyStatics[204]; /* '__doc__' */
    cpy_r_r97 = CPyDict_SetItem(cpy_r_r52, cpy_r_r96, cpy_r_r95);
    cpy_r_r98 = cpy_r_r97 >= 0;
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "<module>", 15, CPyStatic__wallet___globals);
        goto CPyL36;
    }
    cpy_r_r99 = CPyStatics[38]; /* 'dao_treasury._wallet' */
    cpy_r_r100 = CPyStatics[205]; /* '__module__' */
    cpy_r_r101 = CPyDict_SetItem(cpy_r_r52, cpy_r_r100, cpy_r_r99);
    cpy_r_r102 = cpy_r_r101 >= 0;
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "<module>", 15, CPyStatic__wallet___globals);
        goto CPyL36;
    }
    cpy_r_r103 = CPyStatic__wallet___globals;
    cpy_r_r104 = CPyStatics[193]; /* 'dataclass' */
    cpy_r_r105 = CPyDict_GetItem(cpy_r_r103, cpy_r_r104);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "<module>", 14, CPyStatic__wallet___globals);
        goto CPyL36;
    }
    cpy_r_r106 = CPyStatics[194]; /* 'dataclasses' */
    cpy_r_r107 = CPyDataclass_SleightOfHand(cpy_r_r105, cpy_r_r37, cpy_r_r52, cpy_r_r54, cpy_r_r106);
    CPy_DECREF(cpy_r_r105);
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(!cpy_r_r107)) {
        CPy_AddTraceback("dao_treasury/_wallet.py", "<module>", 15, CPyStatic__wallet___globals);
        goto CPyL33;
    }
    return 1;
CPyL33: ;
    cpy_r_r108 = 2;
    return cpy_r_r108;
CPyL34: ;
    CPy_DecRef(cpy_r_r37);
    goto CPyL33;
CPyL35: ;
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r52);
    goto CPyL33;
CPyL36: ;
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_r54);
    goto CPyL33;
}

int CPyGlobalsInit(void)
{
    static int is_initialized = 0;
    if (is_initialized) return 0;
    
    CPy_Init();
    CPyModule_dao_treasury___sorting = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_logging = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_eth_portfolio___structs = Py_None;
    CPyModule_evmspec___data = Py_None;
    CPyModule_dao_treasury = Py_None;
    CPyModule_dao_treasury____wallet = Py_None;
    CPyModule_dao_treasury___sorting____matchers = Py_None;
    CPyModule_dao_treasury___sorting___decorator = Py_None;
    CPyModule_dao_treasury___sorting___rule = Py_None;
    CPyModule_dao_treasury___types = Py_None;
    CPyModule_dao_treasury___sorting____matchers = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_logging = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_eth_typing = Py_None;
    CPyModule_eth_utils = Py_None;
    CPyModule_pony___orm = Py_None;
    CPyModule_typing_extensions = Py_None;
    CPyModule_y = Py_None;
    CPyModule_dao_treasury___types = Py_None;
    CPyModule_dao_treasury___db = Py_None;
    CPyModule_dao_treasury___sorting____rules = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_logging = Py_None;
    CPyModule_pathlib = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_yaml = Py_None;
    CPyModule_pony___orm = Py_None;
    CPyModule_y = Py_None;
    CPyModule_dao_treasury___sorting = Py_None;
    CPyModule_dao_treasury___types = Py_None;
    CPyModule_dao_treasury___db = Py_None;
    CPyModule_dao_treasury___sorting___decorator = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_y = Py_None;
    CPyModule_dao_treasury___sorting___rule = Py_None;
    CPyModule_dao_treasury___types = Py_None;
    CPyModule_dao_treasury____wallet = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_dataclasses = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_brownie___convert___datatypes = Py_None;
    CPyModule_eth_typing = Py_None;
    CPyModule_y = Py_None;
    CPyModule_y___time = Py_None;
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple, CPyLit_FrozenSet) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[245];
const char * const CPyLit_Str[] = {
    "\005\ffrom_address\fblock_number\nto_address\021Internal Transfer\006Ignore",
    "\a\bget_dbid\004name\006parent\004hash\017TransactionHash\003hex\n_end_block",
    "\004\034this isnt supposed to happen\023NotImplementedError\aaddress\005block",
    "\006\027Sorted %s to txgroup %s\004info\nSORT_RULES\005match\atxgroup\rGeneratorExit",
    "\a\rStopIteration\bbuiltins\tgetLogger\alogging\005Final\bOptional\006typing",
    "\005\vLedgerEntry\025eth_portfolio.structs\fevmspec.data\002db\fdao_treasury",
    "\004\016TreasuryWallet\024dao_treasury._wallet\b_Matcher\022FromAddressMatcher",
    "\003\vHashMatcher\020ToAddressMatcher\036dao_treasury.sorting._matchers",
    "\006\017cost_of_revenue\aexpense\006ignore\rother_expense\fother_income\arevenue",
    "\003\036dao_treasury.sorting.decorator\025CostOfRevenueSortRule\017ExpenseSortRule",
    "\003\016IgnoreSortRule\024OtherExpenseSortRule\023OtherIncomeSortRule",
    "\003\017RevenueSortRule\031dao_treasury.sorting.rule\vTxGroupDbid",
    "\005\022dao_treasury.types\024dao_treasury.sorting\006logger\a__all__\aTxGroup",
    "\002\036must_sort_inbound_txgroup_dbid\037must_sort_outbound_txgroup_dbid",
    "\006\t__cache__\bKeyError\r__instances__\tTypeError\bTxGroup[\020] already has a ",
    "\006\b__name__\002: \nValueError\000\tis_hexstr value must be a hex string, not ",
    "\005\005lower\0020x\nstartswith\017expected_length  has incorrect length (expected ",
    "\005\t, actual \001)%You must provide at least one address\aconvert\baddress ",
    "\004\030 already has a matcher: \021duplicate hash %s\awarning\n%s created",
    "\006\017dao_treasury.db\003get\ntxgroup_id\n(txgroup=\'\vfull_string\r\', addresses=",
    "\003.You must provide at least one transaction hash\005hash \n\', hashes=",
    "\b\bClassVar\004Dict\bIterable\004List\003Set\005final\017ChecksumAddress\nHexAddress",
    "\006\006HexStr\neth_typing\teth_utils\ndb_session\bpony.orm\004Self",
    "\006\021typing_extensions\001y\017__mypyc_attrs__\v__one_value\a__value\b__values",
    "\005\021_HexStringMatcher\017_AddressMatcher\b__repr__\bexpenses\020__build_matchers",
    "\002.You cannot initialize the rules more than once\fRuntimeError",
    "\004\rmatch_on_hash\025match_on_from_address\023match_on_to_address\aRevenue",
    "\004\017Cost of Revenue\bExpenses\fOther Income\016Other Expenses",
    "\004\021FileNotFoundError\rget_or_insert\nread_bytes\tsafe_load",
    "\006\031no content in rule file: \004.yml\005.yaml\006exists\021%s does not exist\004Path",
    "\006\apathlib\004Type\005Union\004yaml\036dao_treasury/sorting/_rules.py\b<module>",
    "\004\tconstants\020TopLevelCategory\aCHAINID\022dao_treasury.rules",
    "\004\033dao_treasury.sorting._rules\r__initialized\trules_dir\vrevenue_dir",
    "\004\023cost_of_revenue_dir\fexpenses_dir\020other_income_dir\021other_expense_dir",
    "\004\nignore_dir\005Rules\001:\bcallable",
    "\0040you can only pass networks if `func` is a string\004func\aGeneric\aTypeVar",
    "\a\boverload\aNetwork\fSortFunction\vTxGroupName\005TRule\bNetworks\bnetworks",
    "\004\trule_type\b__dict__\021SortRuleDecorator\nEthAddress",
    "\001\?You can only pass a start block or a start timestamp, not both.",
    "\002\037start_block can not be negative#start_timestamp can not be negative",
    "\001=You can only pass an end block or an end timestamp, not both.",
    "\002\035end_block can not be negative!end_timestamp can not be negative",
    "\003\017TreasuryWallet \017 already exists\035closest_block_after_timestamp",
    "\005\vBlockNumber\tdataclass\vdataclasses\031brownie.convert.datatypes\006y.time",
    "\005\aWALLETS\vstart_block\tend_block\017start_timestamp\rend_timestamp",
    "\004\017__annotations__\026mypyc filler docstring\a__doc__\n__module__",
    "",
};
const char * const CPyLit_Bytes[] = {
    "",
};
const char * const CPyLit_Int[] = {
    "\00442\00066\0001\0000",
    "",
};
const double CPyLit_Float[] = {0};
const double CPyLit_Complex[] = {0};
const int CPyLit_Tuple[] = {
    35, 2, 9, 10, 1, 27, 2, 29, 30, 1, 32, 1, 12, 1, 35, 1, 37, 4, 39,
    40, 41, 42, 6, 44, 45, 46, 47, 48, 49, 7, 21, 51, 52, 53, 54, 55, 56,
    1, 58, 1, 63, 1, 94, 8, 101, 102, 29, 103, 104, 30, 105, 106, 3, 107,
    108, 109, 1, 76, 1, 112, 1, 114, 1, 86, 1, 145, 4, 29, 147, 148, 106,
    3, 149, 149, 149, 1, 231, 1, 152, 2, 153, 58, 2, 23, 169, 8, 29, 170,
    103, 30, 171, 148, 106, 172, 2, 173, 152, 6, 51, 52, 53, 54, 55, 56,
    2, 174, 175, 1, 193, 4, 102, 29, 30, 106, 1, 182, 3, 192, 107, 108, 1,
    191
};
const int CPyLit_FrozenSet[] = {0};
CPyModule *CPyModule_dao_treasury___sorting_internal = NULL;
CPyModule *CPyModule_dao_treasury___sorting;
PyObject *CPyStatic_sorting___globals;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_logging;
CPyModule *CPyModule_typing;
CPyModule *CPyModule_eth_portfolio___structs;
CPyModule *CPyModule_evmspec___data;
CPyModule *CPyModule_dao_treasury;
CPyModule *CPyModule_dao_treasury____wallet_internal = NULL;
CPyModule *CPyModule_dao_treasury____wallet;
CPyModule *CPyModule_dao_treasury___sorting____matchers_internal = NULL;
CPyModule *CPyModule_dao_treasury___sorting____matchers;
CPyModule *CPyModule_dao_treasury___sorting___decorator_internal = NULL;
CPyModule *CPyModule_dao_treasury___sorting___decorator;
CPyModule *CPyModule_dao_treasury___sorting___rule;
CPyModule *CPyModule_dao_treasury___types;
PyObject *CPyStatic__matchers___globals;
CPyModule *CPyModule_eth_typing;
CPyModule *CPyModule_eth_utils;
CPyModule *CPyModule_pony___orm;
CPyModule *CPyModule_typing_extensions;
CPyModule *CPyModule_y;
CPyModule *CPyModule_dao_treasury___db;
CPyModule *CPyModule_dao_treasury___sorting____rules_internal = NULL;
CPyModule *CPyModule_dao_treasury___sorting____rules;
PyObject *CPyStatic__rules___globals;
CPyModule *CPyModule_pathlib;
CPyModule *CPyModule_yaml;
PyObject *CPyStatic_decorator___globals;
PyObject *CPyStatic__wallet___globals;
CPyModule *CPyModule_dataclasses;
CPyModule *CPyModule_brownie___convert___datatypes;
CPyModule *CPyModule_y___time;
PyObject *CPyStatic_sorting___logger = NULL;
PyObject *CPyStatic_sorting___TxGroup = NULL;
PyObject *CPyStatic_sorting___must_sort_inbound_txgroup_dbid = NULL;
PyObject *CPyStatic_sorting___must_sort_outbound_txgroup_dbid = NULL;
PyTypeObject *CPyType_sorting___sort_advanced_env;
PyObject *CPyDef_sorting___sort_advanced_env(void);
PyTypeObject *CPyType_sorting___sort_advanced_gen;
PyObject *CPyDef_sorting___sort_advanced_gen(void);
PyObject *CPyDef_sorting___sort_basic(PyObject *cpy_r_entry);
PyObject *CPyPy_sorting___sort_basic(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_sorting___sort_basic_entity(PyObject *cpy_r_entry);
PyObject *CPyPy_sorting___sort_basic_entity(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_sorting___sort_advanced_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
PyObject *CPyPy_sorting___sort_advanced_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_sorting___sort_advanced_gen_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_sorting___sort_advanced_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_sorting___sort_advanced_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy_sorting___sort_advanced_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_sorting___sort_advanced_gen_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_sorting___sort_advanced_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_sorting___sort_advanced_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy_sorting___sort_advanced_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_sorting___sort_advanced_gen___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_sorting___sort_advanced_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_sorting___sort_advanced_gen_____await__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_sorting___sort_advanced_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_sorting___sort_advanced(PyObject *cpy_r_entry);
PyObject *CPyPy_sorting___sort_advanced(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_sorting_____top_level__(void);
PyObject *CPyStatic__matchers___logger = NULL;
PyTypeObject *CPyType__matchers____Matcher;
PyObject *CPyDef__matchers____Matcher(PyObject *cpy_r_txgroup, PyObject *cpy_r_validated_values);
PyTypeObject *CPyType__matchers____HexStringMatcher;
PyObject *CPyDef__matchers____HexStringMatcher(PyObject *cpy_r_txgroup, PyObject *cpy_r_validated_values);
PyTypeObject *CPyType__matchers____AddressMatcher;
PyObject *CPyDef__matchers____AddressMatcher(PyObject *cpy_r_txgroup, PyObject *cpy_r_addresses);
PyTypeObject *CPyType__matchers___FromAddressMatcher;
PyObject *CPyDef__matchers___FromAddressMatcher(PyObject *cpy_r_txgroup, PyObject *cpy_r_addresses);
PyTypeObject *CPyType__matchers___ToAddressMatcher;
PyObject *CPyDef__matchers___ToAddressMatcher(PyObject *cpy_r_txgroup, PyObject *cpy_r_addresses);
PyTypeObject *CPyType__matchers___HashMatcher;
PyObject *CPyDef__matchers___HashMatcher(PyObject *cpy_r_txgroup, PyObject *cpy_r_hashes);
PyObject *CPyDef__matchers____Matcher___match(PyObject *cpy_r_cls, PyObject *cpy_r_string);
PyObject *CPyPy__matchers____Matcher___match(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef__matchers____Matcher_____init__(PyObject *cpy_r_self, PyObject *cpy_r_txgroup, PyObject *cpy_r_validated_values);
PyObject *CPyPy__matchers____Matcher_____init__(PyObject *self, PyObject *args, PyObject *kw);
char CPyDef__matchers____Matcher_____contains__(PyObject *cpy_r_self, PyObject *cpy_r_string);
PyObject *CPyPy__matchers____Matcher_____contains__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__matchers____Matcher___values(PyObject *cpy_r_self);
PyObject *CPyPy__matchers____Matcher___values(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__matchers____HexStringMatcher____validate_hexstr(PyObject *cpy_r_cls, PyObject *cpy_r_hexstr);
PyObject *CPyPy__matchers____HexStringMatcher____validate_hexstr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef__matchers____AddressMatcher_____init__(PyObject *cpy_r_self, PyObject *cpy_r_txgroup, PyObject *cpy_r_addresses);
PyObject *CPyPy__matchers____AddressMatcher_____init__(PyObject *self, PyObject *args, PyObject *kw);
PyObject *CPyDef__matchers____AddressMatcher_____repr__(PyObject *cpy_r_self);
PyObject *CPyPy__matchers____AddressMatcher_____repr__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef__matchers___HashMatcher_____init__(PyObject *cpy_r_self, PyObject *cpy_r_txgroup, PyObject *cpy_r_hashes);
PyObject *CPyPy__matchers___HashMatcher_____init__(PyObject *self, PyObject *args, PyObject *kw);
PyObject *CPyDef__matchers___HashMatcher_____repr__(PyObject *cpy_r_self);
PyObject *CPyPy__matchers___HashMatcher_____repr__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef__matchers_____top_level__(void);
PyObject *CPyStatic__rules___CHAINID = NULL;
PyObject *CPyStatic__rules___logger = NULL;
PyTypeObject *CPyType__rules___Rules;
PyObject *CPyDef__rules___Rules(PyObject *cpy_r_path);
char CPyDef__rules___Rules_____init__(PyObject *cpy_r_self, PyObject *cpy_r_path);
PyObject *CPyPy__rules___Rules_____init__(PyObject *self, PyObject *args, PyObject *kw);
char CPyDef__rules___Rules_____build_matchers(PyObject *cpy_r_self);
PyObject *CPyPy__rules___Rules_____build_matchers(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef__rules___Rules_____build_matchers_for_all_groups(PyObject *cpy_r_self, PyObject *cpy_r_match_rules_filename, PyObject *cpy_r_matcher_cls);
PyObject *CPyPy__rules___Rules_____build_matchers_for_all_groups(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef__rules___Rules_____build_matchers_for_group(PyObject *cpy_r_self, PyObject *cpy_r_top_level_name, PyObject *cpy_r_rules, PyObject *cpy_r_filename, PyObject *cpy_r_matcher_cls);
PyObject *CPyPy__rules___Rules_____build_matchers_for_group(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__rules___Rules_____get_rule_file(PyObject *cpy_r_self, PyObject *cpy_r_path, PyObject *cpy_r_filename);
PyObject *CPyPy__rules___Rules_____get_rule_file(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef__rules_____top_level__(void);
PyObject *CPyStatic_decorator___CHAINID = NULL;
PyTypeObject *CPyType_decorator___SortRuleDecorator;
PyObject *CPyDef_decorator___SortRuleDecorator(PyObject *cpy_r_txgroup, PyObject *cpy_r_networks, PyObject *cpy_r_rule_type);
PyObject *CPyDef_decorator___revenue(PyObject *cpy_r_txgroup, PyObject *cpy_r_networks);
PyObject *CPyPy_decorator___revenue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_decorator___cost_of_revenue(PyObject *cpy_r_txgroup, PyObject *cpy_r_networks);
PyObject *CPyPy_decorator___cost_of_revenue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_decorator___expense(PyObject *cpy_r_txgroup, PyObject *cpy_r_networks);
PyObject *CPyPy_decorator___expense(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_decorator___other_income(PyObject *cpy_r_txgroup, PyObject *cpy_r_networks);
PyObject *CPyPy_decorator___other_income(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_decorator___other_expense(PyObject *cpy_r_txgroup, PyObject *cpy_r_networks);
PyObject *CPyPy_decorator___other_expense(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_decorator___ignore(PyObject *cpy_r_txgroup, PyObject *cpy_r_networks);
PyObject *CPyPy_decorator___ignore(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_decorator___SortRuleDecorator_____init__(PyObject *cpy_r_self, PyObject *cpy_r_txgroup, PyObject *cpy_r_networks, PyObject *cpy_r_rule_type);
PyObject *CPyPy_decorator___SortRuleDecorator_____init__(PyObject *self, PyObject *args, PyObject *kw);
PyObject *CPyDef_decorator___SortRuleDecorator_____call__(PyObject *cpy_r_self, PyObject *cpy_r_func, PyObject *cpy_r_networks);
PyObject *CPyPy_decorator___SortRuleDecorator_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_decorator_____top_level__(void);
PyObject *CPyStatic__wallet___WALLETS = NULL;
PyTypeObject *CPyType__wallet___TreasuryWallet;
PyObject *CPyDef__wallet___TreasuryWallet(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
char CPyDef__wallet___TreasuryWallet_____post_init__(PyObject *cpy_r_self);
PyObject *CPyPy__wallet___TreasuryWallet_____post_init__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__wallet___TreasuryWallet____start_block(PyObject *cpy_r_self);
PyObject *CPyPy__wallet___TreasuryWallet____start_block(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__wallet___TreasuryWallet____end_block(PyObject *cpy_r_self);
PyObject *CPyPy__wallet___TreasuryWallet____end_block(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__wallet___TreasuryWallet____get_instance(PyObject *cpy_r_address);
PyObject *CPyPy__wallet___TreasuryWallet____get_instance(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef__wallet_____top_level__(void);

static struct export_table_0f022764114a9600a25d exports = {
    &CPyStatic_sorting___logger,
    &CPyStatic_sorting___TxGroup,
    &CPyStatic_sorting___must_sort_inbound_txgroup_dbid,
    &CPyStatic_sorting___must_sort_outbound_txgroup_dbid,
    &CPyType_sorting___sort_advanced_env,
    &CPyDef_sorting___sort_advanced_env,
    &CPyType_sorting___sort_advanced_gen,
    &CPyDef_sorting___sort_advanced_gen,
    &CPyDef_sorting___sort_basic,
    &CPyDef_sorting___sort_basic_entity,
    &CPyDef_sorting___sort_advanced_gen_____mypyc_generator_helper__,
    &CPyDef_sorting___sort_advanced_gen_____next__,
    &CPyDef_sorting___sort_advanced_gen___send,
    &CPyDef_sorting___sort_advanced_gen_____iter__,
    &CPyDef_sorting___sort_advanced_gen___throw,
    &CPyDef_sorting___sort_advanced_gen___close,
    &CPyDef_sorting___sort_advanced_gen_____await__,
    &CPyDef_sorting___sort_advanced,
    &CPyDef_sorting_____top_level__,
    &CPyStatic__matchers___logger,
    &CPyType__matchers____Matcher,
    &CPyDef__matchers____Matcher,
    &CPyType__matchers____HexStringMatcher,
    &CPyDef__matchers____HexStringMatcher,
    &CPyType__matchers____AddressMatcher,
    &CPyDef__matchers____AddressMatcher,
    &CPyType__matchers___FromAddressMatcher,
    &CPyDef__matchers___FromAddressMatcher,
    &CPyType__matchers___ToAddressMatcher,
    &CPyDef__matchers___ToAddressMatcher,
    &CPyType__matchers___HashMatcher,
    &CPyDef__matchers___HashMatcher,
    &CPyDef__matchers____Matcher___match,
    &CPyDef__matchers____Matcher_____init__,
    &CPyDef__matchers____Matcher_____contains__,
    &CPyDef__matchers____Matcher___values,
    &CPyDef__matchers____HexStringMatcher____validate_hexstr,
    &CPyDef__matchers____AddressMatcher_____init__,
    &CPyDef__matchers____AddressMatcher_____repr__,
    &CPyDef__matchers___HashMatcher_____init__,
    &CPyDef__matchers___HashMatcher_____repr__,
    &CPyDef__matchers_____top_level__,
    &CPyStatic__rules___CHAINID,
    &CPyStatic__rules___logger,
    &CPyType__rules___Rules,
    &CPyDef__rules___Rules,
    &CPyDef__rules___Rules_____init__,
    &CPyDef__rules___Rules_____build_matchers,
    &CPyDef__rules___Rules_____build_matchers_for_all_groups,
    &CPyDef__rules___Rules_____build_matchers_for_group,
    &CPyDef__rules___Rules_____get_rule_file,
    &CPyDef__rules_____top_level__,
    &CPyStatic_decorator___CHAINID,
    &CPyType_decorator___SortRuleDecorator,
    &CPyDef_decorator___SortRuleDecorator,
    &CPyDef_decorator___revenue,
    &CPyDef_decorator___cost_of_revenue,
    &CPyDef_decorator___expense,
    &CPyDef_decorator___other_income,
    &CPyDef_decorator___other_expense,
    &CPyDef_decorator___ignore,
    &CPyDef_decorator___SortRuleDecorator_____init__,
    &CPyDef_decorator___SortRuleDecorator_____call__,
    &CPyDef_decorator_____top_level__,
    &CPyStatic__wallet___WALLETS,
    &CPyType__wallet___TreasuryWallet,
    &CPyDef__wallet___TreasuryWallet,
    &CPyDef__wallet___TreasuryWallet_____post_init__,
    &CPyDef__wallet___TreasuryWallet____start_block,
    &CPyDef__wallet___TreasuryWallet____end_block,
    &CPyDef__wallet___TreasuryWallet____get_instance,
    &CPyDef__wallet_____top_level__,
};

PyMODINIT_FUNC PyInit_0f022764114a9600a25d__mypyc(void)
{
    static PyModuleDef def = { PyModuleDef_HEAD_INIT, "0f022764114a9600a25d__mypyc", NULL, -1, NULL, NULL };
    int res;
    PyObject *capsule;
    PyObject *tmp;
    static PyObject *module;
    if (module) {
        Py_INCREF(module);
        return module;
    }
    module = PyModule_Create(&def);
    if (!module) {
        goto fail;
    }
    
    capsule = PyCapsule_New(&exports, "0f022764114a9600a25d__mypyc.exports", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "exports", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_dao_treasury___sorting(void);
    capsule = PyCapsule_New((void *)CPyInit_dao_treasury___sorting, "0f022764114a9600a25d__mypyc.init_dao_treasury___sorting", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_dao_treasury___sorting", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_dao_treasury___sorting____matchers(void);
    capsule = PyCapsule_New((void *)CPyInit_dao_treasury___sorting____matchers, "0f022764114a9600a25d__mypyc.init_dao_treasury___sorting____matchers", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_dao_treasury___sorting____matchers", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_dao_treasury___sorting____rules(void);
    capsule = PyCapsule_New((void *)CPyInit_dao_treasury___sorting____rules, "0f022764114a9600a25d__mypyc.init_dao_treasury___sorting____rules", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_dao_treasury___sorting____rules", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_dao_treasury___sorting___decorator(void);
    capsule = PyCapsule_New((void *)CPyInit_dao_treasury___sorting___decorator, "0f022764114a9600a25d__mypyc.init_dao_treasury___sorting___decorator", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_dao_treasury___sorting___decorator", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_dao_treasury____wallet(void);
    capsule = PyCapsule_New((void *)CPyInit_dao_treasury____wallet, "0f022764114a9600a25d__mypyc.init_dao_treasury____wallet", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_dao_treasury____wallet", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    return module;
    fail:
    Py_XDECREF(module);
    return NULL;
}
