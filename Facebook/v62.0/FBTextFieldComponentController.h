/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:52 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKStatefulViewComponentController.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSString;

@interface FBTextFieldComponentController : CKStatefulViewComponentController <UITextFieldDelegate> {

	NSString* _initialText;

}

@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newStatefulView:(id)arg1 ;
+(void)configureStatefulView:(id)arg1 forComponent:(id)arg2 ;
-(void)didMount;
-(void)didUpdateComponent;
-(id)textFieldComponent;
-(void)didAcquireStatefulView:(id)arg1 ;
-(void)willRelinquishStatefulView:(id)arg1 ;
-(BOOL)canRelinquishStatefulView;
-(void)textFieldEditingChanged:(id)arg1 ;
-(void)leftInputAccessoryViewButtonTapped;
-(id)barButtonItemFromItemConfiguration:(FBTextFieldInputAccessoryViewItemConfiguration)arg1 action:(SEL)arg2 ;
-(void)rightInputAccessoryViewButtonTapped;
-(void)handleTapOnInputAccessoryViewButtonWithConfiguration:(const FBTextFieldInputAccessoryViewItemConfiguration*)arg1 ;
-(BOOL)resignFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)becomeFirstResponder;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(id)textField;
@end
