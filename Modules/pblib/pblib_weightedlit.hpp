#pragma once

#include <Python.h>
#include "../../external/pblib/weightedlit.h"

extern "C" {

// Name used as reference within Python
#define PyPBLibWeightedLit_NAME "WeightedLit"

extern PyTypeObject PyPBLibWeightedLit_Type;

typedef struct {
	PyObject_HEAD;
	PBLib::WeightedLit wl;
} PyPBLibWeightedLit;

#define PyPBWeightedLit_Check(x)  ((x)->ob_type == &PyPBLibWeightedLit_Type)

// Utility functions
PyObject * PyWeightedLit_From_WeightedLit(const PBLib::WeightedLit &wl);


}
