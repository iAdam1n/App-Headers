/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBScrollableMediaNode.h>

@class FBMediaKeyFrame, CADisplayLink;

@interface FBInteractiveMediaNode : FBScrollableMediaNode {

	FBMediaKeyFrame* _previousKeyFrame;
	FBMediaKeyFrame* _currentKeyFrame;
	double _transitionProgress;
	long long _updateBehavior;
	long long _scrollBehavior;
	CADisplayLink* _displayLink;
	CGSize _baselineBoundsSize;
	double _baselineZoom;
	FBMediaKeyFrame* _keyFrame;

}

@property (nonatomic,retain) FBMediaKeyFrame * keyFrame;                                      //@synthesize keyFrame=_keyFrame - In the implementation block
@property (assign,nonatomic,__weak) id<FBInteractiveMediaNodeDelegate> delegate; 
@property (assign,nonatomic) long long updateBehavior;                                        //@synthesize updateBehavior=_updateBehavior - In the implementation block
@property (assign,nonatomic) long long scrollBehavior;                                        //@synthesize scrollBehavior=_scrollBehavior - In the implementation block
-(void)_staticInitialize;
-(void)didLoad;
-(void)setKeyFrame:(id)arg1 withAnimation:(SCD_Struct_FB70)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)didExitHierarchy;
-(void)_applyKeyFrameUpdateBehavior;
-(void)_relaxInteractionBounds;
-(void)_setTransitionProgress:(double)arg1 ;
-(id)_newTransitionSpringAnimationFromConfig:(SCD_Struct_FB70)arg1 issueUpdates:(BOOL)arg2 ;
-(void)_updateScrollViewForAnimation;
-(void)_killDisplayLink;
-(BOOL)_requiresDisplayLink;
-(void)_activateDisplayLink;
-(void)willBeginDraggingScrollView:(id)arg1 ;
-(void)_restoreInteractionBounds;
-(void)willBeginInteractiveZooming:(id)arg1 ;
-(void)didUpdateMediaSize:(CGSize)arg1 fromSize:(CGSize)arg2 ;
-(void)setKeyFrame:(FBMediaKeyFrame *)arg1 ;
-(FBMediaKeyFrame *)keyFrame;
-(void)setBounds:(CGRect)arg1 ;
-(void)stopAnimating;
-(void)stopTracking;
-(long long)updateBehavior;
-(void)setUpdateBehavior:(long long)arg1 ;
-(long long)scrollBehavior;
-(void)setScrollBehavior:(long long)arg1 ;
@end
