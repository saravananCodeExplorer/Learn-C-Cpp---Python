#delaunay
#simplices creates triangular
'''import numpy as np
from scipy.spatial import Delaunay
import matplotlib.pyplot as plt
points = np.array([
  [2, 4],
  [3, 4],
  [3, 0],
  [2, 2],
  [4, 1]
])
simplices = Delaunay(points).simplices
plt.triplot(points[:, 0], points[:, 1], simplices)
plt.scatter(points[:, 0], points[:, 1], color='r')
plt.show()

#Convex Hull
import numpy as np
from scipy.spatial import ConvexHull
import matplotlib.pyplot as plt
points = np.array([
  [2, 4],
  [3, 4],
  [3, 0],
  [2, 2],
  [4, 1],
  [1, 2],
  [5, 0],
  [3, 1],
  [1, 2],
  [0, 2]
])
hull = ConvexHull(points)
hull_points = hull.simplices
plt.scatter(points[:,0], points[:,1])
for simplex in hull_points:
  plt.plot(points[simplex,0], points[simplex,1], 'k-')
plt.show()'''

#euclidean distance
'''from scipy.spatial.distance import euclidean
p1 = (22,1,42,10)
p2 = (20,0,36,8)
res = euclidean(p1, p2)
print(res)

#cosine distance
from scipy.spatial.distance import cosine
p1 = (0,3,1,2,0)
p2 = (1,4,1,1,2)
res = cosine(p1, p2)
print(res)

#Manhattan / cityblock distance
from scipy.spatial.distance import cityblock
p1 = (0,3,1,2,0)
p2 = (1,4,1,1,2)
res = cityblock(p1, p2)
print(res)

#Hamming distance
from scipy.spatial.distance import hamming
p1 = ("walk")
p2 = ("took")
res = hamming(p1, p2)
print(res)'''

from scipy import io
import numpy as np
arr = np.array([0, 1, 2, 3, 4, 5, 6, 7, 8, 9,])
# Export:
io.savemat('arr2.mat', {"vec": arr})
# Import:
mydata = io.loadmat('arr2.mat')
print(mydata)

from scipy import io
import numpy as np
arr = np.arange(20)
io.savemat('arr3.mat', {"vec": arr})
mydata = io.loadmat('arr3.mat')
print(mydata)

