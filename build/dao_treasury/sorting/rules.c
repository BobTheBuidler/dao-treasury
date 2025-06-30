#include <Python.h>

PyMODINIT_FUNC
PyInit_rules(void)
{
    PyObject *tmp;
    if (!(tmp = PyImport_ImportModule("8a0ad9a1a4146730a0f6__mypyc"))) return NULL;
    PyObject *capsule = PyObject_GetAttrString(tmp, "init_dao_treasury___sorting___rules");
    Py_DECREF(tmp);
    if (capsule == NULL) return NULL;
    void *init_func = PyCapsule_GetPointer(capsule, "8a0ad9a1a4146730a0f6__mypyc.init_dao_treasury___sorting___rules");
    Py_DECREF(capsule);
    if (!init_func) {
        return NULL;
    }
    return ((PyObject *(*)(void))init_func)();
}

// distutils sometimes spuriously tells cl to export CPyInit___init__,
// so provide that so it chills out
PyMODINIT_FUNC PyInit___init__(void) { return PyInit_rules(); }
