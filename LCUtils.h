#import <Foundation/Foundation.h>

@interface PKZipArchiver : NSObject

- (NSData *)zippedDataForURL:(NSURL *)url;

@end

@interface LCUtils : NSObject

+ (NSData *)certificateData;
+ (void)updateCertificate;

+ (NSData *)sidestoreKeychainItem:(NSString *)key;
+ (NSProgress *)signAppBundle:(NSString *)path completionHandler:(void (^)(BOOL success, NSError *error))completionHandler;

+ (BOOL)isAppGroupSideStore;
+ (NSError *)changeMainExecutableTo:(NSString *)exec;

+ (NSURL *)archiveIPAWithError:(NSError **)error;

@end
