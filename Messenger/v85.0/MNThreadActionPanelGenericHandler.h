/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:18 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>
#import <Messenger/MNThreadActionPanelActionHandling.h>

@protocol MNThreadActionPerformer, MNThreadClientSummaryUpdateCreating, MNThreadActionPanelActionHandlingDelegate;
@class FBMThreadKey, MNThreadSummaryClientUpdateCreationInfo, MNThreadActionPanelGenericHandlerActionSheetStrings, NSString;

@interface MNThreadActionPanelGenericHandler : NSObject <UIAlertViewDelegate, MNThreadActionPanelActionHandling> {

	id<MNThreadActionPerformer> _threadActionPerformer;
	id<MNThreadClientSummaryUpdateCreating> _updateCreator;
	FBMThreadKey* _threadKey;
	id<MNThreadActionPanelActionHandlingDelegate> _delegate;
	MNThreadSummaryClientUpdateCreationInfo* _creationInfo;
	MNThreadActionPanelGenericHandlerActionSheetStrings* _actionSheetStrings;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)panelHandlerWithNoPromptForThreadActionPerformer:(id)arg1 updateCreator:(id)arg2 threadKey:(id)arg3 creationInfo:(id)arg4 ;
+(id)panelHandlerWithPromptForThreadActionPerformer:(id)arg1 updateCreator:(id)arg2 threadKey:(id)arg3 creationInfo:(id)arg4 actionSheetStrings:(id)arg5 ;
-(void)handleActionWithDelegate:(id)arg1 ;
-(void)dismissActionSheets;
-(id)initWithThreadActionPerformer:(id)arg1 updateCreator:(id)arg2 threadKey:(id)arg3 creationInfo:(id)arg4 actionSheetStrings:(id)arg5 ;
-(void)_finishEvent;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)_cancelAction;
@end
