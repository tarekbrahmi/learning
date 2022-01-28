# class Declaration:
```
class CLASSAME{
        public:
            ...
        private:
            ...
}
```

# using `static` member variable :
- It is visible only with in the class but its life time is the entire program.
- Static variables are normally used to __maintain values common to the entire class__.
- Only one copy of that member is created for the entire class and is shared by all the objects of that class, no matter how many objects are created.

# using `static` member functions :
- A static function can have access to only other static members declared in the same class.
- A static member function can be called using the class name as follows :
        👉 className::StaticFunctionName();

# object as a function argument:
    pass-by-value : A copy of the entire object is passed to the function.
    pass-by-referance : Only the address of the object is transferred to the function.

# friendly function  using `friend` keyword :
- A friend function not a member function , has full access rights to the private members of the class.
- is not in the scope of the class, it cannot be called using the object of that class.

# using pointeur to member :
- take the address of a member of a class and assign it to a pointer.
- The address of a member can be obtained by applying the operator `&` to a class member name.
> Example :
```
class A{
    private :
        int i;
    public :
        void show(void);
}
```
>
- ___a pointer to a member variable can be declared as above :___
  - We can define a pointer to the member `i` as follows :
    -  👉 int A::*ip=&A::i
    - The phrase `A :: *` means “pointer - to - member of a class” . The phrase `&A::i` means the “Address of the i member of a class”
  
- ___a pointer to a member function can be declared as above :___
  - (object-name .* pointer-to-member function)
  - (pointer-to-object -> * pointer-to-member function)
    - 💁 the parenthesis are necessary.
# using `constructor` in definition of class :
> constructor is a special member function whose task is to initialize the objects of its class:
- They should be declared in the public section .
-  They are invoked automatically when the objects are created.
-  They don't have return types, not even void and therefore they cannot return values.
-  They cannot be inherited , though a derived class can call the base class constructor.
-  An object with a constructor can't be used as a member of union.
>   The constructors can also be used to allocate memory while creating objects .
>   This will enable the system to allocate the right amount of memory for each object when the objects are not of the same size, thus resulting in the saving of memory. 
> Allocate of memory to objects at the time of their construction is known as dynamic constructors of objects
# using `destructor` in definition of class :
```
class MyClass{
    MyClass(){};
    ~MyClass(){};
};
```

# using `operator overloading` :
> define a operator overloading:
- To define an additional task to an operator, we must specify what it means in relation to the class to which the operator is applied.
- This is done with the help of a special function called operator function.
```
return-type class-name :: operator op( arg-list)
{//function body}
```
> - operator overloading(using member function) 
> - operator overloading(using friend function)
# `single-inheritance` :
```
class Child : public Parent{
    ...
}
```
