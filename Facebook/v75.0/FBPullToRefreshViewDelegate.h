/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPullToRefreshViewDelegate <NSObject>
@optional
-(void)pullToRefreshViewDidStartAnimatingLoadingState:(id)arg1;
-(void)pullToRefreshView:(id)arg1 didChangeVisibility:(BOOL)arg2 userInitiated:(BOOL)arg3;
-(void)pullToRefreshViewDidNotAnimateLoadingState:(id)arg1;

@required
-(void)pullToRefreshViewDidTriggerRefresh:(id)arg1;

@end
