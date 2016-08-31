#include <string>
#include <list>

using namespace std;

class ListsAndIteratorTest{
    private:list <string> myList;
    
    public:ListsAndIteratorTest(){
        myList.push_back("Hola1");
        myList.push_back("Hola2");
        myList.push_back("Hola3");
        myList.push_back("Hola4");
        myList.push_back("Hola5");
    }
    
    public:ListsAndIteratorTest(list <string> myList){
        this->myList = myList;
    }

    list<string> getMyList() const {
        return myList;
    }

    void setMyList(list<string> myList) {
        this->myList = myList;
    }
    
    string getPosition(int pos){
        list<string>::iterator i = myList.begin();
        advance(i, pos);
        return *i;
    }
};
