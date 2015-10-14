/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:45:36 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/7881866A-D1BE-4511-B548-423BBF260BEE/Crystal.app/Crystal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Crystal/CLSURLSessionTask.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@class NSURLConnection, NSMutableData, NSString;

@interface CLSURLSessionDataTask : CLSURLSessionTask <NSURLConnectionDelegate> {

	/*^block*/id _completionHandler;
	NSURLConnection* _connection;
	NSMutableData* _data;
	NSString* _taskDescription;

}

@property (copy) NSString * taskDescription;                            //@synthesize taskDescription=_taskDescription - In the implementation block
@property (nonatomic,retain) NSURLConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) id completionHandler;                        //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)resume;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(NSURLConnection *)connection;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(void)complete;
-(NSString *)taskDescription;
-(void)setTaskDescription:(NSString *)arg1 ;
@end

