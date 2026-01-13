# PyPBLib

PBLib Python3 Bindings

## Authors

Logic Optimization Group @ University of Lleida

* Carlos Ansótegui
* Toni Pacheco
* Josep Pon

## Requirements

The only requirement is a C/C++ compiler with C++20 support and Python 3.12 or higher.

## Documentation

The online documentation can be found here: <http://ulog.udl.cat/static/doc/pypblib/html/index.html>

The API is documented using Sphinx, to build it: download the source files
open a terminal in the Doc directory and type:

`$ make html` or `$ make latexpdf`

## Installation

To install the python module use the setup.py script located in the root of the
project or (preferably) the pip3 package manager.

```sh
pip install pypblib
```

or is building from source:

```sh
pip install .
```

If you don't have *admin* privileges or just prefere to isntall the pacakge for
your user only, add the **--user** flag to any of the commands above.

## Project Structure

* External: C/C++ source code of third-party libraries.
* Modules: C/C++ code of the Python C-Extensions.
