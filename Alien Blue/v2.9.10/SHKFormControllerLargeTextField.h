/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>

@protocol SHKFormControllerLargeTextFieldDelegate;
@class UITextView, UIImage, NSString, UILabel;

@interface SHKFormControllerLargeTextField : UIViewController <UITextViewDelegate> {

	BOOL _hasLink;
	BOOL _allowSendingEmptyMessage;
	id<SHKFormControllerLargeTextFieldDelegate> _delegate;
	UITextView* _textView;
	unsigned long long _maxTextLength;
	UIImage* _image;
	unsigned long long _imageTextLength;
	NSString* _text;
	UILabel* _counter;

}

@property (nonatomic,readonly) id<SHKFormControllerLargeTextFieldDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UITextView * textView;                                               //@synthesize textView=_textView - In the implementation block
@property (assign) unsigned long long maxTextLength;                                              //@synthesize maxTextLength=_maxTextLength - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                     //@synthesize image=_image - In the implementation block
@property (assign) unsigned long long imageTextLength;                                            //@synthesize imageTextLength=_imageTextLength - In the implementation block
@property (assign) BOOL hasLink;                                                                  //@synthesize hasLink=_hasLink - In the implementation block
@property (assign) BOOL allowSendingEmptyMessage;                                                 //@synthesize allowSendingEmptyMessage=_allowSendingEmptyMessage - In the implementation block
@property (nonatomic,retain) NSString * text;                                                     //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UILabel * counter;                                                   //@synthesize counter=_counter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 ;
-(void)setAllowSendingEmptyMessage:(BOOL)arg1 ;
-(void)setupBarButtonItems;
-(void)layoutCounter;
-(void)ifNoTextDisableSendButton;
-(BOOL)shouldShowCounter;
-(unsigned long long)maxTextLength;
-(unsigned long long)imageTextLength;
-(BOOL)allowSendingEmptyMessage;
-(void)updateCounter;
-(void)setMaxTextLength:(unsigned long long)arg1 ;
-(void)setImageTextLength:(unsigned long long)arg1 ;
-(void)cancel;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(id<SHKFormControllerLargeTextFieldDelegate>)delegate;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setTextView:(UITextView *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(UITextView *)textView;
-(void)setCounter:(UILabel *)arg1 ;
-(UILabel *)counter;
-(void)keyboardWillShow:(id)arg1 ;
-(void)save;
-(BOOL)hasLink;
-(void)setHasLink:(BOOL)arg1 ;
@end

