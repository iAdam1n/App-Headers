/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ComponentUI/EUIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIWebViewDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <eBay/MessageCacheDelegate.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>
#import <eBay/EBUViewMessageViewControllerProtocol.h>

@protocol MessageViewerDelegate;
@class NSMutableArray, EBNMessage, UITableView, UIBarButtonItem, UIToolbar, UIView, GradientBackgroundLabel, RefreshThrobber, NSString, MessageSenderAndDateCell, MessageSubjectCell, MessageItemCell, MessageBodyCell, EBUViewMessageNavigationContext;

@interface SingleMessageTableViewController : EUIViewController <UITableViewDataSource, UITableViewDelegate, UIWebViewDelegate, UIActionSheetDelegate, MessageCacheDelegate, MFMailComposeViewControllerDelegate, EBUViewMessageViewControllerProtocol> {

	NSMutableArray* messageArray;
	long long messageIndex;
	EBNMessage* message;
	NSMutableArray* cells;
	BOOL needsUpdate;
	id<MessageViewerDelegate> messageViewerDelegate;
	UITableView* tableView;
	UIBarButtonItem* upButton;
	UIBarButtonItem* downButton;
	UIBarButtonItem* deleteButton;
	UIBarButtonItem* replyButton;
	UIToolbar* toolbar;
	UIView* statusBanner;
	GradientBackgroundLabel* statusBannerLabel;
	RefreshThrobber* refreshThrobber;
	NSString* titleBase;
	MessageSenderAndDateCell* senderCell;
	MessageSubjectCell* subjectCell;
	MessageItemCell* itemCell;
	MessageBodyCell* bodyCell;
	BOOL maintainStatusBar;
	BOOL _hideMessageNavigationButtons;
	BOOL _hideTitle;
	UITableView* _tableView_ios7;
	EBUViewMessageNavigationContext* _context;
	NSMutableArray* _nonTappableCells;

}

@property (nonatomic,retain) NSMutableArray * nonTappableCells;                                   //@synthesize nonTappableCells=_nonTappableCells - In the implementation block
@property (nonatomic,retain) UIToolbar * toolbar; 
@property (nonatomic,retain) UIBarButtonItem * replyButton; 
@property (nonatomic,retain) UIBarButtonItem * deleteButton; 
@property (nonatomic,retain) UIBarButtonItem * downButton; 
@property (nonatomic,retain) UIBarButtonItem * upButton; 
@property (nonatomic,retain) UITableView * tableView; 
@property (nonatomic,retain) UITableView * tableView_ios7;                                        //@synthesize tableView_ios7=_tableView_ios7 - In the implementation block
@property (assign,nonatomic) long long messageIndex; 
@property (nonatomic,retain) NSString * titleBase; 
@property (nonatomic,retain) NSMutableArray * messageArray; 
@property (nonatomic,retain) EBNMessage * message; 
@property (assign,nonatomic,__weak) id<MessageViewerDelegate> messageViewerDelegate; 
@property (assign,nonatomic) BOOL needsUpdate; 
@property (assign,nonatomic) BOOL hideMessageNavigationButtons;                                   //@synthesize hideMessageNavigationButtons=_hideMessageNavigationButtons - In the implementation block
@property (assign,nonatomic) BOOL hideTitle;                                                      //@synthesize hideTitle=_hideTitle - In the implementation block
@property (nonatomic,retain) EBUViewMessageNavigationContext * context;                           //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id postLoadHandler; 
-(void)setupTableCells;
-(void)initThrobber;
-(void)trackViewDidBecomeActive;
-(UIBarButtonItem *)replyButton;
-(void)setReplyButton:(UIBarButtonItem *)arg1 ;
-(void)deleteAction:(id)arg1 ;
-(void)messageNeedsUpdate:(id)arg1 ;
-(void)setMessageArray:(NSMutableArray *)arg1 ;
-(void)setTitleBase:(NSString *)arg1 ;
-(void)setMessageIndex:(long long)arg1 ;
-(void)setMessageViewerDelegate:(id<MessageViewerDelegate>)arg1 ;
-(void)actionSheetOkAction;
-(void)senderButtonAction:(id)arg1 ;
-(void)setHideMessageNavigationButtons:(BOOL)arg1 ;
-(void)setupWithEBayMessage:(id)arg1 context:(id)arg2 ;
-(void)replyAction:(id)arg1 ;
-(void)itemCellAction:(id)arg1 ;
-(void)redrawMessage;
-(void)onMessageLoaded;
-(void)handleItemLink:(id)arg1 ;
-(void)showSellerFromURL:(id)arg1 ;
-(void)showURLInApp:(id)arg1 withSSO:(BOOL)arg2 ;
-(void)handleBestOffer:(id)arg1 ;
-(void)launchImageViewer;
-(void)followURL:(id)arg1 ;
-(void)setAnimation;
-(void)updateTableHeight;
-(void)adjustTitle;
-(void)setNonTappableCells:(NSMutableArray *)arg1 ;
-(UITableView *)tableView_ios7;
-(void)initStatusBanner;
-(BOOL)hideMessageNavigationButtons;
-(UIBarButtonItem *)upButton;
-(void)setUpButton:(UIBarButtonItem *)arg1 ;
-(void)applicationDidChangeStatusBarFrame:(id)arg1 ;
-(NSMutableArray *)nonTappableCells;
-(void)showStatusBanner:(BOOL)arg1 ;
-(void)adjustUpDownButtons;
-(void)showFeedbackFromURL:(id)arg1 ;
-(void)showURLinSafari:(id)arg1 ;
-(NSString *)titleBase;
-(long long)messageIndex;
-(NSMutableArray *)messageArray;
-(id<MessageViewerDelegate>)messageViewerDelegate;
-(void)setTableView_ios7:(UITableView *)arg1 ;
-(void)registerTracking;
-(void)messageLoaded:(id)arg1 ;
-(void)messageLoadError:(id)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(EBUViewMessageNavigationContext *)context;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(UIToolbar *)toolbar;
-(void)setToolbar:(UIToolbar *)arg1 ;
-(void)setMessage:(EBNMessage *)arg1 ;
-(EBNMessage *)message;
-(void)setContext:(EBUViewMessageNavigationContext *)arg1 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(void)fetchData;
-(void)setDownButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)downButton;
-(UIBarButtonItem *)deleteButton;
-(void)setDeleteButton:(UIBarButtonItem *)arg1 ;
-(BOOL)needsUpdate;
-(void)setNeedsUpdate:(BOOL)arg1 ;
-(void)setHideTitle:(BOOL)arg1 ;
-(BOOL)hideTitle;
-(void)upAction:(id)arg1 ;
-(void)downAction:(id)arg1 ;
@end
