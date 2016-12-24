/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView, FBFeedbackReactionsInputPresenterAnalytics;


@protocol FBFeedbackReactionsInputPresenting <NSObject>
@property (nonatomic,readonly) UIView * containerView; 
@property (nonatomic,readonly) UIView * triggerButton; 
@property (nonatomic,readonly) FBFeedbackReactionsInputPresenterAnalytics * reactionAnalytics; 
@property (nonatomic,readonly) UIView * gestureHandlerView; 
@required
-(void)cancelReactionsInputPresenter;
-(id)initWithContainerView:(id)arg1 UFIBarFrameInContainer:(CGRect)arg2 triggerButton:(id)arg3 useStaticTriggerPosition:(BOOL)arg4 session:(id)arg5 feedback:(id)arg6 reactionDataProvider:(id)arg7 dockType:(unsigned long long)arg8 forceDockLocationAboveTap:(BOOL)arg9 analyticsModule:(id)arg10 callbackBlock:(/*^block*/id)arg11;
-(unsigned long long)touchLocationForPoint:(CGPoint)arg1;
-(void)dismissDockWithCancelCurrentSelection:(BOOL)arg1 cancelReason:(unsigned long long)arg2 touchLocation:(unsigned long long)arg3;
-(void)updateHighlightedReactionKey:(long long)arg1;
-(void)presentReactionsWithAnimationDistance:(double)arg1;
-(void)enterPersistedMode;
-(void)enterSwipableMode;
-(long long)reactionKeyForTouchInContainer:(CGPoint)arg1 allowBuffer:(BOOL)arg2;
-(void)setGestureRecognizerViewClass:(Class)arg1;
-(UIView *)triggerButton;
-(FBFeedbackReactionsInputPresenterAnalytics *)reactionAnalytics;
-(UIView *)gestureHandlerView;
-(UIView *)containerView;

@end
