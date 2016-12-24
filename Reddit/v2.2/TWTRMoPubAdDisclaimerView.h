/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/Reddit-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface TWTRMoPubAdDisclaimerView : UIView {

	UIImageView* _privacyInfoIcon;
	UILabel* _disclaimerLabel;

}

@property (nonatomic,readonly) UIImageView * privacyInfoIcon;              //@synthesize privacyInfoIcon=_privacyInfoIcon - In the implementation block
@property (nonatomic,readonly) UILabel * disclaimerLabel;                  //@synthesize disclaimerLabel=_disclaimerLabel - In the implementation block
-(void)blockTapsOnDisclaimerLabel;
-(void)setUpAccessibility;
-(UIImageView *)privacyInfoIcon;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)prepareLayout;
-(void)commonInit;
-(UILabel *)disclaimerLabel;
@end
