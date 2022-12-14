# C++ Functions

A function is a block of code which only runs when it is called.

You can pass data, known as parameters, into a function.

Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.

## Introduction

C++ provides some pre-defined functions, such as `main()`, which is used to execute code. But you can also create your own functions to perform certain actions.

To create (often referred to as declare) a function, specify the name of the function, followed by '()':

```cpp
void myFunction() {
  // code to be executed
}
```

*Example Explained:*

myFunction() is the name of the function void means that the function does not have a return value. You will learn more about return values later in the next chapter inside the function (the body), add code that defines what the function should do.

*Call a Function:*
Declared functions are not executed immediately. They are "saved for later use", and will be executed later, when they are called.

```cpp
int main() {
  
  myFunction(); // call the function
  return 0;
}
```

To learn better, lets go play with functions!