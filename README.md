# Maze-Game

Computer Programming term project that is a maze game.
## Introduction

My code’s goal is to find exitway in predefined maze which is two-dimensional matrix . In this maze ‘1’ shows wall of maze and ‘0’ shows way of maze . My code begins start point which is point (0,0) and finishes end point which is point (9,9) . If the maze has dead ends , Firstly my code finds dead ends and tries this ways and then ignores the dead ends , Finally my code finds exitway and prints points of exitway.
</br></br>You can see the default maze below in the table.
<table border=1>
    <tr>
        <td></td>
        <td>0</td>
        <td>1</td>
        <td>2</td>
        <td>3</td>
        <td>4</td>
        <td>5</td>
        <td>6</td>
        <td>7</td>
        <td>8</td>
        <td>9</td>
    </tr>
    <tr>
        <td>0</td>
        <td>0</td>
        <td>0</td>
        <td>1</td>
        <td>1</td>
        <td>1</td>
        <td>1</td>
        <td>1</td>
        <td>1</td>
        <td>1</td>
        <td>1</td>
    </tr>
    <tr>
        <td>1</td>
        <td>1</td>
        <td>0</td>
        <td>0</td>
        <td>0</td>
        <td>0</td>
        <td>1</td>
        <td>1</td>
        <td>1</td>
        <td>1</td>
        <td>1</td>
    </tr>
    <tr>
        <td>2</td>
        <td>1</td>
        <td>1</td>
        <td>1</td>
        <td>1</td>
        <td>0</td>
        <td>1</td>
        <td>1</td>
        <td>1</td>
        <td>1</td>
        <td>1</td>
    </tr>
    <tr>
        <td>3</td>
        <td>1</td>
        <td>1</td>
        <td>1</td>
        <td>1</td>
        <td>0</td>
        <td>1</td>
        <td>1</td>
        <td>1</td>
        <td>1</td>
        <td>1</td>
    </tr>
    <tr>
        <td>4</td>
        <td>1</td>
        <td>1</td>
        <td>0</td>
        <td>0</td>
        <td>0</td>
        <td>0</td>
        <td>1</td>
        <td>1</td>
        <td>1</td>
        <td>1</td>
    </tr> 
    <tr>
        <td>5</td>
        <td>1</td>
        <td>0</td>
        <td>0</td>
        <td>1</td>
        <td>1</td>
        <td>0</td>
        <td>0</td>
        <td>0</td>
        <td>1</td>
        <td>1</td>
    </tr>  
    <tr>
        <td>6</td>
        <td>1</td>
        <td>1</td>
        <td>0</td>
        <td>1</td>
        <td>1</td>
        <td>0</td>
        <td>0</td>
        <td>1</td>
        <td>1</td>
        <td>1</td>
    </tr>
    <tr>
        <td>7</td>
        <td>1</td>
        <td>1</td>
        <td>0</td>
        <td>0</td>
        <td>1</td>
        <td>1</td>
        <td>0</td>
        <td>0</td>
        <td>1</td>
        <td>1</td>
    </tr>
    <tr>
        <td>8</td>
        <td>1</td>
        <td>1</td>
        <td>1</td>
        <td>1</td>
        <td>1</td>
        <td>1</td>
        <td>1</td>
        <td>0</td>
        <td>0</td>
        <td>1</td>
    </tr>
    <tr>
        <td>9</td>
        <td>1</td>
        <td>1</td>
        <td>1</td>
        <td>1</td>
        <td>1</td>
        <td>1</td>
        <td>1</td>
        <td>1</td>
        <td>0</td>
        <td>0</td>
    </tr>
</table>


## Method

I used recursion method when I did my Project. A recursive function is a function that calls itself either directly or indirectly.  A recursive algorithm has least two parts:

1)	Base cases that determine when to stop. I stopped the recursive function calling another function which is not recursive function.
```
if (x == SIZE - 1 && y == SIZE - 1)
	{
		add_to_way(x, y);  //another function                                                         
		return true;                                       
	}
```
2)	Recursive parts that call the same algortihm itself to assist in solving the problem.
```
bool find_way(int x, int y, int selected_direction)
{
…………
fsh = find_way(x, y - 1, LEFT);
……..
}
```

I used a function (<code>add_to_way</code>) to keep exitway points. The function parameters are  x , y and the function returns nothing but the function translates point ( x , y ) to two – digit number ( xy ) and then the function assigns two – digit xy to one element of a array.


<code> way[i] = x * 10 + y; </code>

## Running the Code

After running the code you can see this solution on console screen : </br>

 x | y</br>
.......</br>
0 0</br>
0 1</br>
1 1</br>
1 2</br>
1 3</br>
1 4</br>
2 4</br>
3 4</br>
4 4</br>
4 5</br>
5 5</br>
6 5</br>
6 6</br>
7 6</br>
7 7</br>
8 7</br>
8 8</br>
9 8</br>
9 9</br>
