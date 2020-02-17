/* L values and R value

    L value:
    - objects that occupies a location and memory
    - values that have names and a addressable
    - modifiable if they are not constants

    100 = x         // 100 is a literal and NOT an L-value
    (1000+20) = x   // (1000 + 20) = 1020 is a temporary value and is NOT an L-value

    sting name {"John"}
    "Frank" = name  // "Frank" is NOT an L-value

    R value:
    - anything that is not an L value
    - on the right hand side of an expression
    - a literal
    - a temporary which is intended to be non-modifiable

    int x = 100;                // 100 is R-value, x is L-value
    int y = x + 50;             // 100 + 50 is temporary and is R-value, y is L-value, x is R-value

    string name = "frank";      // "frank" is R-value

    int max_num = max(10,20)    // max(10,20) is R-value

    the references we have used are L-value references
    - because we are referencing L-values
    - the same goes for pass-by-reference
*/