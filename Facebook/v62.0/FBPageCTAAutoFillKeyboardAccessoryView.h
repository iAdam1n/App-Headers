/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBPageCTAAutoFillKeyboardAccessoryViewDelegate;
@class UIImageView, UIView, UILabel;

@interface FBPageCTAAutoFillKeyboardAccessoryView : UIView {

	id<FBPageCTAAutoFillKeyboardAccessoryViewDelegate> _delegate;
	UIImageView* _imageView;
	UIView* _divider;
	UILabel* _autoFillLabel;

}
-(id)initWithFrame:(CGRect)arg1 delegate:(id)arg2 ;
-(void)_didTapAutoFillLabel:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_configureViews;
@end
