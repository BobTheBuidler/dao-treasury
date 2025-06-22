#include <Python.h>

PyMODINIT_FUNC
PyInit_llamapay(void)
{
    PyObject *tmp;
    if (!(tmp = PyImport_ImportModule("04aa621f45b1fe08f124__mypyc"))) return NULL;
    PyObject *capsule = PyObject_GetAttrString(tmp, "init_dao_treasury___sorting___rules___ignore___llamapay");
    Py_DECREF(tmp);
    if (capsule == NULL) return NULL;
    void *init_func = PyCapsule_GetPointer(capsule, "04aa621f45b1fe08f124__mypyc.init_dao_treasury___sorting___rules___ignore___llamapay");
    Py_DECREF(capsule);
    if (!init_func) {
        return NULL;
    }
    return ((PyObject *(*)(void))init_func)();
}

// distutils sometimes spuriously tells cl to export CPyInit___init__,
// so provide that so it chills out
PyMODINIT_FUNC PyInit___init__(void) { return PyInit_llamapay(); }
