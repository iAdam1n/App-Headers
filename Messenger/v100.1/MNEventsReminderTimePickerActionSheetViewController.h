/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNEvensReminderTimePickerActionSheetViewDelegate.h>
#import <Messenger/MNActionSheetPresenting.h>

@protocol MNActionSheetPresentationDelegate, MNEventsReminderTimePickerActionSheetViewControllerDelegate;
@class MNEventsReminderTimePickerActionSheetView, NSDate, NSString;

@interface MNEventsReminderTimePickerActionSheetViewController : UIViewController <MNEvensReminderTimePickerActionSheetViewDelegate, MNActionSheetPresenting> {

	MNEventsReminderTimePickerActionSheetView* _actionSheetView;
	NSDate* _defaultDate;
	NSDate* _originalDate;
	int _confirmAction;
	long long _reminderType;
	id<MNActionSheetPresentationDelegate> _presentationDelegate;
	id<MNEventsReminderTimePickerActionSheetViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNEventsReminderTimePickerActionSheetViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNActionSheetPresentationDelegate> presentationDelegate;                            //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
-(void)actionSheetDidResize;
-(void)actionSheetWillDismiss;
-(void)actionSheetWillPresent;
-(BOOL)actionSheetAllowsFlexibleContentViewHeight;
-(id)initWithDefaultDate:(id)arg1 originalDate:(id)arg2 confirmAction:(int)arg3 reminderType:(long long)arg4 ;
-(void)actionSheetView:(id)arg1 didPickDate:(id)arg2 ;
-(void)didCancelWithActionSheetView:(id)arg1 ;
-(void)setDelegate:(id<MNEventsReminderTimePickerActionSheetViewControllerDelegate>)arg1 ;
-(id<MNEventsReminderTimePickerActionSheetViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id<MNActionSheetPresentationDelegate>)presentationDelegate;
-(void)setPresentationDelegate:(id<MNActionSheetPresentationDelegate>)arg1 ;
@end
