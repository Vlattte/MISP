class MyClass
{
public:
    MyClass(int n) : myPtr(new int(n)) {  };
    ~MyClass() { delete myPtr;  };

    int* myPtr;
};

void func(MyClass* obj) { /* something happend */ }

int main()
{
    MyClass* obj = new MyClass(5);
    func(obj);
    delete obj;
}