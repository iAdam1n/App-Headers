/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:29 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class MNGAdsSDKFactory;

@interface MNGPlacement : NSObject {

	BOOL _locked;
	long long _maxCapping;
	long long _currentCapping;
	MNGAdsSDKFactory* _factory;

}

@property (getter=isLocked,readonly) BOOL locked; 
@property (assign) long long maxCapping;                       //@synthesize maxCapping=_maxCapping - In the implementation block
@property (assign) long long currentCapping;                   //@synthesize currentCapping=_currentCapping - In the implementation block
@property (__weak) MNGAdsSDKFactory * factory;                 //@synthesize factory=_factory - In the implementation block
+(void)setPlacment:(id)arg1 forID:(id)arg2 ;
+(id)placementForId:(id)arg1 ;
-(id)initWithMaxCapping:(long long)arg1 cappingShift:(int)arg2 ;
-(long long)maxCapping;
-(void)setMaxCapping:(long long)arg1 ;
-(long long)currentCapping;
-(void)setCurrentCapping:(long long)arg1 ;
-(MNGAdsSDKFactory *)factory;
-(BOOL)isLocked;
-(void)setFactory:(MNGAdsSDKFactory *)arg1 ;
@end
