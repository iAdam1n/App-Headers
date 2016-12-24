/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNComposeViewControllerListener.h>
#import <Messenger/MNComposerTypingListener.h>

@protocol OS_dispatch_queue, FBCancelable;
@class NSString, MNComposerTextParserListeningAnnouncer, FBMobileConfigContextManager, NSTimer, NSObject;

@interface MNComposerTextParser : NSObject <FBClassProvidable, MNComposeViewControllerListener, MNComposerTypingListener> {

	NSString* _currentText;
	MNComposerTextParserListeningAnnouncer* _announcer;
	FBMobileConfigContextManager* _configManager;
	NSTimer* _fetchingDelayTimer;
	BOOL _needsFetchingDelay;
	NSObject*<OS_dispatch_queue> _queue;
	long long _searchMode;
	id<FBCancelable> _mentionDetectionOperation;

}

@property (retain) id<FBCancelable> mentionDetectionOperation;              //@synthesize mentionDetectionOperation=_mentionDetectionOperation - In the implementation block
@property (assign,nonatomic) long long searchMode;                          //@synthesize searchMode=_searchMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithConfigManager:(id)arg1 ;
-(void)didTransitionToExtension:(id)arg1 ;
-(void)composerWillChangeTextInRange:(NSRange)arg1 replacementText:(id)arg2 currentAttributedText:(id)arg3 ;
-(long long)searchMode;
-(void)composerTextDidChangeToText:(id)arg1 ;
-(void)setSearchMode:(long long)arg1 ;
-(void)_composerStateDidUpdate;
-(BOOL)_isParsingBotMentionTriggerEnabled;
-(BOOL)_isParsingUserMentionTriggerEnabled;
-(id<FBCancelable>)mentionDetectionOperation;
-(void)_didParseUserMentionTriggerQuery:(id)arg1 queryRange:(NSRange)arg2 ;
-(void)setMentionDetectionOperation:(id<FBCancelable>)arg1 ;
-(BOOL)_tryParsingBotMentionTrigger;
-(void)_didParseMentionQuery:(id)arg1 ;
-(id)_getFetchingDelayTimerWithDelay:(double)arg1 selector:(SEL)arg2 ;
-(void)_didParseSearchQuery:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end
