/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIScrollView;

@interface FBReactionSimpleButtonBar : UIView {

	NSArray* _labels;
	unsigned long long _selectedIndex;
	NSMutableArray* _buttons;
	NSMutableArray* _delimiterLabels;
	UIScrollView* _scrollView;
	/*^block*/id _callback;

}
-(id)initWithFrame:(CGRect)arg1 labels:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)_applyFontOverridesToButtons;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_buttonTapped:(id)arg1 ;
@end
