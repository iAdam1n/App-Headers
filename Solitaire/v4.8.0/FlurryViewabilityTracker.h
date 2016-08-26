/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSTimer;

@interface FlurryViewabilityTracker : NSObject {

	NSMutableArray* adsToTrack;
	NSMutableArray* videoAdsToTrack;
	NSTimer* trackingTimer;

}

@property (retain) NSMutableArray * adsToTrack; 
@property (retain) NSMutableArray * videoAdsToTrack; 
@property (nonatomic,retain) NSTimer * trackingTimer; 
+(void)registerAd:(id)arg1 withViewToTrack:(id)arg2 withImpressionDuration:(double)arg3 andPlayDuration:(double)arg4 ;
+(BOOL)deRegisterAd:(id)arg1 ;
+(void)deRegisterVideoAdFromTracking:(id)arg1 ;
+(id)sharedInstance;
-(void)registerAd:(id)arg1 withViewToTrack:(id)arg2 withImpressionDuration:(double)arg3 andPlayDuration:(double)arg4 ;
-(BOOL)deRegisterAd:(id)arg1 ;
-(void)deRegisterVideoAdFromTracking:(id)arg1 ;
-(NSMutableArray *)adsToTrack;
-(void)setAdsToTrack:(NSMutableArray *)arg1 ;
-(NSMutableArray *)videoAdsToTrack;
-(void)setVideoAdsToTrack:(NSMutableArray *)arg1 ;
-(BOOL)videoAdAlreadyTracked:(id)arg1 ;
-(NSTimer *)trackingTimer;
-(void)handleTrackerHeartBeat;
-(void)setTrackingTimer:(NSTimer *)arg1 ;
-(BOOL)isInViewHierachy:(id)arg1 ofAnotherView:(id)arg2 ;
-(id)init;
-(id)initSharedInstance;
@end
