/*  Excercises from C++ Challenge (Bancila, 2018)
    Mathematical Excercises
*/

#include <iostream>
#include <cmath>


void ModuleOf3and5 (void);
void ggT (void);
void Armstrong (void);


/* ----- MAIN ----- */
int main (){
    
    // ModuleOf3and5();
    // ggT();
    Armstrong ();
}
/* ----- MAIN ----- */


/* -------------------- */
void ModuleOf3and5 (void){
    // Here needed: iostream

    unsigned int upper_range_int;
    unsigned long long sum_int = 0;

    std::cout << "Input User: ";
    std::cin >> upper_range_int;

    for(unsigned int i=0; i<=upper_range_int; i++){
        if(i % 3 == 0 && i % 5 == 0){
                sum_int += i;
        }
    }

    std::cout << "Sum of modulo 3 and 5 is: " << sum_int << std::endl;
}
/* -------------------- */
void ggT (void){
    // Here needed: iostream

    unsigned int scalar1, scalar2;  // User Inputs
    unsigned int counter;           // Maximum step width for calculation
    unsigned int res;               // Result dump

    std::cout << "Input User: [Format: &d &d] ";
    std::cin >> scalar1 >> scalar2;

    std::cout << scalar1 << "," << scalar2 << std::endl;

    // Conditional Operator, Tertiary Operator ?:
    (scalar1 > scalar2) ? (counter = scalar2) : (counter = scalar1);

    for(unsigned int i=1; i<=counter; i++){
        if(scalar1 % i == 0 && scalar2 % i == 0){
            res = i;
        }
    }

    std::cout << "Result: " << res << std::endl;
}

/* -------------------- */
void Armstrong (void){
    // Here needed: cmath

    unsigned int a, b, c, comparer;       // placeholder for shifted value

    for(unsigned int i=100; i<1000;i++){
        a = i / 100;            // int division by 100, leaves hundreds digit
        b = (i % 100) / 10;     // mod 100 drops hundreds digit, leaves tens and ones digits as remainder. Followed by int division by 10
        c = i % 10;             // mod 10 drops hundreds and tens digit, leaves ones digits

        a = pow(a, 3);
        b = pow(b, 3);
        c = pow(c, 3);

        comparer = a + b + c;

        if(i == comparer){
            std::cout << comparer << std::endl;
        }
    }
}