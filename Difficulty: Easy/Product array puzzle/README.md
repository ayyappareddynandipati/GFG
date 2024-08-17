<h2><a href="https://www.geeksforgeeks.org/problems/product-array-puzzle4525/1">Product array puzzle</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">nums[]</strong>, construct a Product Array nums[] such that<strong style="user-select: auto;"> nums[i]</strong> is equal to the product of all the elements of <strong style="user-select: auto;">nums</strong> except nums[i].</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Examples:</strong></span></p>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>nums[] = [10, 3, 5, 6, 2]
<strong style="user-select: auto;">Output: </strong>[180, 600, 360, 300, 900]<strong style="user-select: auto;">
Explanation: </strong>For i=0, P[i] = 3*5*6*2 = 180.
For i=1, P[i] = 10*5*6*2 = 600.
For i=2, P[i] = 10*3*6*2 = 360.
For i=3, P[i] = 10*3*5*2 = 300.
For i=4, P[i] = 10*3*5*6 = 900.</span>
</pre>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>nums[] = [12,0]
<strong style="user-select: auto;">Output: </strong>[0, 12]</span></pre>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(n)<br style="user-select: auto;"><strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(n)</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">1 &lt;= nums.size() &lt;= 1000<br style="user-select: auto;">0 &lt;= nums[i] &lt;= 200</span><br style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">nums[i] may contain duplicates.</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Morgan Stanley</code>&nbsp;<code>Accolite</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>D-E-Shaw</code>&nbsp;<code>Intuit</code>&nbsp;<code>Opera</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Mathematical</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;