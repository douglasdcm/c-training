# Introduction
Exercises got from https://www.w3schools.com/c/c_variables_format.php

# Setup
$ cd ..<br>
Clone the https://github.com/ThrowTheSwitch/Unity project and rename the root folder to `unity`<br>
Go to the root folder of this project again<br>
Copy the folder `hello_world` to create a new project

# Test
```
# this is an example to test the hello world
gcc 001_hello_world/test_hello_world.c 001_hello_world/hello_world.c ./unity/src/unity.c -o TestRunner; ./TestRunner
```
## References:
- https://www.throwtheswitch.org/unity
- https://medium.com/@kasra_mp/introduction-to-c-unit-testing-with-the-unity-framework-15903823ce8a
