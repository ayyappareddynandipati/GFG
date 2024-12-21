<h2><a href="https://www.geeksforgeeks.org/problems/java-1-d-and-2-d-array2952/1?page=1&category=Arrays&status=unsolved&sortBy=difficulty">Java 1-d and 2-d Array</a></h2><h3>Difficulty Level : Difficulty: Basic</h3><hr><div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a integer <strong style="user-select: auto;">n</strong>. We have&nbsp;<strong style="user-select: auto;">n*n</strong>&nbsp;values of a 2-d array,&nbsp;and&nbsp;&nbsp;<strong style="user-select: auto;">n</strong> values of 1-d array. Task is to find the sum of the left&nbsp;diagonal values of the 2-d array and the max element of the 1-d array and print them with space in between.</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">â€‹Input :</strong> arr[][] = {{1,2,3}, {4,5,6}, {7, 8,9}} 
        and N = 3
brr[] = {3, 6, 9}
<strong style="user-select: auto;">Output :</strong> 15 9
<strong style="user-select: auto;">Explanation:</strong>
1 2 3
4 5 6
7 8 9
So, this sum of left diagonal (1+ 5 + 9) = 15
The maximum element in an array brr is 9
So, will return {15, 9} as an answer.
</span></pre>
<p style="user-select: auto;"><br style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">â€‹Example 2:</strong></span></p>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input :</strong> arr[][] = {{1,2}, {1, 2}} and N = 2
brr[] = {10, 1} <strong style="user-select: auto;">
Output :</strong>  3 10 </span></pre>
<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">This is a function problem. The input is already taken care of by the driver code. You only need to complete the function <strong style="user-select: auto;">array()</strong> that takes a two-dimension array <strong style="user-select: auto;">(a)</strong>, another one dimension array <strong style="user-select: auto;">(b),</strong>&nbsp;sizeOfArray <strong style="user-select: auto;">(n)</strong>, and return the ArrayList which is having&nbsp;the sum of the diagonal elements of the array <strong style="user-select: auto;">a</strong> and the maximum number of the array&nbsp;<strong style="user-select: auto;">b</strong>. The driver code takes care of the printing.</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N).<br style="user-select: auto;"><strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1).</span></p>
<p style="user-select: auto;"><br style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints</strong><br style="user-select: auto;">1 ≤ n ≤ 100<br style="user-select: auto;">1 ≤ a[i][j], b[i] ≤ 10<sup style="user-select: auto;">3</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Java</code>&nbsp;<code>Data Structures</code>&nbsp;