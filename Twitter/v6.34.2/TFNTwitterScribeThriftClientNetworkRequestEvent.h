/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TBase.h>
#import <Twitter/NSCoding.h>

@class TFNTwitterScribeThriftVersionedCommonHeader, NSString, TFNTwitterScribeThriftClientNetworkRequest;

@interface TFNTwitterScribeThriftClientNetworkRequestEvent : NSObject <TBase, NSCoding> {

	BOOL _commonHeaderIsSet;
	BOOL _eventTypeIsSet;
	BOOL _requestIsSet;
	BOOL _eventSourceIsSet;
	TFNTwitterScribeThriftVersionedCommonHeader* _commonHeader;
	NSString* _eventType;
	TFNTwitterScribeThriftClientNetworkRequest* _request;
	NSString* _eventSource;

}

@property (nonatomic,retain) TFNTwitterScribeThriftVersionedCommonHeader * commonHeader;              //@synthesize commonHeader=_commonHeader - In the implementation block
@property (nonatomic,readonly) BOOL commonHeaderIsSet;                                                //@synthesize commonHeaderIsSet=_commonHeaderIsSet - In the implementation block
@property (nonatomic,copy) NSString * eventType;                                                      //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) BOOL eventTypeIsSet;                                                   //@synthesize eventTypeIsSet=_eventTypeIsSet - In the implementation block
@property (nonatomic,retain) TFNTwitterScribeThriftClientNetworkRequest * request;                    //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) BOOL requestIsSet;                                                     //@synthesize requestIsSet=_requestIsSet - In the implementation block
@property (nonatomic,copy) NSString * eventSource;                                                    //@synthesize eventSource=_eventSource - In the implementation block
@property (nonatomic,readonly) BOOL eventSourceIsSet;                                                 //@synthesize eventSourceIsSet=_eventSourceIsSet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setCommonHeader:(TFNTwitterScribeThriftVersionedCommonHeader *)arg1 ;
-(TFNTwitterScribeThriftVersionedCommonHeader *)commonHeader;
-(BOOL)commonHeaderIsSet;
-(id)initWithCommonHeader:(id)arg1 eventType:(id)arg2 request:(id)arg3 eventSource:(id)arg4 ;
-(void)setEventSource:(NSString *)arg1 ;
-(BOOL)eventTypeIsSet;
-(BOOL)requestIsSet;
-(NSString *)eventSource;
-(BOOL)eventSourceIsSet;
-(NSString *)eventType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(TFNTwitterScribeThriftClientNetworkRequest *)request;
-(void)validate;
-(void)write:(id)arg1 ;
-(void)setEventType:(NSString *)arg1 ;
-(void)setRequest:(TFNTwitterScribeThriftClientNetworkRequest *)arg1 ;
@end
