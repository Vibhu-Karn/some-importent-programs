import turtle as tur
import colorsys as cols
t = tur.Turtle()
s = tur.Turtle()
#s.bgcolor("black")
t.speed(0)
n = 36
h = 0
for i in range(480) :
	c = cols.hsv_to_rgb(h,1,0.99) # to change the colour of the pen
	h+=1/n
	t.color(c)
	t.left(185)
	for j in range(5) :
		t.forward(80) # to alter the radii of the formation
		t.left(50)
