/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UIView.h>

@class TGModernButton, UIButton, UIImageView, UILabel;

@interface TGInstantPageControllerNavigationBar : UIView {

	TGModernButton* _backButton;
	TGModernButton* _shareButton;
	UIButton* _scrollToTopButton;
	UIImageView* _arrowView;
	UILabel* _shareLargeLabel;
	UILabel* _shareSmallLabel;
	/*^block*/id _backPressed;
	/*^block*/id _sharePressed;
	/*^block*/id _scrollToTop;

}

@property (nonatomic,copy) id backPressed;               //@synthesize backPressed=_backPressed - In the implementation block
@property (nonatomic,copy) id sharePressed;              //@synthesize sharePressed=_sharePressed - In the implementation block
@property (nonatomic,copy) id scrollToTop;               //@synthesize scrollToTop=_scrollToTop - In the implementation block
-(id)backPressed;
-(void)scrollToTopPressed;
-(void)shareButtonPressed;
-(void)setBackPressed:(id)arg1 ;
-(id)sharePressed;
-(void)setSharePressed:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setScrollToTop:(id)arg1 ;
-(void)backButtonPressed;
-(id)scrollToTop;
@end
