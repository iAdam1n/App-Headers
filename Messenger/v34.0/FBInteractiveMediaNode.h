/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:56 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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

}

@property (nonatomic,retain) FBMediaKeyFrame * keyFrame;                                      //@synthesize currentKeyFrame=_currentKeyFrame - In the implementation block
@property (assign,nonatomic,__weak) id<FBInteractiveMediaNodeDelegate> delegate; 
@property (assign,nonatomic) long long updateBehavior;                                        //@synthesize updateBehavior=_updateBehavior - In the implementation block
@property (assign,nonatomic) long long scrollBehavior;                                        //@synthesize scrollBehavior=_scrollBehavior - In the implementation block
-(void)didExitHierarchy;
-(void)_applyKeyFrameUpdateBehavior;
-(void)_relaxInteractionBounds;
-(BOOL)_requiresDisplayLink;
-(id)_newTransitionSpringAnimationFromConfig:(id)arg1 issueUpdates:(BOOL)arg2 ;
-(void)_updateScrollViewForAnimation;
-(void)setKeyFrame:(id)arg1 withAnimation:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_killDisplayLink;
-(FBMediaKeyFrame *)keyFrame;
-(void)_activateDisplayLink;
-(void)willBeginDraggingScrollView:(id)arg1 ;
-(void)_restoreInteractionBounds;
-(void)willBeginInteractiveZooming:(id)arg1 ;
-(void)didUpdateMediaSize:(CGSize)arg1 fromSize:(CGSize)arg2 ;
-(void)setScrollBehavior:(long long)arg1 ;
-(void)setKeyFrame:(FBMediaKeyFrame *)arg1 ;
-(long long)scrollBehavior;
-(void)didLoad;
-(void)setBounds:(CGRect)arg1 ;
-(void)stopAnimating;
-(long long)updateBehavior;
-(void)setUpdateBehavior:(long long)arg1 ;
-(void)_setTransitionProgress:(double)arg1 ;
@end

