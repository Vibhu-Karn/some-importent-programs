import turtle
import colorsys as cols
t = turtle.Turtle()
move = 350            # size of structure or basically how much you want to expand make it 0 for original 
t.speed(999999)       # speed keep normal else cant see the transition
h = 0                 # can take values from 0 to 1 < red > to < dark green >
n = 200               # show different colours keep it accordingly as it can cause smudge
direction = 1         # related to if else only < remove for original >

while True :
	c = cols.hsv_to_rgb(h,1,0.99) # to change the colour of the pen
	h+=1/n
	t.color(c)
	t.forward(move)
	t.left(90)                   # set this value to 120 instead
	t.right(0.8)                   # set this value to 1 instead
	if direction == 1 :          # for original remove this if else statement
		if move >= 0 :
			move -= 1
		else :
			direction = 0
	if direction == 0:
		if move < 350 :
			move += 1
		else :
			direction = 1
