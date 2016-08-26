/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAViewController.h>
#import <UIKit/UITextViewDelegate.h>

@protocol FeedbackInputControllerDelegate;
@class UITableView, UITableViewCell, UITextView, UILabel, NSString;

@interface FeedbackInputViewController : WAViewController <UITextViewDelegate> {

	double _keyboardHeight;
	id<FeedbackInputControllerDelegate> _delegate;
	UITableView* _tableViewFeedback;
	UITableViewCell* _cellFeedbackInput;
	UITextView* _textViewFeedback;
	UILabel* _labelPlaceholder;

}

@property (nonatomic,retain) UITableView * tableViewFeedback;                                  //@synthesize tableViewFeedback=_tableViewFeedback - In the implementation block
@property (nonatomic,retain) UITableViewCell * cellFeedbackInput;                              //@synthesize cellFeedbackInput=_cellFeedbackInput - In the implementation block
@property (nonatomic,retain) UITextView * textViewFeedback;                                    //@synthesize textViewFeedback=_textViewFeedback - In the implementation block
@property (nonatomic,retain) UILabel * labelPlaceholder;                                       //@synthesize labelPlaceholder=_labelPlaceholder - In the implementation block
@property (assign,nonatomic,__weak) id<FeedbackInputControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)nextAction:(id)arg1 ;
-(UITextView *)textViewFeedback;
-(UITableView *)tableViewFeedback;
-(UILabel *)labelPlaceholder;
-(UITableViewCell *)cellFeedbackInput;
-(void)setTableViewFeedback:(UITableView *)arg1 ;
-(void)setCellFeedbackInput:(UITableViewCell *)arg1 ;
-(void)setTextViewFeedback:(UITextView *)arg1 ;
-(void)setLabelPlaceholder:(UILabel *)arg1 ;
-(void)setDelegate:(id<FeedbackInputControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(id<FeedbackInputControllerDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)cancelAction:(id)arg1 ;
@end
