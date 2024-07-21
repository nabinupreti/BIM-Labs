% facts for fruit
fruit(apple).
fruit(banana).
fruit(grapes).
fruit(mango).

% define facts for flower
flower(rose).
flower(pearl).
flower(lotus).
flower(tulip).

%rule to find if an item is a fruit
is_fruit(X) :- fruit(X).

%rule to find if an item is a flower
is_flower(X) :- flower(X).


