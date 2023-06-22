#include <stdlib.h>
#include <stdio.h>

#include <libmonday.h>

int test_fn(char* message) {
  // Initialize Graal isolate and thread
  graal_isolate_t* isolate = NULL;
  graal_isolatethread_t* thread = NULL;

  if (graal_create_isolate(NULL, &isolate, &thread) != 0) {
    fprintf(stderr, "graal_create_isolate error\n");
    return -1;
  }

  // Invoke the test method
  int result = test(thread, message);

  // Detach the thread
  if (graal_detach_thread(thread) != 0) {
    fprintf(stderr, "graal_detach_thread error\n");
    return -1;
  }

  return result;
}

char* detect_fn(char* message) {
  // Initialize Graal isolate and thread
  graal_isolate_t* isolate = NULL;
  graal_isolatethread_t* thread = NULL;

  if (graal_create_isolate(NULL, &isolate, &thread) != 0) {
    fprintf(stderr, "graal_create_isolate error\n");
    return NULL;
  }

  // Invoke the detect method
  char* result = detect(thread, message);

  // Detach the thread
  if (graal_detach_thread(thread) != 0) {
    fprintf(stderr, "graal_detach_thread error\n");
    return NULL;
  }

  return result;
}

char* parse_fn(char* message) {
  // Initialize Graal isolate and thread
  graal_isolate_t* isolate = NULL;
  graal_isolatethread_t* thread = NULL;

  if (graal_create_isolate(NULL, &isolate, &thread) != 0) {
    fprintf(stderr, "graal_create_isolate error\n");
    return NULL;
  }

  // Invoke the parse method
  char* result = parse(thread, message);

  // Detach the thread
  if (graal_detach_thread(thread) != 0) {
    fprintf(stderr, "graal_detach_thread error\n");
    return NULL;
  }

  return result;
}
