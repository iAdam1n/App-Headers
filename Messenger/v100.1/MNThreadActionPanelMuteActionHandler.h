/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadMutePickerDelegate.h>
#import <Messenger/MNThreadActionPanelActionHandling.h>

@protocol MNThreadActionPerformer, MNThreadActionPanelActionHandlingDelegate;
@class FBAnalytics, MNThreadMutePicker, UIView, MNThreadActionPanelActionConfiguration, NSString;

@interface MNThreadActionPanelMuteActionHandler : NSObject <MNThreadMutePickerDelegate, MNThreadActionPanelActionHandling> {

	FBAnalytics* _analytics;
	MNThreadMutePicker* _mutePicker;
	id<MNThreadActionPerformer> _threadActionPerformer;
	UIView* _viewToShowActionSheet;
	MNThreadActionPanelActionConfiguration* _config;
	id<MNThreadActionPanelActionHandlingDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleActionWithDelegate:(id)arg1 ;
-(void)dismissActionSheets;
-(void)_finishEvent;
-(void)_promptMuteOptions;
-(void)threadMutePicker:(id)arg1 didSelectMuteType:(long long)arg2 ;
-(void)threadMutePickerDidCancel:(id)arg1 ;
-(id)initWithAnalytics:(id)arg1 mutePicker:(id)arg2 threadActionPerformer:(id)arg3 presentingView:(id)arg4 actionConfig:(id)arg5 ;
@end
