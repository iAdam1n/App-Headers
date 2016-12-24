/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UITableViewHeaderFooterView.h>

@protocol FBCompleteProfileMegaphoneFooterDelegate;
@class UIView, FBPrivacySelectorButton, UIButton;

@interface FBCompleteProfileMegaphoneFooter : UITableViewHeaderFooterView {

	UIView* _topBorderView;
	FBPrivacySelectorButton* _privacySelector;
	BOOL _expanded;
	id<FBCompleteProfileMegaphoneFooterDelegate> _delegate;
	unsigned long long _privacyIconType;
	UIButton* _addButton;
	UIButton* _skipButton;
	double _leftPadding;

}

@property (assign,nonatomic,__weak) id<FBCompleteProfileMegaphoneFooterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long privacyIconType;                                        //@synthesize privacyIconType=_privacyIconType - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                                           //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,readonly) UIButton * addButton;                                                    //@synthesize addButton=_addButton - In the implementation block
@property (nonatomic,readonly) UIButton * skipButton;                                                   //@synthesize skipButton=_skipButton - In the implementation block
@property (assign,nonatomic) double leftPadding;                                                        //@synthesize leftPadding=_leftPadding - In the implementation block
-(void)setPrivacyIconType:(unsigned long long)arg1 ;
-(void)saveQuestionButtonTapped:(id)arg1 ;
-(void)skipQuestionButtonTapped:(id)arg1 ;
-(void)privacySelectorTapped:(id)arg1 ;
-(unsigned long long)privacyIconType;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBCompleteProfileMegaphoneFooterDelegate>)arg1 ;
-(id<FBCompleteProfileMegaphoneFooterDelegate>)delegate;
-(BOOL)isExpanded;
-(void)setExpanded:(BOOL)arg1 ;
-(void)setLeftPadding:(double)arg1 ;
-(UIButton *)addButton;
-(UIButton *)skipButton;
-(double)leftPadding;
@end
