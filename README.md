# Password-Analyzer

This is a simple C-based password resilience analyzer. It evaluates the strength of a password based on the presence of lowercase letters, uppercase letters, digits, special characters, and password length. The program offers a menu-driven interface that allows the user to test new passwords and view the strength of the last tested password.

## Features
- Lowercase Check: Verifies if the password contains at least one lowercase letter.
- Uppercase Check: Verifies if the password contains at least one uppercase letter.
- Digit Check: Verifies if the password contains at least one numeric digit.
- Special Character Check: Verifies if the password contains special characters (!, @, #, $, %, &, *, ^, etc.).
- Password Length Bonus: Awards a bonus point if the password exceeds 12 characters in length.
## Strength Levels:
- Weak: Passwords with 0-2 points (e.g., no special characters or short length)
- Moderate: Passwords with 3-4 points (e.g., contains lowercase, uppercase, and digits)
- Strong: Passwords with 5 points (e.g., meets all criteria and is longer than 12 characters)
