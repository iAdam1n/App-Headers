/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, FBRichTextView, UIView;

@interface FBReactionTextWithInlineFacepileView : UIView {

	NSArray* _facepileImageViews;
	FBRichTextView* _textView;
	double _sidePadding;
	UIView* _bottomBorderView;
	BOOL _shouldShowFacepileAtLeft;

}
+(CGSize)threadsafeSizeThatFits:(CGSize)arg1 ;
-(void)setupWithImageUrls:(id)arg1 text:(id)arg2 textFontOverride:(id)arg3 sidePadding:(double)arg4 session:(id)arg5 hasBottomBorder:(BOOL)arg6 shouldShowFacepileAtLeft:(BOOL)arg7 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
