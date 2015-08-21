/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:42 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNConcurrentOperation.h>

@protocol TFNDirectMessageContext;
@class TFNDirectMessageModel, TFNDirectMessageRefreshProgress, TFNDirectMessageFetchUpdatesOperation, TFNDirectMessageProcessUserUpdatesResponseOperation;

@interface TFNDirectMessageRefreshOperation : TFNConcurrentOperation {

	id<TFNDirectMessageContext> _context;
	TFNDirectMessageModel* _model;
	TFNDirectMessageRefreshProgress* _progress;
	TFNDirectMessageFetchUpdatesOperation* _fetchOperation;
	TFNDirectMessageProcessUserUpdatesResponseOperation* _processResponseOperation;
	long long _source;

}

@property (nonatomic,retain) id<TFNDirectMessageContext> context;                                                         //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) TFNDirectMessageModel * model;                                                               //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) TFNDirectMessageRefreshProgress * progress;                                                  //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) TFNDirectMessageFetchUpdatesOperation * fetchOperation;                                      //@synthesize fetchOperation=_fetchOperation - In the implementation block
@property (nonatomic,retain) TFNDirectMessageProcessUserUpdatesResponseOperation * processResponseOperation;              //@synthesize processResponseOperation=_processResponseOperation - In the implementation block
@property (assign,nonatomic) long long source;                                                                            //@synthesize source=_source - In the implementation block
-(void)setFetchOperation:(TFNDirectMessageFetchUpdatesOperation *)arg1 ;
-(TFNDirectMessageProcessUserUpdatesResponseOperation *)processResponseOperation;
-(void)setProcessResponseOperation:(TFNDirectMessageProcessUserUpdatesResponseOperation *)arg1 ;
-(id)initWithSource:(long long)arg1 model:(id)arg2 context:(id)arg3 ;
-(void)cancel;
-(id)init;
-(id<TFNDirectMessageContext>)context;
-(void)setProgress:(TFNDirectMessageRefreshProgress *)arg1 ;
-(void)setContext:(id<TFNDirectMessageContext>)arg1 ;
-(TFNDirectMessageModel *)model;
-(long long)source;
-(void)setSource:(long long)arg1 ;
-(TFNDirectMessageRefreshProgress *)progress;
-(void)main;
-(void)setModel:(TFNDirectMessageModel *)arg1 ;
-(TFNDirectMessageFetchUpdatesOperation *)fetchOperation;
@end

