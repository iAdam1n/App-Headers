/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:59 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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
-(id)initWithAnalytics:(id)arg1 mutePicker:(id)arg2 threadActionPerformer:(id)arg3 presentingView:(id)arg4 actionConfig:(id)arg5 ;
-(void)handleActionWithDelegate:(id)arg1 ;
-(void)dismissActionSheets;
-(void)_finishEvent;
-(void)_promptMuteOptions;
-(void)threadMutePicker:(id)arg1 didSelectMuteType:(long long)arg2 ;
-(void)threadMutePickerDidCancel:(id)arg1 ;
@end

