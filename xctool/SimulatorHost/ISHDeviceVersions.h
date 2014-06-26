//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol ISHDeviceVersions <NSObject>
@optional

+ (id)sharedInstance;
- (id)allDeviceNames;
- (id)allDeviceObjects;
- (id)allSDKRoots;
- (id)allSDKs;
- (id)allVersionNames;
- (id)bundle;
- (void)createDeviceMap;
- (void)createVersionMap;
- (void)dealloc;
- (id)deviceAndVersionInfo;
- (id)deviceInfoForProductType:(int)arg1 displayScale:(float)arg2 displayHeight:(float)arg3 wordSize:(unsigned int)arg4;
- (id)deviceInfoNamed:(id)arg1;
- (BOOL)devicesValid;
- (id)init;
- (id)knownArches;
- (id)knownScales;
- (id)knownScreenHeights;
- (id)latestSDKRoot;
- (void)loadDevicesAtPath:(id)arg1;
- (id)productTypes;
- (id)sdkFromSDKRoot:(id)arg1;
- (id)sdkFromVersionString:(id)arg1;
- (id)sdkPathForVersion:(id)arg1;
- (id)shortVersionStringForSDKRoot:(id)arg1;
- (id)versionForSDKPath:(id)arg1;
- (BOOL)versionsValid;

@property BOOL allowOther;
@property(retain) NSMutableDictionary *deviceMap;
@property(copy) NSString *sdksDirectoryPath;
@property(retain) NSMutableDictionary *versionMap;

@end

@interface ISHDeviceVersions : NSObject<ISHDeviceVersions>
@end
