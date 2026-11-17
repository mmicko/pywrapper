#ifndef PYTHONWRAPPER_API_STRING__H
#define PYTHONWRAPPER_API_STRING__H

// Python 3 has no separate str/bytes type for text: these are compatibility
// aliases that create unicode (str) objects. String_AsString() and friends
// also accept bytes objects.

namespace py
{

static inline int String_Check(PyObject *o)
{
    return safe_noref( PyUnicode_Check(o) );
}

static inline int String_CheckExact(PyObject *o)
{
    return safe_noref( PyUnicode_CheckExact(o) );
}

static inline ref<PyObject> String_FromString(const char *v)
{
    return safe_ref( PyUnicode_FromString(v) );
}

static inline ref<PyObject> String_FromStringAndSize(const char *v, Py_ssize_t len)
{
    return safe_ref( PyUnicode_FromStringAndSize(v, len) );
}

static inline ref<PyObject> String_FromFormatV(const char *format, va_list vargs)
{
    return safe_ref( PyUnicode_FromFormatV(format, vargs) );
}

static inline Py_ssize_t String_Size(PyObject *string)
{
    if( PyBytes_Check(string) )
    {
        return safe_noref( PyBytes_Size(string) );
    }

    Py_ssize_t size = 0;
    safe_noref( PyUnicode_AsUTF8AndSize(string, &size) );
    return size;
}

static inline const char* String_AsString(PyObject *string)
{
    if( PyBytes_Check(string) )
    {
        return safe_noref( PyBytes_AsString(string) );
    }

    return safe_noref( PyUnicode_AsUTF8(string) );
}

static inline int String_AsStringAndSize(PyObject *obj, const char **buffer, Py_ssize_t *length)
{
    if( PyBytes_Check(obj) )
    {
        return safe_noref( PyBytes_AsStringAndSize(obj, const_cast<char**>(buffer), length) );
    }

    *buffer = safe_noref( PyUnicode_AsUTF8AndSize(obj, length) );
    return 0;
}

static inline ref<PyObject> String_Format(PyObject *format, PyObject *args)
{
    return safe_ref( PyUnicode_Format(format, args) );
}

static inline void String_InternInPlace(PyObject **string)
{
    PyUnicode_InternInPlace(string);
    exception::check();
}

static inline ref<PyObject> String_InternFromString(const char *v)
{
    return safe_ref( PyUnicode_InternFromString(v) );
}

}

#endif // PYTHONWRAPPER_API_API_STRING__H
