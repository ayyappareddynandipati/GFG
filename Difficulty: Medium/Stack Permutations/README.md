<h2><a href="https://www.geeksforgeeks.org/problems/stack-permutations/1?page=1&category=Stack&difficulty=Medium&status=unsolved&sortBy=accuracy">Stack Permutations</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">You are given two arrays <strong>a[]</strong> and<strong> b[] </strong>of unique elements of&nbsp; same size . Check if&nbsp; array <strong>b[]</strong> is a stack permutation of the array <strong>a[] </strong>or not. Stack permutation means that array&nbsp;<strong>b[]</strong>&nbsp;can be created from array&nbsp;<strong>a[]&nbsp;</strong>using a stack and stack operations.<br><br></span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>a[] = [1, 2, 3], b[] = [2 ,1 ,3]
<strong>Output: </strong>True
<strong>Explanation:</strong>
1. push 1 from a to stack
2. push 2 from a to stack
3. pop 2 from stack to b
4. pop 1 from stack to b
5. push 3 from a to stack
6. pop 3 from stack to b</span></pre>
<pre><span style="font-size: 14pt;"><strong><br>Input: </strong>a[] = [1, 2, 3], b[] = [3 ,1 ,2]
<strong>Output: </strong>False
<strong>Explanation:</strong>Not Possible<br></span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1&nbsp;<span style="background-color: #ffffff; color: #1e2229; font-family: Nunito;">≤</span><span style="background-color: #ffffff; color: #1e2229; font-family: Nunito;"> a.size()=b.size()</span><span style="background-color: #ffffff; color: #1e2229; font-family: Nunito;">≤</span><span style="background-color: #ffffff; color: #1e2229; font-family: Nunito;"> </span>&nbsp;10<sup>5<br></sup>0&nbsp;<span style="background-color: #ffffff; color: #1e2229; font-family: Nunito;">≤</span><span style="background-color: #ffffff; color: #1e2229; font-family: Nunito;"> </span>&nbsp;a[i], b[i] <span style="background-color: #ffffff; color: #1e2229; font-family: Nunito;">≤</span><span style="background-color: #ffffff; color: #1e2229; font-family: Nunito;"> </span>&nbsp;2*10<sup>5</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Stack</code>&nbsp;<code>implementation</code>&nbsp;<code>Data Structures</code>&nbsp;