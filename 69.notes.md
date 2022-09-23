
# Newtons descent (for minima/maxima)

The idea of Newtons descent is that if at some point x, we know the value of a function f and the first two derivatives we can fully determine a parabula from that point and find it's minimum.

We then use the minimum of the parabula as the next point to evaluate the function.

$$ g(t):=f(x_k+t) = f(x_k) + t f'(x_k) + \frac{1}{2} f''(x_k) t^2$$

A value for $t$ is found by minimizing $g(t)$ via the first derivative

$$ 0 = f'(x_k) + t f''(x_k) $$ 

Therefor the distance to the minima is 

$$ t = - \frac{f'(x_k)}{f''(x_k)} $$

and we  define 

$$x_{k+1} = x_k - \frac{f'(x_k)}{f''(x_k)}$$


# Newton method for zero point 

The idea here is that knowwing $f(x_k)$ and its derivative at $x_k$ we can derive an expression for the intersection of the tangent line with any height $h$. The x-coordinate of that intersection may be used as a $x_{k+1}$

The tangent line has the form $y(x) = f'(x_k) x + \beta$ and beta can be determined as $\beta = f(x_k)- f'(x_k) x_k$. We therefore have

$$ y(x) = f'(x_k) x +f(x_k)- f'(x_k) x_k $$

This line crosses the height $h$ at 

$$x_{k+1} = \frac{h - f(x_k) + f'(x_k)x_k}{f'(x_k)} = x_k - \frac{f(x_k)}{f'(x_k)} + \frac{h}{f'(x_k)}  $$

In the cas that we want to find a zero we drop the last term. In the problem we have $f(x) = x^2-p$ where p is the input. Therefore,

$$ x_{k+1} = x_k - \frac{x_k^2-p}{2x_k} = \frac{1}{2}\left(x_k+\frac{p}{x_k}\right)$$


# Inequality of arithmetic and geometric means

We start from 

$$\begin{align*}
0 & \le (x-y)^2 = x^2-2xy+y^2 \\
& = x^2+2xy+y^2 - 4xy = (x+y)^2 - 4xy.
\end{align*}$$

Therefor we have $$2\sqrt{xy} \le x+y$$ 

In the problem this is used to ensure that $x_k^2$ is always bigger than $p$ because

$$\left(x_k+\frac{p}{x_k}\right) \ge 2\sqrt{x_k\frac{p}{x_k}} = 2\sqrt{p}$$ 