/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString, NSNumber;

@interface ADCSession : NSObject {

	NSMutableDictionary* _paused_ads;
	NSMutableDictionary* _playing_ads;
	NSMutableDictionary* _played_ads;
	int _impression_count;
	NSString* _id;
	NSNumber* _length;

}

@property (nonatomic,retain) NSString * id;                     //@synthesize id=_id - In the implementation block
@property (nonatomic,retain) NSNumber * length;                 //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) int impression_count;              //@synthesize impression_count=_impression_count - In the implementation block
-(void)onAd:(id)arg1 pausedInZone:(id)arg2 ;
-(void)onAd:(id)arg1 resumedInZone:(id)arg2 ;
-(void)onAd:(id)arg1 playingInZone:(id)arg2 ;
-(void)onAd:(id)arg1 finishedInZone:(id)arg2 ;
-(void)insertAdID:(id)arg1 intoSet:(id)arg2 forZoneID:(id)arg3 ;
-(void)removeAdID:(id)arg1 fromSet:(id)arg2 forZoneID:(id)arg3 ;
-(id)getPlayHistoryForZones:(id)arg1 ;
-(id)getCurrentlyPlayingAds;
-(int)impression_count;
-(void)setImpression_count:(int)arg1 ;
-(id)init;
-(NSNumber *)length;
-(void)start;
-(void)setLength:(NSNumber *)arg1 ;
-(void)update;
-(NSString *)id;
-(void)setId:(NSString *)arg1 ;
@end
