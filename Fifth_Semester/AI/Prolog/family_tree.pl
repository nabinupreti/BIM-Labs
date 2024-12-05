male(tom).
male(bob).
male(pat).
male(jim).
male(dave).

female(pam).
female(liz).
female(mary).
female(ann).
female(sue).
female(angela).

parent(pam, bob).
parent(tom, bob).
parent(bob, mary).
parent(bob, ann).
parent(bob, pat).
parent(bob, sue).
parent(pat, jim).
parent(sue, dave).
parent(sue, angela).
parent(tom, liz).



father(X, Y) :- parent(X, Y), male(X).
mother(X, Y) :- parent(X, Y), female(X).
sibling(X, Y) :- parent(Z, X), parent(Z, Y), X \= Y.
brother(X, Y) :- sibling(X, Y), male(X).
sister(X, Y) :- sibling(X, Y), female(X).
grandparent(X, Y) :- parent(X, Z), parent(Z, Y).
grandfather(X, Y) :- grandparent(X, Y), male(X).
grandmother(X, Y) :- grandparent(X, Y), female(X).
uncle(X, Y) :- brother(X, Z), parent(Z, Y).
uncle(X, Y) :- brother(X, Z), sibling(Z, P), parent(P, Y).
aunt(X, Y) :- sister(X, Z), parent(Z, Y).
aunt(X, Y) :- sister(X, Z), sibling(Z, P), parent(P, Y).
cousin(X, Y) :- parent(Z, X), parent(W, Y), sibling(Z, W).




