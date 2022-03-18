The main idea here is the clever use of a `map` data structure to literally be a map that shows the partner of
the searching number.

The map's keys and values are structured as `{'number': 'index of number's partner'}`.
And so if we were to find that `2` is found on the map it means that its partner was found before at whatever
index we have in `map[2]`.
