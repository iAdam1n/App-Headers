/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBCommentIndicatorControllerDelegate <NSObject>
@optional
-(id)commentIndicatorControllerDisplayingAboveView:(id)arg1 forIndicatorType:(long long)arg2;
-(void)commentIndicatorController:(id)arg1 didShowIndicatorOfType:(long long)arg2;
-(void)commentIndicatorController:(id)arg1 didDismissIndicatorOfType:(long long)arg2;
-(void)commentIndicatorController:(id)arg1 didTapOnIndicatorOfType:(long long)arg2;

@required
-(BOOL)commentIndicatorController:(id)arg1 shouldDisplayIndicatorWithType:(long long)arg2;
-(id)commentIndicatorControllerDisplayingView:(id)arg1 forIndicatorType:(long long)arg2;
-(CGRect*)commentIndicatorControllerDisplayingFrame:(id)arg1 forIndicatorType:(long long)arg2 withIndicatorSize:(CGSize)arg3;

@end
