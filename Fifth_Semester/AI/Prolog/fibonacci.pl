% Base cases: Fibonacci of 0 is 0, and Fibonacci of 1 is 1
fibonacci(0, 0).
fibonacci(1, 1).

% Recursive case: Fibonacci of N is the sum of Fibonacci of (N-1) and (N-2)
fibonacci(N, Result) :-
    N > 1,
    N1 is N - 1,
    N2 is N - 2,
    fibonacci(N1, R1),
    fibonacci(N2, R2),
    Result is R1 + R2.

% Rule to display the Fibonacci sequence up to a given term
display_fibonacci :-
    write("Enter the number of terms: "),
    read(Terms),
    write("Fibonacci sequence: "),
    print_fibonacci(0, Terms),
    nl.

% Helper rule to print the Fibonacci sequence
print_fibonacci(Current, Terms) :-
    Current < Terms,
    fibonacci(Current, Result),
    write(Result), write(" "),
    Next is Current + 1,
    print_fibonacci(Next, Terms).
print_fibonacci(_, _).  % Stop when Current >= Terms
