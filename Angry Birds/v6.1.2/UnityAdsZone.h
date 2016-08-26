/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSMutableDictionary, NSString;

@interface UnityAdsZone : NSObject {

	BOOL __isDefault;
	NSDictionary* __initialOptions;
	NSMutableDictionary* __options;
	NSString* __gamerSid;

}

@property (nonatomic,retain) NSDictionary * _initialOptions;              //@synthesize _initialOptions=__initialOptions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _options;              //@synthesize _options=__options - In the implementation block
@property (nonatomic,retain) NSString * _gamerSid;                        //@synthesize _gamerSid=__gamerSid - In the implementation block
@property (assign,nonatomic) BOOL _isDefault;                             //@synthesize _isDefault=__isDefault - In the implementation block
-(id)getZoneId;
-(BOOL)isIncentivized;
-(id)getGamerSid;
-(void)mergeOptions:(id)arg1 ;
-(BOOL)noOfferScreen;
-(id)getZoneOptions;
-(BOOL)openAnimated;
-(BOOL)useDeviceOrientationForVideo;
-(BOOL)muteVideoSounds;
-(long long)allowVideoSkipInSeconds;
-(void)set_initialOptions:(NSDictionary *)arg1 ;
-(void)set_options:(NSMutableDictionary *)arg1 ;
-(void)set_gamerSid:(NSString *)arg1 ;
-(void)set_isDefault:(BOOL)arg1 ;
-(NSString *)_gamerSid;
-(NSDictionary *)_initialOptions;
-(void)setGamerSid:(id)arg1 ;
-(BOOL)allowsOverride:(id)arg1 ;
-(void)setNoOfferScreen:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSMutableDictionary *)_options;
-(BOOL)isDefault;
-(BOOL)_isDefault;
@end
