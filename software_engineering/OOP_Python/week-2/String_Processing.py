import re

# Example string
text = "Hello, my email addresses are john@example.com and jane@example.org. Please contact us."

# Using built-in string methods for basic string manipulation
# 1. Splitting the text into words
words = text.split()
# print("Words in the text:", words)

# 2. Finding the index of a specific word
word_to_find = "email"
if word_to_find in words:
    index = words.index(word_to_find)
    # print(f"'{word_to_find}' found at index {index}")

# Using regular expressions for more advanced string processing
# 1. Finding email addresses in the text using regular expressions
email_pattern = r'\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Z|a-z]{2,7}\b'
emails = re.findall(email_pattern, text)
# print("Email addresses found:", emails)

# 2. Replacing email addresses with placeholders
masked_text = re.sub(email_pattern, "[EMAIL REDACTED]", text)
print("Masked text:", masked_text)
