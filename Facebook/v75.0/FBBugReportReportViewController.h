/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <Facebook/FBBugReportContainerViewControllerChildViewControllerDelegate.h>
#import <Facebook/FBBugReportAttachmentListViewControllerDelegate.h>

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
-(void)personChoseVideoScreenCapture;
-(void)setNavigationItem;
-(void)addedThumbnailToAttachmentList:(int)arg1 ;
-(void)willShowActionSheet;
-(void)personChoseToTakeScreenshot;
-(void)personDidChooseCancel;
-(void)showDataUsePolicy;
-(void)personDidChooseBack;
-(void)personDidChooseSend;
-(void)updateSendButtonIsEnabled;
-(id)initWithCoordinator:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
@end
