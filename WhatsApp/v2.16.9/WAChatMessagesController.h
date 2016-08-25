/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WAChatMessagesControllerDelegate;
@class NSMutableArray, NSSet, NSIndexPath, NSArray;

@interface WAChatMessagesController : NSObject {

	NSMutableArray* _sections;
	BOOL _showReportSpamCell;
	id<WAChatMessagesControllerDelegate> _delegate;
	NSSet* _highlightedTerms;

}

@property (assign,nonatomic,__weak) id<WAChatMessagesControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showReportSpamCell;                                           //@synthesize showReportSpamCell=_showReportSpamCell - In the implementation block
@property (nonatomic,readonly) NSIndexPath * bottomMostIndexPath; 
@property (nonatomic,readonly) NSIndexPath * dividerIndexPath; 
@property (nonatomic,readonly) NSIndexPath * reportSpamCellIndexPath; 
@property (nonatomic,readonly) unsigned long long messageCount; 
@property (nonatomic,readonly) NSArray * sections;                                              //@synthesize sections=_sections - In the implementation block
@property (nonatomic,copy) NSSet * highlightedTerms;                                            //@synthesize highlightedTerms=_highlightedTerms - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
-(id)indexPathOfMessage:(id)arg1 ;
-(void)setShowReportSpamCell:(BOOL)arg1 ;
-(NSIndexPath *)bottomMostIndexPath;
-(BOOL)appendMessages:(id)arg1 ascendingSortOnly:(BOOL)arg2 currentUnreadCount:(long long)arg3 searchResultMessageIDs:(id)arg4 dividerBehavior:(unsigned long long)arg5 animated:(BOOL)arg6 withConfigurationBlock:(/*^block*/id)arg7 ;
-(void)prependMessages:(id)arg1 animated:(BOOL)arg2 withConfigurationBlock:(/*^block*/id)arg3 ;
-(NSIndexPath *)dividerIndexPath;
-(id)chatCellDataAtIndexPath:(id)arg1 ;
-(BOOL)removeReportSpamCell;
-(void)enumerateChatCellDataUsingBlock:(/*^block*/id)arg1 ;
-(void)setHighlightedTerms:(NSSet *)arg1 ;
-(unsigned long long)removeMessages:(id)arg1 animated:(BOOL)arg2 ;
-(id)allSelectedMessages;
-(id)allSelectedCellDataObjects;
-(id)chatCellDataForMessage:(id)arg1 ;
-(NSSet *)highlightedTerms;
-(id)indexPathOfChatCellData:(id)arg1 ;
-(void)clearSearchResultIndicators;
-(void)removeUnreadDividerWithAnimation:(BOOL)arg1 ;
-(void)deleteChatCellDataObjects:(id)arg1 updatingIndexPaths:(id)arg2 animated:(BOOL)arg3 ;
-(NSIndexPath *)reportSpamCellIndexPath;
-(id)indexPathOfUpdatedCellDataForMessage:(id)arg1 ;
-(void)removeChatCellDataAtIndexPath:(id)arg1 ;
-(void)getDay:(long long*)arg1 month:(long long*)arg2 year:(long long*)arg3 fromDate:(id)arg4 ;
-(BOOL)showReportSpamCell;
-(id)indexPathOfRowFollowingRowAtIndexPath:(id)arg1 ;
-(BOOL)hasEditableMessages;
-(id)allUnsentMessagesAroundCellData:(id)arg1 cellDataObjectCount:(unsigned long long*)arg2 ;
-(void)setDelegate:(id<WAChatMessagesControllerDelegate>)arg1 ;
-(id)init;
-(long long)numberOfRowsInSection:(long long)arg1 ;
-(id<WAChatMessagesControllerDelegate>)delegate;
-(long long)numberOfSections;
-(BOOL)isEmpty;
-(unsigned long long)messageCount;
-(NSArray *)sections;
-(id)titleForSection:(long long)arg1 ;
-(id)lastMessage;
-(void)removeAllMessages;
@end

