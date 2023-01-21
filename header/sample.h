#include <Foundation/Foundation.h>
#include "protocol_sample.h"

@interface Sample : NSObject <SampleProtocol>
// -: instance method(hereinafter called IM)
// +: class method(hereinafter called CM)
// IM: it is connected to the instance, can be called after "new".
// CM: usually used to create instance by myself(e.g. getInstance). When the class has multiple
// constructor, may be used. assign: assign value strong: reference with ref counter (default) weak:
// reference without ref counter copy: copy object
// -----------------
// readonly: readonly
// readwrite: read and write
// -----------------
// noatomic: not garanteed same value when accessed at the same time
- (int)sampleMethod:(int)code;
- (NSString *)testMethod:(NSString *)text;

@property(assign) int number_;
@property(readonly) NSString *str_;
@end