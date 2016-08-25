/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/SellingDetailController_Base.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField, UILabel, LengthLimitingTextFieldDelegate, NSString;

@interface SellingDetailController_Title : SellingDetailController_Base <UITextFieldDelegate> {

	UITextField* titleField;
	UILabel* remainingCharCountLabel;
	UILabel* subtitleLabel;
	UITextField* subtitleField;
	UILabel* subtitleRemainingCountLabel;
	LengthLimitingTextFieldDelegate* titleFieldDelegate;
	LengthLimitingTextFieldDelegate* subtitleFieldDelegate;

}

@property (nonatomic,retain) UITextField * titleField; 
@property (nonatomic,retain) UILabel * remainingCharCountLabel; 
@property (nonatomic,retain) UILabel * subtitleLabel; 
@property (nonatomic,retain) UITextField * subtitleField; 
@property (nonatomic,retain) UILabel * subtitleRemainingCountLabel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)resignCurrentResponder;
-(void)textField:(id)arg1 didChangeStringValue:(id)arg2 ;
-(void)saveToListing;
-(void)setupFromListing;
-(void)performThemeAwareViewUpdate;
-(void)setupRemainingCharactersForTitleString:(id)arg1 ;
-(void)setupRemainingCharactersForSubtitleString:(id)arg1 ;
-(UILabel *)remainingCharCountLabel;
-(void)setRemainingCharCountLabel:(UILabel *)arg1 ;
-(UITextField *)subtitleField;
-(void)setSubtitleField:(UITextField *)arg1 ;
-(UILabel *)subtitleRemainingCountLabel;
-(void)setSubtitleRemainingCountLabel:(UILabel *)arg1 ;
-(void)dealloc;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(UILabel *)subtitleLabel;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UITextField *)titleField;
-(void)setTitleField:(UITextField *)arg1 ;
@end

