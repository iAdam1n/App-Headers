/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:27 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBDisplayableMediaTransitioningDelegate <NSObject>
@optional
-(BOOL)transitionManagerShouldShowPresentedViewDuringTransition:(id)arg1;
-(BOOL)transitionManagerShouldAddMediaViewOnTop:(id)arg1;
-(BOOL)transitionManagerSupportsInteractiveDismissOnlyOnPresentedView:(id)arg1;

@required
-(void)transitionManager:(id)arg1 animateInsideAnimationBlockWithContainerView:(id)arg2;
-(void)transitionManager:(id)arg1 didEndTransitionWithContainerView:(id)arg2;
-(void)transitionManager:(id)arg1 interactiveDismissalDidUpdateWithProgress:(double)arg2 containerView:(id)arg3;
-(void)transitionManager:(id)arg1 willStartTransitionWithContainerView:(id)arg2;

@end
