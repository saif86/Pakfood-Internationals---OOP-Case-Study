# Pakfood Internationals - OOP case study
Converting a problem statement into class diagram.
## Task 1 - UML Class Diagram
*"Let’s assume a firm called **“Pakfood International”**, that is running an export trade business of vegetables from Pakistan to 3 continents Africa, Asia and Europe. The company is using three kinds of transport i.e. Land transport, Sea transport, and Air transport to carry goods for shipments. It uses Land and Sea transport from Pakistan to South East Asia, Middle East, Far East, and Africa. Moreover, it uses sea and air transport for European countries. It also has cold rooms and halls available to rent in for customers’ small and large orders respectively"*

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

## Task 2 - UML Class Diagram to C++ coding
Consider the following class from the scenario discussed in task 1:
![drawing1](https://user-images.githubusercontent.com/41892175/47065624-3a0f6100-d216-11e8-8ffd-0177aa4211c9.png)
Suppose Pakfood Company provides so many rooms to rent in for storage purposes. The shape of all rooms is rectangular, and you being a part of development team are assigned a task to calculate room area before allocating it to customers. If the company’s order is so large that it cannot be accommodated in a single room, then, it will hire more than one room for its order. Suppose that every order requires at least two rooms.

Your task is to, write a C++ program which implements Room class and operator overloading with attributes and operations (functions) given in the above class structure.

**Hints:** The attribute *Area* is a derived attribute, which means, its value can be calculated by multiplying Width with Length, i.e ```Area = Width * Length;```

### Solution Guidelines:
  * sjg
