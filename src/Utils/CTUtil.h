#import <Cocoa/Cocoa.h>

// Framework-local utilities

extern NSBundle *CTFrameworkBundle;
extern NSBundle *CTHostBundle; // main bundle -- the hosts' bundle

extern NSString *L10n(NSString *key);

@interface CTUtil : NSObject

+(NSBundle *)bundleForResource:(NSString *)name ofType:(NSString *)ext;
+(NSBundle *)bundleForResource:(NSString *)name; // ofType:nil
+(NSString *)pathForResource:(NSString *)name ofType:(NSString *)ext;

@end
