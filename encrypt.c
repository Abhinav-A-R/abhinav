#include <string.h>

void xor_encrypt(char *data, const char *key) {
    int len = strlen(data);
    int keylen = strlen(key);
    for (int i = 0; i < len; i++) {
        data[i] ^= key[i % keylen];
    }
}
