

# Assignment 3: Real-Life Examples of Inheritance

## What is Inheritance?

**Inheritance** is an OOP concept in which one class acquires the properties and methods of another class.

- **Parent Class:** The class whose properties and methods are inherited.
- **Child Class:** The class that inherits properties and methods from the parent class.
- **IS-A Relationship:** A child class is a type of parent class.

---

## 1. Bank Account

A `BankAccount` is the parent class. `SavingAccount`, `CurrentAccount`, and `LoanAccount` inherit from it.

### Class Diagram

```mermaid
classDiagram
    class BankAccount {
        -string accountHolderName
        -int accountNumber
        -double currentBalance
        -string accountType
        -string contactNumber
        -string panCardNumber
        -string aadharNumber
        +deposit()
        +withdraw()
        +checkBalance()
        +transferMoney()
    }

    class SavingAccount {
        -double minBalanceLimit
        -double fdInterest
        -double withdrawalLimit
    }

    class CurrentAccount {
        -double overdraftLimit
        -string businessName
        -double overdraftBalance
    }

    class LoanAccount {
        -double loanAmount
        -double paidAmount
        -double remainingAmount
    }

    BankAccount <|-- SavingAccount
    BankAccount <|-- CurrentAccount
    BankAccount <|-- LoanAccount
```

**Explanation:** All account types share common account details and operations. Each child class has its own specific attributes.

---

## 2. Vehicle

A `Vehicle` is the parent class. `Car`, `Bike`, and `Truck` inherit from it.

### Class Diagram

```mermaid
classDiagram
    class Vehicle {
        -string brand
        -string model
        -string vehicleNumber
        -double speed
        +start()
        +stop()
        +accelerate()
    }

    class Car {
        -int numberOfDoors
        -string fuelType
        +openTrunk()
    }

    class Bike {
        -int engineCapacity
        -boolean hasGear
        +kickStart()
    }

    class Truck {
        -double loadCapacity
        -int numberOfWheels
        +loadGoods()
    }

    Vehicle <|-- Car
    Vehicle <|-- Bike
    Vehicle <|-- Truck
```

**Explanation:** All vehicles can start, stop, and accelerate. Cars, bikes, and trucks have their own special features.

---

## 3. Employee

An `Employee` is the parent class. `Manager`, `Developer`, and `Tester` inherit from it.

### Class Diagram

```mermaid
classDiagram
    class Employee {
        -string name
        -int employeeId
        -double salary
        -string department
        +checkAttendance()
        +calculateSalary()
    }

    class Manager {
        -int teamSize
        -string projectName
        +manageTeam()
    }

    class Developer {
        -string programmingLanguage
        -string projectName
        +writeCode()
    }

    class Tester {
        -string testingTool
        -int bugsFound
        +testSoftware()
    }

    Employee <|-- Manager
    Employee <|-- Developer
    Employee <|-- Tester
```

**Explanation:** All employees share common employee details. Each role has its own responsibilities and features.

---

## 4. Person

A `Person` is the parent class. `Student`, `Teacher`, and `Doctor` inherit from it.

### Class Diagram

```mermaid
classDiagram
    class Person {
        -string name
        -int age
        -string address
        -string contactNumber
        +displayDetails()
    }

    class Student {
        -int rollNumber
        -string course
        +study()
        +attendExam()
    }

    class Teacher {
        -string subject
        -double salary
        +teach()
        +takeAttendance()
    }

    class Doctor {
        -string specialization
        -string hospitalName
        +diagnosePatient()
        +prescribeMedicine()
    }

    Person <|-- Student
    Person <|-- Teacher
    Person <|-- Doctor
```

**Explanation:** Students, teachers, and doctors are all persons, but each has different attributes and behaviors.

---

## 5. Animal

An `Animal` is the parent class. `Dog`, `Cat`, and `Bird` inherit from it.

### Class Diagram

```mermaid
classDiagram
    class Animal {
        -string name
        -int age
        +eat()
        +sleep()
        +makeSound()
    }

    class Dog {
        -string breed
        +bark()
    }

    class Cat {
        -string color
        +meow()
    }

    class Bird {
        -double wingSpan
        +fly()
    }

    Animal <|-- Dog
    Animal <|-- Cat
    Animal <|-- Bird
```

**Explanation:** All animals eat and sleep. Different animals have their own behaviors, such as barking, meowing, or flying.

---

## 6. Shape

A `Shape` is the parent class. `Circle`, `Rectangle`, and `Triangle` inherit from it.

### Class Diagram

```mermaid
classDiagram
    class Shape {
        -string color
        +calculateArea()
        +calculatePerimeter()
        +display()
    }

    class Circle {
        -double radius
        +calculateArea()
        +calculatePerimeter()
    }

    class Rectangle {
        -double length
        -double width
        +calculateArea()
        +calculatePerimeter()
    }

    class Triangle {
        -double sideA
        -double sideB
        -double sideC
        +calculateArea()
        +calculatePerimeter()
    }

    Shape <|-- Circle
    Shape <|-- Rectangle
    Shape <|-- Triangle
```

**Explanation:** All shapes have common operations, but each shape calculates its area and perimeter differently.

---

## 7. Bank Card

A `BankCard` is the parent class. `DebitCard` and `CreditCard` inherit from it.

### Class Diagram

```mermaid
classDiagram
    class BankCard {
        -string cardHolderName
        -string cardNumber
        -string expiryDate
        +validateCard()
        +blockCard()
    }

    class DebitCard {
        -double accountBalance
        +payFromAccount()
        +checkBalance()
    }

    class CreditCard {
        -double creditLimit
        -double outstandingAmount
        +makeCreditPayment()
        +checkCreditLimit()
    }

    BankCard <|-- DebitCard
    BankCard <|-- CreditCard
```

**Explanation:** Both cards share common card details. A debit card uses the bank account balance, while a credit card uses a credit limit.

---

## 8. Electronic Device

An `ElectronicDevice` is the parent class. `Laptop`, `MobilePhone`, and `Television` inherit from it.

### Class Diagram

```mermaid
classDiagram
    class ElectronicDevice {
        -string brand
        -string model
        -double price
        +powerOn()
        +powerOff()
    }

    class Laptop {
        -int ram
        -double storage
        +runProgram()
    }

    class MobilePhone {
        -string operatingSystem
        -int batteryLevel
        +makeCall()
    }

    class Television {
        -double screenSize
        -string displayType
        +changeChannel()
    }

    ElectronicDevice <|-- Laptop
    ElectronicDevice <|-- MobilePhone
    ElectronicDevice <|-- Television
```

**Explanation:** All electronic devices can be turned on and off. Each device has its own special functions.

---

## 9. Library Item

A `LibraryItem` is the parent class. `Book`, `Magazine`, and `DVD` inherit from it.

### Class Diagram

```mermaid
classDiagram
    class LibraryItem {
        -int itemId
        -string title
        -boolean availability
        +issueItem()
        +returnItem()
        +checkAvailability()
    }

    class Book {
        -string author
        -int numberOfPages
        +readBook()
    }

    class Magazine {
        -int issueNumber
        -string publicationMonth
        +readMagazine()
    }

    class DVD {
        -double duration
        -string format
        +playDVD()
    }

    LibraryItem <|-- Book
    LibraryItem <|-- Magazine
    LibraryItem <|-- DVD
```

**Explanation:** All library items can be issued and returned. Each type of item has its own specific information.

---

## 10. Payment

A `Payment` is the parent class. `CashPayment`, `CardPayment`, and `UPIPayment` inherit from it.

### Class Diagram

```mermaid
classDiagram
    class Payment {
        -string transactionId
        -double amount
        -string paymentStatus
        +processPayment()
        +refundPayment()
    }

    class CashPayment {
        -double cashReceived
        +calculateChange()
    }

    class CardPayment {
        -string cardNumber
        -string cardType
        +validateCard()
    }

    class UPIPayment {
        -string upiId
        -string transactionReference
        +verifyUPI()
    }

    Payment <|-- CashPayment
    Payment <|-- CardPayment
    Payment <|-- UPIPayment
```

**Explanation:** All payment types share common payment operations. Each payment type has its own method of processing a transaction.

---

## Conclusion

Inheritance allows a child class to reuse the attributes and methods of a parent class. It reduces code duplication and helps organize related classes using an **IS-A relationship**.

