import importlib.metadata

VERSION_STR = importlib.metadata.version("pypblib")

VERSION_MAJOR, VERSION_MINOR, VERSION_PATCH = map(int, VERSION_STR.split('.'))
