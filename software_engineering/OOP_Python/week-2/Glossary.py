import asyncio
from abc import ABC, abstractmethod
# print(abstractmethod)


class Shape(ABC):
    @abstractmethod
    def area(self):
        pass


class Circle(Shape):
    def __init__(self, radius):
        self.radius = radius

    def area(self):
        return 3.14159265359 * self.radius * self.radius


class Rectangle(Shape):
    def __init__(self, width, height):
        self.width = width
        self.height = height

    def area(self):
        return self.width * self.height


# circle = Circle(12)
# print(circle.area())
def add(a: int, b: int) -> int:
    return a + b


# print(add.__annotations__)


class AsyncResourceManager:
    def __init__(self, resource_name):
        self.resource_name = resource_name

    async def __aenter__(self):
        print(f"Acquiring {self.resource_name} asynchronously")
        await asyncio.sleep(2)  # Simulate resource acquisition
        return self

    async def __aexit__(self, exc_type, exc_value, traceback):
        print(f"Releasing {self.resource_name} asynchronously")
        await asyncio.sleep(2)  # Simulate resource release


async def main():
    async with AsyncResourceManager("Database Connection") as resource:
        print("Doing some work with the resource asynchronously")

if __name__ == "__main__":
    asyncio.run(main())
