#include <stdio.h>  //library needed for printf() method
//remember, you need import your file for instantiate the class :P
#include "Calculadora.cpp"
#include "ListsAndIteratorTest.cpp"
#include "HeredityTest.cpp"
#include "Loops.cpp"
#include <pthread.h>
#include <unistd.h>

using namespace std;    //static import of std library

void testCalculadora(){
    Calculadora calculadora; //this is a instatiate, you dont need new sentence like java
    Calculadora calculadora2(5, 10);

    calculadora.setNum1(1);
    calculadora.setNum2(2);
    printf("num1 = %d, num2 = %d\n", calculadora.getNum1(), calculadora.getNum2());

    int suma = calculadora.sumar(2, 3);
    char result[] = "resultado suma = %d \natributo public %d\n";
    printf(result, suma, calculadora.numPublic);

    //class string in c++, remember use method data() for get char data[]
    //no need import class because the others classes are doing the import
    string comment;
    comment.append("resultado suma constructor con parametros = %d\n");
    printf(comment.data(), calculadora2.sumar());
}

void testListsAndIteratorTest(){
    ListsAndIteratorTest listsAndIteratorTest;
    printf("position 1 in the list = %s\n", listsAndIteratorTest.getPosition(1).data());
}

void testHeredityTest(){
    Programmer programmer(22, "Pedro", "Sánchez", "C++");
    if(programmer.isAdult())    printf("The programmer is adult\n");
    else    printf("The programmer is very young\n");
    programmer.writeCode();
    printf(" Age = %d\n Name = %s\n LastName = %s\n Language = %s\n",
            programmer.getAge(), programmer.getName().data(),
            programmer.getLastName().data(), programmer.getLanguage().data());
}

void testLoops(){
    Loops loops;
    loops.makeSquareFor(5);
    loops.makeSquareWhile(3);
}

pthread_t t1, t2;

void *runThread(void *arg){
    printf("Thread started\n");
    sleep(1);
    printf("Thread finished\n");
}

void *runThread2(void *arg){
    printf("Thread started\n");
    sleep(3);
    printf("Thread finished\n");
}

void testThreads(){
    
    pthread_create(&t1, NULL, runThread, (void*) "thread 1");
    pthread_create(&t2, NULL, runThread2, (void*) "thread 2");
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
}

int main() {
    printf("Hello word \n");
    testCalculadora();
    testListsAndIteratorTest();
    testHeredityTest();
    testLoops();
    testThreads();

    return 0;
}
