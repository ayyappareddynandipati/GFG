<h2><a href="https://www.geeksforgeeks.org/problems/subarrays-with-sum-k/1">Subarrays with sum K</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 14pt; user-select: auto;">Given an unsorted array of integers, find the number of continuous subarrays having sum exactly equal to a given number <strong style="user-select: auto;">k</strong>.</span></p>
<p style="user-select: auto;"><span style="font-size: 14pt; user-select: auto;"><strong style="user-select: auto;">Examples:</strong></span></p>
<pre style="user-select: auto;"><span style="font-size: 14pt; user-select: auto;"><strong style="user-select: auto;">Input:</strong><strong style="user-select: auto;"> </strong>arr = [10, 2, -2, -20, 10], k = -10
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explaination:</strong> Subarrays: arr[0...3], arr[1...4], arr[3...4] have sum exactly equal to -10.</span></pre>
<pre style="user-select: auto;"><span style="font-size: 14pt; user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [9, 4, 20, 3, 10, 5], k = 33
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explaination:</strong> Subarrays: arr[0...2], arr[2...4] have sum exactly equal to 33.<br style="user-select: auto;"></span></pre>
<pre style="user-select: auto;"><span style="font-size: 14pt; user-select: auto;"><strong style="user-select: auto;">Input: </strong>arr = [1, 3, 5], k = 0<br style="user-select: auto;"></span><span style="font-size: 14pt; user-select: auto;"><strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explaination: </strong>No subarray with 0 sum.</span></pre>
<p style="user-select: auto;"><strong style="font-size: 14pt; font-family: -apple-system, BlinkMacSystemFont, &quot;Segoe UI&quot;, Roboto, Oxygen, Ubuntu, Cantarell, &quot;Open Sans&quot;, &quot;Helvetica Neue&quot;, sans-serif; user-select: auto;">Constraints:</strong></p>
<ul style="user-select: auto;">
<li style="user-select: auto;"><span style="font-size: 14pt; user-select: auto;">1 ≤ arr.size() ≤ 10<sup style="user-select: auto;">5</sup></span></li>
<li style="user-select: auto;"><span style="font-size: 14pt; user-select: auto;">-10<sup style="user-select: auto;">3</sup> ≤ arr[i] ≤ 10<sup style="user-select: auto;">3</sup></span></li>
<li style="user-select: auto;"><span style="font-size: 14pt; user-select: auto;">-10<sup style="user-select: auto;">7</sup>&nbsp;≤ k&nbsp;≤ 10<sup style="user-select: auto;">7</sup></span></li>
</ul></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Hash</code>&nbsp;<code>Data Structures</code>&nbsp;