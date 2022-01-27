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
        className::StaticFunctionName();