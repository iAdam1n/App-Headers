/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIPageControl.h>

@class UIColor;

@interface Slack.SLKSidebarPageControl : UIPageControl {

	 activePageIndicatorView;
	 inactivePageIndicatorView;
	 showIndicator;

}

@property (assign,nonatomic) BOOL showIndicator; 
@property (assign,nonatomic) long long currentPage; 
@property (retain,nonatomic) UIColor * pageIndicatorTintColor; 
@property (retain,nonatomic) UIColor * currentPageIndicatorTintColor; 
-(void)setShowIndicator:(BOOL)arg1 ;
-(BOOL)showIndicator;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCurrentPageIndicatorTintColor:(UIColor *)arg1 ;
-(void)setPageIndicatorTintColor:(UIColor *)arg1 ;
-(void)setCurrentPage:(long long)arg1 ;
-(long long)currentPage;
-(UIColor *)currentPageIndicatorTintColor;
-(UIColor *)pageIndicatorTintColor;
@end
