

#ifndef PYTHONWRAPPER_API_SLICE__H
#define PYTHONWRAPPER_API_SLICE__H

namespace py
{

static inline int Slice_Check(PyObject *ob)
{
    return safe_noref( PySlice_Check(ob) );
}

static inline ref<PyObject> Slice_New(PyObject *start, PyObject *stop, PyObject *step)
{
    return safe_ref( PySlice_New(start, stop, step) );
}

}

#endif // PYTHONWRAPPER_API_API_SLICE__H

