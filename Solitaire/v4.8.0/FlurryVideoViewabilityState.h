/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FlurryVideoViewabilityState : NSObject {

	BOOL _viewabilityEventFinished;
	float _previousPlaybackTimeInSecs;
	double _currentViewabilityDurationInSecs;

}

@property (assign,nonatomic) double currentViewabilityDurationInSecs;              //@synthesize currentViewabilityDurationInSecs=_currentViewabilityDurationInSecs - In the implementation block
@property (assign,nonatomic) float previousPlaybackTimeInSecs;                     //@synthesize previousPlaybackTimeInSecs=_previousPlaybackTimeInSecs - In the implementation block
@property (assign,nonatomic) BOOL viewabilityEventFinished;                        //@synthesize viewabilityEventFinished=_viewabilityEventFinished - In the implementation block
-(void)setPreviousPlaybackTimeInSecs:(float)arg1 ;
-(BOOL)viewabilityEventFinished;
-(void)setViewabilityEventFinished:(BOOL)arg1 ;
-(double)currentViewabilityDurationInSecs;
-(void)setCurrentViewabilityDurationInSecs:(double)arg1 ;
-(float)previousPlaybackTimeInSecs;
@end

