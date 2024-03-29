# C-Plus-Plus

## History 
C++ is an object oriented programming developed by a Danish computer scientist known as Bjarne Stroucstrup. This program was developed by making certain changes and improvements on C. As can be assumed by the type of program, it adds object-oriented features to C. C++ is mainly used for game programming, software engineering, data structures, developing, operating systems, and applications. Some interesting examples of C++ in action are games such as World of Warcraft and even gaming consoles such as Playstation, Nintendo Switch and Xbox. This language plays an essential role in game developing as it allows developers to build the most high-performance games they can develop. 
Originally c++ was named "C with classes" but was changed in 1983 to its current name, demonstrating the incrementation from C to C++. It is designed to have qualities of C such as its speed but comes with its own high-level properties. The downside to this language is that it's a little harder to learn for beginners in coding and the code itself takes up more time then code in languages such as python take. With the updates developed for C++, came multiple compilers proven to be useful such as Turbo C++ compiler. The first C++ compiler however, was Cfront, but as the name suggests, it was only a front-end compiler. The language itself though, has been modified multipletimes with C++20 being the most updated version and C++23 being in the works. An interesting feature of C++ is its multiple inheritance feature that allows classes to inherit from more than one class. 

### Installation
To learn C++ you’ll need to install important software. It is essential to install a text editor and a compiler. Examples of text editors are Visual Studio code or Atom. However, such editors require the compiler. A compiler convenient for multiple operating systems is GCC. 
Installing the required text editors and compilers can get a little tricky if your technology requires steps such as setting up paths in order to actually be able to compile the code when running a program. A convenient solution to this is to install jGrasp, an IDE with everything included that will make learning a new language a much easier process. jGrasp edits, compiles, runs and debugs programs all in one and luckily enough, it’s not only useful for learning C++ but a variety of other programming languages as well.

### Learning C++
[How to start learning C++ (Guide)](https://www.usnews.com/education/learn-c++-guide)  
[Easy to learn modules Code Academy](https://www.codecademy.com/catalog/language/c-plus-plus?g_network=g&g_device=c&g_adid=518718840234&g_keyword=learn%20c%2B%2B&g_acctid=243-039-7011&g_adtype=search&g_adgroupid=102526215018&g_keywordid=kwd-23862186&g_campaign=US+Language%3A+Basic+-+Exact&g_campaignid=10030170703&utm_term=learn%20c%2B%2B&utm_campaign=&utm_content=518718840234&utm_id=t_kwd-23862186:ag_102526215018:cp_10030170703:n_g:d_c&utm_source=google&utm_medium=paid-search&utm_term=learn%20c%2B%2B&utm_campaign=&utm_content=518718840234&gclid=CjwKCAjw7eSZBhB8EiwA60kCW4vwf2TZ25pryRpMEafeYWbXFuGbHjrY9bi4apyt2YzhuwtVUe3_MxoCIc0QAvD_BwE)  
[C++ Tutorial for beginners Full course](https://www.youtube.com/watch?v=vLnPwxZdW4Y) --> 4 hrs	(Includes table of contents with time stamps)  
[Learn C++: Everything you need to know!](https://careerkarma.com/blog/learn-c-plus-plus/)

###Sources:	  
[Geeks for Geeks History on C++](https://www.geeksforgeeks.org/history-of-c/#:~:text=C%2B%2B20%20is%20the,C%2C%20by%20knocking%20out%20Python.)  
[Career Karma](https://careerkarma.com/blog/learn-c-plus-plus/)

## Dating Types and Naming Conventions
In C++, classes are essential when coding. Most importantly, the names utilized for classes must follow the right rules and criteria, just as the conventional naming of variables is important as well. For classes specifically, the name should be a noun and the name should be camelcase to separate the words from each other while the first letter of the class must be upper case. However, something to remember is that underscores are NOT allowed in class names.

While underscores are not allowed in class names, they are allowed in variable names as long as the rest of the variable name is valid in following their own rules. C++ asks that variable names begin with an alphabet and numbers are allowed, but only after the first letter is strictly an alphabet. Additionally, keywords are not allowed as variable names and any special characters, including whitespaces, are also not allowed as this language is case sensitive so the smallest details are important.  

To furthermore break down the naming conventions, classes, structs and typedefs start with a capital letter while others such as functions and variables start with a lowercase letter. Pointer Variables  require the keyword be followed by an asterisk (*)  and the asterisk is followed by the variable name. Interfaces, which are functions an object must have to be classified as that object, are named with an Interface suffix, abstract base classes with an Abstract prefix, member variables with a trailing underscore. Global variables have a prefix of g_ while global constants typically are named with the prefix c_ . Static class variables are named with a prefix, s_ . 

C++, a strongly typed programming language, is a statically-typed language meaning that data types are associated with variables rather than values. The variable types are determined at compile time so the naming conventions mentioned above are enforced by the compiler. It is both explicitly and implicitly typed. The difference between the two is that explicitly typed languages have variables declared by the users while the implicit type has the program inferring what the variable data types are. As for mutability, c++ objects are mutable by default but can use keywords such as const or constexpr to declare an object immutable.What these keywords do is prevent objects, methods() and variables from being modified.   
[Mutable and Immutable](https://www.codeproject.com/Articles/5315601/Python-vs-Cplusplus-Series-Mutable-Immutable-and-C#:~:text=C%2B%2B%20supports%20two%20notions%20of,objects%20are%20mutable%20by%20default)  
[More on Const and Mutability](https://en.wikipedia.org/wiki/Immutable_object#C++)  

Binding is defined as converting identifiers into addresses. Identifier names and operator symbols are bound during their binding time in C++. This binding time occurs at the moment of its creation or declaration. The binding in C++ is static by default. It is known as early binding as the programmer is the one to explicitly make the call in the program.

Naming Convention examples:  
  <pre><code>
  int myAge = 22;  
  string name = “Aang”;  
  Floating-point number → float decimal = 2.5;  
  Boolean → bool  real = true;  
	  Outputting a boolean returns either 1 or 0 depending whether a statement is true or false.   
  Array/list: → int score [5] = {10, 20, 15, 10, 30};   
    → Arrays must contain elements of one data type, you can not replace an int element with a string element in an array of ints.  
  Dictionary(map): map<int, string> colors= {{1, “Purple”},
        {2, “Black” },
        {3, “Orange”}} 
  </pre></code>
[Click here for Corresponding code to the above snippet on Naming convevtions and examples](https://github.com/JohanapGuillen/C-Plus-Plus/blob/e4cfccd2b4b1a464cf56f651e0e07478b8316430/code/DataTypeNamingConv.cpp)

### Mixed Type Arithmetic
 |Operation|Result| Example|
 |---|--|--|
 |int/int | int|  9/2 = 4|  
 |float/int | float|  9.0/2 = 4.5 | 
 |int/float | float|  9/2.0 = 4.5|  
 |float/float | float|  9.0/2.0 = 4.5 | 
 
 ### Arithmetic Operators
* \+ Addition   
* \- Subtraction
* \* Multiplication
* \\ Division
* % Modulo Operation (Remainder after division)
* \+\+ Increment
* \-\- Decrement

### Assignment Operators
|Operator|Example|
|--|---|
|=|a = b;|
|\+=|a = a \+ b;|
|\-=|a = a \- b;|
|\*=|a = a \* b;|
|\\=|a = a \\ b;|
|%=|a = a % b;|

### Relational Operators 
* == Is Equal To
* != Not Equal To
* \> Greater Than
* < Less Than
* \>= Greater Than or Equal To
* <= Less Than or Equal To

### Logical Operators
* && → Logical AND → True only if all expressions are true
* ||    → Logical OR    → True if at least one expression is true
* !    → Logical NOT  → True only if operand is false 

### Bitwise Operators
Used to perform operations on individual bits but can only be used alongside char and int data types.

* &  Binary AND
* |    Binary OR
* ^   Binary XOR
* ~   Binary One’s Complement
* << Binary Shift Left
* \>\> Binary Shift Right

[C++ Operators more in depth](https://www.programiz.com/cpp-programming/operators)  

### Concatenation
Concatenating an integer to a string object can be done by calling the std:: to_string function. For example if we have an int x = 10 and call the to_string function, that line of code will look like → std::string y = “Number ” + std::to_string(x); The code would thus compile and run to output Number 10. However, expressions with strings and ints can also be outputted. An example is std::cout << “Half of “ << 12 << “ is “ << (12/2) << “\n”; This would execute Half of 12 is 6. These examples apply to floating point numbers as well, just switch the examples from ints to floats and you’ll be able to concatenate strings with floats and output floats with strings in expressions.  
[Concatenate an integer to a string object in C++](https://www.techiedelight.com/concatenate-integer-string-object-cpp/)  
[Basic Declarations and Expressions](https://www.oreilly.com/library/view/practical-c-programming/0596004192/ch04.html	)  
	However something such as declaring an integer as a string plus a number for example int x = “5” + 6; will not output. Instead an error is received stating “invalid conversion from ‘const char’ to ‘int’. 
Stacks and Heaps

## Stacks and Heaps
When it comes to memory in c++, memory can be allocated and de-allocated using either stack or heap. There are a couple of advantages and disadvantages based on which is used. In stack, allocations are done by the compiler but with a heap, the allocations must be done by the programmer. Accessing data with stack memory is a lot faster than with heap memory. This is the result of their data structure. A concern with stack is memory shortage while with heap memory, a concern is fragmentation of allocated memory being repetitively released. While stack is automatically managed by the computer, heaps are more free range, not controlled neither by the user or the CPU. A big advantage to stack memory is that data is automatically cleared after function calls whereas heap memory requires the programmer to do the clearing by freeing data when required. Stack memory is associated with allowing access only to local variables and data methods, but heap is convenient to access global data and data present anywhere in the program. Overall, both stack memory and heap memory are utilized in the C++ language. Stack memory is responsible for local variables, arguments that are passed through a function and their return addresses, using LIFO(Last In First Out). Heap memory is responsible for storing data such as all the global variables, accessed through pointers that can reach anywhere in the memory. It is important to note that pointers are allocated in the stack but are utilized to access memory on the heap.    
[More on Stacks and Heap memory Here](https://www.educba.com/c-stack-vs-heap/)

## Selection and Conditionals
C++, like many other languages has its operations precedence, conditional statements, boolean and short-circuiting. 

###Booleans
Its boolean values are 1 and 0 with a the true statement outputting a 1 and the false statement outputting a 0. Take for example,  

		std:: cout << (7>8); The result would be false, the output would be 0.

### Conditional statements
The conditional statements include logical conditions that are well known in mathematics with the comparison values such as \>,<,== and so on. The conditions C++ allows are the usual if/else statements. It also allows else if statements which would go in between the if and the else. Else if statements are C++’s version of elif statements, an alternative solution would would be to place if else statements within themselves. An example being starting with an if, following with an else, but in that else having another if followed by an else. However, used incorrectly, that version can get confusing so the safest straight forward option would be to utlitize the else if. Lastly, C++ utilizes switch statements. Now switch statements are useful when multiple blocks of code go in a specific statement. These statements come with an option to use “break” in order to stop running through that specific subprogram and output what was sought. Using “break” is more of a preference/ convenience of the specific program being coded so think carefully if you want to stop running through your options then and there, or if the following additional cases are useful and have a purpose to the output you are seeking.     
[W3 Schools If Else](https://www.w3schools.com/cpp/cpp_conditions.asp)  

### Operators Precedence
When it comes to Operators Precedence, operators with a higher precedence have priority so that the values and operations in an expression are not all evaluated at once but rather the ones with higher precedence are evaluated first. There are multiple tables available with the precedence, operator, description and associativity that can be found. Two of which the links will be provided.  
[Operators and Precedence Associativity](https://www.programiz.com/cpp-programming/operators-precedence-associativity)  
[More on operator and precedence](https://en.cppreference.com/w/cpp/language/operator_precedence)

### Delimiter
C++ has one delimiter for statements, the semicolon. The use of the semicolon is what the program recognizes as the end of a statement rather than the end of the code itself. For this reason, indentation is not a priority so multiple statements can be on the same line as long as each statement is followed by the semicolon. For example rather than having 3 lines,  

		int a = 5; 
		int b = 6;
		cout << a + b;   
		
one line can can accomplish the same

		int a = 5; int b = 6; std :: cout << a + b;  
		
In the case of code blocks, the curly brackets are typically what group together the code for conditions. That being said an if statement without brackets is permitted but it will be declared to only have one line of code as a result. This poses a concern known as the “dangling else” . The “dangling else” problem is a syntatic ambiguity issue that results with nested ifs. If statements can easily confuse the else statement, leaving the else statement wondering which if statement it belongs to.  
[Dangling Else Ambiguity](https://www.geeksforgeeks.org/dangling-else-ambiguity/)

### Short-Circuit
C++ does use short-circuit logic. Short-circuiting allows the program to quickly work through the code without having to pass through unnecessary expressions and conditions when the beginning of the expression automatically declares the result of the entire expression. It takes a short-cut getting to the output as soon as possible. 

[Conditional Statements Code, Click here to Download and Interact](https://github.com/JohanapGuillen/C-Plus-Plus/blob/ed103fc8473dc495a594f34d021afd2d672acc4c/code/plp3.cpp)

## Loops and Functions

### Loops
C++ includes a variety of Loops such as the while, do/while, for, foreach. The while loop takes in a condition and as long as that condition remains to be true, the loop will run through the block of code. The do/while loop is very much like the while loop but differs in first checking if the condition is true and then repeating the block of code as long as the condition continues to remain true. The for loop includes knowing how many times the user wants to loop through the block of code, specifying that amount in the statements so that the code is only run that exact amount of times. The foreach loop differs from the for loop because rather than running the code block a specific number of times, it runs through elements of a containers such as arrays, vectors and so on and performs action with each element. 

### Functions
Declaring a function in C++ involves telling the compiler about its name, return type and parameter. The function definition is the body of the function, the block of code that runs. While C++ has various built in functions, programmers themselves can write their own. The program must always include an int main() function in which the rest of the functions can be called. Outside of that function will be the rest of the functions separately declared, the order does not matter as C++ uses a compiler to run. The format of a typical function is return_type function_name(paremeters){ body of the function}. Clearer examples are provided in the code of this section.   

Functions can take in multiple parameters, during the function call, the parameters must be listed in the order that the function will receive them. The types of parameters that can be passed are values, pointers and references. C++ does allow one function to take in different data types as parameters, a useful feature that expands the work that can be done with functions. Programmers just have to be very careful to specify the data types in the function declarations and use proper syntax.

Recursive functions are also permitted. Recursive functions are functions that call themselves using the recursion technique. These functions continue to run until a certain condition is met and just like the other functions, recursive functions are called in the main function. To make sure conditions are met and the recursive doesn’t call itself an endless amount of times, it is essential to use if and else statemtents or anything similar in which one branch can call the recursive function while the other does not.

Inrerstingly enough, functions in C++ do not return multiple values. However, using a method called “call by address” or “call by reference” and the invoker function to pass 2 variables to store the results. This function will take in pointer type data. More details pertaining to this “bypassing” method can be found [Here](https://www.tutorialspoint.com/returning-multiple-values-from-a-cplusplus-function). Additionally, another unofficial way of returning multiple values from a function is with the std::pair, std::tuple or local struct. More details on that can be found [Here](https://www.educative.io/answers/how-to-return-multiple-values-from-a-function-in-cpp17). 

C++ are pass-by value by default when it comes to primitive data types but when it comes to non-primitive data types, those are pass-by reference by default. It’s important to consider that passing by const reference is the ideal pass in order to avoid argument modification but in the case that one does need to modify a function argument locally, passing by a value woul then be ideal. While for simple down to earth code, one or the other passing features works but in the case of more complicated programs, const references with the proper understanding will come with less errors down the line.

When it comes to storage, parameters are stored in the parameter list which is located in the caller’s Data Structure and Algorithms but to ensure ALL parameters are stored in the list, a compiler option XPLINK(STORAGWARGS) may be utilized. As for local variables, they are stored in the memory are of the corresponding function. They’re usually stored in RAM, either the Heap or the Stack. Since these are at different locations, pointers are used to gain access to them when necessary.

### Scopes
There are five types of scopes in C++; function scope, file scope, block scope, function prototype and class scope. The function scope contains identifiers that can only be accessed in the function that declares them. The file scope has the availability of the variable throughout the file or program, having a global scope. This makes it available everywhere to every function and block in the program. The identifiers with file scope are global variables, function definitions and function prototypes placed outside of all functions. Block scopes are contained within curly braces. Identifiers declared in a block are visible only from the point that they are defined until thee moment before the code block comes to an end. The function prototype scope consists of a parameters list that serves as placeholders for variable identifiers. There is no storage allocated or reserved for them and are not visible outside of the function prototype. Finally, the class scope consists of a class member being local to its class.

[Interactive code to Loops and Functions can be found HERE, Download and Run](https://github.com/JohanapGuillen/C-Plus-Plus/blob/6fdafbe45c85224ee7d490fc1d8c8bb419070e77/code/plp4.cpp)

## Classes and Inheritance

Inheritance → An important Object-Oriented Programming feature that “The capability of a class to derive properties and characteristics from another class” [Geeks for Geeks Inheritance](https://www.geeksforgeeks.org/inheritance-in-c/)

Inheritance is the process in which new classes are derived from existing classes. These classes are know as “child class” while the existing class is the “parent class”. In biological terms, the classes “child” and “parent” represent a relationship in which the “child class” inherits from the “parent trap”. This means the new classes take in the properties of the existing class and are able to add features and properties of its own but the new class can not change the existing class. That being said, the features added to the “child class” do not affect the “parent class”. “Child class” and “Parent class” are also known as “Sub class” and “Super class” in which the “Sub class” inherits from the “Super class”.

C++ has multiple types of inheritance. The 5 types are Single Inheritance, Multiple Inheritance, Multilevel Inheritance, Hierarchical Inheritance and Hybrid Inheritance. 

Single Inheritance refers to the derived class inheriting only 1 base class.

![single](https://user-images.githubusercontent.com/85963991/205782740-b8275f4d-aa19-4757-bab9-c020e9a3018c.png)

Multiple Inheritance refers to a child class inheriting from multiple parent classes.

![multiple](https://user-images.githubusercontent.com/85963991/205782807-54f2d3f6-51a0-48b7-8d69-198bd2a3000e.png)

Multilevel Inheritance refers to deriving a class from a derived class.

![multilevel](https://user-images.githubusercontent.com/85963991/205783975-3e6cf6db-8101-4eb2-9ea3-d72e9880008c.png)

Hierarchical Inheritance is when more than 1 child class inherits from the base class.

![hierarchical](https://user-images.githubusercontent.com/85963991/205784033-295dcc82-854c-4606-b4eb-7f7dfe1ad7da.png)

Hybrid Inheritance is the combination of more than 1 type of inheritance.

![hybrid](https://user-images.githubusercontent.com/85963991/205784075-21d72e1e-a529-4d80-ad93-21c31df2983a.png)

With inheritance, we can not ignore the overriding of data. Overriding allows us to use functions that are present in the parent class, in the child class. Redefining the functions or methods in the derived class allows the main function to call the definition of the derived class over the definition in the base class. Doing this saves memory, increases code consistency and enhances code reusability. It is an extremely useful feature to be able to reuse the same name function in an efficient and clean manner with different operations for stronger code.

An example of Hierarchical inheritance can be found in the plp5 code. Feel free to download and run.

The different types of inheritance requires careful consideration. Some languages do not support multiple inheritance because of its override feature that poses a threat if used carelessly. Say for example that more than one base class has the same function but the derived class does not override that function. The matter at hand would then be, which function is selected by the program or how does the program know which function to utilize. However, the program does not know, and since as a programmer we do not tell it if we do not override in the derived class, then we get a compile error. 

[More on inheritance can be found here.](https://www.programiz.com/cpp-programming/multilevel-multiple-inheritance)

As an object-oriented program, C++ does of course support objects, providing the whole set of features to the language such as inheritance, data, methods, virtual functions, etc. Structs are indeed included in those features. Structure is a collection of different data types and structs in C++ are value type. They’re typically used for light-weight objects like shapes or colors. They are also very convenient with linked lists as structs are used to store the data.

C++ has standard methods for functions that serve a similar purpose across all objects. A couple of examples are:
*swap() which switches the values of 2 variables
*Reverse () reverses the elements of lists
*Unique() gets rid of duplicate list elements
*Splice() transfers elements from one list to another

Additionally, C++’s standard library functions include header files while the built-in functions range from mathematical functions to character functions. [The standard library functions for C++ can be found here.](http://www.cppforschool.com/tutorial/libraryfunc.html)
