#include <Python.h>

PyMODINIT_FUNC
PyInit__wallet(void)
{
    PyObject *tmp;
    if (!(tmp = PyImport_ImportModule("766dc6d0559f5bd7a716__mypyc"))) return NULL;
    PyObject *capsule = PyObject_GetAttrString(tmp, "init_dao_treasury____wallet");
    Py_DECREF(tmp);
    if (capsule == NULL) return NULL;
    void *init_func = PyCapsule_GetPointer(capsule, "766dc6d0559f5bd7a716__mypyc.init_dao_treasury____wallet");
    Py_DECREF(capsule);
    if (!init_func) {
        return NULL;
    }
    return ((PyObject *(*)(void))init_func)();
}

// distutils sometimes spuriously tells cl to export CPyInit___init__,
// so provide that so it chills out
PyMODINIT_FUNC PyInit___init__(void) { return PyInit__wallet(); }
