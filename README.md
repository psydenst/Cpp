# Cpp

Deep dive into C++ and object orientation. 

CPP00: Namespaces, classes, member functions, stdios streams, initialization list, static, const and more basics fundaments. 

CPP01: Memory allocation, pointers to members, references, switch statement. 

CPP02: Polymorphism, operator overloading and Orthodox Canonical class form. 

CPP03: Inheritance. 

CPP04: Subtype polimorphism, abstract classes, interfaces.

CPP05: Repetition and Exceptions (try, catch). 

CPP06: C++ casts. 

CPP07: templates.

CPP08: Templated containers, iterators and algorithms. 

CPP09: Standard Template Library.

<!-- 
# CPP04:


## ex00:

In C++, the virtual keyword is used to declare a member function as virtual in a base class. When a member function is declared as virtual, it allows derived classes to override that function with their own implementation.

Here's what you need to know about virtual functions:

Virtual functions enable polymorphism: Polymorphism is the ability of objects of different derived classes to be treated as objects of the base class. When a base class function is declared as virtual and a derived class overrides that function, the appropriate derived class implementation is called based on the actual object type during runtime.

Late binding: Virtual functions use dynamic or late binding, which means that the function to be called is determined at runtime based on the actual object type, rather than the type of the pointer or reference used to access the object.

Override in derived classes: When a derived class wants to override a virtual function from the base class, it must use the override keyword in the derived class declaration. This helps ensure that the function is actually overriding a base class virtual function and not just overloading it.

In the provided code, the makeSound() function is declared as virtual in the Animal base class. This allows the makeSound() functions in the Dog and Cat classes to override it with their own implementations.

By using the virtual keyword and providing different implementations for the makeSound() function in the derived classes, we achieve the desired behavior where dogs bark and cats meow when the makeSound() function is called.

Note: The destructor in C++ is automatically called in the reverse order of construction, so when the base class destructor is declared as virtual (as in the code provided), it ensures that the derived class destructor is also called when deleting an object through a base class pointer or reference.


# CPP06:
## ex00:

In C++98, scalar conversion refers to the automatic conversion of one scalar type to another. This can occur when assigning a value of one scalar type to a variable of another scalar type, or during arithmetic operations involving different scalar types. C++98 performs implicit conversions between built-in scalar types, such as int to float or char to int, to ensure compatibility and allow for smooth operations. However, it's important to note that these conversions might lead to loss of precision or unexpected behavior in some cases.

## ex01:
### Serialization and Deserialization: Transforming Data into Binary

Serialization and deserialization are powerful techniques in programming, enabling the conversion of complex data structures into binary format for storage, transmission, or other purposes. In a way, they can be considered specific types of scalar conversion, where data is transformed into a binary representation.

### Serialization: Turning Data into Binary

Serialization involves converting data, which can include scalar values, into a binary format that can be easily stored or transmitted. This process is crucial when saving program state, sending data across networks, or storing complex data structures persistently. Serialization captures not only scalar values but also the relationships between different pieces of data.

For example, imagine a program that needs to save a user's preferences, including their name (string), age (integer), and email (string). By serializing this data, you transform it into a binary representation that can be stored efficiently in a file or sent over the internet.

### Deserialization: Binary Back to Data

Deserialization is the reverse process of serialization. It involves taking binary data and transforming it back into its original data structure, effectively "rehydrating" the data. Deserialization is crucial when retrieving stored data or receiving data from an external source.

Continuing with the user preferences example, after the data has been serialized and stored, deserialization allows you to retrieve and use that data to populate variables in your program. This process helps restore the original state of the data for further use.

### Advantages of Serialization and Deserialization:

Compact Storage: Binary data is generally more compact than text-based formats, making serialization an efficient way to store large amounts of data.

Efficient Transmission: Sending binary data over networks is often faster and requires less bandwidth compared to text-based formats.

Data Integrity: By capturing the entire data structure, including relationships between data, serialization ensures data integrity during storage and transmission.

Cross-Language Compatibility: Serialized binary data can often be deserialized in various programming languages, enabling interoperability between different systems.

### Caution and Considerations:

While serialization and deserialization offer numerous benefits, it's essential to consider factors such as versioning, security, and potential data format changes over time. Different serialization libraries and formats (e.g., JSON, Protocol Buffers, XML) offer varying degrees of flexibility, efficiency, and compatibility.

In summary, serialization and deserialization are specialized forms of scalar conversion, allowing the transformation of complex data structures into binary representations and back again. These techniques empower programmers to efficiently store, transmit, and share data while maintaining its integrity and structure across different contexts. -->

