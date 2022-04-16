import cv2
import numpy as np
import matplotlib.pyplot as plt

image = cv2.imread('/home/vibhu/Pictures/python_test/test_py2.jpg')
grey = cv2.cvtColor(image,cv2.COLOR_BGR2GRAY)
plt.imshow(grey,cmap = 'gray')
plt.show()
blur = cv2.GaussianBlur(grey,(5,5),0)
plt.imshow(blur,cmap = 'gray')
plt.show()
canny = cv2.Canny(blur,10,150,3)
plt.imshow(canny,cmap = 'gray')
plt.show()
dilated = cv2.dilate(canny,(1,1),iterations =2)
plt.imshow(dilated,cmap = 'gray')
plt.show()
(cnt,heiearchy)=cv2.findContours(dilated.copy(),cv2.RETR_EXTERNAL,cv2.CHAIN_APPROX_NONE)
rgb = cv2.cvtColor(image,cv2.COLOR_BGR2RGB)
cv2.drawContours(rgb,cnt,-1,(0,255,0),2)
plt.imshow(rgb)
plt.show()
print("No.of stars there : ",len(cnt))
