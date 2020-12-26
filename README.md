# Range-sum-queries-for-anticlockwise-rotations-of-Array-by-K-indices
<pre>
arr = [1,2,3,4,5]
rotation = 2
updated arr = [4,5,1,2,3]
l = 1,r = 3
</pre>
## Approach 
<pre>
l = l - rotation ,r = r - rotation
if l < 0 l += n 
if r < 0 r += n

if (l > r)
sum = arr[n-1] - arr[l-1] + arr[r]
else simple operation
</pre>
