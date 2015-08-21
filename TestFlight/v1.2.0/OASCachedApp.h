/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:46:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F33794C7-8EE9-404B-9696-A101FD0B9D87/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <TestFlight/TestFlight-Structs.h>
#import <TestFlight/OASObjectCacheObject.h>
#import <TestFlight/NSCopying.h>

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
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(OASVersionString *)bundleVersion;
-(void)setBundleVersion:(OASVersionString *)arg1 ;
@end

