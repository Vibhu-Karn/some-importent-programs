import numpy as np
from scipy.cluster.vq import kmeans , whiten
import matplotlib.pyplot as plt
import seaborn as sns
sns.set_style("darkgrid")

# creating 50 data points in two clsuter a & b
pts = 1000
a = np.random.multivariate_normal([0,0],[[4,1],[1,4]] , size = pts)
b = np.random.multivariate_normal([30,10],[[10,2],[2,10]] , size = pts)
features = np.concatenate((a,b))

# whiten data

whitend = whiten(features)

# find 2 clusters in data

codebook , distortion = kmeans(whitend,2)

# plot whitend data and clusters enters in red

plt.scatter(whitend[:,0] , whitend[:,1] , c = 'g')
plt.scatter(codebook[:,0] , codebook[:,1] , c = 'r')
plt.show()

