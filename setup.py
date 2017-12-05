from distutils.core import setup,Extension
include_dirs = ["./include/"]
libraries = ['cmio']
library_dirs = ["./cmio/"]
extra_link_args = []

cmio_module = Extension('_cmio',
        sources = ['cmio_wrap.cpp'],
        include_dirs = include_dirs,
        libraries = libraries,
        library_dirs = library_dirs,
        extra_link_args = extra_link_args,
        )
setup(name='cmio',
      version='1.0',
      ext_modules=[cmio_module],
      # py_modules = ["cmio"],
     )