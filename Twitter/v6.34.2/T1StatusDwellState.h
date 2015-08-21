/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/T1StatusDwellState.h>

@protocol T1StatusDwellState <NSObject>
@property (assign,nonatomic) unsigned long long state; 
@required
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1;
-(BOOL)didTransitionToState:(unsigned long long)arg1;
-(void)transitionToState:(unsigned long long)arg1;

@end


@class T1StatusCell, NSDate, CALayer, NSString;

@interface T1StatusDwellState : NSObject <T1StatusDwellState> {

	unsigned long long _state;
	T1StatusCell* _cell;
	double _visiblePercentage;
	NSDate* _contentDwellStart;
	NSDate* _mediaDwellStart;
	CALayer* _presentationLayer;
	double _initialAnimationTimestamp;
	double _cumulativeAnimationDuration;

}

@property (nonatomic,retain) T1StatusCell * cell;                             //@synthesize cell=_cell - In the implementation block
@property (assign,nonatomic) double visiblePercentage;                        //@synthesize visiblePercentage=_visiblePercentage - In the implementation block
@property (nonatomic,retain) NSDate * contentDwellStart;                      //@synthesize contentDwellStart=_contentDwellStart - In the implementation block
@property (nonatomic,retain) NSDate * mediaDwellStart;                        //@synthesize mediaDwellStart=_mediaDwellStart - In the implementation block
@property (nonatomic,retain) CALayer * presentationLayer;                     //@synthesize presentationLayer=_presentationLayer - In the implementation block
@property (assign,nonatomic) double initialAnimationTimestamp;                //@synthesize initialAnimationTimestamp=_initialAnimationTimestamp - In the implementation block
@property (assign,nonatomic) double cumulativeAnimationDuration;              //@synthesize cumulativeAnimationDuration=_cumulativeAnimationDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long state;                        //@synthesize state=_state - In the implementation block
-(NSDate *)contentDwellStart;
-(void)setContentDwellStart:(NSDate *)arg1 ;
-(NSDate *)mediaDwellStart;
-(void)setMediaDwellStart:(NSDate *)arg1 ;
-(double)initialAnimationTimestamp;
-(double)cumulativeAnimationDuration;
-(void)setCumulativeAnimationDuration:(double)arg1 ;
-(void)setInitialAnimationTimestamp:(double)arg1 ;
-(double)visiblePercentage;
-(void)setVisiblePercentage:(double)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(CALayer *)presentationLayer;
-(BOOL)didTransitionToState:(unsigned long long)arg1 ;
-(T1StatusCell *)cell;
-(void)setCell:(T1StatusCell *)arg1 ;
-(void)setPresentationLayer:(CALayer *)arg1 ;
-(void)transitionToState:(unsigned long long)arg1 ;
@end

