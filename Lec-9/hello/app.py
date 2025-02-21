from flask import Flask, render_template, request

# Create an instance of the Flask class
app = Flask(__name__)

# Define a route for the root URL ("/") that accepts both GET and POST methods
@app.route('/', methods=['GET', 'POST'])
def index():
	# Check if the request method is POST
	if request.method == 'POST':
		# Get the 'name' parameter from the form, default to 'World' if not provided
		name = request.form.get('name', 'World')
		# Render the 'greet.html' template with the provided name
		return render_template('greet.html', name=name)
	# If the request method is GET, render the 'index.html' template
	return render_template('index.html')
