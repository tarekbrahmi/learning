# using `array` :
    
    array<int,length> a= {elements};

# `auto` keyword : 
    
    The auto keyword specifies that the type of the variable that is being declared will be automatically deducted from its initializer. In the case of functions, if their return type is auto then that will be evaluated by return type expression at runtime
    
    auto pos = a.begin();

# using `map` :
    map<key,value> x;
    key= x-> first
    value= x-> second

    begin() – Returns an iterator to the first element in the map.
    end() – Returns an iterator to the theoretical element that follows the last element in the map.
    size() – Returns the number of elements in the map.
    max_size() – Returns the maximum number of elements that the map can hold.
    empty() – Returns whether the map is empty.
    pair insert(keyvalue, mapvalue) – Adds a new element to the map.
    erase(iterator position) – Removes the element at the position pointed by the iterator.
    erase(const g)– Removes the key-value ‘g’ from the map.
    clear() – Removes all the elements from the map.
# using `multimap` :
    multimap<type_keys,type_values> name ={{"key1","value1"},{"key2","value2"},{"key3","value3"}};