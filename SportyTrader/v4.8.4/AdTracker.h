/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IFlurryAdViewabilityTrackerConnector;
@class UIView;

@interface AdTracker : NSObject {

	BOOL isVideo;
	BOOL outOfViewPartially;
	BOOL outOfViewFully;
	id<IFlurryAdViewabilityTrackerConnector> flurryAd;
	UIView* trackingView;
	double timeElapsed;
	double impressionDuration;
	double playDuration;

}

@property (assign,nonatomic,__weak) id<IFlurryAdViewabilityTrackerConnector> flurryAd; 
@property (assign,nonatomic,__weak) UIView * trackingView; 
@property (assign,nonatomic) double timeElapsed; 
@property (assign,nonatomic) double impressionDuration; 
@property (assign,nonatomic) double playDuration; 
@property (assign,nonatomic) BOOL isVideo; 
@property (assign,nonatomic) BOOL outOfViewPartially; 
@property (assign,nonatomic) BOOL outOfViewFully; 
-(UIView *)trackingView;
-(void)setTrackingView:(UIView *)arg1 ;
-(id<IFlurryAdViewabilityTrackerConnector>)flurryAd;
-(void)setFlurryAd:(id<IFlurryAdViewabilityTrackerConnector>)arg1 ;
-(void)setTimeElapsed:(double)arg1 ;
-(double)impressionDuration;
-(void)setImpressionDuration:(double)arg1 ;
-(void)setPlayDuration:(double)arg1 ;
-(BOOL)outOfViewPartially;
-(void)setOutOfViewPartially:(BOOL)arg1 ;
-(BOOL)outOfViewFully;
-(void)setOutOfViewFully:(BOOL)arg1 ;
-(double)timeElapsed;
-(BOOL)isVideo;
-(void)setIsVideo:(BOOL)arg1 ;
-(double)playDuration;
@end
