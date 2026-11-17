

#ifndef PYTHONWRAPPER_API_UNICODE__H
#define PYTHONWRAPPER_API_UNICODE__H

namespace py
{

static inline int Unicode_Check(PyObject *o)
{
    return safe_noref( PyUnicode_Check(o) );
}

static inline int Unicode_CheckExact(PyObject *o)
{
    return safe_noref( PyUnicode_CheckExact(o) );
}

static inline ref<PyObject> Unicode_FromStringAndSize(const char *u, Py_ssize_t size)
{
    return safe_ref( PyUnicode_FromStringAndSize(u, size) );
}

static inline ref<PyObject> Unicode_FromString(const char *u)
{
    return safe_ref( PyUnicode_FromString(u) );
}

static inline ref<PyObject> Unicode_FromFormatV(const char *format, va_list vargs)
{
    return safe_ref( PyUnicode_FromFormatV(format, vargs) );
}

static inline ref<PyObject> Unicode_FromEncodedObject(PyObject *obj, const char *encoding, const char *errors)
{
    return safe_ref( PyUnicode_FromEncodedObject(obj, encoding, errors) );
}

static inline ref<PyObject> Unicode_FromObject(PyObject *obj)
{
    return safe_ref( PyUnicode_FromObject(obj) );
}

static inline ref<PyObject> Unicode_FromWideChar(const wchar_t *w, Py_ssize_t size)
{
    return safe_ref( PyUnicode_FromWideChar(w, size) );
}

static inline ref<PyObject> Unicode_Decode(const char *s, Py_ssize_t size, const char *encoding, const char *errors)
{
    return safe_ref( PyUnicode_Decode(s, size, encoding, errors) );
}

static inline ref<PyObject> Unicode_AsEncodedString(PyObject *unicode, const char *encoding, const char *errors)
{
    return safe_ref( PyUnicode_AsEncodedString(unicode, encoding, errors) );
}

static inline ref<PyObject> Unicode_DecodeUTF8(const char *s, Py_ssize_t size, const char *errors)
{
    return safe_ref( PyUnicode_DecodeUTF8(s, size, errors) );
}

static inline ref<PyObject> Unicode_DecodeUTF8Stateful(const char *s, Py_ssize_t size, const char *errors, Py_ssize_t *consumed)
{
    return safe_ref( PyUnicode_DecodeUTF8Stateful(s, size, errors, consumed) );
}

static inline ref<PyObject> Unicode_AsUTF8String(PyObject *unicode)
{
    return safe_ref( PyUnicode_AsUTF8String(unicode) );
}

static inline ref<PyObject> Unicode_DecodeUTF32(const char *s, Py_ssize_t size, const char *errors, int *byteorder)
{
    return safe_ref( PyUnicode_DecodeUTF32(s, size, errors, byteorder) );
}

static inline ref<PyObject> Unicode_DecodeUTF32Stateful(const char *s, Py_ssize_t size, const char *errors, int *byteorder, Py_ssize_t *consumed)
{
    return safe_ref( PyUnicode_DecodeUTF32Stateful(s, size, errors, byteorder, consumed) );
}

static inline ref<PyObject> Unicode_AsUTF32String(PyObject *unicode)
{
    return safe_ref( PyUnicode_AsUTF32String(unicode) );
}

static inline ref<PyObject> Unicode_DecodeUTF16(const char *s, Py_ssize_t size, const char *errors, int *byteorder)
{
    return safe_ref( PyUnicode_DecodeUTF16(s, size, errors, byteorder) );
}

static inline ref<PyObject> Unicode_DecodeUTF16Stateful(const char *s, Py_ssize_t size, const char *errors, int *byteorder, Py_ssize_t *consumed)
{
    return safe_ref( PyUnicode_DecodeUTF16Stateful(s, size, errors, byteorder, consumed) );
}

static inline ref<PyObject> Unicode_AsUTF16String(PyObject *unicode)
{
    return safe_ref( PyUnicode_AsUTF16String(unicode) );
}

static inline ref<PyObject> Unicode_DecodeUTF7(const char *s, Py_ssize_t size, const char *errors)
{
    return safe_ref( PyUnicode_DecodeUTF7(s, size, errors) );
}

static inline ref<PyObject> Unicode_DecodeUTF7Stateful(const char *s, Py_ssize_t size, const char *errors, Py_ssize_t *consumed)
{
    return safe_ref( PyUnicode_DecodeUTF7Stateful(s, size, errors, consumed) );
}

static inline ref<PyObject> Unicode_DecodeUnicodeEscape(const char *s, Py_ssize_t size, const char *errors)
{
    return safe_ref( PyUnicode_DecodeUnicodeEscape(s, size, errors) );
}

static inline ref<PyObject> Unicode_AsUnicodeEscapeString(PyObject *unicode)
{
    return safe_ref( PyUnicode_AsUnicodeEscapeString(unicode) );
}

static inline ref<PyObject> Unicode_DecodeRawUnicodeEscape(const char *s, Py_ssize_t size, const char *errors)
{
    return safe_ref( PyUnicode_DecodeRawUnicodeEscape(s, size, errors) );
}

static inline ref<PyObject> Unicode_AsRawUnicodeEscapeString(PyObject *unicode)
{
    return safe_ref( PyUnicode_AsRawUnicodeEscapeString(unicode) );
}

static inline ref<PyObject> Unicode_DecodeLatin1(const char *s, Py_ssize_t size, const char *errors)
{
    return safe_ref( PyUnicode_DecodeLatin1(s, size, errors) );
}

static inline ref<PyObject> Unicode_AsLatin1String(PyObject *unicode)
{
    return safe_ref( PyUnicode_AsLatin1String(unicode) );
}

static inline ref<PyObject> Unicode_DecodeASCII(const char *s, Py_ssize_t size, const char *errors)
{
    return safe_ref( PyUnicode_DecodeASCII(s, size, errors) );
}

static inline ref<PyObject> Unicode_AsASCIIString(PyObject *unicode)
{
    return safe_ref( PyUnicode_AsASCIIString(unicode) );
}

static inline ref<PyObject> Unicode_DecodeCharmap(const char *s, Py_ssize_t size, PyObject *mapping, const char *errors)
{
    return safe_ref( PyUnicode_DecodeCharmap(s, size, mapping, errors) );
}

static inline ref<PyObject> Unicode_AsCharmapString(PyObject *unicode, PyObject *mapping)
{
    return safe_ref( PyUnicode_AsCharmapString(unicode, mapping) );
}

static inline ref<PyObject> Unicode_Concat(PyObject *left, PyObject *right)
{
    return safe_ref( PyUnicode_Concat(left, right) );
}

static inline ref<PyObject> Unicode_Split(PyObject *s, PyObject *sep, Py_ssize_t maxsplit)
{
    return safe_ref( PyUnicode_Split(s, sep, maxsplit) );
}

static inline ref<PyObject> Unicode_Splitlines(PyObject *s, int keepend)
{
    return safe_ref( PyUnicode_Splitlines(s, keepend) );
}

static inline ref<PyObject> Unicode_Translate(PyObject *str, PyObject *table, const char *errors)
{
    return safe_ref( PyUnicode_Translate(str, table, errors) );
}

static inline ref<PyObject> Unicode_Join(PyObject *separator, PyObject *seq)
{
    return safe_ref( PyUnicode_Join(separator, seq) );
}

static inline Py_ssize_t Unicode_Tailmatch(PyObject *str, PyObject *substr, Py_ssize_t start, Py_ssize_t end, int direction)
{
    return safe_noref( PyUnicode_Tailmatch(str, substr, start, end, direction) );
}

static inline Py_ssize_t Unicode_Find(PyObject *str, PyObject *substr, Py_ssize_t start, Py_ssize_t end, int direction)
{
    return safe_noref( PyUnicode_Find(str, substr, start, end, direction) );
}

static inline Py_ssize_t Unicode_Count(PyObject *str, PyObject *substr, Py_ssize_t start, Py_ssize_t end)
{
    return safe_noref( PyUnicode_Count(str, substr, start, end) );
}

static inline ref<PyObject> Unicode_Replace(PyObject *str, PyObject *substr, PyObject *replstr, Py_ssize_t maxcount)
{
    return safe_ref( PyUnicode_Replace(str, substr, replstr, maxcount) );
}

static inline int Unicode_Compare(PyObject *left, PyObject *right)
{
    return safe_noref( PyUnicode_Compare(left, right) );
}

static inline ref<PyObject> Unicode_RichCompare(PyObject *left, PyObject *right, int op)
{
    return safe_ref( PyUnicode_RichCompare(left, right, op) );
}

static inline ref<PyObject> Unicode_Format(PyObject *format, PyObject *args)
{
    return safe_ref( PyUnicode_Format(format, args) );
}

static inline int Unicode_Contains(PyObject *container, PyObject *element)
{
    return safe_noref( PyUnicode_Contains(container, element) );
}

}

#endif // PYTHONWRAPPER_API_API_UNICODE__H
