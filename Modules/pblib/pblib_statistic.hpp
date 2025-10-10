/*
 * PyPB PBLib::statistics bindings
 */

#pragma once

#include <Python.h>

#include "../../external/pblib/PBConfig.h"

extern "C" {


// Name used as reference within Python
#define PyPBLibStatistic_NAME "Statistic"

extern PyTypeObject PyPBLibStatistic_Type;

typedef struct {
    PyObject_HEAD;
    struct statistic statistic;
} PyPBLibStatistic;

#define PyPBLibStatistic_Check(x)  ((x)->ob_type == &PyPBLibStatistic_Type)

}
