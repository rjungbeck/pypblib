#pragma once

#include <Python.h>
#include "../../external/pblib/incpbconstraint.h"

extern "C" {

// Name used as reference within Python
#define PyIncPBConstraint_NAME "IncPBConstraint"

extern PyTypeObject PyIncPBConstraint_Type;

typedef struct {
	PyObject_HEAD;
	IncPBConstraint incconstraint;
} PyIncPBConstraint;

#define PyIncPBConstraint_Check(x)  ((x)->ob_type == &PyIncPBConstraint_Type)

}
