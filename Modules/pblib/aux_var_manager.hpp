#pragma once

#include <Python.h>
#include "../../external/pblib/auxvarmanager.h"

extern "C" {

// Name used as reference within Python
#define PyAuxVarManager_NAME "AuxVarManager"

extern PyTypeObject PyAuxVarManager_Type;

typedef struct {
    PyObject_HEAD;
    AuxVarManager aux_var;
}PyAuxVarManager;

#define PyAuxVarManager_Check(x)  ((x)->ob_type = &PyAuxVarManager_Type)

}
