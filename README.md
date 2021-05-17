# Sort
Course work on the topic: "Sizing the efficiency of methods of sorting (the method of direct selection No. 1) on multidimensional arrays"
## Description of the purpose of procedures and functions
### Main - the starting point of the program, menu call.

### The menu module is intended for global declaration of variables and arrays, as well as interface functions of the program.

menu () - atypical function, the initial interface for selecting the operating mode: measuring the operating time or testing sorting algorithms.

Menu_Algoritms - atypical function, interface for selecting the order of an array or vector.

Array module - create, input and output arrays.

BackSortArray () - fills the inversely sorted array.

SortArray () - fills the sorted array.

RandArray () - populates a random array.

OutArray () - output array.

 

### The Sort module contains functions intended for sorting an array.

Sort_By_Direct_Selection_With_Vector () is a function that returns the time of sorting an array by direct selection using an additional array.

 Sort_By_Direct_Selection_Without_Vector () - a function that returns the time of sorting an array by direct selection without the use of an additional array with index conversion.

Sort_By_Direct_Selection_1 () - a function that returns the time of sorting an array by direct selection without the use of additional arrays and index transformations.

### The Table module contains functions intended for output of results of measurement of time of sorting for an array

Results () is an atypical function designed to display a sort time table.

MeasurementTime () - an atypical function designed to display one line of the time table (for one algorithm).

ArrTable () is a function that returns the time of a single sort for a particular algorithm.

### The Measurement module is designed to correctly calculate the results of time measurement.

MeasurementProcessing (int Res_N, int Res [Res_N]) is an atypical function that calculates measurement results.