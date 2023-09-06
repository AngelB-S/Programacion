from email.message import EmailMessage

# importing the password generated on app passwords on your google account
# to do that go to app passwords and select app (selecte other and put Python), and the key generated
# is the key that you use to send the email
from app2 import password

import ssl
import smtplib

email_sender = "examplemail@gmail.com"
email_password = password

email_receiver = "anotherexample@gmail.com"

subject = "Dont forget the bread"
body = """
dude dont forget the bread thx
"""

em = EmailMessage()
em["From"] = email_sender
em["To"] = email_receiver
em["subject"] = subject
em.set_content(body)

context = ssl.create_default_context()

# login and sending email
with smtplib.SMTP_SSL("smtp.gmail.com", 465, context=context) as smtp:
    smtp.login(email_sender, email_password)
    smtp.sendmail(email_sender, email_receiver, em.as_string())
