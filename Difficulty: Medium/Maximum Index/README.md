<h2><a href="https://www.geeksforgeeks.org/problems/maximum-index-1587115620/1?page=1&status=unsolved&sprint=50746f92a895c22a50504ac0c1fb9c84&sortBy=accuracy">Maximum Index</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given an array <strong>arr</strong> of positive integers. You have to return the maximum of <strong>j - i</strong> such that <strong>arr[i] <u>&lt;</u> arr[j] </strong>and <strong>i <u>&lt;</u>&nbsp;j</strong>.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [1, 10]
<strong>Output: </strong>1<strong>
Explanation: </strong>arr[0] <u style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">&lt;</u> arr[1] so (j-i) is 1-0 = 1.<br></span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [5, 4, 3]
<strong>Output: </strong>0<strong>
Explanation:</strong> There is no pair that satisfies the given condition.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [34, 8, 10, 3, 2, 80, 30, 33, 1]
<strong>Output: </strong>6<strong>
Explanation: </strong>In the given array arr[1] &lt; arr[7] satisfying the required condition(arr[i] <u>&lt;</u> arr[j]) thus giving the maximum difference of j - i which is 6(7-1).
</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 ≤ arr.size ≤ 10<sup>5</sup><br>0 ≤ arr[i] ≤ 10<sup>9</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>VMWare</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>MakeMyTrip</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;<code>two-pointer-algorithm</code>&nbsp;