/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:29 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBDisplayableMediaTransitioningDelegate <NSObject>
@optional
-(BOOL)transitionManagerShouldShowPresentedViewDuringTransition:(id)arg1;
-(BOOL)transitionManagerShouldAddMediaViewOnTop:(id)arg1;

@required
-(void)transitionManager:(id)arg1 animateInsideAnimationBlockWithContainerView:(id)arg2;
-(void)transitionManager:(id)arg1 didEndTransitionWithContainerView:(id)arg2;
-(void)transitionManager:(id)arg1 interactiveDismissalDidUpdateWithProgress:(double)arg2 containerView:(id)arg3;
-(void)transitionManager:(id)arg1 willStartTransitionWithContainerView:(id)arg2;

@end
