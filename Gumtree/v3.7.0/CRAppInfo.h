/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:56 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSNumber, NSString;

@interface CRAppInfo : NSObject {

	BOOL _hasAlternateVersion;
	NSNumber* _isPirated;
	NSString* _bundleVersion;
	NSString* _marketingVersion;
	NSString* _bundleIdentifier;
	NSString* _alternateVersion;

}

@property (retain) NSNumber * isPirated;                     //@synthesize isPirated=_isPirated - In the implementation block
@property (retain) NSString * bundleVersion;                 //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (retain) NSString * marketingVersion;              //@synthesize marketingVersion=_marketingVersion - In the implementation block
@property (retain) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign) BOOL hasAlternateVersion;                 //@synthesize hasAlternateVersion=_hasAlternateVersion - In the implementation block
@property (retain) NSString * alternateVersion;              //@synthesize alternateVersion=_alternateVersion - In the implementation block
+(id)appInfo;
-(NSNumber *)isPirated;
-(BOOL)hasAlternateVersion;
-(NSString *)alternateVersion;
-(void)setIsPirated:(NSNumber *)arg1 ;
-(void)setHasAlternateVersion:(BOOL)arg1 ;
-(void)setAlternateVersion:(NSString *)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)bundleVersion;
-(void)setBundleVersion:(NSString *)arg1 ;
-(id)appVersion;
-(NSString *)marketingVersion;
-(void)setMarketingVersion:(NSString *)arg1 ;
@end

