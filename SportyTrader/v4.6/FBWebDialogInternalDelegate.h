/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:23 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/FBDialogDelegate.h>

@protocol FBWebDialogsDelegate;
@class FBDialog, NSString, NSDictionary, FBSession;

@interface FBWebDialogInternalDelegate : NSObject <FBDialogDelegate> {

	BOOL _isSelfRetained;
	/*^block*/id _handler;
	FBDialog* _dialog;
	NSString* _dialogMethod;
	NSDictionary* _parameters;
	FBSession* _session;
	id<FBWebDialogsDelegate> _delegate;

}

@property (nonatomic,copy) id handler;                                       //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) FBDialog * dialog;                              //@synthesize dialog=_dialog - In the implementation block
@property (nonatomic,copy) NSString * dialogMethod;                          //@synthesize dialogMethod=_dialogMethod - In the implementation block
@property (nonatomic,copy) NSDictionary * parameters;                        //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) FBSession * session;                            //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) id<FBWebDialogsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDialogMethod:(NSString *)arg1 ;
-(NSString *)dialogMethod;
-(void)completeWithResult:(unsigned long long)arg1 url:(id)arg2 error:(id)arg3 ;
-(void)releaseSelfIfNeeded;
-(void)dialogDidComplete:(id)arg1 ;
-(void)dialogCompleteWithUrl:(id)arg1 ;
-(void)dialogDidNotCompleteWithUrl:(id)arg1 ;
-(void)dialogDidNotComplete:(id)arg1 ;
-(void)dialog:(id)arg1 didFailWithError:(id)arg2 ;
-(BOOL)dialog:(id)arg1 shouldOpenURLInExternalBrowser:(id)arg2 ;
-(void)goRetainYourself;
-(void)dealloc;
-(void)setDelegate:(id<FBWebDialogsDelegate>)arg1 ;
-(id)init;
-(id<FBWebDialogsDelegate>)delegate;
-(void)setHandler:(id)arg1 ;
-(id)handler;
-(FBSession *)session;
-(void)setSession:(FBSession *)arg1 ;
-(FBDialog *)dialog;
-(void)setDialog:(FBDialog *)arg1 ;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
@end
