/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SLKTransitionDelegate <NSObject>
@optional
-(BOOL)transitionCoordinator:(id)arg1 canTapBackgroundToDismissViewController:(id)arg2;
-(BOOL)transitionCoordinator:(id)arg1 shouldDismissViewController:(id)arg2;
-(BOOL)transitionCoordinator:(id)arg1 shouldShowCloseButtonForViewController:(id)arg2;
-(void)transitionCoordinator:(id)arg1 willPresentViewController:(id)arg2;
-(void)transitionCoordinator:(id)arg1 willDismissViewController:(id)arg2;
-(void)transitionCoordinator:(id)arg1 didPresentViewController:(id)arg2;
-(void)transitionCoordinator:(id)arg1 didDismissViewController:(id)arg2;

@required
-(CGSize*)transitionCoordinator:(id)arg1 sizeForViewController:(id)arg2;
-(unsigned long long)transitionCoordinator:(id)arg1 modalStyleForViewController:(id)arg2;
-(unsigned long long)transitionCoordinator:(id)arg1 buttonStyleForViewController:(id)arg2;

@end
