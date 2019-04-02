# Import the low-level C declarations
cimport cled

# Import some functionality from Python and the C stdlib
from cpython.pycapsule cimport *

from libc.stdlib cimport malloc, free


def led():
	return cled.led()
def led_h():
	return cled.led_h()