animal(elephant).
animal(horse).
animal(dog).
animal(cat).
animal(giraffe).
animal(cow).
animal(lion).

bigger_than(elephant, horse).
bigger_than(horse, dog).
bigger_than(dog, cat).
bigger_than(giraffe, horse).
bigger_than(lion, dog).
bigger_than(elephant, cow).

habitat(elephant, savannah).
habitat(horse, farm).
habitat(dog, house).
habitat(cat, house).
habitat(giraffe, savannah).
habitat(cow, farm).
habitat(lion, jungle).

diet(elephant, herbivore).
diet(horse, herbivore).
diet(dog, carnivore).
diet(cat, carnivore).
diet(giraffe, herbivore).
diet(cow, herbivore).
diet(lion, carnivore).


can_swim(elephant).
can_run(horse).
can_climb(cat).
can_roar(lion).


larger_than(X, Y) :-
    bigger_than(X, Y).
larger_than(X, Y) :-
    bigger_than(X, Z),
    larger_than(Z, Y).


same_habitat(X, Y) :-
    habitat(X, H),
    habitat(Y, H),
    X \= Y.

herbivores_in_habitat(Habitat, Animal) :-
    habitat(Animal, Habitat),
    diet(Animal, herbivore).

bigger_animals(Animal, Size) :-
    larger_than(Animal, Size).

carnivore_and_climb(Animal) :-
    diet(Animal, carnivore),
    can_climb(Animal).

runners_in_farm(Animal) :-
    can_run(Animal),
    habitat(Animal, farm).

herbivore_and_swim(Animal) :-
    diet(Animal, herbivore),
    can_swim(Animal).

