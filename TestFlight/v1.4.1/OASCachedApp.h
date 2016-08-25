/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/197B1B60-1AA0-4A72-98F6-7C55CCB87C93/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TestFlight/TestFlight-Structs.h>
#import <TestFlight/OASObjectCacheObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, OASVersionString;

@interface OASCachedApp : OASObjectCacheObject <NSCopying> {

	long long _installStatus;
	NSString* _bundleID;
	OASVersionString* _bundleVersion;
	OASVersionString* _shortVersion;

}

@property (assign,nonatomic) long long installStatus;                       //@synthesize installStatus=_installStatus - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                           //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) OASVersionString * bundleVersion;              //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,retain) OASVersionString * shortVersion;               //@synthesize shortVersion=_shortVersion - In the implementation block
@property (nonatomic,readonly) NSString * versionString; 
@property (nonatomic,readonly) BOOL isBeingInstalled; 
+(BOOL)insertObjectOnUpdate;
+(id)cachedAppFromAppProxy:(id)arg1 ;
+(id)primaryKey;
+(id)objectType;
-(BOOL)isBeingInstalled;
-(long long)installStatus;
-(OASVersionString *)shortVersion;
-(void)setShortVersion:(OASVersionString *)arg1 ;
-(void)setInstallStatus:(long long)arg1 ;
-(BOOL)isUpdateForApp:(id)arg1 build:(id)arg2 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBundleVersion:(OASVersionString *)arg1 ;
-(OASVersionString *)bundleVersion;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(NSString *)versionString;
@end

