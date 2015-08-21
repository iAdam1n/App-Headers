/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:50 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNHARObject.h>

@class TFNHARRequest, NSString, TFNHARResponse, NSDate, TFNHARTimings;

@interface TFNHAREntry : TFNHARObject {

	TFNHARRequest* _request;
	NSString* _pageRef;
	long long _requestId;
	TFNHARResponse* _response;
	NSString* _serverIPAddress;
	NSDate* _startedDateTime;
	long long _time;
	TFNHARTimings* _timings;
	long long _entryId;

}

@property (nonatomic,retain) TFNHARRequest * request;                        //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSString * pageRef;                             //@synthesize pageRef=_pageRef - In the implementation block
@property (assign,nonatomic) long long requestId;                            //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,retain) TFNHARResponse * response;                      //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSString * serverIPAddress;                     //@synthesize serverIPAddress=_serverIPAddress - In the implementation block
@property (nonatomic,retain) NSDate * startedDateTime;                       //@synthesize startedDateTime=_startedDateTime - In the implementation block
@property (assign,nonatomic) long long time;                                 //@synthesize time=_time - In the implementation block
@property (nonatomic,retain) TFNHARTimings * timings;                        //@synthesize timings=_timings - In the implementation block
@property (assign,nonatomic) long long entryId;                              //@synthesize entryId=_entryId - In the implementation block
@property (getter=isInflight,nonatomic,readonly) BOOL inflight; 
-(id)JSONDictionary;
-(NSDate *)startedDateTime;
-(NSString *)serverIPAddress;
-(BOOL)isInflight;
-(id)initWithEntryId:(long long)arg1 ;
-(void)updateTimingsIfInflight;
-(void)setPageRef:(NSString *)arg1 ;
-(void)setServerIPAddress:(NSString *)arg1 ;
-(void)setStartedDateTime:(NSDate *)arg1 ;
-(long long)entryId;
-(void)setEntryId:(long long)arg1 ;
-(id)init;
-(TFNHARRequest *)request;
-(void)setTime:(long long)arg1 ;
-(long long)time;
-(TFNHARResponse *)response;
-(NSString *)pageRef;
-(void)setResponse:(TFNHARResponse *)arg1 ;
-(long long)requestId;
-(void)setRequestId:(long long)arg1 ;
-(TFNHARTimings *)timings;
-(void)setTimings:(TFNHARTimings *)arg1 ;
-(void)setRequest:(TFNHARRequest *)arg1 ;
@end

