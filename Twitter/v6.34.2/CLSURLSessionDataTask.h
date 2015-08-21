/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:51 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/CLSURLSessionTask.h>
#import <Twitter/NSURLConnectionDelegate.h>

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
-(id)completionHandler;
-(void)resume;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)setCompletionHandler:(id)arg1 ;
-(NSURLConnection *)connection;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(void)complete;
-(NSString *)taskDescription;
-(void)setTaskDescription:(NSString *)arg1 ;
@end

