/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBAvatarPickerControllerDelegate.h>
#import <Facebook/FBGroupsPrivacyPickerDelegate.h>

@protocol FBGroupCreationFlowEventsDelegate;
@class FBPopoverGroupCreationView, FBGroupsPrivacyPickerViewController, FBGroupCreationConfig, FBUserSession, FBAvatarPickerController, FBPopoverController, FBGroupMutationInfo, NSString;

@interface FBPopoverGroupCreationViewController : UIViewController <FBAvatarPickerControllerDelegate, FBGroupsPrivacyPickerDelegate> {

	FBPopoverGroupCreationView* _view;
	FBGroupsPrivacyPickerViewController* _privacyPickerViewController;
	FBGroupCreationConfig* _creationConfig;
	FBUserSession* _session;
	FBAvatarPickerController* _avatarPicker;
	FBPopoverController* _popoverController;
	id<FBGroupCreationFlowEventsDelegate> _delegate;
	FBGroupMutationInfo* _groupMutationInfo;
	/*^block*/id _viewDidLayoutCallback;
	Class _popoverBorderClass;

}

@property (assign,nonatomic,__weak) id<FBGroupCreationFlowEventsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) FBGroupMutationInfo * groupMutationInfo;                     //@synthesize groupMutationInfo=_groupMutationInfo - In the implementation block
@property (nonatomic,copy) id viewDidLayoutCallback;                                             //@synthesize viewDidLayoutCallback=_viewDidLayoutCallback - In the implementation block
@property (assign,nonatomic) Class popoverBorderClass;                                           //@synthesize popoverBorderClass=_popoverBorderClass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)avatarPicker:(id)arg1 didFinishWithSelection:(id)arg2 ;
-(void)avatarPickerValueDidChange:(id)arg1 ;
-(void)setPopoverBorderClass:(Class)arg1 ;
-(Class)popoverBorderClass;
-(void)_searchFieldFocused:(id)arg1 ;
-(void)_groupNameChanged:(id)arg1 ;
-(void)didSelectPrivacySetting:(id)arg1 ;
-(id)initWithCreationConfig:(id)arg1 session:(id)arg2 ;
-(FBGroupMutationInfo *)groupMutationInfo;
-(void)setGroupMutationInfo:(FBGroupMutationInfo *)arg1 ;
-(id)viewDidLayoutCallback;
-(void)setViewDidLayoutCallback:(id)arg1 ;
-(void)setDelegate:(id<FBGroupCreationFlowEventsDelegate>)arg1 ;
-(id<FBGroupCreationFlowEventsDelegate>)delegate;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)_cancel;
-(void)_submit;
@end
