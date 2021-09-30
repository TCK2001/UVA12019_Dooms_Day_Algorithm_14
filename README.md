## UVA12019_Dooms_Day_Algorithm_14
+ website : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=4&page=show_problem&problem=208 
--------
First we have to know what day is monday.
```c++
if(i==2)
{
  d=d+28;
}
else if(i%2==1) //odd number 1,3,5,7,9,11
{
  if(i<8) //1,3,5,7
  {
    d=d+31;
  }
  else //9,11
  {
    d=d+30;
  }
}
else if(i%2==0)  //even number 4,6,8,10,12;
{
 .....
//Same logic;
```
------
And we used (d % 7) to find what day of the week.
     

