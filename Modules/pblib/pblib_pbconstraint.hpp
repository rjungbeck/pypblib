#pragma once

#include <Python.h>
#include "../../external/pblib/pbconstraint.h"

extern "C" {

// Name used as reference within Python
#define PyPBConstraint_NAME "PBConstraint"

extern PyTypeObject PyPBConstraint_Type;

typedef struct {
	PyObject_HEAD
	PBLib::PBConstraint constraint;
} PyPBConstraint;

#define PyPBConstraint_Check(x)  ((x)->ob_type == &PyPBConstraint_Type)
PyObject* PyPBConstraint_From_PBConstraint(const PBLib::PBConstraint &constr);

}
