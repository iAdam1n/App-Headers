/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ECChatManagerProtocol <NSObject>
@property (assign,nonatomic) id<ECChatManagerDelegate> delegate; 
@property (assign,nonatomic) BOOL isWaitingOnAPIResponse; 
@required
-(void)updateDialogsInList:(id)arg1;
-(void)deleteDialog:(id)arg1 shouldRefreshModel:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)loadChatHistoryForDialog:(id)arg1;
-(void)sendMessage:(id)arg1 toDialog:(id)arg2;
-(void)markMessageAsReadInDialog:(id)arg1;
-(void)flagDialog:(id)arg1;
-(id)createNewDialogForAd:(id)arg1;
-(void)startConversationForDialog:(id)arg1 withUser:(id)arg2 forAd:(id)arg3;
-(void)deleteDialog:(id)arg1;
-(void)cannedResponsesForDialog:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(BOOL)isWaitingOnAPIResponse;
-(void)setIsWaitingOnAPIResponse:(BOOL)arg1;
-(void)setDelegate:(id)arg1;
-(id<ECChatManagerDelegate>)delegate;
-(void)connect;
-(void)disconnect;
-(BOOL)isRefreshing;

@end

