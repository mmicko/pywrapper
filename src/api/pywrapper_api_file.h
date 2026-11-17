

#ifndef PYTHONWRAPPER_API_FILE__H
#define PYTHONWRAPPER_API_FILE__H

namespace py
{

static inline ref<PyObject> File_GetLine(PyObject *p, int n)
{
    return safe_ref( PyFile_GetLine(p, n) );
}

static inline int File_WriteObject(PyObject *obj, PyObject *p, int flags)
{
    return safe_noref( PyFile_WriteObject(obj, p, flags) );
}

static inline int File_WriteString(const char *s, PyObject *p)
{
    return safe_noref( PyFile_WriteString(s, p) );
}

}

#endif // PYTHONWRAPPER_API_API_FILE__H

