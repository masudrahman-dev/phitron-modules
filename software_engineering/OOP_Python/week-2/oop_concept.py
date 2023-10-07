import my_module

my_module.say_hello()
# Parent class (Base class)


class Animal:
    def __init__(self, name, species):
        self.name = name
        self.species = species

    def make_sound(self):
        pass  # Placeholder for the make_sound method

    def introduce(self):
        print(f"I am {self.name}, a {self.species}.")

# Child class 1 (Derived class)


class Dog(Animal):
    def __init__(self, name, breed):
        # Call the constructor of the parent class
        super().__init__(name, species="Dog")
        self.breed = breed

    def make_sound(self):
        return "Woof!"

    def introduce(self):
        print(f"I am {self.name}, a {self.breed} dog.")

# Child class 2 (Derived class)


class Cat(Animal):
    def __init__(self, name, color):
        # Call the constructor of the parent class
        super().__init__(name, species="Cat")
        self.color = color

    def make_sound(self):
        return "Meow!"

    def introduce(self):
        print(f"I am {self.name}, a {self.color} cat.")

# Function to demonstrate polymorphism


def animal_speak(animal):
    print(f"{animal.name} says: {animal.make_sound()}")


# Create instances of the classes
dog1 = Dog("Buddy", "Golden Retriever")
cat1 = Cat("Whiskers", "Tabby")

# Demonstrate polymorphism
animal_speak(dog1)  # Output: "Buddy says: Woof!"
animal_speak(cat1)  # Output: "Whiskers says: Meow!"

# Demonstrate encapsulation
dog1.introduce()    # Output: "I am Buddy, a Golden Retriever."
cat1.introduce()    # Output: "I am Whiskers, a Tabby cat."
