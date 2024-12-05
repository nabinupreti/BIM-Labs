% Base case: factorial of 0 is 1
factorial(0, 1).

% Recursive case: factorial of N is N * factorial of (N-1)
factorial(N, Result) :-
    N > 0,
    N1 is N - 1,
    factorial(N1, R1),
    Result is N * R1.

% Rule to display the factorial of a user-defined number
display_factorial :-
    write("Enter a number: "),
    read(N),   % Read input from the user
    factorial(N, Result),
    write("Factorial of "), write(N), write(" is "), write(Result), nl.
