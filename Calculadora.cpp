using namespace std;

class Calculadora{
    
    private:int num1;
    private:int num2;
        
    public:int numPublic = 1;
    private:int numPrivate = 0;
    protected:int numProtected = 2;
    
    //default constructor
    public:Calculadora(){}
    
    //constructor with parameters
    public:Calculadora(int num1, int num2){
        this->num1 = num1;
        this->num2 = num2;
    }
    
    public:int sumar(){
        if(this->num1 != __null && this->num2 != __null){
            return this->num1 + this->num2;
        }
        else    return 0;
    }
    
    public:int sumar(int num1, int num2){
       return num1 + num2; 
    }
    
    public:int restar(int num1, int num2){
        return num1 + num2;
    }
    
    public:float dividir(int num1, int num2){
        return num1 / num2;
    }
    
    public:int multiplicar(int num1, int num2){
        return num1 * num2;
    }

    //getters and setters
    public:int getNum1() const {
            return num1;
    }

    public:void setNum1(int num1) {
            this->num1 = num1;
    }

    public:int getNum2() const {
            return num2;
    }

    public:void setNum2(int num2) {
            this->num2 = num2;
    }
};


