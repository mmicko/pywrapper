#include "pywrapper.h"

#include "noddy.h"

#include <iostream>

PyMODINIT_FUNC
PyInit_noddy()
{
	using namespace py;
	using namespace std;

    static PyMethodDef pywrapper_methods[] = {
        { 0 } };

    static PyModuleDef noddy_module = {
        PyModuleDef_HEAD_INIT,
        "noddy",
        "pywrapper doctring",
        -1,
        pywrapper_methods
    };

    try
    {
        ref<PyObject> mod = safe_ref( PyModule_Create(&noddy_module) );

        pyext::Noddy::initialize(mod);

        Module_AddObject( mod, "yyy", Int_FromLong(5) );

        return mod.release();
    }
    PYTHONWRAPPER_CATCH

    return NULL;
}
