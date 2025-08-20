class MyClass
{
private:
    int* myPtr;

public:
    MyClass(int n) : myPtr(new int(n)) {  };
    ~MyClass() { delete myPtr;  };
    
    MyClass(MyClass& m)             { /* something happend */ };
    MyClass(MyClass&& m)            { /* something happend */ };

    MyClass& operator=(MyClass& m)  { /* something happend */ };
    MyClass& operator=(MyClass&& m) { /* something happend */ };
};

void func(MyClass* obj) { /* something happend */ }

int main()
{
    MyClass* obj = new MyClass(5);
    func(obj);
    delete obj;
}