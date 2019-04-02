from distutils.core import setup
from distutils.extension import Extension
from Cython.Distutils import build_ext

ext_modules = [
    Extension('led',
              ['led.pyx'],
              libraries=['led','sample'],
              include_dirs=['/usr/include'],
              library_dirs=['/usr/lib'])]
setup(
  name = 'led extension module',
  cmdclass = {'build_ext': build_ext},
  ext_modules = ext_modules
)