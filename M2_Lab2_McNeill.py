# M2Lab2 - graphics
# mcneilli
# 2/5/25
# play around with IDLE and draw something cool
# I drem my initiaals

from turtle import *

screen = Screen()
screen.bgcolor("black")

t = Turtle()
t.shape("turtle")
t.color("cornflowerblue")
t.pensize(3)
t.pencolor("navy")

# initials

#letter I
t.penup()
t.goto(-300, 25)
t.pendown()
t.forward(100)
t.left(180)
t.forward(50)
t.left(90)
t.forward(150)
t.right(90)
t.forward(50)
t.right(180)
t.forward(100)

#period
t.penup()
t.forward(25)
t.pendown()
t.begin_fill()
t.fillcolor("navy")
t.circle(3)
t.end_fill()
t.penup()
t.forward(25)
t.pendown()

#letter M
t.left(90)
t.forward(150)
t.right(150)
t.forward(75)
t.left(180-60)
t.forward(75)
t.right(180-30)
t.forward(150)
t.left(90)

#period
t.penup()
t.forward(25)
t.pendown()
t.begin_fill()
t.fillcolor("navy")
t.circle(3)
t.end_fill()
t.penup()
t.forward(25)
t.pendown()

#2nd letter m
t.left(90)
t.forward(150)
t.right(150)
t.forward(75)
t.left(180-60)
t.forward(75)
t.right(180-30)
t.forward(150)
t.left(90)

#exlamation point
t.pensize(8)
t.penup()
t.forward(35)
t.pendown()
t.begin_fill()
t.fillcolor("navy")
t.circle(5)
t.end_fill()
t.left(90)
t.penup()
t.forward(45)
t.pendown()
t.forward(130)

t.right(90)
t.penup()
t.forward(100)





