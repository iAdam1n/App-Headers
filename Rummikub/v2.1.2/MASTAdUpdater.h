/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:40:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/C946ECFA-6A29-41D3-8F69-02583A041494/Rummikub.app/Rummikub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class MASTAdView, NSTimer;

@interface MASTAdUpdater : NSObject {

	char _updateStarted;
	char _viewVisible;
	MASTAdView* _adView;
	char _valid;
	NSTimer* updateTimer;
	double updateTimeInterval;

}

@property (assign) MASTAdView * adView;                    //@synthesize adView=_adView - In the implementation block
@property (retain) NSTimer * updateTimer; 
@property (assign) double updateTimeInterval; 
-(void)setAdView:(MASTAdView *)arg1 ;
-(void)setUpdateTimeInterval:(double)arg1 ;
-(double)updateTimeInterval;
-(void)updateNow:(id)arg1 ;
-(void)updateTimeInterval:(id)arg1 ;
-(void)viewVisible:(id)arg1 ;
-(void)viewInvisible:(id)arg1 ;
-(void)startTimer:(id)arg1 ;
-(void)startTimerOnMainThread;
-(void)stopTimerOnMainThread;
-(void)sendUpdate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(NSTimer *)updateTimer;
-(void)setUpdateTimer:(NSTimer *)arg1 ;
-(void)start:(id)arg1 ;
-(MASTAdView *)adView;
-(void)stop:(id)arg1 ;
@end

