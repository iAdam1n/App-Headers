/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:16 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol IGSearchBarDelegate;
@class IGButton, UIButton, IGTextField, NSString;

@interface IGSearchBar : UIView <UITextFieldDelegate> {

	IGButton* _cancelButton;
	UIButton* _clearButton;
	BOOL _showsCancelButton;
	IGTextField* _textField;
	id<IGSearchBarDelegate> _delegate;

}

@property (nonatomic,retain) IGTextField * textField;                              //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic,__weak) id<IGSearchBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) NSString * placeholder; 
@property (assign,nonatomic) NSString * text; 
@property (assign,nonatomic) BOOL showsCancelButton;                               //@synthesize showsCancelButton=_showsCancelButton - In the implementation block
@property (assign,nonatomic) long long returnKeyType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showCancelButton:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)setDelegate:(id<IGSearchBarDelegate>)arg1 ;
-(id)init;
-(id<IGSearchBarDelegate>)delegate;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(BOOL)isFirstResponder;
-(long long)autocapitalizationType;
-(void)setAutocapitalizationType:(long long)arg1 ;
-(long long)autocorrectionType;
-(void)setAutocorrectionType:(long long)arg1 ;
-(long long)returnKeyType;
-(void)setReturnKeyType:(long long)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(IGTextField *)textField;
-(NSString *)placeholder;
-(void)setShowsCancelButton:(BOOL)arg1 ;
-(BOOL)showsCancelButton;
-(void)setTextField:(IGTextField *)arg1 ;
@end

