# using `array` :
> array<int,length> a= {elements};

# `auto` keyword :     
The auto keyword specifies that the type of the variable that is being declared will be automatically deducted from its initializer. In the case of functions, if their return type is auto then that will be evaluated by return type expression at runtime

> auto pos = a.begin();

# using `map` :
```map<key,value> x;
key= x-> first
value= x-> second
```
> - begin() – Returns an iterator to the first element in the map.
> - end() – Returns an iterator to the theoretical element that follows the last element in the map.
> - size() – Returns the number of elements in the map.
> - max_size() – Returns the maximum number of elements that the map can hold.
> - empty() – Returns whether the map is empty.
> - pair insert(keyvalue, mapvalue) – Adds a new element to the map.
> - erase(iterator position) – Removes the element at the position pointed by the iterator.
> - erase(const g)– Removes the key-value ‘g’ from the map.
> - clear() – Removes all the elements from the map.
# using `multimap` :
multimap<type_keys,type_values> name ={{"key1","value1"},{"key2","value2"},{"key3","value3"}};
# using `queue` :
priority queue `last in first out` LIFO 
    priority_queue<int> p_queue;
simple queue `first in first out` FIFO
    queue<int> p_queue;
# using `set` and `vector` :
set<type_off_data> name ={data , data1,data2};
# using `stack` :
`LAST in FIRST out` LIFO
    stack<type_off_data> name;
    stack_name.push(value);
# using `deque` :
deque<type_off_data> name ={data , data1,data2};

# using `list` and `forward_list` :
list<type_off_data> name;
list.push_(back/front)(value);
# using `tuple` :
tuple<data_types> tupleName(values);
getting values : get<index>(tupleName);
getting the size off the tuple : tuple_size<decltype(tupleName)>::value

# `exception handling` :
- Array reference out of bound.
- multiple catches in a program.
- catch all.
# `Template` :
>Template supports generic programming:
- ***Function template *** :
- ***Class template *** :
