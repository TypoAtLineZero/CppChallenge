/*  Excercises from C++ Challenge (Bancila, 2018)
    Language Characteristics Excercises
*/

#include <iostream>

// Function template
template <typename T>
T minimum(T const a, T const b){return (a < b) ? (a) : (b);}

// Variadic function, which uses function template recursive
template <typename T1, typename... T>
T1 minimum(T1 a, T... args){
    return minimum(a, minimum(args...));
}

int main(){
    
    // Excercise 18, p. 25
    std::cout << minimum(11.0, 10.0, 9.5) << std::endl;
}
