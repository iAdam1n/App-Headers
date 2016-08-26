/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Telegram/BITFeedbackUserDataDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@protocol BITFeedbackComposeViewControllerDelegate;
@class BITFeedbackManager, UITextView, NSString;

@interface BITFeedbackComposeViewController : UIViewController <BITFeedbackUserDataDelegate, UITextViewDelegate> {

	long long _statusBarStyle;
	BOOL _blockUserDataScreen;
	id<BITFeedbackComposeViewControllerDelegate> _delegate;
	BITFeedbackManager* _manager;
	UITextView* _textView;
	NSString* _text;

}

@property (assign,nonatomic,__weak) id<BITFeedbackComposeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) BITFeedbackManager * manager;                                       //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) UITextView * textView;                                                     //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) NSString * text;                                                           //@synthesize text=_text - In the implementation block
-(void)dismissAction:(id)arg1 ;
-(void)keyboardWasShown:(id)arg1 ;
-(void)keyboardWillBeHidden:(id)arg1 ;
-(void)setUserDataAction;
-(void)dismissWithResult:(unsigned long long)arg1 ;
-(void)userDataUpdateCancelled;
-(void)userDataUpdateFinished;
-(void)prepareWithItems:(id)arg1 ;
-(BITFeedbackManager *)manager;
-(void)setDelegate:(id<BITFeedbackComposeViewControllerDelegate>)arg1 ;
-(id)init;
-(id<BITFeedbackComposeViewControllerDelegate>)delegate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setTextView:(UITextView *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(UITextView *)textView;
-(void)sendAction:(id)arg1 ;
-(void)setManager:(BITFeedbackManager *)arg1 ;
@end
