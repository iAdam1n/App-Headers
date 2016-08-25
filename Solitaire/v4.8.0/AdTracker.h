/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
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
-(double)timeElapsed;
-(void)setTimeElapsed:(double)arg1 ;
-(double)impressionDuration;
-(void)setImpressionDuration:(double)arg1 ;
-(double)playDuration;
-(void)setPlayDuration:(double)arg1 ;
-(BOOL)outOfViewPartially;
-(void)setOutOfViewPartially:(BOOL)arg1 ;
-(BOOL)outOfViewFully;
-(void)setOutOfViewFully:(BOOL)arg1 ;
-(BOOL)isVideo;
-(void)setIsVideo:(BOOL)arg1 ;
@end

