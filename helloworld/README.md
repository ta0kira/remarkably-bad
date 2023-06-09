# Hello World for the Wrong Reasons

This example program automatically extracts the name of a function and prints
it. Or does it?

(_Hint:_ **It doesn't!** You absolutely _cannot_ cast a function to `char*` to
get it's name as a string.)

```shell
# compile
> clang++ func.cpp test.cpp -o helloworld

# execute
>./helloworld
HelloWorld
```

---

This joke/puzzle/whatever was inspired by my early experiences with pointers in
C++, and frequently just trying different things until I got the expected
behavior.

Although it was a bit of work to get this mess to do what I wanted it
to, on the surface it's something I might've believed was doing what it was
supposed to when I was first starting with C++.

In case you're wondering, I purposely used bad C++ practices here so that the
questionable code that makes this work would just seem like a lack of skill.

---

Lessons to be learned:

1. If something looks surprising/weird in C++ code, it probably is.
2. Large projects have code reviews and extensive testing for a reason.
3. Despite being sort of convincing, this example wouldn't work without having
   numerous red flags.
