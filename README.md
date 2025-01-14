# Pizza Maker in C++

## Description

This project is a simple C++ console application that simulates making different types of pizzas: Beef Pizza, Cheese Pizza, and Chicken Pizza. Each pizza is prepared through a step-by-step process, including making dough, adding specific toppings, and baking the pizza. The program is interactive, allowing the user to select the type of pizza they want to make.

## Features

- Functions for individual steps:
  - Making dough
  - Adding specific toppings
  - Baking the pizza
- Separate functions for preparing each type of pizza:
  - Beef Pizza
  - Cheese Pizza
  - Chicken Pizza
- User-friendly console interface to select the pizza type.

## How It Works

1. The program prompts the user to select a type of pizza:
   - Beef Pizza
   - Cheese Pizza
   - Chicken Pizza
2. Based on the user's choice, the corresponding pizza-making process is executed:
   - Dough is prepared.
   - Relevant toppings are added.
   - The pizza is baked.
3. The program displays a completion message once the pizza is ready.

## Code Structure

### Functions Overview

- `MakeDough()`  
  Prepares the dough for the pizza.
  
- `BakePizza()`  
  Bakes the pizza after toppings have been added.
  
- `AddBeefToppings()`  
  Adds beef toppings to the pizza.
  
- `AddCheeseToppings()`  
  Adds cheese toppings to the pizza.
  
- `AddChickenToppings()`  
  Adds chicken toppings to the pizza.

- `MakeBeefPizza()`  
  Prepares Beef Pizza by calling the dough-making, topping-adding, and baking functions.

- `MakeCheesePizza()`  
  Prepares Cheese Pizza by calling the dough-making, topping-adding, and baking functions.

- `MakeChickenPizza()`  
  Prepares Chicken Pizza by calling the dough-making, topping-adding, and baking functions.

### Main Function

The `main()` function provides the user with a menu to select the type of pizza and calls the appropriate function based on their choice.
