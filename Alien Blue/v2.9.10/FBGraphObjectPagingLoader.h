/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/FBGraphObjectDataSourceDataNeededDelegate.h>

@protocol FBGraphObjectPagingLoaderDelegate;
@class UITableView, FBGraphObjectTableDataSource, FBSession, NSString, FBRequestConnection;

@interface FBGraphObjectPagingLoader : NSObject <FBGraphObjectDataSourceDataNeededDelegate> {

	BOOL _isResultFromCache;
	BOOL _skipRoundtripIfCached;
	UITableView* _tableView;
	FBGraphObjectTableDataSource* _dataSource;
	FBSession* _session;
	id<FBGraphObjectPagingLoaderDelegate> _delegate;
	unsigned long long _pagingMode;
	NSString* _nextLink;
	FBRequestConnection* _connection;
	NSString* _cacheIdentity;

}

@property (nonatomic,retain) UITableView * tableView;                                     //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) FBGraphObjectTableDataSource * dataSource;                   //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) FBSession * session;                                         //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) id<FBGraphObjectPagingLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long pagingMode;                               //@synthesize pagingMode=_pagingMode - In the implementation block
@property (nonatomic,readonly) BOOL isResultFromCache;                                    //@synthesize isResultFromCache=_isResultFromCache - In the implementation block
@property (nonatomic,retain) NSString * nextLink;                                         //@synthesize nextLink=_nextLink - In the implementation block
@property (nonatomic,retain) FBRequestConnection * connection;                            //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) NSString * cacheIdentity;                                      //@synthesize cacheIdentity=_cacheIdentity - In the implementation block
@property (assign,nonatomic) BOOL skipRoundtripIfCached;                                  //@synthesize skipRoundtripIfCached=_skipRoundtripIfCached - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDataSource:(id)arg1 pagingMode:(unsigned long long)arg2 ;
-(void)startLoadingWithRequest:(id)arg1 cacheIdentity:(id)arg2 skipRoundtripIfCached:(BOOL)arg3 ;
-(NSString *)cacheIdentity;
-(void)setPagingMode:(unsigned long long)arg1 ;
-(unsigned long long)pagingMode;
-(NSString *)nextLink;
-(void)followNextLink;
-(void)setNextLink:(NSString *)arg1 ;
-(BOOL)isResultFromCache;
-(void)requestCompleted:(id)arg1 result:(id)arg2 error:(id)arg3 ;
-(BOOL)skipRoundtripIfCached;
-(void)setCacheIdentity:(NSString *)arg1 ;
-(void)setSkipRoundtripIfCached:(BOOL)arg1 ;
-(void)addResultsAndUpdateView:(id)arg1 ;
-(void)graphObjectTableDataSourceNeedsData:(id)arg1 triggeredByIndexPath:(id)arg2 ;
-(void)cancel;
-(void)setDataSource:(FBGraphObjectTableDataSource *)arg1 ;
-(void)setDelegate:(id<FBGraphObjectPagingLoaderDelegate>)arg1 ;
-(void)dealloc;
-(FBGraphObjectTableDataSource *)dataSource;
-(id<FBGraphObjectPagingLoaderDelegate>)delegate;
-(void)reset;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)updateView;
-(FBRequestConnection *)connection;
-(void)setConnection:(FBRequestConnection *)arg1 ;
-(FBSession *)session;
-(void)setSession:(FBSession *)arg1 ;
@end

