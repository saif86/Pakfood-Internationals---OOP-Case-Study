# Pakfood Internationals - OOP case study
Converting a problem statement into class diagram.
## Task 1 - UML Class Diagram
*"Let’s assume a firm called **“Pakfood Internationals”**, that is running an export trade business of vegetables from Pakistan to 3 continents Africa, Asia and Europe. The company is using three kinds of transport i.e. Land transport, Sea transport, and Air transport to carry goods for shipments. It uses Land and Sea transport from Pakistan to South East Asia, Middle East, Far East, and Africa. Moreover, it uses sea and air transport for European countries. It also has cold rooms and halls available to rent in for customers’ small and large orders respectively"*

---
### The tasks to be performed are:
1.	Extract the main objects (entities) for above system.
2.	Find the necessary attributes and functions that need to be associated with each object (You are required to mention at most three attributes and one functions for a class).
3.	Identify the relationships between these objects.
4.	Construct a final comprehensive Class diagram showing all objects and their relationships along with their attributes and functions.

### Important things to consider:
    You have to use standard UML notations for objects, classes, and their associations.

### Note:
Besides problem statement; objects, properties, and functions of a system can also be extracted from domain knowledge. You have to consider all OOP concepts like abstraction, encapsulation, inheritance, association, generalization, and specialization wherever applicable.

---
## Solution
![untitled](https://user-images.githubusercontent.com/41892175/45937408-41b26000-bff2-11e8-8111-0203fddcb9b2.jpg)

To learn how to convert Problem Statment into UML class diagram click here: [Step-wise procedure to translate a problem statement into class diagram](https://github.com/saif86/Object-Oriented-Modeling---Graphic-Editor)

## Task 2 - UML Class Diagram to C++ coding with operator overloading
Consider the following class from the scenario discussed in task 1:
![drawing1](https://user-images.githubusercontent.com/41892175/47065624-3a0f6100-d216-11e8-8ffd-0177aa4211c9.png)
Suppose Pakfood Company provides so many rooms to rent in for storage purposes. The shape of all rooms is rectangular, and you being a part of development team are assigned a task to calculate room area before allocating it to customers. If the company’s order is so large that it cannot be accommodated in a single room, then, it will hire more than one room for its order. Suppose that every order requires at least two rooms.

Your task is to, write a C++ program which implements Room class and operator overloading with attributes and operations (functions) given in the above class structure.

**Hints:** The attribute *Area* is a derived attribute, which means, its value can be calculated by multiplying Width with Length, i.e ```Area = Width * Length;```

### Solution Guidelines:
  * Create (Declare) **Room** class with data members and member functions given in the above diagram (class).
  * Overload the stream extraction operator (>>) for the class, so that you could directly use the statements like, ```cin>>Room1; cin>>Room2;```, where *Room1*, and *Room2* are objects of class **Room**.
  * Overload the binary plus (+) operator for the class, so that you could use the statement like, ```TotalArea= Room1 + Room2;``` , make sure that *TotalArea* is a float/double type variable.
  * Overload the stream insertion operator (<<) for the class, so that you could directly use the statements like, ```cout<<Room1; cout<<Room2;```
  * In main() function, create two objects of **Room** class, read values for these objects using extraction operator >>.
  * Calculate the total area of both rooms, Print area of both rooms and their total area.
### Sample Output:
![untitled](https://user-images.githubusercontent.com/41892175/47066237-059ca480-d218-11e8-95c2-0aab7e8980ac.png)

## Task 3 - Inheritance & Aggregation
In continuation of the Task 1, consider the following class diagram (a part from Task 1 solution), detailed description of the diagram is given in the table.

![untitled](https://user-images.githubusercontent.com/41892175/47195552-060b7b80-d38f-11e8-9cb1-925046898181.png)

![table](https://user-images.githubusercontent.com/41892175/47195305-e4f65b00-d38d-11e8-99e4-7fda5645eb19.png)

You are required to map (implement/Code) this class diagram into C++. Make sure that your solution must contain **ONLY** classes’ definitions given in the diagram, definitions of all attributes and proper declaration and definitions of member functions including constructors that are given in the above table.
### Detail of some Member Functions:
**Profit_Report( )**: This function prints the annual profit of the company.

**Financial_Statement( )**: This function prints the annual financial statement of the company.

**Carry_Good( )**: Each transport has carrying goods functionality.
#### Note
  * The body of all member functions should be empty, while the constructors should have code which initializes the objects.
  * In main function you may print a simple “cout” statement in order to check your program for syntax errors.
  * **You must also implement inheritance and aggregation.**
