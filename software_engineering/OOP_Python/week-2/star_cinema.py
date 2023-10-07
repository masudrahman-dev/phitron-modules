# Define a Person class
class Person:
    # Constructor to initialize attributes
    def __init__(self, name, age):
        self.name = name
        self.age = age

    # Method to greet the person
    def greet(self):
        print(f"Hello, my name is {self.name}, and I am {self.age} years old.")


# Create instances of the Person class
person1 = Person("Alice", 30)
person2 = Person("Bob", 25)

# Access attributes and call methods
print(person1.name)  # Output: "Alice"
print(person2.age)   # Output: 25

person1.greet()  # Output: "Hello, my name is Alice, and I am 30 years old."
person2.greet()  # Output: "Hello, my name is Bob, and I am 25 years old."
