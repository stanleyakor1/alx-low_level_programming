#include <stdlib.h>
#include <string.h>
#include "main.h"

char *infinite_add(char *n1, char *n2, char *r, int size_r) {
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int max_len = len1 > len2 ? len1 : len2;
    int carry = 0;
    int i;

    if (max_len + 1 > size_r) {
        return NULL;
    }

    for (i = 1; i <= max_len; i++) {
        int digit1 = i <= len1 ? n1[len1 - i] - '0' : 0;
        int digit2 = i <= len2 ? n2[len2 - i] - '0' : 0;
        int sum = digit1 + digit2 + carry;
        if (sum >= 10) {
            carry = 1;
            sum -= 10;
        } else {
            carry = 0;
        }
        r[max_len - i] = sum + '0';
    }

    if (carry) {
        if (max_len + 1 > size_r) {
            return NULL;
        }
        r[0] = '1';
        r[max_len] = '\0';
        return r;
    } else {
        r[max_len] = '\0';
        return r;
    }
}

