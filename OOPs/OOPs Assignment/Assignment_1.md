

# Assignment 1: Abstraction Examples

## What is Abstraction?

**Abstraction** is an OOP concept that shows only the necessary information to the user and hides irrelevant details.

For example, a person has many attributes, but a particular system uses only the information it needs.

---

## 1. Person — Employee Dashboard

**Entity:** Person

**Attributes:**
- Name
- Age
- Address
- Phone Number
- Email
- Blood Group
- Education

**System:** Employee Dashboard

**Required Attributes:**
- Name
- Email
- Phone Number
- Education

**Ignored Attributes:**
- Age
- Address
- Blood Group

**Explanation:** The employee dashboard displays only the information required for employee management.

---

## 2. Student — Student Result Management System

**Entity:** Student

**Attributes:**
- Name
- Roll Number
- Class
- Address
- Phone Number
- Marks
- Date of Birth

**System:** Student Result Management System

**Required Attributes:**
- Name
- Roll Number
- Class
- Marks

**Ignored Attributes:**
- Address
- Phone Number
- Date of Birth

**Explanation:** The result system displays student details and marks needed to calculate and show results.

---

## 3. Bank Account — ATM System

**Entity:** Bank Account

**Attributes:**
- Account Number
- Account Holder Name
- Balance
- PIN
- Address
- Phone Number
- Account Type

**System:** ATM System

**Required Attributes:**
- Account Number
- Balance
- PIN

**Ignored Attributes:**
- Address
- Phone Number
- Account Type

**Explanation:** The ATM uses the account number, PIN, and balance to perform transactions.

---

## 4. Product — Online Shopping System

**Entity:** Product

**Attributes:**
- Product Name
- Product ID
- Price
- Brand
- Weight
- Manufacturing Date
- Supplier Address

**System:** Online Shopping System

**Required Attributes:**
- Product Name
- Product ID
- Price
- Brand

**Ignored Attributes:**
- Weight
- Manufacturing Date
- Supplier Address

**Explanation:** The shopping system displays the product information needed by customers to select and purchase products.

---

## 5. Doctor — Hospital Appointment System

**Entity:** Doctor

**Attributes:**
- Name
- Doctor ID
- Specialization
- Phone Number
- Address
- Experience
- Salary

**System:** Hospital Appointment System

**Required Attributes:**
- Name
- Doctor ID
- Specialization
- Experience

**Ignored Attributes:**
- Phone Number
- Address
- Salary

**Explanation:** The appointment system shows the doctor’s name, specialization, and experience to help patients choose a doctor.

---

## 6. Book — Library Management System

**Entity:** Book

**Attributes:**
- Book Name
- Book ID
- Author
- Price
- Publisher
- Publication Year
- Number of Pages

**System:** Library Management System

**Required Attributes:**
- Book Name
- Book ID
- Author
- Publisher

**Ignored Attributes:**
- Price
- Publication Year
- Number of Pages

**Explanation:** The library system uses book details to search, issue, and return books.

---

## 7. Employee — Payroll Management System

**Entity:** Employee

**Attributes:**
- Name
- Employee ID
- Department
- Salary
- Address
- Phone Number
- Blood Group

**System:** Payroll Management System

**Required Attributes:**
- Name
- Employee ID
- Department
- Salary

**Ignored Attributes:**
- Address
- Phone Number
- Blood Group

**Explanation:** The payroll system uses employee details and salary information to calculate payments.

---

## 8. Vehicle — Vehicle Parking System

**Entity:** Vehicle

**Attributes:**
- Vehicle Number
- Vehicle Type
- Color
- Owner Name
- Model
- Insurance Number
- Fuel Type

**System:** Vehicle Parking System

**Required Attributes:**
- Vehicle Number
- Vehicle Type
- Owner Name

**Ignored Attributes:**
- Color
- Model
- Insurance Number
- Fuel Type

**Explanation:** The parking system uses the vehicle number and type to manage parking entry and exit.

---

## 9. Patient — Hospital Billing System

**Entity:** Patient

**Attributes:**
- Name
- Patient ID
- Age
- Address
- Phone Number
- Treatment Details
- Bill Amount

**System:** Hospital Billing System

**Required Attributes:**
- Name
- Patient ID
- Treatment Details
- Bill Amount

**Ignored Attributes:**
- Age
- Address
- Phone Number

**Explanation:** The billing system uses patient and treatment details to prepare the hospital bill.

---

## 10. Restaurant Customer — Restaurant Ordering System

**Entity:** Restaurant Customer

**Attributes:**
- Name
- Customer ID
- Phone Number
- Address
- Order Details
- Payment Method
- Favorite Food

**System:** Restaurant Ordering System

**Required Attributes:**
- Name
- Customer ID
- Order Details
- Payment Method

**Ignored Attributes:**
- Address
- Favorite Food
- Phone Number

**Explanation:** The ordering system uses only the details needed to place and process a customer’s order.

---

## Conclusion

Abstraction helps simplify complex systems by displaying only the necessary attributes and hiding irrelevant information. Different systems can use the same entity in different ways according to their requirements.

