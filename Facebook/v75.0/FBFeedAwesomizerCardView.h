/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIColor, UIView;

@interface FBFeedAwesomizerCardView : UIView {

	UIColor* _themeColor;
	UIView* _contentView;
	UIView* _aboveContentViewBackgroundView;
	BOOL _animateUp;
	UIView* _floatingHeaderView;
	UIView* _floatingFooterView;

}

@property (nonatomic,retain) UIView * floatingHeaderView;              //@synthesize floatingHeaderView=_floatingHeaderView - In the implementation block
@property (nonatomic,retain) UIView * floatingFooterView;              //@synthesize floatingFooterView=_floatingFooterView - In the implementation block
-(id)initWithThemeColor:(id)arg1 contentView:(id)arg2 ;
-(UIView *)floatingFooterView;
-(void)setFloatingFooterView:(UIView *)arg1 ;
-(void)setFloatingHeaderView:(UIView *)arg1 ;
-(void)headerAnimateUp;
-(void)headerAnimateDown;
-(UIView *)floatingHeaderView;
-(void)layoutSubviews;
@end
