
# C++ Module 00 - Exercise 01: My Awesome PhoneBook

## Problem Overview

You need to create a phonebook application using object-oriented principles in C++98. The phonebook should:
- Store up to **8 contacts**. When the 9th contact is added, the oldest one should be overwritten.
- The program will accept the following commands:
  - `ADD`: To add a new contact.
  - `SEARCH`: To display a list of contacts and allow searching by index.
  - `EXIT`: To exit the program.

You will need to implement two classes:
- **PhoneBook**: Represents the phonebook itself, containing a collection of contacts.
- **Contact**: Represents an individual contact with fields like first name, last name, nickname, phone number, and darkest secret.

## Key Concepts

- **Classes**: You will implement two classes, `PhoneBook` and `Contact`, defining public and private member functions and variables.
- **Fixed-size Array**: Since dynamic memory allocation (no `new` or `malloc`) is prohibited, a fixed-size array of contacts will be used in the `PhoneBook` class.
- **Input and Output Handling**: User input will be necessary to capture contact details, display the list of contacts, and manage the search function.
- **String Manipulation**: The `SEARCH` command requires formatted output (right-aligned and truncated strings).

---

## Step-by-Step Approach

### 1. Plan the Classes

- **Class Contact**: 
  - Represents a single contact with **private attributes** like `first name`, `last name`, `nickname`, `phone number`, and `darkest secret`.
  - Add **public member functions** to set and get these attributes.

- **Class PhoneBook**:
  - Contains a **fixed-size array** (size 8) of `Contact` objects.
  - Provides functions to:
    - Add a new contact (replace the oldest if more than 8 contacts are present).
    - Search for and display contacts in a formatted table.
    - Show details for a specific contact.

### 2. Define Attributes and Methods

- For the `Contact` class:
  - Private string variables for `first name`, `last name`, `nickname`, `phone number`, and `darkest secret`.
  - Public setter and getter methods like `setFirstName(string firstName)` and `getFirstName()`.

- For the `PhoneBook` class:
  - A private array of 8 `Contact` objects and an index to track where the next contact will be added.
  - Methods include:
    - `addContact()` to prompt the user for contact details and add them to the array.
    - `searchContacts()` to display the contact list in a formatted way.
    - `displayContact(int index)` to show the details of a specific contact.

### 3. Handle the `ADD` Command

- When the user enters `ADD`, prompt them for each field (`first name`, `last name`, etc.).
- Ensure none of the fields are empty before adding the contact.
- Add the contact to the array. If the array is full, overwrite the oldest contact by using a circular index (keep a counter that wraps around at 8).

### 4. Handle the `SEARCH` Command

- Display a table of contacts:
  - Show **index**, **first name**, **last name**, and **nickname**. Each column must be exactly 10 characters wide, and long strings must be truncated with a period (`.`).
- After displaying the list, prompt the user for the index of the contact to display its full details.

### 5. Handle the `EXIT` Command

- When `EXIT` is entered, the program should terminate, and all contacts are lost.

---

## Potential Challenges and Solutions

- **Formatting Output**: Use the `<iomanip>` library for formatting the output (setting width and alignment).
  
- **Circular Array**: To handle the array of 8 contacts, maintain a circular index that wraps around when it reaches 8, ensuring older contacts are replaced.

- **Error Handling**: For the `SEARCH` command, ensure valid input. Handle cases where the index is out of bounds or no contacts have been added.

---

## Testing and Debugging

- **Test the `ADD` function**: Ensure contacts are added correctly and that after 8 contacts, the oldest contact is overwritten.
- **Test the `SEARCH` function**: Verify formatting and ensure contact details display correctly based on the index.
- **Edge Cases**: Handle scenarios where no contacts are added or invalid indices are entered during `SEARCH`.

---

## Final Thoughts

- Follow object-oriented principles: Keep details encapsulated within the `Contact` class and phonebook operations within the `PhoneBook` class.
- Ensure your code is **readable** and **organized** since others will review it.
- Avoid dynamic memory allocation, as it's not allowed in this exercise.