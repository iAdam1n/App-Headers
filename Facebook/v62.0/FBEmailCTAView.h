/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:45 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBEmailCTAViewModel, FBEmailCTAHeader, FBEmailCTAPrivacyPolicyView, FBEmailCTAFooter, FBExpandableEmailList, UIControl, NSString;

@interface FBEmailCTAView : UIView {

	FBEmailCTAViewModel* _viewModel;
	FBEmailCTAHeader* _header;
	FBEmailCTAPrivacyPolicyView* _privacyPolicy;
	FBEmailCTAFooter* _footer;
	FBExpandableEmailList* _emailList;

}

@property (nonatomic,readonly) UIControl * headerButton; 
@property (nonatomic,readonly) FBExpandableEmailList * emailList;                 //@synthesize emailList=_emailList - In the implementation block
@property (nonatomic,readonly) UIControl * privacyPolicyButton; 
@property (nonatomic,readonly) UIControl * notNowButton; 
@property (nonatomic,readonly) UIControl * shareEmailButton; 
@property (nonatomic,copy,readonly) NSString * selectedEmailAddress; 
-(UIControl *)notNowButton;
-(id)initWithViewModel:(id)arg1 session:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 expanded:(BOOL)arg2 ;
-(NSString *)selectedEmailAddress;
-(UIControl *)shareEmailButton;
-(NSRange)_tappableRangeForPrivacyPolicyMessage:(id)arg1 linkedSubstring:(id)arg2 ;
-(UIControl *)privacyPolicyButton;
-(FBExpandableEmailList *)emailList;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIControl *)headerButton;
@end
