

# Assignment 2: Real-Life Examples of Encapsulation

## What is Encapsulation?

**Encapsulation** is an OOP concept that combines data (variables) and methods (functions) into a single class and protects the data from direct access.

In simple words, **encapsulation means keeping data safe inside a class and allowing access through public methods.**

---

## 1. Bank Account

**Class:** `BankAccount`

### Private Attributes
- `accountHolderName: string`
- `accountNumber: int`
- `currentBalance: double`
- `accountType: string`
- `contactNumber: string`
- `panCardNumber: string`
- `aadharNumber: string`

### Public Methods
- `deposit()`
- `withdraw()`
- `checkBalance()`
- `updateContactNumber()`

**Explanation:** The balance and personal details are kept private. Users can deposit or withdraw money through methods instead of changing the balance directly.

---

## 2. ATM Machine

**Class:** `ATM`

### Private Attributes
- `atmId: int`
- `availableCash: double`
- `bankName: string`
- `pin: int`
- `transactionLimit: double`

### Public Methods
- `authenticateUser()`
- `withdrawCash()`
- `checkBalance()`
- `changePin()`

**Explanation:** The ATM protects the PIN and cash information. Users perform transactions only through authorized methods.

---

## 3. Student

**Class:** `Student`

### Private Attributes
- `studentName: string`
- `rollNumber: int`
- `marks: double`
- `attendance: double`
- `password: string`

### Public Methods
- `updateProfile()`
- `viewResult()`
- `calculatePercentage()`
- `checkAttendance()`

**Explanation:** Student marks and personal details are protected. They can be accessed or updated through suitable methods.

---

## 4. Employee

**Class:** `Employee`

### Private Attributes
- `employeeName: string`
- `employeeId: int`
- `salary: double`
- `department: string`
- `password: string`

### Public Methods
- `calculateSalary()`
- `viewSalary()`
- `updateDepartment()`
- `updateProfile()`

**Explanation:** Salary and employee information are private. Only authorized methods can access or modify them.

---

## 5. Mobile Phone

**Class:** `MobilePhone`

### Private Attributes
- `brand: string`
- `model: string`
- `batteryLevel: int`
- `screenLock: string`
- `storageCapacity: double`

### Public Methods
- `makeCall()`
- `sendMessage()`
- `unlockPhone()`
- `chargeBattery()`

**Explanation:** Internal phone data, such as battery level and screen lock, is controlled by the phone’s methods.

---

## 6. Car

**Class:** `Car`

### Private Attributes
- `carNumber: string`
- `speed: double`
- `fuelLevel: double`
- `engineStatus: string`
- `ownerName: string`

### Public Methods
- `startEngine()`
- `stopEngine()`
- `accelerate()`
- `applyBrake()`
- `checkFuel()`

**Explanation:** The car’s internal state is protected. The driver controls it through methods such as starting the engine and applying brakes.

---

## 7. Library Book

**Class:** `LibraryBook`

### Private Attributes
- `bookId: int`
- `bookName: string`
- `author: string`
- `availabilityStatus: boolean`
- `issueCount: int`

### Public Methods
- `issueBook()`
- `returnBook()`
- `checkAvailability()`
- `updateBookDetails()`

**Explanation:** The book’s availability and issue information are protected. Users cannot directly change the book’s status.

---

## 8. Shopping Cart

**Class:** `ShoppingCart`

### Private Attributes
- `cartId: int`
- `itemList: list`
- `totalAmount: double`
- `discount: double`
- `customerId: int`

### Public Methods
- `addItem()`
- `removeItem()`
- `calculateTotal()`
- `applyDiscount()`
- `checkout()`

**Explanation:** The cart controls its items and total amount. Customers use methods to add or remove products and calculate the bill.

---

## 9. Washing Machine

**Class:** `WashingMachine`

### Private Attributes
- `machineId: int`
- `waterLevel: int`
- `washMode: string`
- `temperature: double`
- `machineStatus: string`

### Public Methods
- `startWash()`
- `pauseWash()`
- `stopWash()`
- `selectMode()`
- `checkStatus()`

**Explanation:** The machine protects its internal settings and state. Users control the washing process through available buttons or methods.

---

## 10. Hospital Patient Record

**Class:** `PatientRecord`

### Private Attributes
- `patientId: int`
- `patientName: string`
- `medicalHistory: string`
- `diagnosis: string`
- `prescribedMedicine: string`

### Public Methods
- `viewRecord()`
- `updateDiagnosis()`
- `addPrescription()`
- `updateMedicalHistory()`

**Explanation:** Medical information is private. Only authorized users can access or update patient records through methods.

---

## Conclusion

Encapsulation protects data by keeping attributes private and providing public methods to access or modify them. It improves **data security, control, and maintainability** in software systems.

