#include <stdio.h>  //library need for printf() method
#include "Calculadora.cpp"  //remember, you need import your file for instantiate the class :P
#include "ListsAndIteratorTest.cpp"

using namespace std;    //this a the std library (class like string)

void testCalculadora(){
    Calculadora calculadora; //this is a instatiate, you dont need new sentence like java
    Calculadora calculadora2(5, 10);
    
    calculadora.setNum1(1);
    calculadora.setNum2(2);
    printf("num1 = %d, num2 = %d\n", calculadora.getNum1(), calculadora.getNum2());
    
    int suma = calculadora.sumar(2, 3);
    char result[] = "resultado suma = %d \natributo public %d\n";
    printf(result, suma, calculadora.numPublic);
    
    //this is the class string in c++
    string comment;
    comment.append("resultado suma constructor con parametros = %d\n");
    printf(comment.data(), calculadora2.sumar());
}

void testListsAndIteratorTest(){
    ListsAndIteratorTest listsAndIteratorTest;
    printf("position 1 in the list = %s\n", listsAndIteratorTest.getPosition(1).data());
}

int main() {
    printf("Hello word \n");
    testCalculadora();
    testListsAndIteratorTest();
    return 0;
}