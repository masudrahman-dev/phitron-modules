class Star_Cinema:
    _hall_list = []  # Protected class attribute

    @classmethod
    def entry_hall(cls, hall):
        cls._hall_list.append(hall)


class Hall:
    def __init__(self, rows, cols, hall_no):
        self._seats = {}  # Protected instance attribute
        self.__show_list = []  # Private instance attribute
        self._rows = rows
        self._cols = cols
        self._hall_no = hall_no

        Star_Cinema.entry_hall(self)


    def entry_show(self, id, movie_name, time):
        show_info = (id, movie_name, time)
        self.__show_list.append(show_info)  # Accessing a private attribute

        # Allocate seats with rows and cols using a 2D list
        seats = [['Free' for _ in range(self._cols)]
                 for _ in range(self._rows)]
        self._seats[id] = seats  # Accessing a protected attribute

    def book_seats(self, id, seat_list):
        if id not in self._seats:  # Accessing a protected attribute
            raise ValueError("Invalid show ID")

        seats = self._seats[id]  # Accessing a protected attribute

        for row, col in seat_list:
            if row < 0 or row >= self._rows or col < 0 or col >= self._cols:
                raise ValueError("Invalid seat selection")

            if seats[row][col] == 'Booked':
                raise ValueError("Seat already booked")

            seats[row][col] = 'Booked'

    def view_show_list(self):
        return self.__show_list  # Accessing a private attribute

    def view_available_seats(self, id):
        if id not in self._seats:  # Accessing a protected attribute
            raise ValueError("Invalid show ID")

        seats = self._seats[id]  # Accessing a protected attribute
        available_seats = []

        for row in range(self._rows):
            for col in range(self._cols):
                if seats[row][col] == 'Free':
                    available_seats.append((row, col))

        return available_seats


class Counter:
    def __init__(self, cinema_hall):
        self.cinema_hall = cinema_hall

    def view_all_shows(self):
        shows = []
        for hall in self.cinema_hall:
            # Accessing a private attribute
            shows.extend(hall.view_show_list())
        return shows

    def view_available_seats(self, show_id):
        for hall in self.cinema_hall:
            try:
                return hall.view_available_seats(show_id)
            except ValueError:
                continue
        raise ValueError("Show ID not found")

    def book_tickets(self, show_id, seat_list):
        for hall in self.cinema_hall:
            try:
                hall.book_seats(show_id, seat_list)
                return f"Tickets booked for Show ID: {show_id}"
            except ValueError as e:
                if "Invalid show ID" in str(e):
                    raise ValueError("Invalid show ID")
                elif "Invalid seat selection" in str(e):
                    raise ValueError("Invalid seat selection")
                elif "Seat already booked" in str(e):
                    raise ValueError("Seat already booked")
                continue
        raise ValueError("Show ID not found")

# Usage Example:


# Create cinema halls and add shows
hall1 = Hall(5, 5, 1)
hall2 = Hall(6, 6, 2)
hall1.entry_show('show1', 'Movie 1', '10:00 AM')
hall2.entry_show('show2', 'Movie 2', '1:00 PM')

# Create a counter for the cinema
# Accessing a protected class attribute
counter = Counter(Star_Cinema._hall_list)

# View all shows
print(counter.view_all_shows())

# View available seats for a show
print(counter.view_available_seats('show1'))

# Book tickets with errors
try:
    # Invalid seat
    print(counter.book_tickets('show1', [(0, 0), (1, 1), (-1, 2)]))
except ValueError as e:
    print(e)

try:
    print(counter.book_tickets('show1', [(0, 0), (0, 0)]))  # Double booking
except ValueError as e:
    print(e)

try:
    print(counter.book_tickets('show3', [(0, 0)]))  # Invalid show ID
except ValueError as e:
    print(e)
