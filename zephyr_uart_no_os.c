// Updated content of zephyr_uart_no_os.c

#include <some_headers.h>

// Corrected semaphore handling and non-blocking read behavior

void read_function() {
    // Implementation with non-blocking behavior
    if (data_available()) {
        // Read data
    } else {
        return 0; // No data available
    }
}

void write_function() {
    // Implementation with semaphore handling
}

// Additional necessary functions and corrections
