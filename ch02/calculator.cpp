#include <cstdio>

enum Operation {
    Add,
    Subtract,
    Divide,
    Multiply
};

struct Calculator {
    Operation operation;
    Calculator(Operation op) {
        operation = op;
    }
    int calculate(int a, int b) {
        int result = 0;
        switch (operation)
        {
        case Add:
            result =  a + b;
            break;

        case Subtract:
            result =  a - b;
            break;

        case Multiply:
            result =  a * b;
            break;

        case Divide:
            result =  a / b;
            break;
        
        default:
            return result;
        }
    return result;
    }
};

int main() {
    Operation op1 = Operation::Add;
    Operation op2 = Operation::Multiply;
    int x = 5;
    int y = 7;
    Calculator calc1 = Calculator(op1);
    
    printf("%d + %d is %d\n", x, y, calc1.calculate(x, y));

    Calculator calc2 = Calculator(op2);
    printf("%d * %d is %d\n", x, y, calc2.calculate(x, y));

    return 0;
}