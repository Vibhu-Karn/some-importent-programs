import numpy as np
from matplotlib import pyplot as plt

# plotting continuous signal

t = np.arange(-0.2 , 0.2 , 0.003334)
x1 = 3 * np.cos(50 * 22 * t / 7)
x2 = 10 * np.sin(300 * 22 * t / 7)
x3 = np.cos(100 * 22 * t / 7)
xt = x1 + x2 + x3
plt.subplot(2,3,1)
plt.plot(t,xt,'g')
plt.title("Cont. signal X(t)")
plt.xlabel("t")
plt.ylabel("Amplitude")

# plotting discreete signal with frequency less than Nyquist ie 25Hz

f1 = 25
t1 = np.arange(-0.2 , 0.2 , 1/f1)
x11 = 3 * np.cos(50 * 22 * t1 / 7)
x21 = 10 * np.sin(300 * 22 * t1 / 7)
x31 = np.cos(100 * 22 * t1 / 7)
xn1 = x11 + x21 + x31 
plt.subplot(2,3,2)
plt.stem(t1,xn1,'g')
plt.title("Discreete signal X1[n]")
plt.xlabel("n")
plt.ylabel("Amplitude") 

# plotting discreete signal with frequency less than Nyquist ie 50Hz

f2 = 50
t2 = np.arange(-0.2 , 0.2 , 1/f2)
x12 = 3 * np.cos(50 * 22 * t2 / 7)
x22 = 10 * np.sin(300 * 22 * t2 / 7)
x32 = np.cos(100 * 22 * t2 / 7)
xn2 = x12 + x22 + x32 
plt.subplot(2,3,3)
plt.stem(t2,xn2,'g')
plt.title("Discreete signal X2[n]")
plt.xlabel("n")
plt.ylabel("Amplitude")

# plotting discreete signal with frequency equal to Nyquist ie 150Hz

f3 = 150
t3 = np.arange(-0.2 , 0.2 , 1/f3)
x13 = 3 * np.cos(50 * 22 * t3 / 7)
x23 = 10 * np.sin(300 * 22 * t3 / 7)
x33 = np.cos(100 * 22 * t3 / 7)
xn3 = x13 + x23 + x33 
plt.subplot(2,3,4)
plt.stem(t3,xn3,'g')
plt.title("Discreete signal X3[n]")
plt.xlabel("n")
plt.ylabel("Amplitude")

# plotting discreete signal with frequency more Nyquist ie 300Hz

f4 = 300
t4 = np.arange(-0.2 , 0.2 , 1/f4)
x14 = 3 * np.cos(50 * 22 * t4 / 7)
x24 = 10 * np.sin(300 * 22 * t4 / 7)
x34 = np.cos(100 * 22 * t4 / 7)
xn4 = x14 + x24 + x34 
plt.subplot(2,3,5)
plt.stem(t4,xn4,'g')
plt.title("Discreete signal X4[n]")
plt.xlabel("n")
plt.ylabel("Amplitude")
plt.show()
