# Interfaces, Implementations, and Testing

Ipython Notebook: IITesting.ipynb
Goal of class: write better, more logical code.

example: CSV parser
csvparser --header true --verbose

Interface principles
--------------------
- expose very few functions. This makes the API much easier to manage.

###Different Kinds of Testing
--------------------------
#### Test as you go!!!
- doc test are easy to write and see.

- create testing functions (asserts within functions) and run them!
- can also use testing functions to verify errors are being thrown appropriately.
    - can flag with universal testing boolean
- python 3.0 --> gives floating point values back. Use // for integer division

try:
    <expression to try>
except Exception as e:
    <error handling here>

- test harnessing
    - doc tests

""" File to run python unit tests
%%file test_mymath.py

import unittest
from mymath import myaverage

class MyTest(unittest.TestCase):
    def test_mymath(self):
        self.assertEqual(myaverage([2,3]), 2.5)

if __name__ == '__main__':
    unittest.main()
"""

""" Another way to run tests
import unittest

class MyTest(unittest.TestCase):

    def test_mymath(self):
        self.assertEqual(myaverage([2,3]), 2.5)

    def test_char(self):
        with self.assertRaises(TypeError):
            myaverage(['a',3])

    def test_zerol(self):
        with self.assertRaises(ValueError):
            myaverage([])


suite = unittest.TestLoader().loadTestsFromModule(MyTest())
unittest.TextTestRunner().run(suite)
"""

python3 -m unittest
- automatically looks for methods with test_ and runs them.
- this is called 'test discovery'

####py.test
- need to pip install pytest and pytest-cov
- has some notion of the things that it can test, and runs the test.

- TDD -> Testing Driven Developmen
    - write tests before writing code

#### fixtures
- set up data for testing ahead of time.
- labeled by '@fixture'


Travis --- completely clean environment!
