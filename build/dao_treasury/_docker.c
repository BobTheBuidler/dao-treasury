#include <Python.h>

PyMODINIT_FUNC
PyInit__docker(void)
{
    PyObject *tmp;
    if (!(tmp = PyImport_ImportModule("3619d39567c7fe330ece__mypyc"))) return NULL;
    PyObject *capsule = PyObject_GetAttrString(tmp, "init_dao_treasury____docker");
    Py_DECREF(tmp);
    if (capsule == NULL) return NULL;
    void *init_func = PyCapsule_GetPointer(capsule, "3619d39567c7fe330ece__mypyc.init_dao_treasury____docker");
    Py_DECREF(capsule);
    if (!init_func) {
        return NULL;
    }
    return ((PyObject *(*)(void))init_func)();
}

// distutils sometimes spuriously tells cl to export CPyInit___init__,
// so provide that so it chills out
PyMODINIT_FUNC PyInit___init__(void) { return PyInit__docker(); }
