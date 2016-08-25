/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:03 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WATableViewController.h>
#import <UIKit/UITextViewDelegate.h>

@protocol StatusEditControllerDelegate;
@class UITableViewCell, UITextView, NSString;

@interface StatusEditController : WATableViewController <UITextViewDelegate> {

	double _keyboardHeight;
	UITableViewCell* _textViewCell;
	UITextView* _textView;
	BOOL _editingMode;
	id<StatusEditControllerDelegate> _delegate;
	NSString* _preloadedStatusText;

}

@property (assign,nonatomic,__weak) id<StatusEditControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * preloadedStatusText;                                  //@synthesize preloadedStatusText=_preloadedStatusText - In the implementation block
@property (assign,nonatomic) BOOL editingMode;                                              //@synthesize editingMode=_editingMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPreloadedStatusText:(NSString *)arg1 ;
-(void)setEditingMode:(BOOL)arg1 ;
-(NSString *)preloadedStatusText;
-(void)saveAction:(id)arg1 ;
-(void)updateNavigationBar;
-(void)fixContentOffset;
-(BOOL)editingMode;
-(void)setDelegate:(id<StatusEditControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<StatusEditControllerDelegate>)delegate;
-(void)viewDidLayoutSubviews;
-(id)initWithDelegate:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)cancelAction:(id)arg1 ;
@end

