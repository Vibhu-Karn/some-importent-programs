import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

x = ['S1 0.43833' , 'S2 0.2555' , 'S3 0.3912' , 'S4 0.2928' , 'S5 0.5598']
y = [7.2 , 4.2 , 6.49 , 4.8 , 9.29]

plt.bar(x , y , color = 'maroon' , width = 0.2 )
plt.xlabel('Voltages')
plt.ylabel('Weights')
plt.title('Vibhu Right Leg Analysis')
plt.show()
