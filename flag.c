#include "main.h"

/**
 * handle_plus_flag - Handles the '+' flag character
 * @num: The number to print
 *
 * Return: The number of characters printed
 */
int handle_plus_flag(int num) {
    if (num >= 0) {
        return write(1, "+", 1) + printf("%d", num);
    } else {
        return printf("%d", num);
    }
}

/**
 * handle_space_flag - Handles the ' ' flag character
 * @num: The number to print
 *
 * Return: The number of characters printed
 */
int handle_space_flag(int num) {
    if (num >= 0) {
        return write(1, " ", 1) + printf("%d", num);
    } else {
        return printf("%d", num);
    }
}

/**
 * handle_hash_flag - Handles the '#' flag character
 * @num: The number to print
 *
 * Return: The number of characters printed
 */
int handle_hash_flag(int num) {
    return printf("%d", num);
}
