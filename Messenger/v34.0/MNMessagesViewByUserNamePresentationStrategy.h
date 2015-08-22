/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:00 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBMUidThreadForUsernameFetcherDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNMessagesViewPresentationStrategy.h>

@protocol FBProvider, MNMessageSendQuerying, MNAuthenticationManager, MNGlobalDeleteMessagePlaceholderStoreReading;
@class FBMThreadUserMap, NSString, MNUserStore, FBLanguageNameFormatFactory, MNThreadContextManager, MNPageResponsivenessCache, MNMessagesViewController, FBMUidThreadForUsernameFetcher;

@interface MNMessagesViewByUserNamePresentationStrategy : NSObject <FBMUidThreadForUsernameFetcherDelegate, FBClassProvidable, MNMessagesViewPresentationStrategy> {

	id<FBProvider> _userNameFetcherProvider;
	long long _currentUserFetchId;
	FBMThreadUserMap* _threadUserMap;
	id<MNMessageSendQuerying> _messageSendQuerier;
	NSString* _otherUserFbId;
	NSString* _initialComposerExtensionIdentifier;
	BOOL _presentationComplete;
	MNUserStore* _userStore;
	id<MNAuthenticationManager> _authenticationManager;
	FBLanguageNameFormatFactory* _languageFormatFactory;
	MNThreadContextManager* _threadContextManager;
	id<MNGlobalDeleteMessagePlaceholderStoreReading> _placeholderStoreReader;
	MNPageResponsivenessCache* _pageResponsivenessCache;
	MNMessagesViewController* _messagesViewController;
	/*^block*/id _executePresentBlock;
	/*^block*/id _showLoadingBlock;
	/*^block*/id _presentationCompleteBlock;
	FBMUidThreadForUsernameFetcher* _threadFetcher;

}

@property (nonatomic,retain) FBMUidThreadForUsernameFetcher * threadFetcher;              //@synthesize threadFetcher=_threadFetcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)fetcher:(id)arg1 didFetchUid:(id)arg2 displayName:(id)arg3 thread:(id)arg4 ;
-(void)fetcher:(id)arg1 couldNotFetchUidThread:(id)arg2 ;
-(id)initWithUserNameFetcherProvider:(id)arg1 threadUserMap:(id)arg2 messageSendQuerier:(id)arg3 userStore:(id)arg4 authenticationManger:(id)arg5 languageNameFormatFactory:(id)arg6 threadContextManager:(id)arg7 placeholderStoreReader:(id)arg8 pageResponsivenessCache:(id)arg9 ;
-(void)_cleanUpFetchers;
-(void)_startFetchingThread;
-(void)_cleanUpPresentationRequest;
-(void)_continueTransitionByFetchingUserWithId:(id)arg1 forThread:(id)arg2 ;
-(void)_completePresentationWithThreadViewModel:(id)arg1 ;
-(void)_handleUserLoadComplete:(id)arg1 otherUserId:(id)arg2 thread:(id)arg3 ;
-(void)setThreadFetcher:(FBMUidThreadForUsernameFetcher *)arg1 ;
-(void)setupPresentationWithCanonicalThreadWithRecipientFbName:(id)arg1 withInitialComposerExtensionIdentifier:(id)arg2 ;
-(FBMUidThreadForUsernameFetcher *)threadFetcher;
-(void)beginPresentationOfMessagesViewController:(id)arg1 withExecutePresentBlock:(/*^block*/id)arg2 showLoadingBlock:(/*^block*/id)arg3 presentationCompleteBlock:(/*^block*/id)arg4 ;
-(void)cancel;
-(void)dealloc;
-(id)init;
@end
