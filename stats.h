/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Print statistics
 *
 * A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * @param *array A unsigned char pointer to an n-element data array
 * @param size An unsigned integer as the size of the array
 * @param Output An unsigned char result from the function
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */
unsigned char print_statistics(unsigned char *array, unsigned int size);

/**
 * @brief Print array
 *
 * Given an array of data and a length, prints the array to the screen
 *
 * @param *array A unsigned char pointer to an n-element data array
 * @param size An unsigned integer as the size of the array
 * @param Output An unsigned char result from the function
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */
unsigned char print_array(unsigned char *array, unsigned int size);

#endif /* __STATS_H__ */
