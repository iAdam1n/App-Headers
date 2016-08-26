/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBItemContentView, UIView, FBReactionControlAlphaChangeOnHighlight;

@interface FBReactionLargeEventCardItemView : UIView {

	FBItemContentView* _itemContentView;
	UIView* _leftHandView;
	UIView* _dividerView;
	FBReactionControlAlphaChangeOnHighlight* _control;

}

@property (nonatomic,retain) FBReactionControlAlphaChangeOnHighlight * control;              //@synthesize control=_control - In the implementation block
-(CGSize)_availableSizeForItemContentViewInTotalSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 itemContentViewConfig:(id)arg2 leftHandView:(id)arg3 hasBottomDivider:(BOOL)arg4 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(FBReactionControlAlphaChangeOnHighlight *)control;
-(void)setControl:(FBReactionControlAlphaChangeOnHighlight *)arg1 ;
@end
