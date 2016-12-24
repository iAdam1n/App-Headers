/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/FABKit.h>

@class NSArray, NSString;

@interface MoPub : NSObject <FABKit> {

	BOOL _locationUpdatesEnabled;
	NSArray* _globalMediationSettings;

}

@property (nonatomic,retain) NSArray * globalMediationSettings;              //@synthesize globalMediationSettings=_globalMediationSettings - In the implementation block
@property (assign,nonatomic) BOOL locationUpdatesEnabled;                    //@synthesize locationUpdatesEnabled=_locationUpdatesEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)kitDisplayVersion;
+(id)sharedInstance;
+(id)bundleIdentifier;
-(void)setGlobalMediationSettings:(NSArray *)arg1 ;
-(NSArray *)globalMediationSettings;
-(void)initializeRewardedVideoWithGlobalMediationSettings:(id)arg1 delegate:(id)arg2 ;
-(id)globalMediationSettingsForClass:(Class)arg1 ;
-(id)bundleIdentifier;
-(void)start;
-(id)version;
-(void)setLocationUpdatesEnabled:(BOOL)arg1 ;
-(BOOL)locationUpdatesEnabled;
@end
