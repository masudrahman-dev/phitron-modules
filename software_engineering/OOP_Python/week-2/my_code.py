class Star_Cinema:

    pass


class Hall:
    def __init__(self, seats, show_list, rows, cols, hall_no) -> None:
        self.seats = seats
        self.show_list = show_list
        self.rows = rows
        self.cols = cols
        self.hall_no = hall_no
    pass


hall1 = Hall("seats", "show List", "rows", "cols", "hall_no")

