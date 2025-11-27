// The C++ Build Pipeline 

/* 
The code you write in a .cpp file is called the source code. It is essentially human readable instructions for your computer. However, your computer cannot understand it, 
and instead only understands your CPU specific ISA (binary instructions specific to your CPU architecture). The process of converting your cpp source code into a file you 
can execute on your computer is called the build process. The build process consists of 4 stages, the preprocessor, compiler, asembler, and linking stage. We talk a little 
more about each of these below. 
\* 

// The Preprocessor Stage 
/*
The first step in the build process is the preprocessor stage. In this stage your cpp file is sent to the preprocessor, where the preprocesser will execute all the preprocessor
directives. These directives include #if, #ifdef, #include, and #define to name a few. The preprocessor will literally paste in the cpp code that each directive results to.
\*

// Preprocessor Directive Result Example 
#define pi 3.14 
int x = pi + 3; // Before 

int x = 3.14 + 3; // After 

/*
Therefore, as you can see after the preprocesser finds the result of all the preprocessor directives, you are left with cpp code that does not have any preprocessor directives, 
only cpp code. This file is called an intermediate file and has a .i extension. 
\*

// The Compiler Stage 
/*
The next stage your .i file will go through is the compiler stage. The compiler takes your intermediate file and translates it to machine specific assembly code. This results in 
a .s assembly file. 
\*
  
// The Assembler Stage 
/*
The next stage your .s file will go through is the assembler stage. In this stage the assembler will convert your assembly file into your machine specific binary ISA. Resulting 
in a .o file called an object file. Every cpp file in your project will go through these steps creating an object file for each of your source code files. 
\*

// The Linker Stage 
/*
The final stage in the build process is the linker stage. The linker takes your object files and links all your function calls to their function definitions. For example, 
you may have a function call in one file but it's definition is in another file. The linker will link this function call in one object file to its definition in another 
object file. The linker will then produce one executable file which you can run on your specific machine architecture. 
\*
  
