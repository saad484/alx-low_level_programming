
<p align="center">  
<img src ="https://assets.imaginablefutures.com/media/images/ALX_Logo.max-200x150.png">
</p>

<h1 align="center">
	C is FUN
</h1>

>Learning C right now, been wanting to get on this. It's going to be FUN !!.



----

## About
- This repository consists of all the C programming projects done with [ALX Africa](https://www.alxafrica.com/) Full stack Software Engineering course in partnership with [Holberton School](https://www.holbertonschool.com/).
- All main.c files are prewritten by the school. We build functions that produce a specific output while also taking into consideration edge cases.

----


## Content table

- [0x00](./0x00-hello_world) : Hello, World.
- [0x01](./0x01-variables_if_else_while) : Variables,if,else,while.
- [0x02](./0x02-functions_nested_loops) : Functions, nested loops.
- [0x03](./0x03-debugging) : Debugging.
- [0x04](./0x04-more_functions_nested_loops) : More Functions and nested loops.
- [0x05](./0x05-pointers_arrays_strings) : Pointers, arrays and strings.
- [0x06](./0x06-pointers_arrays_strings) : More pointers, arrays and strings.
- [0x07](./0x07-pointers_arrays_strings) : Even more pointers, arrays and strings.
- [0x08](./0x08-recursion) : Recursion.
- [0x09](./0x09-static_libraries) : Static libraries.
- [0x0A](./0x0A-argc_argv) : argc, argv[].
- [0x0B](./0x0B-malloc_free) : Malloc, free.
- [0x0C](./0x0C-more_malloc_free) : More malloc, free.
- [0x0D](./0x0D-preprocessor) : Preprocessor.
- [0x0E](./0x0E-structures_typedef) : Structures, typedef.
- [0x0F](./0x0F-function_pointers) : Function pointers.

----

## C Program Compilation

<p align="center">
  <img src="https://i.postimg.cc/rprHShJ1/C-compilation-process.gif" />
</p>

The compilation process has four different steps:
1. The preprocessing stage
2. The compiling stage
3. The assembling stage
4. The linking stage
    
### Step 1: Preprocessing `-E`
The preprocessor reads the source code and performs various transformations to it:
- Expanding macros (replacing all of the macros with their values)
- Handling include files (replaces the #include macro with the content of the header file specified in <>)
- Removing comments
- The results in a new file called a translation unit stored in a file with `.i` extension (intermediate)
    
### Step 2: Compiling `-S`
The build phase provides us with assembly code that is unique to the target architecture.

In this step the compiler takes action by taking a preprocessed file which checks for syntax or structure errors (in case of errors the compilation process stops and displays the corresponding errors). After compiling it, it generates an intermediate code in assembly language `file.s`.

### Step 3: Assembing `-c`
In the third stage of compilation, an assembler is used to convert assembly language into machine code. The assembler takes the code and generates an object file `file.o`, which contains machine code that is not yet executable because it needs to be mapped to a specific memory address. The linker combines all the object files, resolves references between modules, and corrects the addresses, creating an executable file.

### Step 4: Linking
The linker is an important tool in compilation that performs two tasks: resolution and relocation of symbols. It arranges the pieces of object code so that functions in one piece can successfully call functions in others. The linker also adds parts that contain the instructions for the library functions used by the program. The result of this stage is the executable file. usually `a.out` if `-o` is not specified.

---

## Resource

- C [Books and PDF's](./references) to check out and use as a reference.
- [Pointers and Arrays](./PointerArrays) : Code snippets and notes on Pointers and Arrays from Concept Page.
- [Data Structures](./DataStructures) : Code snippets and notes on data structures.
- [Dynamic Memory Allocation](./dynamic_memory_alloc) : Code snippets and notes on how dynamic memory allocation works with `malloc` and `free`.
- [Heap vs Stack](./heap_stack) : Code snippets and notes on what is a heap, a stack and how they work.
- [Simple Shell Concepts](./simple_shell_concepts) : Code snippets and notes on the concept for the simple shell project.

---

## Author

- [`@saad484`]() | Software Engineer Student

    > Reach out to me if you need any help or have any questions.

	<a href="mailto:aiddisaad484@gmail.com">
		<img alt="Feel free to contact me" src="https://img.shields.io/badge/-Ask_me_anything-blue?style=flat&logo=Gmail&logoColor=white&link=mailto:aiddisaad484@gmail.com&color=3d85c6" />
	</a>
	<span> * </span>
    <a href="https://www.linkedin.com/in/saad-aiddi/">
        <img alt="Linkedin Profile" src="https://img.shields.io/badge/-Linkedin-0072b1?style=flat&logo=Linkedin&logoColor=white&link=https://www.linkedin.com/in/saad-aiddi/" />
    </a>
    <span> * </span>
    <a href="https://twitter.com/suprivada">
        <img alt="Twitter Profile" src="https://img.shields.io/badge/-Twitter-0072b1?style=flat&logo=Twitter&logoColor=white&link=https://twitter.com/aiddi_saad/&color=1DA1F2" />
    </a>
---
