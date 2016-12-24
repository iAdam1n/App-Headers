/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:46 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, UILabel, UIScrollView, NSLayoutConstraint;

@interface _WAForwardPickerMultiselectBar : UIView {

	UIButton* _buttonForward;
	UILabel* _labelRecipients;
	UIScrollView* _scrollView;
	NSLayoutConstraint* _multiSelectbarBorderHeight;

}

@property (nonatomic,retain) UIButton * buttonForward;                                     //@synthesize buttonForward=_buttonForward - In the implementation block
@property (nonatomic,retain) UILabel * labelRecipients;                                    //@synthesize labelRecipients=_labelRecipients - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                    //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * multiSelectbarBorderHeight;              //@synthesize multiSelectbarBorderHeight=_multiSelectbarBorderHeight - In the implementation block
-(UIButton *)buttonForward;
-(UILabel *)labelRecipients;
-(void)scrollContactListAnimated:(BOOL)arg1 ;
-(NSLayoutConstraint *)multiSelectbarBorderHeight;
-(void)setButtonForward:(UIButton *)arg1 ;
-(void)setLabelRecipients:(UILabel *)arg1 ;
-(void)setMultiSelectbarBorderHeight:(NSLayoutConstraint *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
@end
