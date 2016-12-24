/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBRichTextView, UIView, UIImageView;

@interface FBReactionSimpleParagraphUnitComponentView : UIView {

	FBRichTextView* _messageLabel;
	UIView* _bottomSeparator;
	UIImageView* _infoIconView;

}
+(CGSize)threadsafeSizeThatFitsWithText:(id)arg1 hasInfoIcon:(BOOL)arg2 constrainedSize:(CGSize)arg3 ;
-(void)setMessage:(id)arg1 hasBottomBorder:(BOOL)arg2 hasAction:(BOOL)arg3 hasInfoIcon:(BOOL)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
@end
