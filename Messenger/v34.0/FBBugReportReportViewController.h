/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:31 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <Messenger/FBBugReportContainerViewControllerChildViewControllerDelegate.h>
#import <Messenger/FBBugReportAttachmentListViewControllerDelegate.h>

@class FBBugReportReportView, FBBugReportAttachmentListViewController, FBBugReportCoordinator, NSString;

@interface FBBugReportReportViewController : UIViewController <UITextViewDelegate, FBBugReportContainerViewControllerChildViewControllerDelegate, FBBugReportAttachmentListViewControllerDelegate> {

	FBBugReportReportView* _reportView;
	FBBugReportAttachmentListViewController* _attachmentListViewController;
	BOOL _bugReportRedesignDidEnterDescriptionEventDidOccur;
	FBBugReportCoordinator* _coordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setNavigationItem;
-(void)showDataUsePolicy;
-(id)initWithCoordinator:(id)arg1 ;
-(void)personDidChooseCancel;
-(void)personDidChooseBack;
-(void)personDidChooseSend;
-(void)updateSendButtonIsEnabled;
-(void)addedThumbnailToAttachmentList:(int)arg1 ;
-(void)personChoseToTakeScreenshot;
-(void)personChoseVideoScreenCapture;
-(void)dealloc;
-(id)init;
-(void)loadView;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
@end
