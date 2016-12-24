/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@class FBNetworkImageView, UILabel, UIView, UIButton, FBUserSession, FBMemGroup, FBGroupsCollegeCommunitiesValidationViewConfig, UITextField, NSString;

@interface FBGroupsCollegeCommunitiesValidationGenericView : UIView <UITextFieldDelegate> {

	FBNetworkImageView* _schoolIllustration;
	UILabel* _submitTitle;
	UILabel* _submitDescription;
	UIView* _sectionDividerView;
	UIButton* _clearButton;
	FBUserSession* _session;
	FBMemGroup* _group;
	double _keyboardOverlap;
	FBGroupsCollegeCommunitiesValidationViewConfig* _config;
	UITextField* _textField;

}

@property (nonatomic,readonly) UITextField * textField;              //@synthesize textField=_textField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithGroup:(id)arg1 config:(id)arg2 session:(id)arg3 ;
-(void)focusTextField;
-(void)_layoutSubviewsWithKeyboardOverlap:(double)arg1 ;
-(void)textFieldDidChange;
-(void)_deleteAllText;
-(void)layoutSubviews;
-(void)dealloc;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(UITextField *)textField;
-(void)keyboardWillHide:(id)arg1 ;
-(void)keyboardWasShown:(id)arg1 ;
-(void)_setupViews;
@end
