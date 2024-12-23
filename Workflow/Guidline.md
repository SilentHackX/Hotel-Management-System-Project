# Hotel Management System Project

## Detailed Step-by-Step Guideline (14 Days)

---

### Day 1: Initial Setup and Task Assignment

- **All Members:**
  - **Discuss Project Goals, Roles, and Timeline:**
    - Review project objectives.
    - Clarify roles and responsibilities of each member.
    - Ensure everyone understands the end goal.
  - **Set Up Version Control:**
    - Create a repository on GitHub or GitLab.
    - Ensure everyone has access and understands the version control setup (commit regularly, branch management, etc.).
  - **Assign Initial Tasks:**
    - Shahida and Al Ameen: Start backend work (Room structure, bookRoom function).
    - Riad: Begin frontend design, login system.
    - Ahnaf (Assistant): Prepare to help Shahida and Al Ameen with backend structure and assist Riad in UI setup.

---

### Days 2-3: Backend Development Starts

- **Shahida (Backend Developer):**
  - Implement Room Structure:
    - Define a `Room` class or structure with attributes such as `roomID`, `isOccupied`, `price`, etc.
    - Implement functions for adding, removing, or editing rooms.
  - Initialize Rooms Function:
    - Create the `initializeRooms()` function to set up a few default rooms.
- **Ahnaf (Assistant in Backend):**
  - Help Shahida implement and test the room structure.
  - Test edge cases for the `initializeRooms()` function.
  - Document the Room structure and initialization process for future reference.
- **Al Ameen (Backend Developer):**
  - Start bookRoom Function:
    - Implement the `bookRoom()` function to update room availability when a user books a room.
    - Implement basic validation to ensure room availability before booking.
- **Ahnaf (Assistant in Backend):**
  - Assist Al Ameen with booking logic.
  - Test the booking process.
- **Riad (Frontend Developer):**
  - Design Layout for Login System:
    - Work on the basic frontend structure (login page).
    - Focus on input validation for the login system.

---

### Day 4: Frontend Development and Integration Begins

- **Shahida (Backend Developer):**
  - Test Room Initialization:
    - Verify the `initializeRooms()` function.
  - Room Availability Management:
    - Implement logic to check room availability using `isOccupied`.
- **Ahnaf (Assistant in Backend):**
  - Test `isOccupied` functionality and debug issues.
- **Riad (Frontend Developer):**
  - Implement login system (username, password authentication).
  - Begin developing the room booking UI.
- **Ahnaf (Assistant in Frontend):**
  - Assist Riad with implementing and testing the login UI.

---

### Day 5: Backend and Frontend Refinement

- **Al Ameen (Backend Developer):**
  - Finalize bookRoom():
    - Confirm booking process and update room availability.
  - Start Price Calculation:
    - Implement the `calculatePrice()` function.
- **Shahida (Backend Developer):**
  - Implement add/edit functionality for rooms.
  - Fix bugs in room management or booking systems.
- **Riad (Frontend Developer):**
  - Complete displayRooms() Function.
  - Enhance menu options for user-friendly navigation.

---

### Days 6-7: Core Features Completed

- **Al Ameen (Backend Developer):**
  - Complete `calculatePrice()` with peak season pricing, discounts, and additional services.
  - Develop the `printBillBreakdown()` function.
- **Ahnaf (Assistant in Backend):**
  - Test price calculations and edge cases.
  - Begin integrated testing of components.
- **Ahnaf (Planner):**
  - Identify and document bugs.

---

### Days 8-9: Integration and System Testing

- **Ahnaf (Planner):**
  - Perform integration testing (end-to-end flow).
- **All Members:**
  - Collaborate on bug fixes and focus on functionality.

---

### Days 10-12: Final Adjustments

- **Backend Developers:**
  - Optimize backend logic.
  - Add features like an admin panel or booking history if required.
- **Frontend Developer:**
  - Refine UI for better aesthetics and usability.

---

### Days 13-14: Final Testing and Presentation Preparation

- **Ahnaf (Planner):**
  - Conduct final testing and document features.
- **All Members:**
  - Prepare for presentation or deployment.

---

### Key Tips for Success

1. **Daily Updates:** Hold daily stand-up meetings to track progress.
2. **Collaboration:** Keep communication open.
3. **Test Early, Test Often:** Start testing from day one.
4. **Prioritize Core Features:** Focus first on core functionalities before extras.
