/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, UnityAdsZone;

@interface UnityAdsZoneManager : NSObject {

	NSMutableDictionary* __zones;
	UnityAdsZone* __defaultZone;
	UnityAdsZone* __currentZone;

}

@property (nonatomic,retain) NSMutableDictionary * _zones;              //@synthesize _zones=__zones - In the implementation block
@property (nonatomic,retain) UnityAdsZone * _defaultZone;               //@synthesize _defaultZone=__defaultZone - In the implementation block
@property (nonatomic,retain) UnityAdsZone * _currentZone;               //@synthesize _currentZone=__currentZone - In the implementation block
+(id)sharedInstance;
-(id)getZone:(id)arg1 ;
-(id)getZones;
-(NSMutableDictionary *)_zones;
-(id)getCurrentZone;
-(void)clearZones;
-(int)addZones:(id)arg1 ;
-(BOOL)setCurrentZone:(id)arg1 ;
-(void)set_zones:(NSMutableDictionary *)arg1 ;
-(void)set_defaultZone:(UnityAdsZone *)arg1 ;
-(void)set_currentZone:(UnityAdsZone *)arg1 ;
-(UnityAdsZone *)_currentZone;
-(UnityAdsZone *)_defaultZone;
-(BOOL)removeZone:(id)arg1 ;
-(id)init;
-(unsigned long long)zoneCount;
@end
