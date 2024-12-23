Hotel Management System (C Program)
A simple Hotel Management System written in C that allows users (guests) to book rooms, view available rooms, and admins to add new rooms. The system includes features for calculating pricing based on seasonal adjustments, stay duration, and room view.

Features
User Login: Supports both guest and admin login with a simple username and password check for admin users.
Room Management: Admins can add new rooms to the system.
Booking System: Guests can book rooms based on type, floor, and view. Room prices are dynamically calculated based on the length of stay and season.
Pricing Calculation: Includes adjustments for peak season, stay duration, and room view (Sea View or City View).
Bill Breakdown: Displays a detailed breakdown of the total cost for the guest's stay.
System Design
Constants
MAX_ROOMS: Maximum number of rooms (40 rooms).
MAX_FLOORS: Maximum number of floors (10 floors).
MAX_LOGIN_ATTEMPTS: Maximum failed login attempts (3).
PEAK_SEASON_START: Start month of peak season (December).
PEAK_SEASON_END: End month of peak season (February).
Room Structure
Each room is represented by the following attributes:

roomNumber: Unique identifier for the room.
type: Room type (Single or Double).
floor: Floor number (1-10).
isOccupied: Indicates whether the room is booked or available (0 for available, 1 for occupied).
view: Room view (Sea View or City View).
customerName: Name of the guest who booked the room.
stayDuration: Duration of the stay in days.
basePrice: Base price of the room before any adjustments.
Functionality
1. Login System
Guest Login: Guests can log in to book rooms.
Admin Login: Admins can log in to add new rooms. The admin login requires a username and password.
2. Room Booking
Guests can book rooms by:

Selecting room type (Single or Double).
Narrowing down by floor and view.
Confirming booking and providing customer details (name and stay duration).
3. Room Management
Admins can add new rooms by specifying:

Room number.
Room type (Single/Double).
Floor number.
View (Sea View/City View).
Base price.
4. Price Calculation
Room prices are calculated based on:

Peak Season: Prices increase by 20% during peak season (December to February).
Stay Duration: Discount for stays longer than 7 days, surcharge for stays shorter than 3 days.
View Premium: Sea View rooms are 20% more expensive.
5. Bill Breakdown
The system provides a detailed breakdown of the total price, including:

Base price per night.
Seasonal surcharge (if applicable).
Stay duration adjustment (discount or surcharge).
Sea View premium (if applicable).
Code Structure
Main Functions:
initializeRooms(): Initializes default room data (40 rooms).
login(): Handles user login for both guests and admins.
addRoom(): Allows the admin to add a new room.
bookRoom(): Allows guests to book available rooms.
displayRooms(): Displays all available and occupied rooms.
isPeakSeason(): Checks if the current month falls within the peak season.
calculatePrice(): Calculates the price based on room type, view, stay duration, and season.
printBillBreakdown(): Prints the detailed bill breakdown for the guest.
Global Variables:
hotelRooms[MAX_ROOMS]: Array to store room data.
roomCount: Tracks the current number of rooms in the system.
How to Run the Program
Clone the Repository

bash
Copy code
git clone https://github.com/yourusername/hotel-management-system.git
Navigate to the Project Directory

bash
Copy code
cd hotel-management-system
Compile the Program Use a C compiler (like gcc) to compile the program:

bash
Copy code
gcc -o hotel_management_system hotel_management_system.c
Run the Program Execute the compiled program:

bash
Copy code
./hotel_management_system
Example Output
Login:

sql
Copy code
Welcome to the Hotel Booking System!
Please enter today's date (DD MM YYYY): 23 12 2024
Today's Date: 23-12-2024
Are you a Guest or Admin?
1. Guest
2. Admin
Enter your choice: 1
You are logged in as a Guest.
Booking:

yaml
Copy code
Enter room type (Single/Double): Single
Available rooms of type Single:
Room Number: 101, Floor: 1, View: Sea View
Room Number: 103, Floor: 1, View: City View
...
Enter floor number to narrow down: 1
Available rooms on floor 1:
Room Number: 101, View: Sea View
Enter room number to select: 101
You have selected:
Room Number: 101, Type: Single, Floor: 1, View: Sea View
Confirm booking? (1 for Yes, 0 for No): 1
Enter your name: John Doe
Enter stay duration (in days): 5
...
Total Charges for 5 nights: $900
Contributing
This project is maintained by Riad, Ahnaf, Raisa, and Al-Ameen.

If you wish to contribute:

Fork the Repository
Create a personal copy of the project by forking the repository.

Clone Your Fork
Clone your forked repository locally:

bash
Copy code
git clone https://github.com/yourusername/hotel-management-system.git
Create a Branch
Make changes in a separate branch:

bash
Copy code
git checkout -b feature/your-feature-name
Make Changes
Implement your changes or features.

Push Changes
Push your changes to your fork:

bash
Copy code
git push origin feature/your-feature-name
Submit a Pull Request (PR)
Go to the original repository and submit a pull request. Include a detailed description of your changes.

Review and Merge
The pull request will be reviewed by the maintainers. Once approved, your changes will be merged.

For any issues or suggestions, feel free to open an issue.

License
This project is licensed under the license from East West University (EWU), Dhaka. For more details, see the LICENSE file.