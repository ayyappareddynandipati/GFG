<h2><a href="https://www.geeksforgeeks.org/problems/mirror-tree/1">Mirror Tree</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a Binary Tree, convert it into its mirror.<br style="user-select: auto;"><img class="aligncenter size-full wp-image-663" style="height: 338px; width: 591px; user-select: auto;" title="MirrorTree1" src="https://contribute.geeksforgeeks.org/wp-content/uploads/mirrortrees.jpg" alt="MirrorTree1">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Examples:</strong></span></p>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>      1
&nbsp;   /  \
&nbsp;  2    3
<strong style="user-select: auto;">Output: </strong>3 1 2<strong style="user-select: auto;">
Explanation: </strong>The tree is
&nbsp;&nbsp;1&nbsp;&nbsp;  (mirror)     1
 /&nbsp;&nbsp;\&nbsp;&nbsp;  =&gt;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;   /&nbsp; \
2&nbsp;&nbsp;&nbsp; 3&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;  3&nbsp;  2
The inorder of mirror is 3 1 2</span></pre>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>      10
&nbsp;    /  \
&nbsp;   20   30
&nbsp;  /  \
&nbsp; 40  60
<strong style="user-select: auto;">Output: </strong>30 10 60 20 40<strong style="user-select: auto;">
Explanation: </strong>The tree is
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 10&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 10
&nbsp;&nbsp;  /&nbsp;&nbsp;&nbsp;&nbsp;\&nbsp;&nbsp;(mirror)    /&nbsp;&nbsp;&nbsp; \
&nbsp;  20&nbsp;&nbsp;&nbsp; 30&nbsp;&nbsp;&nbsp; =&gt; &nbsp; 30&nbsp;&nbsp;&nbsp; 20
&nbsp; /&nbsp;&nbsp;\&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;      /&nbsp;&nbsp;&nbsp;\
&nbsp;40&nbsp; 60&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 60&nbsp;&nbsp;&nbsp;40
The inroder traversal of mirror is: 30 10 60 20 40.</span></pre>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(n)<br style="user-select: auto;"><strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(height of the tree)</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">1 ≤ Number of nodes ≤ 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">1 ≤ Data of a node ≤ 10<sup style="user-select: auto;">5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Paytm</code>&nbsp;<code>VMWare</code>&nbsp;<code>Morgan Stanley</code>&nbsp;<code>Accolite</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Samsung</code>&nbsp;<code>Snapdeal</code>&nbsp;<code>Ola Cabs</code>&nbsp;<code>Walmart</code>&nbsp;<code>Goldman Sachs</code>&nbsp;<code>Adobe</code>&nbsp;<code>Google</code>&nbsp;<code>SAP Labs</code>&nbsp;<code>Myntra</code>&nbsp;<code>Belzabar</code>&nbsp;<code>eBay</code>&nbsp;<code>PropTiger</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;