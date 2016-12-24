/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBCrowdsourcingFeatherThankYouCardViewDelegate;
@class FBItemView, UIButton;

@interface FBCrowdsourcingFeatherThankYouCardView : UIView {

	FBItemView* _thankYouView;
	UIButton* _suggestEditsButton;
	BOOL _showNewThankYou;
	id<FBCrowdsourcingFeatherThankYouCardViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBCrowdsourcingFeatherThankYouCardViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 delegate:(id)arg3 ;
-(void)_didSuggestEditsButton:(id)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBCrowdsourcingFeatherThankYouCardViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBCrowdsourcingFeatherThankYouCardViewDelegate>)delegate;
@end
