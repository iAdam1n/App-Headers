/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface Secret20_FunctionContext : NSObject {

	NSData* _payload;
	/*^block*/id _responseParser;
	id _metadata;

}

@property (nonatomic,readonly) NSData * payload;                    //@synthesize payload=_payload - In the implementation block
@property (nonatomic,copy,readonly) id responseParser;              //@synthesize responseParser=_responseParser - In the implementation block
@property (nonatomic,readonly) id metadata;                         //@synthesize metadata=_metadata - In the implementation block
-(id)initWithPayload:(id)arg1 responseParser:(/*^block*/id)arg2 metadata:(id)arg3 ;
-(id)responseParser;
-(NSData *)payload;
-(id)metadata;
@end
