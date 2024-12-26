
# Registration and Login System

This is a simple C++ program that implements a basic **user registration** and **login system**. It uses file handling to store and validate user credentials such as email, username, and password.

## Features
- **Registration:** Allows users to create an account by providing an email, username, and password.
- **Login:** Verifies user credentials against stored data in a file.
- **File Handling:** User data is stored persistently in a text file (`register.txt`).

## Requirements
- A C++ compiler (e.g., GCC or Clang)
- Basic knowledge of C++ and file handling

## How It Works
1. **Registration:**
   - Users enter their email, username, and password.
   - The details are stored in a text file `register.txt`.
   
2. **Login:**
   - Users provide their username and password.
   - The program verifies the credentials by reading `register.txt`.

3. **Persistent Storage:**
   - User data is saved in `register.txt` in the format:
     ```
     email username password
     ```

## How to Run
1. **Compile the Program:**
   ```bash
   g++ main.cpp -o main
   ```
2. **Run the Program:**
   ```bash
   ./main
   ```
3. Follow the on-screen menu to register and log in.

## File Structure
- **Source File:** `main.cpp`
- **Data File:** `register.txt` (created automatically during runtime)

## Sample Usage
### Menu
```
Welcome
1. Register
2. Login
3. Exit
Enter your choice: 
```

### Example Registration
```
Welcome to registration
Enter email: example@example.com
Create username: exampleUser
Create password: examplePass
```

### Example Login
```
Welcome to login
Username: exampleUser
Password: examplePass
Login successful, welcome exampleUser!
```

### Invalid Login
```
Welcome to login
Username: wrongUser
Password: wrongPass
Error: Invalid username or password.
```

## Improvements to Consider
- Encrypt stored passwords for better security.
- Add validation for inputs (e.g., strong password requirements, valid email format).
- Use a database for more scalable storage.

## License
This project is licensed under the [MIT License](LICENSE).
