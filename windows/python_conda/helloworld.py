import numpy as np
import matplotlib.pyplot as plt
import sys

print ('参数个数为:', len(sys.argv), '个参数。')
print ('参数列表:', str(sys.argv))

x = np.linspace(0, 20, 100)  # Create a list of evenly-spaced numbers over the range
plt.plot(x, np.sin(x))       # Plot the sine of each x point
plt.show()                   # Display the plot

print("hello, world")
print("hello, world")
print("hello, world")
print("hello, world")
