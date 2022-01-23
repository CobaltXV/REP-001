#include "common.h"

EXTERN_C_BEGIN

bool SubValueList16(uint16_t *list, uint16_t item, int32_t size) {
    if (list == NULL) {
        // TODO: ERROR
        return (false);
    }

    for (int32_t i = 0; i < size; i++) {
        if (list[i] == item) return (true);
    }

    return (false);
}

bool SubValueList32(uint32_t *list, uint32_t item, int32_t size) {
    if (list == NULL) {
        // TODO: ERROR
        return (false);
    }

    for (int32_t i = 0; i < size; i++) {
        if (list[i] == item) return (true);
    }

    return (false);
}

bool SubValueList64(uint64_t *list, uint64_t item, int32_t size) {
    if (list == NULL) {
        // TODO: ERROR
        return (false);
    }

    for (int32_t i = 0; i < size; i++) {
        if (list[i] == item) return (true);
    }

    return (false);
}

int16_t GetListSize16(uint16_t *list, uint16_t delim) {
    if (list == NULL) {
        // TODO: ERROR
        return (0);
    }

    int16_t count = 0;
    for (int i = 0; i < LIST_MAX; i++) {
        if (list[i] == delim) {
            return (++count);
        }

        count++;
    }

    return (count);
}

int32_t GetListSize32(uint32_t *list, uint32_t delim) {
    if (list == NULL) {
        // TODO: ERROR
        return (0);
    }

    int32_t count = 0;
    for (int i = 0; i < LIST_MAX; i++) {
        if (list[i] == delim) {
            return (++count);
        }

        count++;
    }

    return (count);
}

int64_t GetListSize64(uint64_t *list, uint64_t delim) {
    if (list == NULL) {
        // TODO: ERROR
        return (0);
    }

    int64_t count = 0;
    for (int i = 0; i < LIST_MAX; i++) {
        if (list[i] == delim) {
            return (++count);
        }

        count++;
    }

    return (count);
}

EXTERN_C_END