
// NSObject: runtime for objective-c
@protocol SampleProtocol <NSObject>
// you have to write down nessessary method in the @required
@required
- (int)sampleMethod:(int)code;
- (NSString *)testMethod:(NSString *)text;

// if not, you can write down in the @optional
// @optional
@end