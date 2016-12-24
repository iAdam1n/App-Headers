/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:39 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SKPURL, MKAlertView, NSURLSession;

@interface SKPURLHandler : NSObject {

	SKPURL* _startupURL;
	MKAlertView* _currentAskToCallAlertView;
	NSURLSession* _joinLinkSession;

}

@property (nonatomic,retain) SKPURL * startupURL;                                         //@synthesize startupURL=_startupURL - In the implementation block
@property (assign,nonatomic,__weak) MKAlertView * currentAskToCallAlertView;              //@synthesize currentAskToCallAlertView=_currentAskToCallAlertView - In the implementation block
@property (nonatomic,retain) NSURLSession * joinLinkSession;                              //@synthesize joinLinkSession=_joinLinkSession - In the implementation block
+(id)idForData:(id)arg1 error:(id)arg2 idKey:(id)arg3 ;
-(BOOL)openURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 ;
-(SKPURL *)startupURL;
-(void)setStartupURL:(SKPURL *)arg1 ;
-(void)invalidateJoinLinkSession;
-(void)askToHandleCallURL:(id)arg1 completionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 cancellationBlock:(/*^block*/id)arg4 ;
-(void)handleChatURL:(id)arg1 completionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)handleChatWithBlobURL:(id)arg1 completionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)handleVIMWithURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)isJoinLink:(id)arg1 ;
-(id)createSkypeJoinActivity;
-(void)navigateToConversationFromBlob:(id)arg1 completionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)retrieveConversationForUrl:(id)arg1 completionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(id)displayNamesForTargets:(id)arg1 ;
-(void)handleCallURL:(id)arg1 completionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(MKAlertView *)currentAskToCallAlertView;
-(void)setCurrentAskToCallAlertView:(MKAlertView *)arg1 ;
-(void)setJoinLinkSession:(NSURLSession *)arg1 ;
-(BOOL)isJoinLinkWithLongHash:(id)arg1 ;
-(BOOL)isInternalURL:(id)arg1 ;
-(NSURLSession *)joinLinkSession;
-(id)displayNameForContactWithIdentity:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)openURL:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)handleURL:(id)arg1 ;
-(void)sendFeedback:(id)arg1 ;
@end
