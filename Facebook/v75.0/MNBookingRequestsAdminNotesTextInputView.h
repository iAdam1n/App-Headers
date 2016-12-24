/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol MNBookingRequestsAdminNotesTextInputViewResizeDelegate;
@class FBTextView, UIView, NSString;

@interface MNBookingRequestsAdminNotesTextInputView : UIView <UITextViewDelegate> {

	FBTextView* _textView;
	UIView* _separatorView;
	id<MNBookingRequestsAdminNotesTextInputViewResizeDelegate> _resizeDelegate;

}

@property (nonatomic,copy,readonly) NSString * inputContent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)inputContent;
-(CGSize)_textViewSize:(CGSize)arg1 ;
-(id)initWithHint:(id)arg1 content:(id)arg2 resizeDelegate:(id)arg3 ;
-(void)setInputEditable:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)textViewShouldEndEditing:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
@end
