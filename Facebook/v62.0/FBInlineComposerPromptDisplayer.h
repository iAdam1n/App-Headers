/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBInlineComposerSinglePromptManagerProtocol.h>
#import <Facebook/FBPromptDisplayer.h>

@protocol FBInlineComposerSinglePromptManagerDelegate;
@class FBInlineComposerPromptSession, FBInlineComposerPrompt, FBPromptDisplayerManager, FBInlineComposerSinglePromptManagerListenerAnnouncer, NSString, FBInlineComposerLogger;

@interface FBInlineComposerPromptDisplayer : NSObject <FBInlineComposerSinglePromptManagerProtocol, FBPromptDisplayer> {

	FBPromptDisplayerManager* _displayerManager;
	FBInlineComposerSinglePromptManagerListenerAnnouncer* _announcer;
	FBInlineComposerPromptSession* _currentPromptSession;
	id<FBInlineComposerSinglePromptManagerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) FBInlineComposerLogger * logger; 
@property (assign,nonatomic,__weak) id<FBInlineComposerSinglePromptManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBInlineComposerPromptSession * currentPromptSession;                       //@synthesize currentPromptSession=_currentPromptSession - In the implementation block
@property (nonatomic,readonly) FBInlineComposerPrompt * currentPrompt; 
@property (nonatomic,readonly) id<FBInlineComposerPromptsManagerProtocol> promptsManager; 
-(void)didClosePrompt:(id)arg1 closeReason:(long long)arg2 ;
-(FBInlineComposerPromptSession *)currentPromptSession;
-(FBInlineComposerPrompt *)currentPrompt;
-(id<FBInlineComposerPromptsManagerProtocol>)promptsManager;
-(void)reloadPromptsWithCompletion:(/*^block*/id)arg1 ;
-(void)didHidePrompt:(id)arg1 hideReason:(long long)arg2 ;
-(void)didShowPrompt:(id)arg1 showReason:(long long)arg2 ;
-(id)currentlyDisplayedPrompt;
-(BOOL)canUpdatePrompt;
-(void)updatePromptSession:(id)arg1 ;
-(id)initWithPromptDisplayerManager:(id)arg1 ;
-(void)setDelegate:(id<FBInlineComposerSinglePromptManagerDelegate>)arg1 ;
-(id<FBInlineComposerSinglePromptManagerDelegate>)delegate;
-(FBInlineComposerLogger *)logger;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
