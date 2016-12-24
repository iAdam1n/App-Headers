/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SQueue, NSMutableArray, NSMutableDictionary, TGPainting, TGPhotoEntitiesContainerView;

@interface TGPaintUndoManager : NSObject <NSCopying> {

	SQueue* _queue;
	NSMutableArray* _operations;
	NSMutableDictionary* _uuidToOperationMap;
	TGPainting* _painting;
	TGPhotoEntitiesContainerView* _entitiesContainer;
	/*^block*/id _historyChanged;

}

@property (assign,nonatomic,__weak) TGPainting * painting;                                         //@synthesize painting=_painting - In the implementation block
@property (assign,nonatomic,__weak) TGPhotoEntitiesContainerView * entitiesContainer;              //@synthesize entitiesContainer=_entitiesContainer - In the implementation block
@property (nonatomic,copy) id historyChanged;                                                      //@synthesize historyChanged=_historyChanged - In the implementation block
@property (nonatomic,readonly) BOOL canUndo; 
-(void)setPainting:(TGPainting *)arg1 ;
-(void)setEntitiesContainer:(TGPhotoEntitiesContainerView *)arg1 ;
-(void)setHistoryChanged:(id)arg1 ;
-(void)unregisterUndoWithUUID:(long long)arg1 ;
-(void)registerUndoWithUUID:(long long)arg1 block:(/*^block*/id)arg2 ;
-(TGPainting *)painting;
-(id)historyChanged;
-(void)_performBlock:(/*^block*/id)arg1 uuid:(long long)arg2 ;
-(void)_notifyOfHistoryChanges;
-(TGPhotoEntitiesContainerView *)entitiesContainer;
-(id)init;
-(BOOL)canUndo;
-(void)undo;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
