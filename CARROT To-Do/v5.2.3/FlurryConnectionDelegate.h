/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:47:20 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B61875E7-F2F8-487D-814D-DF59A28B6A4C/CARROT.app/CARROT
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FlurryHttpAsyncTaskDelegate;
@class NSMutableData, NSHTTPURLResponse, FlurryHttpAsyncTask, NSError;

@interface FlurryConnectionDelegate : NSObject {

	NSMutableData* _body;
	NSHTTPURLResponse* _response;
	id<FlurryHttpAsyncTaskDelegate> _httpTaskDelegate;
	FlurryHttpAsyncTask* _httpTask;
	NSError* _error;
	BOOL _done;

}

@property (nonatomic,readonly) NSHTTPURLResponse * response;                                //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) NSMutableData * body;                                        //@synthesize body=_body - In the implementation block
@property (nonatomic,readonly) NSError * error;                                             //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) id<FlurryHttpAsyncTaskDelegate> httpTaskDelegate;              //@synthesize httpTaskDelegate=_httpTaskDelegate - In the implementation block
@property (nonatomic,retain) FlurryHttpAsyncTask * httpTask;                                //@synthesize httpTask=_httpTask - In the implementation block
-(void)setHttpTaskDelegate:(id<FlurryHttpAsyncTaskDelegate>)arg1 ;
-(void)setHttpTask:(FlurryHttpAsyncTask *)arg1 ;
-(id<FlurryHttpAsyncTaskDelegate>)httpTaskDelegate;
-(FlurryHttpAsyncTask *)httpTask;
-(id)constructResponse;
-(id)initWithTaskDelegate:(id)arg1 taskParent:(id)arg2 ;
-(void)connectionCanceled;
-(id)init;
-(void)dealloc;
-(NSHTTPURLResponse *)response;
-(NSMutableData *)body;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2 ;
-(BOOL)isDone;
-(NSError *)error;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
@end
