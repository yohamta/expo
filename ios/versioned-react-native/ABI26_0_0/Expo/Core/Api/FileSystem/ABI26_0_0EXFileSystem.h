// Copyright 2016-present 650 Industries. All rights reserved.

#import "ABI26_0_0EXScopedEventEmitter.h"
#import "ABI26_0_0EXScopedModuleRegistry.h"

typedef NS_OPTIONS(unsigned int, ABI26_0_0EXFileSystemPermissionFlags) {
  ABI26_0_0EXFileSystemPermissionNone = 0,
  ABI26_0_0EXFileSystemPermissionRead = 1 << 1,
  ABI26_0_0EXFileSystemPermissionWrite = 1 << 2,
};

@protocol ABI26_0_0EXFileSystemScopedModuleDelegate

- (NSString *)bundleDirectoryForExperienceId:(NSString *)experienceId;
- (NSArray<NSString *> *)bundledAssetsForExperienceId:(NSString *)experienceId;

@end

@interface ABI26_0_0EXFileSystem : ABI26_0_0EXScopedEventEmitter

@property (nonatomic, readonly) NSString *documentDirectory;
@property (nonatomic, readonly) NSString *cachesDirectory;

- (ABI26_0_0EXFileSystemPermissionFlags)permissionsForURI:(NSURL *)uri;

+ (BOOL)ensureDirExistsWithPath:(NSString *)path;
+ (NSString *)documentDirectoryForExperienceId:(NSString *)experienceId;
+ (NSString *)cachesDirectoryForExperienceId:(NSString *)experienceId;
+ (NSString *)generatePathInDirectory:(NSString *)directory withExtension:(NSString *)extension;

@end

ABI26_0_0EX_DECLARE_SCOPED_MODULE_GETTER(ABI26_0_0EXFileSystem, fileSystem)


@protocol ABI26_0_0EXFileSystemHandler

+ (void)getInfoForFile:(NSURL *)fileUri
           withOptions:(NSDictionary *)options
              resolver:(ABI26_0_0RCTPromiseResolveBlock)resolve
              rejecter:(ABI26_0_0RCTPromiseRejectBlock)reject;
+ (void)copyFrom:(NSURL *)from
              to:(NSURL *)to
        resolver:(ABI26_0_0RCTPromiseResolveBlock)resolve
        rejecter:(ABI26_0_0RCTPromiseRejectBlock)reject;


@end


@interface NSData (ABI26_0_0EXFileSystem)

- (NSString *)md5String;

@end
