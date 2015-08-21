/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:16 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol IGPullRefreshControlDelegate;
@class UIView, UILabel, CALayer;

@interface IGPullToRefreshView : UIView {

	BOOL _isSpinning;
	BOOL _hasEverPullBeyondRefreshThreshold;
	BOOL _isRecordingStatistics;
	double _startingContentOffsetY;
	id<IGPullRefreshControlDelegate> _delegate;
	UIView* _spinnerView;
	UILabel* _statusLabel;
	long long _state;
	CALayer* _gradientLayer;
	double _previousProgress;
	double _startingProgressWhenLogged;
	double _startingProgressTimeStamp;
	double _angleSpeed;

}

@property (assign,nonatomic) double startingContentOffsetY;                                 //@synthesize startingContentOffsetY=_startingContentOffsetY - In the implementation block
@property (assign,nonatomic,__weak) id<IGPullRefreshControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * spinnerView;                                          //@synthesize spinnerView=_spinnerView - In the implementation block
@property (nonatomic,retain) UILabel * statusLabel;                                         //@synthesize statusLabel=_statusLabel - In the implementation block
@property (assign,nonatomic) long long state;                                               //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL isSpinning;                                               //@synthesize isSpinning=_isSpinning - In the implementation block
@property (assign,nonatomic) BOOL hasEverPullBeyondRefreshThreshold;                        //@synthesize hasEverPullBeyondRefreshThreshold=_hasEverPullBeyondRefreshThreshold - In the implementation block
@property (nonatomic,retain) CALayer * gradientLayer;                                       //@synthesize gradientLayer=_gradientLayer - In the implementation block
@property (assign,nonatomic) double previousProgress;                                       //@synthesize previousProgress=_previousProgress - In the implementation block
@property (assign,nonatomic) double startingProgressWhenLogged;                             //@synthesize startingProgressWhenLogged=_startingProgressWhenLogged - In the implementation block
@property (assign,nonatomic) double startingProgressTimeStamp;                              //@synthesize startingProgressTimeStamp=_startingProgressTimeStamp - In the implementation block
@property (assign,nonatomic) double angleSpeed;                                             //@synthesize angleSpeed=_angleSpeed - In the implementation block
@property (assign,nonatomic) BOOL isRecordingStatistics;                                    //@synthesize isRecordingStatistics=_isRecordingStatistics - In the implementation block
-(double)startingContentOffsetY;
-(id)progressPathWithProgress:(double)arg1 ;
-(void)setupInitialAnimationState;
-(id)circularSpinningAnimation;
-(id)gradientSpinningAnimation;
-(void)setupFinishedAnimationState;
-(id)suggestedCircleSpinAnimationDestinationAngle;
-(double)suggestedCircleSpinAnimationDuration;
-(double)angleSpeed;
-(double)numberOfDiscreteUnits;
-(BOOL)isShowingOnlyFirstSpinnerBar:(double)arg1 ;
-(BOOL)isShowingNineClockSpinnerBars:(double)arg1 ;
-(BOOL)isRecordingStatistics;
-(void)setIsRecordingStatistics:(BOOL)arg1 ;
-(void)setStartingProgressWhenLogged:(double)arg1 ;
-(void)setStartingProgressTimeStamp:(double)arg1 ;
-(BOOL)isShowingAllSpinnerBars:(double)arg1 ;
-(double)startingProgressWhenLogged;
-(double)startingProgressTimeStamp;
-(void)setAngleSpeed:(double)arg1 ;
-(double)discreteProgress:(double)arg1 ;
-(double)previousProgress;
-(void)setPreviousProgress:(double)arg1 ;
-(void)setSpinnerView:(UIView *)arg1 ;
-(void)setGradientLayer:(CALayer *)arg1 ;
-(BOOL)hasEverPullBeyondRefreshThreshold;
-(void)updateSpinnerWithPullOffset:(double)arg1 ;
-(void)setHasEverPullBeyondRefreshThreshold:(BOOL)arg1 ;
-(void)setStartingContentOffsetY:(double)arg1 ;
-(void)updateWithPullingOffset:(double)arg1 ;
-(void)startSpinningAndTriggerNetworkFetchIfPulledPastThreshold;
-(void)stopSpinning;
-(void)ensureHiddenIfNotSpinning;
-(void)setDelegate:(id<IGPullRefreshControlDelegate>)arg1 ;
-(id)init;
-(id<IGPullRefreshControlDelegate>)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)stopAnimation;
-(void)startAnimation;
-(CALayer *)gradientLayer;
-(BOOL)isSpinning;
-(void)setIsSpinning:(BOOL)arg1 ;
-(UILabel *)statusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(UIView *)spinnerView;
@end

