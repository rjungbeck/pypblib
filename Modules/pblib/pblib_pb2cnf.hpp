#pragma once

#include <Python.h>
#include "../../external/pblib/pb2cnf.h"

extern "C" {

//Name used as refrence within Python
#define PyPb2cnf_NAME "Pb2cnf"

extern PyTypeObject PyPb2cnf_Type;

typedef struct {
    PyObject_HEAD;
    PB2CNF pb2cnf;
} PyPb2cnf;

#define PyPb2cnf_Check(x) ((x)->ob_type == &PyPb2cnf_Type)

// ***  Prototypes  ***
void Build_PyList_Formula(PyObject* py_formula, std::vector<std::vector<int>> &formula);

}
