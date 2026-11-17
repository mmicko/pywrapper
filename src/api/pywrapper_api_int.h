#ifndef PYTHONWRAPPER_API_INT__H
#define PYTHONWRAPPER_API_INT__H

// Python 3 has no separate int type: these are compatibility aliases that
// forward to the PyLong API.

namespace py
{

static inline int Int_Check(PyObject *o)
{
    return safe_noref( PyLong_Check(o) );
}

static inline int Int_CheckExact(PyObject *o)
{
    return safe_noref( PyLong_CheckExact(o) );
}

static inline ref<PyObject> Int_FromString(const char *str, char **pend, int base)
{
    return safe_ref( PyLong_FromString(str, pend, base) );
}

static inline ref<PyObject> Int_FromLong(long ival)
{
    return safe_ref( PyLong_FromLong(ival) );
}

static inline ref<PyObject> Int_FromSsize_t(Py_ssize_t ival)
{
    return safe_ref( PyLong_FromSsize_t(ival) );
}

static inline ref<PyObject> Int_FromSize_t(size_t ival)
{
    return safe_ref( PyLong_FromSize_t(ival) );
}

static inline long Int_AsLong(PyObject *io)
{
    return safe_noref( PyLong_AsLong(io) );
}

static inline long Int_AS_LONG(PyObject *io)
{
    return safe_noref( PyLong_AsLong(io) );
}

static inline unsigned long Int_AsUnsignedLongMask(PyObject *io)
{
    return safe_noref( PyLong_AsUnsignedLongMask(io) );
}

static inline unsigned long long Int_AsUnsignedLongLongMask(PyObject *io)
{
    return safe_noref( PyLong_AsUnsignedLongLongMask(io) );
}

static inline Py_ssize_t Int_AsSsize_t(PyObject *io)
{
    return safe_noref( PyLong_AsSsize_t(io) );
}

}

#endif // PYTHONWRAPPER_API_API_INT__H
