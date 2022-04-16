import numpy as np
from matplotlib import pyplot as plt
from scipy import fftpack as ft

pie = 22/7
t = np.arange(0,1,0.0001)
y1t = 0.2 * np.sin(4 * pie * t)
y2t = np.sin(100 * pie * t)
yt = y1t + y2t
plt.plot(t,yt,'r')
plt.title("sin(2*2*pi*t) + 0.2*sin(50*2*pi*t)")
plt.xlabel("t")
plt.ylabel("Amplitude")
plt.xlim([min(t),max(t)])
plt.show()

plt.figure()
plt.plot(abs(ft.fft(yt)))
plt.title("frequency spectrum of Y(t)")
plt.xlabel("frequency")
plt.ylabel("amplitude")
plt.show()


# making a low pass filter with cutoff 5 Hz

hs = 2 * pie 
