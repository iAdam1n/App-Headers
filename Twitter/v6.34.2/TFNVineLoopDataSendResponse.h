/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TNLResponse.h>

@class NSDictionary;

@interface TFNVineLoopDataSendResponse : TNLResponse {

	BOOL _success;
	NSDictionary* _responseJSON;
	double _nextAfter;

}

@property (nonatomic,readonly) NSDictionary * responseJSON;              //@synthesize responseJSON=_responseJSON - In the implementation block
@property (nonatomic,readonly) BOOL success;                             //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) double nextAfter;                         //@synthesize nextAfter=_nextAfter - In the implementation block
-(id)initWithRequest:(id)arg1 operationError:(id)arg2 info:(id)arg3 metrics:(id)arg4 ;
-(NSDictionary *)responseJSON;
-(double)nextAfter;
-(BOOL)success;
@end

