/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIScrollView;


@protocol FBEntityCardSwipableViewControllerProtocol <NSObject>
@property (nonatomic,readonly) UIScrollView * scrollView; 
@required
-(void)scrollToTop:(BOOL)arg1;
-(void)setAnalytics:(id)arg1;
-(void)setEntity:(id)arg1 isPreconfiguring:(BOOL)arg2;
-(void)beginSwipeTransition:(BOOL)arg1;
-(void)endSwipeTransition:(BOOL)arg1;
-(UIScrollView *)scrollView;

@end
