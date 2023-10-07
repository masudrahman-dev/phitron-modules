class Star_Cinema:
    hall_list = []

    @classmethod
    def entry_hall(cls, hall):
        cls.hall_list.append(hall)


class Hall:
    def __init__(self, rows, cols, hall_no):
        self.__seats = {}
        self.__show_list = []
        self.__rows = rows
        self.__cols = cols
        self.__hall_no = hall_no

        Star_Cinema.entry_hall(self)

    def entry_show(self, id, movie_name, time):
        show_info = (id, movie_name, time)
        self.__show_list.append(show_info)

        # Allocate seats with rows and cols
        seats = [['Free' for _ in range(self.__cols)]
                 for _ in range(self.__rows)]
        self.__seats[id] = seats

    def book_seats(self, id, seat_list):
        if id not in self.__seats:
            raise ValueError("Invalid show ID")

        seats = self.__seats[id]

        for row, col in seat_list:
            if row < 0 or row >= self.__rows or col < 0 or col >= self.__cols:
                raise ValueError("Invalid seat selection")

            if seats[row][col] == 'Booked':
                raise ValueError("Seat already booked")

            seats[row][col] = 'Booked'

    def view_show_list(self):
        return self.__show_list

    def view_available_seats(self, id):
        if id not in self.__seats:
            raise ValueError("Invalid show ID")

        seats = self.__seats[id]
        available_seats = []

        for row in range(self.__rows):
            for col in range(self.__cols):
                if seats[row][col] == 'Free':
                    available_seats.append((row, col))

        return available_seats


# Usage Example:

# Create a cinema hall
hall1 = Hall(5, 5, 1)

# Entry for a show
hall1.entry_show('show1', 'Movie 1', '10:00 AM')

# View the show list
print(hall1.view_show_list())  # [('show1', 'Movie 1', '10:00 AM')]

# View available seats for a show
# print(hall1.view_available_seats('show1'))

# Book seats for a show
# hall1.book_seats('show1', [(0, 0), (1, 1), (2, 2)])
# Should show available seats after booking
# print(hall1.view_available_seats('show1'))
