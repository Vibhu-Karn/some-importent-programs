import numpy as np
import matplotlib.pyplot as plt
r = 5
xc = 4
yc = 3
q = np.arange(0,6.2857,0.0001)
x = r * np.sin(q) + xc
y = r * np.cos(q) + yc
plt.plot(x,y,'r')
r1 = 1.8
xc1 = 2
yc1 = 5
x1 = r1 * np.sin(q) + xc1
y1 = r1 * np.cos(q) + yc1
plt.plot(x1,y1,'k')
xc2 = 6
x2 = r1 * np.sin(q) + xc2
y2 = r1 * np.cos(q) + yc1
plt.plot(x2,y2,'k')
r2 = 1.2
xc3 = 4
yc3 = -0.3
x3 = r2 * np.sin(q) + xc3
y3 = r2 * np.cos(q) + yc3
plt.plot(x3,y3,'k')
plt.show()

