# CPP Module 06 - C++ Casts

This module explores the four specific casting operators introduced in C++, which provide safer and more explicit type conversions compared to C-style casts.

## 1. static_cast
* **When:** Compile-time.
* **Use:** Safe, mathematical conversions between compatible types (e.g., `float` to `int`, or upcasting/downcasting in non-polymorphic hierarchies).
* **Concept:** The compiler actively transforms the underlying binary data to represent the value in the new type. It will refuse to compile if the conversion is conceptually impossible.

## 2. reinterpret_cast
* **When:** Compile-time.
* **Use:** Low-level memory manipulation, serialization, and pointer conversions (e.g., `Data*` to `uintptr_t`).
* **Concept:** It tells the compiler to treat a block of memory as a completely different type *without altering the actual binary bits*. Highly dangerous if misused.

## 3. dynamic_cast
* **When:** Run-time.
* **Use:** Safely downcasting in a polymorphic class hierarchy (Base to Derived).
* **Concept:** It queries the Runtime Type Information (RTTI) to verify the true identity of an object in memory. 
  * If casting a **pointer** and it fails, it returns `NULL`.
  * If casting a **reference** and it fails, it throws a `std::bad_cast` exception.
  * *Requires the Base class to have at least one virtual function.*

## 4. const_cast
* **When:** Compile-time.
* **Use:** Adding or removing the `const` or `volatile` qualifiers from a variable.
* **Concept:** Used primarily to interface with legacy code/APIs that require non-const pointers, even when you know the data won't actually be modified.
