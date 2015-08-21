/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:29 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <CFNetwork/NSURLConnection.h>

@class NSHTTPURLResponse, NSMutableData, NSString;

@interface SASAdURLConnection : NSURLConnection {

	NSHTTPURLResponse* _response;
	NSMutableData* _responseData;
	BOOL _processed;
	BOOL _master;
	BOOL _prefetch;
	NSString* _pageId;
	long long _formatId;
	NSString* _target;
	id _delegate;
	NSString* _insertionIDHeader;

}

@property (nonatomic,copy) NSString * pageId;                                //@synthesize pageId=_pageId - In the implementation block
@property (assign) long long formatId;                                       //@synthesize formatId=_formatId - In the implementation block
@property (assign,getter=isProcessed,nonatomic) BOOL processed;              //@synthesize processed=_processed - In the implementation block
@property (assign,getter=isMaster,nonatomic) BOOL master;                    //@synthesize master=_master - In the implementation block
@property (nonatomic,copy) NSString * target;                                //@synthesize target=_target - In the implementation block
@property (assign,getter=isPrefetch,nonatomic) BOOL prefetch;                //@synthesize prefetch=_prefetch - In the implementation block
@property (nonatomic,retain) NSHTTPURLResponse * response;                   //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSMutableData * responseData;                   //@synthesize responseData=_responseData - In the implementation block
@property (assign,nonatomic) id delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * insertionIDHeader;                   //@synthesize insertionIDHeader=_insertionIDHeader - In the implementation block
-(void)setInsertionIDHeader:(NSString *)arg1 ;
-(id)initWithRequest:(id)arg1 delegate:(id)arg2 formatID:(long long)arg3 pageID:(id)arg4 target:(id)arg5 master:(BOOL)arg6 prefetch:(BOOL)arg7 ;
-(NSString *)pageId;
-(void)setPageId:(NSString *)arg1 ;
-(BOOL)isProcessed;
-(void)setProcessed:(BOOL)arg1 ;
-(NSString *)insertionIDHeader;
-(BOOL)isMaster;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)setTarget:(NSString *)arg1 ;
-(NSString *)target;
-(NSHTTPURLResponse *)response;
-(void)setMaster:(BOOL)arg1 ;
-(void)setResponse:(NSHTTPURLResponse *)arg1 ;
-(NSMutableData *)responseData;
-(void)setResponseData:(NSMutableData *)arg1 ;
-(BOOL)isPrefetch;
-(void)setPrefetch:(BOOL)arg1 ;
-(long long)formatId;
-(void)setFormatId:(long long)arg1 ;
-(void)timeout;
@end

