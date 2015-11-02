/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol WAURLSessionDownloadTaskHandler;
@class NSError, NSString, WAURLTaskData, NSURLRequest, NSHTTPURLResponse;

@interface WAURLSessionTask : NSObject {

	NSError* _error;
	id<WAURLSessionDownloadTaskHandler> _task;

}

@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * shortIdentifier; 
@property (nonatomic,retain) NSError * error;                                       //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) float progress; 
@property (nonatomic,copy) WAURLTaskData * taskData; 
@property (nonatomic,copy,readonly) NSString * fileType; 
@property (nonatomic,readonly) NSURLRequest * currentRequest; 
@property (nonatomic,readonly) NSHTTPURLResponse * response; 
@property (nonatomic,readonly) long long countOfBytesReceived; 
@property (nonatomic,readonly) long long state; 
@property (nonatomic,retain) id<WAURLSessionDownloadTaskHandler> task;              //@synthesize task=_task - In the implementation block
-(NSString *)shortIdentifier;
-(WAURLTaskData *)taskData;
-(void)setTaskData:(WAURLTaskData *)arg1 ;
-(void)reportStatsWitResult:(int)arg1 ;
-(BOOL)prepareForRetryWithError:(id)arg1 ;
-(void)destroy;
-(NSError *)error;
-(long long)state;
-(NSString *)identifier;
-(void)suspend;
-(void)resume;
-(NSHTTPURLResponse *)response;
-(float)progress;
-(NSString *)fileType;
-(id<WAURLSessionDownloadTaskHandler>)task;
-(void)setTask:(id<WAURLSessionDownloadTaskHandler>)arg1 ;
-(NSURLRequest *)currentRequest;
-(long long)countOfBytesReceived;
-(void)setError:(NSError *)arg1 ;
@end
