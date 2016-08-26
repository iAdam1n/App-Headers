/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:21 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <Messenger/MNPeopleCellDelegate.h>
#import <Messenger/MNActionSheetPresenting.h>

@protocol MNModalPresentation, MNActionSheetPresentationDelegate;
@class MNPeopleCellFactory, MNThreadParticipantNameFormatter, MNMontageAudienceManager, NSArray, FBMIndexedUserSet, UITableView, FBInsetsLabel, UIActionSheet, MNConversationContact, NSString;

@interface MNMontageSeenStateDetailsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate, MNPeopleCellDelegate, MNActionSheetPresenting> {

	MNPeopleCellFactory* _peopleCellFactory;
	MNThreadParticipantNameFormatter* _nameFormatter;
	id<MNModalPresentation> _modalPresenter;
	MNMontageAudienceManager* _montageAudienceManager;
	NSArray* _sortedReadUserIds;
	FBMIndexedUserSet* _users;
	UITableView* _seenStateTableView;
	FBInsetsLabel* _headerView;
	UIActionSheet* _removeActionSheet;
	MNConversationContact* _selectedContact;
	id<MNActionSheetPresentationDelegate> _presentationDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNActionSheetPresentationDelegate> presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
-(void)actionSheetDidResize;
-(void)actionSheetWillDismiss;
-(void)actionSheetWillPresent;
-(void)contextTappedForConversationContact:(id)arg1 ;
-(void)callButtonTappedForConversationContact:(id)arg1 isVideoCall:(BOOL)arg2 ;
-(void)peopleCellActionButtonTappedForConversationContact:(id)arg1 ;
-(void)_updateHeaderViewText;
-(void)_removeContactFromMontageAudience:(id)arg1 ;
-(id)initWithSortedReadUserIds:(id)arg1 users:(id)arg2 peopleCellFactory:(id)arg3 nameFormatter:(id)arg4 modalPresenter:(id)arg5 montageAudienceManager:(id)arg6 ;
-(void)setSortedReadUserIds:(id)arg1 users:(id)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(id)_headerView;
-(void)setPresentationDelegate:(id<MNActionSheetPresentationDelegate>)arg1 ;
-(id<MNActionSheetPresentationDelegate>)presentationDelegate;
@end
