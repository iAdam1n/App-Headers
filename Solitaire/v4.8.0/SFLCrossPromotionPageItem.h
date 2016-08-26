/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol SFLCrossPromotionPageItemDelegate;
@class UIView, UIImageView, SFLLabelDropShadow, UIButton, SFLAppDynamicLauncher, UIViewController, NSObject;

@interface SFLCrossPromotionPageItem : UIView {

	UIView* borderView;
	UIImageView* icon;
	UIImageView* gloss;
	SFLLabelDropShadow* title;
	SFLLabelDropShadow* subTitle;
	UIButton* button;
	SFLAppDynamicLauncher* launcher;
	UIViewController* viewController;
	NSObject*<SFLCrossPromotionPageItemDelegate> delegate;

}

@property (readonly) NSObject*<SFLCrossPromotionPageItemDelegate> delegate; 
-(id)initWithViewController:(id)arg1 delegate:(id)arg2 ;
-(void)initControls;
-(void)actionPlay:(id)arg1 ;
-(void)setText:(id)arg1 description:(id)arg2 ;
-(void)setLauncher:(id)arg1 ;
-(void)layoutSubviews;
-(NSObject*<SFLCrossPromotionPageItemDelegate>)delegate;
-(void)setIcon:(id)arg1 ;
@end
