class MyClass
{
public:
    MyClass() { /*...*/ };
};

void func(MyClass* obj) { /* something happend */ }

int main()
{
    MyClass* obj = new MyClass;
    func(obj);
    delete obj;
}