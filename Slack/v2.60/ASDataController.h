/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/ASDealloc2MainObject.h>

@protocol ASDataControllerSource, ASDataControllerDelegate;
@class NSMutableArray;

@interface ASDataController : ASDealloc2MainObject {

	NSMutableArray* _nodes;
	NSMutableArray* _pendingBlocks;
	BOOL _asyncDataFetchingEnabled;
	id<ASDataControllerSource> _dataSource;
	id<ASDataControllerDelegate> _delegate;
	unsigned long long _batchUpdateCounter;

}

@property (assign,nonatomic,__weak) id<ASDataControllerSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<ASDataControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) unsigned long long batchUpdateCounter;                               //@synthesize batchUpdateCounter=_batchUpdateCounter - In the implementation block
+(id)sizingQueue;
+(BOOL)isSizingQueue;
+(unsigned long long)parallelProcessorCount;
-(id)initWithAsyncDataFetching:(BOOL)arg1 ;
-(void)reloadDataWithAnimationOption:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)nodeAtIndexPath:(id)arg1 ;
-(void)endUpdatesWithCompletion:(/*^block*/id)arg1 ;
-(void)insertSections:(id)arg1 withAnimationOption:(unsigned long long)arg2 ;
-(void)deleteSections:(id)arg1 withAnimationOption:(unsigned long long)arg2 ;
-(void)reloadSections:(id)arg1 withAnimationOption:(unsigned long long)arg2 ;
-(void)moveSection:(long long)arg1 toSection:(long long)arg2 withAnimationOption:(unsigned long long)arg3 ;
-(void)insertRowsAtIndexPaths:(id)arg1 withAnimationOption:(unsigned long long)arg2 ;
-(void)deleteRowsAtIndexPaths:(id)arg1 withAnimationOption:(unsigned long long)arg2 ;
-(void)reloadRowsAtIndexPaths:(id)arg1 withAnimationOption:(unsigned long long)arg2 ;
-(void)moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2 withAnimationOption:(unsigned long long)arg3 ;
-(id)nodesAtIndexPaths:(id)arg1 ;
-(void)performDataFetchingWithBlock:(/*^block*/id)arg1 ;
-(void)asyncUpdateDataWithBlock:(/*^block*/id)arg1 ;
-(void)syncUpdateDataWithBlock:(/*^block*/id)arg1 ;
-(void)_batchInsertNodes:(id)arg1 atIndexPaths:(id)arg2 withAnimationOptions:(unsigned long long)arg3 ;
-(void)_insertNodes:(id)arg1 atIndexPaths:(id)arg2 withAnimationOption:(unsigned long long)arg3 ;
-(void)initialDataLoadingWithAnimationOption:(unsigned long long)arg1 ;
-(unsigned long long)batchUpdateCounter;
-(void)setBatchUpdateCounter:(unsigned long long)arg1 ;
-(void)setDataSource:(id<ASDataControllerSource>)arg1 ;
-(void)setDelegate:(id<ASDataControllerDelegate>)arg1 ;
-(void)dealloc;
-(unsigned long long)numberOfRowsInSection:(unsigned long long)arg1 ;
-(id<ASDataControllerSource>)dataSource;
-(id<ASDataControllerDelegate>)delegate;
-(unsigned long long)numberOfSections;
-(void)beginUpdates;
-(void)endUpdates;
@end

