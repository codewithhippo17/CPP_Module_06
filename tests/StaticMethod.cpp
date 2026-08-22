#include <iostream>

class MathUtility {
private:
    // A static data member
    static int calculationCount; 

public:
    // 1. Declaration inside the class
    static int add(int a, int b);
    
    static int getCount() {
        return calculationCount; // Can access static data members
    }
};

// Initialize the static data member (Required in C++98)
int MathUtility::calculationCount = 0;

// 2. Definition outside the class (Notice: no 'static' keyword here)
int MathUtility::add(int a, int b) {
    calculationCount++; 
    return a + b;
}

int main() {
    // 3. Invocation using the scope resolution operator (::)
    int result = MathUtility::add(10, 20);
    
    std::cout << "Result: " << result << std::endl;
    std::cout << "Operations performed: " << MathUtility::getCount() << std::endl;

    // Alternative invocation via an object instance (Syntactically valid, but discouraged)
    MathUtility utilInstance;
    std::cout << "Count via object: " << utilInstance.getCount() << std::endl;

    return 0;
}
