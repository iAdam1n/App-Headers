/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class WAChatSession, WAMessage, NSSet, NSString, NSArray;


@protocol WAChatSessionPresenting <NSObject>
@property (nonatomic,readonly) WAChatSession * chatSession; 
@property (nonatomic,retain) WAMessage * highlightedMessage; 
@property (assign,nonatomic) BOOL showKeyboardOnAppear; 
@property (assign,nonatomic) BOOL ignoreUnsentTextOnDisappear; 
@property (assign,nonatomic) double openChatStartTime; 
@property (nonatomic,copy) NSSet * highlightedTerms; 
@property (nonatomic,copy,readonly) NSString * jid; 
@property (getter=isShowingMostRecentMessages,nonatomic,readonly) BOOL showingMostRecentMessages; 
@property (nonatomic,copy) NSArray * chatPreviewActionItems; 
@property (assign,nonatomic) BOOL alwaysShowsBackButton; 
@required
-(NSString *)jid;
-(WAChatSession *)chatSession;
-(void)sendMediaItems:(id)arg1;
-(WAMessage *)highlightedMessage;
-(void)setShowKeyboardOnAppear:(BOOL)arg1;
-(BOOL)isShowingMostRecentMessages;
-(NSArray *)chatPreviewActionItems;
-(void)setHighlightedTerms:(id)arg1;
-(void)setHighlightedMessage:(id)arg1;
-(void)restoreSavedInput;
-(NSSet *)highlightedTerms;
-(BOOL)showKeyboardOnAppear;
-(BOOL)ignoreUnsentTextOnDisappear;
-(void)setIgnoreUnsentTextOnDisappear:(BOOL)arg1;
-(double)openChatStartTime;
-(void)setOpenChatStartTime:(double)arg1;
-(void)setChatPreviewActionItems:(id)arg1;
-(void)scrollToBottom;
-(void)setAlwaysShowsBackButton:(BOOL)arg1;
-(BOOL)alwaysShowsBackButton;

@end

