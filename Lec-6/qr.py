import qrcode  # Import the qrcode module to generate QR codes

# Generate a QR code for the specified URL
img = qrcode.make('https://youtu.be/xvFZjo5PgG0')

# Save the generated QR code as an image file named 'qr.png' in PNG format
img.save('qr.png', "PNG")