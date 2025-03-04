# Contact Management System 📞  

A **simple C++ program** to manage contacts using file storage. Users can **add contacts** with a **10-digit phone number**, **search for existing contacts**, and prevent duplicates. Contacts are stored in `contact.txt` for persistence. The system provides a **menu-driven interface** for ease of use. Future enhancements may include **deleting and updating contacts**.  

## Features  
✔ Add and search contacts  
✔ Prevent duplicate entries  
✔ Store contacts in a text file  
✔ Simple menu-driven interface  

## Installation & Usage  
### Compilation  
Make sure you have a C++ compiler installed (e.g., g++). Compile the program using the following command:  
```bash  
g++ contact_manager.cpp -o contact_manager  
```

### Running the Program  
Before running, ensure that `contact.txt` exists in the same directory as the compiled program. If the file does not exist, create an empty `contact.txt` manually. **Failure to have this file may result in errors.**

```bash  
touch contact.txt  
./contact_manager  
```

## How It Works  
1. **Add Contact** – Enter a name and a 10-digit phone number. The program ensures uniqueness.  
2. **Search Contact** – Find a contact by name.  
3. **Exit** – Close the program.  

## Warning ⚠  
- **`contact.txt` must exist before running the program.** If missing, manually create an empty file using `touch contact.txt`.
- The program does not support deleting or editing contacts yet.

## Future Improvements  
🔹 Delete and update contacts  
🔹 User-friendly error handling  
🔹 GUI-based interface  

🚀 *A great project for learning file handling in C++!*

