/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
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
