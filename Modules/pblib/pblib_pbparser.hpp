/*
 * PyPB PBParser bindings
 */

#pragma once

#include <Python.h>

#include "../../external/pblib/PBParser.h"

extern "C" {

// Name used as reference within Python
#define PyPBLibPBParser_NAME "PBParser"

extern PyTypeObject PyPBLibPBParser_Type;

typedef struct {
	PyObject_HEAD;
	class PBParser parser;
} PyPBLibPBParser;

#define PyPBLibPBParser_Check(x)  ((x)->ob_type == &PyPBLibPBParser_Type)

}
