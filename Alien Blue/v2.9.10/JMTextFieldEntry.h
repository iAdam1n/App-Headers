/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol JMTextFieldEntryDelegate;
@class ABButton, JMTextField, NSString;

@interface JMTextFieldEntry : UIView <UITextFieldDelegate> {

	BOOL focussed_;
	ABButton* cancelButton_;
	ABButton* doneButton_;
	JMTextField* textField_;
	id<JMTextFieldEntryDelegate> delegate_;
	NSString* placeholderText_;

}

@property (__weak) id<JMTextFieldEntryDelegate> delegate; 
@property (nonatomic,retain) JMTextField * textField; 
@property (nonatomic,retain) ABButton * cancelButton; 
@property (nonatomic,retain) ABButton * doneButton; 
@property (nonatomic,retain) NSString * placeholderText; 
@property (assign) BOOL focussed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDefaultText:(id)arg1 ;
-(void)setTextFieldPlaceholder:(id)arg1 ;
-(BOOL)focussed;
-(void)positionSubviews;
-(void)unfocus;
-(void)setFocussed:(BOOL)arg1 ;
-(void)animateFocusChange;
-(void)cancel;
-(void)setDelegate:(id<JMTextFieldEntryDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(id<JMTextFieldEntryDelegate>)delegate;
-(void)setAutocapitalizationType:(long long)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(ABButton *)cancelButton;
-(void)setCancelButton:(ABButton *)arg1 ;
-(void)done;
-(JMTextField *)textField;
-(void)setDoneButton:(ABButton *)arg1 ;
-(ABButton *)doneButton;
-(void)focus;
-(NSString *)placeholderText;
-(void)setPlaceholderText:(NSString *)arg1 ;
-(void)setTextField:(JMTextField *)arg1 ;
@end

