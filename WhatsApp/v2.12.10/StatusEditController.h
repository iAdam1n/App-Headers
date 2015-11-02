/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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
@property (nonatomic,retain) NSString * preloadedStatusText;                                //@synthesize preloadedStatusText=_preloadedStatusText - In the implementation block
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
-(void)cancelAction:(id)arg1 ;
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
@end
