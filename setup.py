#!/usr/bin/env python3

import sys
from glob import glob

from setuptools import Extension, setup


def get_compiler_args():
    if sys.platform == 'win32':
        return ['/std:c++20', '/incremental','/W4', '/wd4244']

    return ['-std=c++20', '-Wall']

setup(
    ext_modules=[
    Extension('pypblib.pblib', sources=
            glob('./Modules/pblib/*.cpp') +
            glob('./External/pblib/*.cpp') +
            glob('./External/pblib/encoder/*.cpp'),
        include_dirs=['./External/pblib', './Modules/pblib'],
        extra_compile_args=get_compiler_args(),
        language='c++'
    )
])
