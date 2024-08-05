print("Abisekh Dey!")
import turtle

# Function to draw a circle with a given radius and fill color
def draw_circle(radius, color):
    turtle.fillcolor(color)
    turtle.begin_fill()
    turtle.circle(radius)
    turtle.end_fill()

# Set up the turtle
turtle.speed(2)
turtle.bgcolor("white")  # Set background color

# Draw the face (yellow circle)
draw_circle(100, "yellow")

# # Draw the left eye (white circle)
turtle.goto(-40, 120)
draw_circle(15, "white")

# # Draw the right eye (white circle)
turtle.goto(40, 120)
draw_circle(15, "white")

# # Draw the left eye (black circle)
turtle.goto(-40, 120)
draw_circle(6, "black")

# # Draw the right eye (black circle)
turtle.goto(40, 120)
draw_circle(6, "black")

# # Draw the smiling mouth (semicircle)
turtle.goto(-40, 85)
turtle.right(90)
turtle.circle(40, 180)

# Hide the turtle
turtle.hideturtle()

# Keep the window open
turtle.mainloop()
# Get input from the user
num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))

# Add the numbers
result = num1 + num2

# Display the result
print(f"The sum of {num1} and {num2} is: {result}")
