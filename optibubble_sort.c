#include &lt;stdio.h&gt;
int main()
{
int array[100], n, i, j, swap,flag=0;
printf(&quot;Enter number of elements &quot;);
scanf(&quot;%d&quot;, &amp;n);
printf(&quot;Enter %d Numbers: &quot;, n);
for(i = 0; i &lt; n; i++)
scanf(&quot;%d&quot;, &amp;array[i]);
for(i = 0 ; i &lt; n - 1; i++)
{
for(j = 0 ; j &lt; n-i-1; j++)
{
if(array[j] &gt; array[j+1])
{
swap = array[j];
array[j] = array[j+1];
array[j+1] = swap;
flag=1;
}
if(!flag)
{
break;
}
}
}
printf(&quot;Sorted Array: &quot;);
for(i = 0; i &lt; n; i++)
printf(&quot;%d &quot;, array[i]);
return 0;
}