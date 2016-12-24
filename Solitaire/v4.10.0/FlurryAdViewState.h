/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SolitaireFree/SolitaireFree-Structs.h>
@class FlurryAd, UIView, UIViewController;

@interface FlurryAdViewState : NSObject {

	CGRect _defaultFrame;
	CGRect _originalFrame;
	CGAffineTransform _originalTransform;
	CGRect _expandedFrame;
	BOOL _expandAnimationInProgress;
	BOOL _collapseAnimationInProgress;
	int _currentViewState;
	FlurryAd* _flAdDelegate;
	UIView* _blockingView;
	long long _parentTag;
	long long _originalTag;
	UIViewController* _mraidAdViewController;
	CGPoint _translatedCenter;
	CGPoint _originalCenter;
	CGRect _originalWebViewFrame;
	CGRect _translatedFrame;

}

@property (assign,nonatomic) CGRect translatedFrame;                                                             //@synthesize translatedFrame=_translatedFrame - In the implementation block
@property (assign,nonatomic) CGRect originalWebViewFrame;                                                        //@synthesize originalWebViewFrame=_originalWebViewFrame - In the implementation block
@property (assign,nonatomic) CGPoint translatedCenter;                                                           //@synthesize translatedCenter=_translatedCenter - In the implementation block
@property (assign,nonatomic) CGPoint originalCenter;                                                             //@synthesize originalCenter=_originalCenter - In the implementation block
@property (assign,nonatomic) long long originalTag;                                                              //@synthesize originalTag=_originalTag - In the implementation block
@property (assign,nonatomic) long long parentTag;                                                                //@synthesize parentTag=_parentTag - In the implementation block
@property (nonatomic,retain) UIView * blockingView;                                                              //@synthesize blockingView=_blockingView - In the implementation block
@property (assign,nonatomic,__weak) FlurryAd * flAdDelegate;                                                     //@synthesize flAdDelegate=_flAdDelegate - In the implementation block
@property (assign,getter=isExpandAnimationInProgress,nonatomic) BOOL expandAnimationInProgress;                  //@synthesize expandAnimationInProgress=_expandAnimationInProgress - In the implementation block
@property (assign,getter=isCollapseAnimationInProgress,nonatomic) BOOL collapseAnimationInProgress;              //@synthesize collapseAnimationInProgress=_collapseAnimationInProgress - In the implementation block
@property (assign,nonatomic) int currentViewState;                                                               //@synthesize currentViewState=_currentViewState - In the implementation block
@property (nonatomic,retain) UIViewController * mraidAdViewController;                                           //@synthesize mraidAdViewController=_mraidAdViewController - In the implementation block
+(CGRect)rectAccordingToOrientation:(CGRect)arg1 ;
+(double)floatFromDictionary:(id)arg1 forKey:(id)arg2 withDefault:(double)arg3 ;
+(CGAffineTransform)expandedWindowsToOrientation;
+(CGRect)convertedRectAccordingToOrientation:(CGRect)arg1 ;
+(void)rotateExpandedWindowsToOrientation:(long long)arg1 forAd:(id)arg2 ;
+(CGRect)webFrameAccordingToOrientation:(CGRect)arg1 ;
+(CGSize)statusBarSize:(CGSize)arg1 accordingToOrientation:(long long)arg2 ;
-(id)initWithAd:(id)arg1 ;
-(BOOL)processExpandAction:(id)arg1 ;
-(BOOL)processCollapseAction;
-(void)setFlAdDelegate:(FlurryAd *)arg1 ;
-(void)setCurrentViewState:(int)arg1 ;
-(BOOL)isExpandAnimationInProgress;
-(FlurryAd *)flAdDelegate;
-(void)expandTo:(CGRect)arg1 withURL:(id)arg2 blockingColor:(id)arg3 blockingOpacity:(double)arg4 lockOrientation:(BOOL)arg5 ;
-(BOOL)isCollapseAnimationInProgress;
-(int)currentViewState;
-(void)setCollapseAnimationInProgress:(BOOL)arg1 ;
-(UIViewController *)mraidAdViewController;
-(void)setMraidAdViewController:(UIViewController *)arg1 ;
-(void)setExpandAnimationInProgress:(BOOL)arg1 ;
-(void)setJavascriptDefaultFrame:(CGRect)arg1 ;
-(CGRect)originalWebViewFrame;
-(void)setOriginalWebViewFrame:(CGRect)arg1 ;
-(CGRect)translatedFrame;
-(void)setTranslatedFrame:(CGRect)arg1 ;
-(CGPoint)translatedCenter;
-(void)setTranslatedCenter:(CGPoint)arg1 ;
-(long long)parentTag;
-(void)setParentTag:(long long)arg1 ;
-(long long)originalTag;
-(void)setOriginalTag:(long long)arg1 ;
-(void)dealloc;
-(BOOL)shouldAutorotate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)applicationWillResignActive;
-(CGPoint)originalCenter;
-(void)setOriginalCenter:(CGPoint)arg1 ;
-(UIView *)blockingView;
-(void)setBlockingView:(UIView *)arg1 ;
@end
