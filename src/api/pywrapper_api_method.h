

#ifndef PYTHONWRAPPER_API_METHOD__H
#define PYTHONWRAPPER_API_METHOD__H

namespace py
{

static inline int Method_Check(PyObject *o)
{
    return safe_noref( PyMethod_Check(o) );
}

static inline borrowed_ref<PyObject> Method_Function(PyObject *meth)
{
    return safe_borrowed_ref( PyMethod_Function(meth) );
}

static inline borrowed_ref<PyObject> Method_GET_FUNCTION(PyObject *meth)
{
    return safe_borrowed_ref( PyMethod_GET_FUNCTION(meth) );
}

static inline borrowed_ref<PyObject> Method_Self(PyObject *meth)
{
    return safe_borrowed_ref( PyMethod_Self(meth) );
}

static inline borrowed_ref<PyObject> Method_GET_SELF(PyObject *meth)
{
    return safe_borrowed_ref( PyMethod_GET_SELF(meth) );
}

}

#endif // PYTHONWRAPPER_API_API_METHOD__H

