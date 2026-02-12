# Cipher
**Encrypt Your text with Your own key**
# 🔐 Substitution Cipher

A command-line tool for quickly encrypting your messages. The tool is written in C. The tool uses a key of length 26 and maps it to the standard alphabet. The tool will then scramble your messages.



# 🚀 How to Run

1. **Compile the project:**
  First of all, you need to make sure you have the CS50 library installed in your system. You
  can do this using the following command in your terminal:
   ```bash
   make main
3. **Execute with a key:**
   You need to provide a secret alphabet. The secret alphabet is a string of 26 characters. You     need to provide it as a command-line argument. The alphabets need to be repeated once.
   ```Bash
   ./main JTREKYAVOFGUZILMDSBHPWXQNC
4. **Encrypt your text:** 
   You need to enter your message in the following way:
   ```Plaintext
   plaintext:  HELLO
   ciphertext: JRSSB
# 🛠 Features
   **Case Preservation:** The case of the letter 'A' will remain the same even if you enter it  
   in upper case.
   
   **Non-Alpha Support:** The tool will not change punctuation, white space, and numeric digits.    They will remain the same.
   
   **Strict Validation:** The tool will be validated for length and dudugi before it is executed.


# ⚠️ Common Errors
If "key error" occurs, you need to do the following:

You forgot to give us the key!

Is your key exactly 26 characters long?

Did you inadvertently type a number or symbol? Was there duplication of any letters? (e.g., two A's in your key.)

# 📁 Files
**main.c**
