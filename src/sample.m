#include <sample.h>

@implementation Sample

- (int)sampleMethod: (int)code {
    NSLog(@"code: %d", code);
    return code;
}

- (NSString *)testMethod: (NSString *)text{
    NSLog(@"text: %@", text);
    return text;
}

@end