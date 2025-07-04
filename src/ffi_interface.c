#include <stdio.h>
#include "capture.h"
#include "policy.h"

// Function to start packet capture
void start_monitoring() {
    printf("[*] Starting packet monitoring via FFI...\n");
    start_packet_capture();
}

// Function to add a known IP
void add_trusted_ip(const char *ip) {
    printf("[*] Adding trusted IP %s via FFI...\n", ip);
    add_known_ip(ip);
}

// Function to block an IP
void block_untrusted_ip(const char *ip) {
    printf("[*] Blocking untrusted IP %s via FFI...\n", ip);
    block_ip(ip);
} 