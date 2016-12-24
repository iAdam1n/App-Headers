/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HTModelDocumentUndoDelegate;
@class NSUndoManager;

@interface MSQModelDocumentUndo : NSObject {

	NSUndoManager* _snapshotManager;
	BOOL _hasReceivedDidOpenGroupEvent;
	id<HTModelDocumentUndoDelegate> _delegate;
	NSUndoManager* _manager;

}

@property (nonatomic,retain) NSUndoManager * manager;                                      //@synthesize manager=_manager - In the implementation block
@property (assign,nonatomic,__weak) id<HTModelDocumentUndoDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL hasUndoSnapshot; 
@property (nonatomic,readonly) BOOL hasReceivedDidOpenGroupEvent; 
-(void)resetUndoEvents;
-(void)_undoWillChangeNotification:(id)arg1 ;
-(void)_undoDidChangeNotification:(id)arg1 ;
-(void)_undoEventNotification:(id)arg1 ;
-(void)resetUndoHistory;
-(BOOL)hasUndoSnapshot;
-(void)takeUndoSnapshot;
-(void)restoreUndoSnapshot;
-(BOOL)hasReceivedDidOpenGroupEvent;
-(id)init;
-(void)setDelegate:(id<HTModelDocumentUndoDelegate>)arg1 ;
-(void)dealloc;
-(id<HTModelDocumentUndoDelegate>)delegate;
-(NSUndoManager *)manager;
-(void)setManager:(NSUndoManager *)arg1 ;
@end
