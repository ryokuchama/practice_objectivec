#include <sample.h>

int main() {
    // equivalent of new class
    id type = [Sample alloc];
    int code = [type sampleMethod: 5];
    NSLog(@"main code: %d", code);
    NSString *text = "text";
    NSString *result = [type testMethod: text];
    NSLog(@"main text: %@", result);
    NSString *newMethod = [type newMethod];
    NSLog(@"main new method: %@", newMethod);
}