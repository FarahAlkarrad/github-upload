<h1 align="center"> Numerical Analysis and Scientific Computing </h1>

Numerical analysis is a subject that involves computational methods for studying and solving mathematical problems. It is a branch of mathematics and computer science that create, analyzes, and implements algorithms for solving mathematical problems numerically. Numerical methods usually emphasize the implementation of numerical algorithms. The aim of these methods is, therefore, to provide systematic techniques for solving mathematical problems numerically.

## Rounding and Chopping numbers
<p> The process of solving problems using high-precision digital computers generally involves starting from initial data; the concerned appropriate algorithms are then executed to yield the required result. Inevitably, the numerical data and the methods used are approximate. Hence, the error in the computer result may certainly be caused by errors in the data, or errors in the method, or both.</p>

### Rounding
Numbers are rounded off so as to cause the least possible errors. 

The general rule for rounding off a number to *n* signification digits is as follows: 
1. Discard all digits to the right of the *n*th place.
2. If the discarded number is less than half a unit in the *n*th place, leave the *n*th digit unchanged.
3. if the discarded number is greater or equal to half a unit in the *n*th place, add 1 to the *n*th digit. 

 To illustrate, the following numbers are corrected to 4-digit values of the irrational numbers:<br>
>	27.1345 becomes 27.13 <br>
	27.8793 becomes 27.88 <br>
	27.355 becomes 27.36 <br>

### Chopping
Simply chop off the extra digits.

The following numbers are corrected to 5-digit chopping values of the irrational number:	
>  3.1415926 becomes 3.1415 <br>
	 6.2518319 becomes 6.2518

## Intermediate Value Theorem & Applications
In mathematical analysis, the intermediate value theorem states that if *f* is a continuous function whose domain contains the interval [a, b], then it takes on any given value between *f(a)* and *f(b)* at some point within the interval.

### Simpson's Rule
Simpson's rules are several approximations for definite integrals.

**Formula is:** 

$$ \int_a^b f(x), dx = {b-a \over 6} ({f(a) + {4 * {f({a+b \over 2}) + f(b) }}})$$

```
 To find integration using simpson's rule
 plz enter first point and second point you want to start and end with it.

 First Point = 2
 Second Point = 4

 Integration of x^2 = 18.6667

 Integration of x^4 = 198.667

 Integration of 1/(x+1) = 0.511111

 Integration of sqrt(1+x^2) = 6.33609

 Integration of sin(x) = 0.238992

 Integration of e^x = 47.4431

Process returned 0 (0x0)   execution time : 5.015 s
Press any key to continue.
```
### Newton-Raphson Method
The Newton-Raphson Method is referred to as one of the most commonly used techniques for determining a real root of equation *f*(x)=0 given just one point close to the desired root.

**Formula is:** $$x _ {1} = {x _ {0} – f(x_{0}) \over f'(x_{0}) }$$
```
 To use Newton-Raphson method you need to enter an initial point.

 For this equation f(x) = x^3 + 4*x^2 - 10      The initial point = 2
 root = 1.36523

 For this equation f(x) = cos(x)        The initial point = 3
 root = -4.71146

 For this equation f(x) = cos(x)-x      The initial point = 4
 root = 16.0706

Process returned 0 (0x0)   execution time : 18.618 s
Press any key to continue.
```
