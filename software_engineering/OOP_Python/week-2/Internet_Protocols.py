# import requests

# # Making a GET request to a URL
# response = requests.get("https://jsonplaceholder.typicode.com/posts/1")

# # Check if the request was successful (status code 200)
# if response.status_code == 200:
#     data = response.json()  # Parse JSON response
#     print("Title:", data['title'])
# else:
#     print("Failed to retrieve data.")


# import smtplib
# from email.mime.text import MIMEText

# # Email content
# sender_email = "2022masudrahman@gmail.com"
# receiver_email = "masudrahman.dev@gmail.com"
# subject = "Hello from Python!"
# message = "This is a test email sent from Python."

# # Create the email message
# msg = MIMEText(message)
# msg["Subject"] = subject
# msg["From"] = sender_email
# msg["To"] = receiver_email

# # Connect to SMTP server and send the email
# with smtplib.SMTP("smtp.gmail.com", 587) as server:
#     server.starttls()
#     server.login(sender_email, "your_password")
#     server.sendmail(sender_email, receiver_email, msg.as_string())

# print("Email sent successfully!")


# from ftplib import FTP

# # Connect to an FTP server
# ftp = FTP("ftp.example.com")
# ftp.login("username", "password")

# # List files in the current directory
# files = ftp.nlst()
# print("Files in current directory:", files)

# # Download a file
# filename = "example.txt"
# with open(filename, "wb") as local_file:
#     ftp.retrbinary("RETR " + filename, local_file.write)

# # Upload a file
# with open("upload.txt", "rb") as local_file:
#     ftp.storbinary("STOR upload.txt", local_file)

# # Disconnect from the FTP server
# ftp.quit()

import os
import subprocess

# Run a system command and capture the output
result = subprocess.run(['ls', '-l'], stdout=subprocess.PIPE, text=True)
print(result.stdout)

# List files in a directory
# files = os.listdir('/path/to/directory')
# print('Files in directory:', files)

# # Create a new directory
# os.mkdir('new_directory')

# Reading a file
with open('example.txt', 'r') as file:
    content = file.read()
    print(content)

# Writing to a file
with open('output.txt', 'w') as file:
    file.write('This is a sample text.')
