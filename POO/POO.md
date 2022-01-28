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
- ___a pointer can be declared as above :___.
  - We can define a pointer to the member i as follows :
    - int A::*ip=&A::i
    