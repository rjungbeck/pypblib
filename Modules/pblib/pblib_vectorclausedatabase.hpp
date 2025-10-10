#pragma once

#include <Python.h>
#include "../../External/pblib/VectorClauseDatabase.h"

extern "C" {

//Name used as reference within Python
#define PyVectorClauseDatabase_NAME "VectorClauseDatabase"

extern PyTypeObject PyVectorClauseDatabase_Type;

typedef struct {
    PyObject_HEAD;
    VectorClauseDatabase vector_cdb;
} PyVectorClauseDatabase;

#define PyVectorClauseDatabase_Check(x) ((x)->ob_type == &PyVectorClauseDatabase_Type)

}
