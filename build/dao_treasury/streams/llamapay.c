#include <Python.h>

PyMODINIT_FUNC
PyInit_llamapay(void)
{
    PyObject *tmp;
    if (!(tmp = PyImport_ImportModule("bf2b4fe1f86ad2ea158b__mypyc"))) return NULL;
    PyObject *capsule = PyObject_GetAttrString(tmp, "init_dao_treasury___streams___llamapay");
    Py_DECREF(tmp);
    if (capsule == NULL) return NULL;
    void *init_func = PyCapsule_GetPointer(capsule, "bf2b4fe1f86ad2ea158b__mypyc.init_dao_treasury___streams___llamapay");
    Py_DECREF(capsule);
    if (!init_func) {
        return NULL;
    }
    return ((PyObject *(*)(void))init_func)();
}

// distutils sometimes spuriously tells cl to export CPyInit___init__,
// so provide that so it chills out
PyMODINIT_FUNC PyInit___init__(void) { return PyInit_llamapay(); }
