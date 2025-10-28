# Tech Store Purchase System
This is a C++ console application that automates the purchasing process for a tech store, allowing customers to browse gadgets, select items, calculate totals, and apply discounts.

## 📋 Project Overview
This is a school project developed as part of a programming curriculum. The system simulates a real-world tech store purchase process with customer management, catalogue display, item selection, and discount calculations.

## 🔄 Two Versions Available
This repository contains two versions of the program with different approaches to item selection:

### **Version 1: Quantity-Based Limitation** (`Purchase System.cpp`)
- **Limits total quantity of items to 10** (not different items)
- Example: User can buy 10 of the same item, or 5+5 of two items, etc.
- Focuses on controlling the total number of units purchased
- May not properly handle the requirement of selecting "up to 10 items"

### **Version 2: Different Items Limitation** (`Purchase System FINAL.cpp`) - **CURRENT VERSION**
- **Limits selection to maximum 10 different items** (correct interpretation)
- Each item can have unlimited quantities
- _Example: User can select 3 different items with quantities 50, 20, and 100_
- **Properly implements the school requirement** of selecting "up to 10 items" from the catalogue
- Complete input validation and error handling


## ✨ Features 
#### (Current Version - FINAL)
- **Customer Management**: Collects and stores customer first and last names
- **Product Catalogue**: Displays 8 different tech gadgets with prices
- _**Interactive Selection**: Allows users to select up to 10 **different items** with individual quantities_
- **Input Validation**: Ensures valid item numbers (1-8) and positive quantities
- **Automatic Discounts**: Applies 15% discount for purchases over R2,000
- **Detailed Calculation**: Shows subtotal, discount, and final total


## 🎯 Key Differences Between Versions
### **Version 1 (Original):**
- `itemAnswer` represents **total quantity** of items
- Maximum 10 units total across all items
- Cannot handle bulk purchases properly

### **Version 2 (Current - Correct):**
- `itemAnswer` represents **number of different items**
- Each item can have unlimited quantities
- Properly implements "select items from catalogue" requirement
- Better reflects real-world shopping scenarios

  
## 🛠️ Technologies Used
- C++ Programming Language
- Structured Programming Principles
- Arrays and Structures
- Input/Output Operations
- Conditional Statements
- Loops and Validation


## 📊 Sample Output Comparison
### **Version 1 (Quantity Limitation):**
<img width="1284" height="1521" alt="Purchase System Original" src="https://github.com/user-attachments/assets/c021dfbf-8940-437a-b8be-43d4115e4b6a" />
*Limits total quantity to 10 units*

### **Version 2 (Different Items Limitation - CURRENT):**
<img width="1500" height="1904" alt="Question1-FINAL " src="https://github.com/user-attachments/assets/8d70155a-2037-40e6-a141-a1ce2c230e7f" />
*Allows 3 different items with large quantities, but limits to 10 different items maximum*

### **School's Example Output:**
<img width="807" height="817" alt="School Example" src="https://github.com/user-attachments/assets/7a1b5db7-910c-400f-99f5-7eecdd96f183" />

## 🎯 Learning Objectives
This project demonstrates:
- Object-oriented programming concepts using structures
- Array manipulation and management
- User input validation techniques
- Mathematical calculations in programming
- Formatted console output
- Problem-solving and logical thinking

## 📝 Assignment Requirements Met
### **Version 2 (Current) Fully Meets:**
- ✅ **Prompting customer details** (2 marks)
- ✅ **Displaying catalogue** in user-friendly format (3 marks) 
- ✅ **Input validation** for item selection (4 marks)
- ✅ **Calculating total cost** with quantities (4 marks)
- ✅ **Applying discount rules** (4 marks)
- ✅ **Displaying formatted results** (3 marks)

### **Version 1 Limitations:**
- ⚠️ **Item selection logic** may not correctly interpret "select items from catalogue"
- ⚠️ **Real-world applicability** limited by quantity restrictions


# 👨‍💻 Developer
**Student Developer**  
*Academic Project*  
Course: BSc IT - Software Engineering
Institution: Eduvos


## 📄 License
This is an academic project created for educational purposes. 
The two versions demonstrate the evolution from a quantity-based approach to the correct interpretation of selecting different items from the catalogue, with Version 2 properly meeting all school requirements.
