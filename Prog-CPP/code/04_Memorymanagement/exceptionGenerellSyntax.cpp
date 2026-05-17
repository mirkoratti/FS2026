try {
    // dangerous Code with throw
} catch (const MyExceptionClass& exc) { // Always const ref.
    // Error handling.
}
// normal execution continues here