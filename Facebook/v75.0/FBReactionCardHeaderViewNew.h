/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIControl.h>

@class FBItemView;

@interface FBReactionCardHeaderViewNew : UIControl {

	FBItemView* _headerView;
	unsigned long long _textStyle;
	BOOL _shouldTopAlignAuxView;
	BOOL _changeAlphaOnHighlight;

}
+(id)_headerConfigFromTitle:(id)arg1 maxTitleLines:(unsigned long long)arg2 subtitle:(id)arg3 maxSubtitleLines:(unsigned long long)arg4 thumbnailView:(id)arg5 thumbnailViewSize:(unsigned long long)arg6 auxViewConfig:(id)arg7 shouldTopAlignAuxView:(BOOL)arg8 textStyle:(unsigned long long)arg9 hasBottomBorder:(BOOL)arg10 bottomBorderColor:(id)arg11 insets:(UIEdgeInsets)arg12 ;
+(CGSize)threadsafeSizeThatFitsWithTitle:(id)arg1 maxTitleLines:(unsigned long long)arg2 subtitle:(id)arg3 maxSubtitleLines:(unsigned long long)arg4 thumbnailViewSize:(unsigned long long)arg5 auxViewConfig:(id)arg6 shouldTopAlignAuxView:(BOOL)arg7 textStyle:(unsigned long long)arg8 constrainedSize:(CGSize)arg9 hasBottomBorder:(BOOL)arg10 insets:(UIEdgeInsets)arg11 ;
+(id)_textViewConfigFromTitle:(id)arg1 maxTitleLines:(unsigned long long)arg2 subtitle:(id)arg3 maxSubtitleLines:(unsigned long long)arg4 textStyle:(unsigned long long)arg5 hasLeftTextPadding:(BOOL)arg6 ;
-(void)setTitle:(id)arg1 maxTitleLines:(unsigned long long)arg2 subtitle:(id)arg3 maxSubtitleLines:(unsigned long long)arg4 thumbnailView:(id)arg5 thumbnailViewSize:(unsigned long long)arg6 auxViewConfig:(id)arg7 shouldTopAlignAuxView:(BOOL)arg8 textStyle:(unsigned long long)arg9 changeAlphaOnHighlight:(BOOL)arg10 hasBottomBorder:(BOOL)arg11 bottomBorderColor:(id)arg12 insets:(UIEdgeInsets)arg13 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)accessibilityLabel;
@end
