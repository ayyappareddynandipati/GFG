<h2><a href="https://www.geeksforgeeks.org/problems/count-zeros-in-a-sorted-matrix/1?page=3&category=Matrix&sortBy=submissions">Count zeros in a sorted matrix</a></h2><h3>Difficulty Level : Difficulty: Basic</h3><hr><div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a <strong style="user-select: auto;">N X N&nbsp;</strong>binary Square Matrix where each row and column of the matrix is sorted in ascending order. Find the total number of <strong style="user-select: auto;">zeros</strong> present in the matrix.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 3
A = {{0, 0, 0},
&nbsp;    {0, 0, 1},
&nbsp;    {0, 1, 1}}<strong style="user-select: auto;">
Output: </strong>6
<strong style="user-select: auto;">Explanation: 
</strong>The first, second and third row contains 3, 2 and 1
zeroes respectively.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 2
A = {{1, 1},
&nbsp;    {1, 1}}
<strong style="user-select: auto;">Output: </strong>0
<strong style="user-select: auto;">Explanation:
</strong>There are no zeroes in any of the rows.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">countZeros()&nbsp;</strong>which takes a <strong style="user-select: auto;">2D matrix</strong> as input and returns the number occurring only once.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N ).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints</strong><br style="user-select: auto;">
0 &lt; &nbsp; <strong style="user-select: auto;">N</strong>&nbsp; &lt;= 10<sup style="user-select: auto;">3</sup><br style="user-select: auto;">
0 &lt;= <strong style="user-select: auto;">A[i]</strong> &lt;= 1</span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Searching</code>&nbsp;<code>Matrix</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;