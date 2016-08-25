/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/FBSDKWebDialogDelegate.h>

@protocol FBSDKAppGroupJoinDialogDelegate;
@class FBSDKWebDialog, NSString;

@interface FBSDKAppGroupJoinDialog : NSObject <FBSDKWebDialogDelegate> {

	FBSDKWebDialog* _webDialog;
	id<FBSDKAppGroupJoinDialogDelegate> _delegate;
	NSString* _groupID;

}

@property (assign,nonatomic,__weak) id<FBSDKAppGroupJoinDialogDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * groupID;                                                 //@synthesize groupID=_groupID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)showWithGroupID:(id)arg1 delegate:(id)arg2 ;
-(void)webDialogDidCancel:(id)arg1 ;
-(void)webDialog:(id)arg1 didCompleteWithResults:(id)arg2 ;
-(void)webDialog:(id)arg1 didFailWithError:(id)arg2 ;
-(BOOL)canShow;
-(void)_handleCompletionWithDialogResults:(id)arg1 error:(id)arg2 ;
-(BOOL)show;
-(void)setDelegate:(id<FBSDKAppGroupJoinDialogDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<FBSDKAppGroupJoinDialogDelegate>)delegate;
-(BOOL)validateWithError:(id*)arg1 ;
-(NSString *)groupID;
-(void)setGroupID:(NSString *)arg1 ;
@end

