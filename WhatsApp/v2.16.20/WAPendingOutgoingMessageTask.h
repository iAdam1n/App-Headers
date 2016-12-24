/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:46 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WAMessageID, NSString;

@interface WAPendingOutgoingMessageTask : NSObject {

	WAMessageID* _messageId;
	NSString* _fanoutPhash;
	unsigned long long _qCount;
	unsigned long long _retryCount;

}

@property (nonatomic,readonly) WAMessageID * messageId;                    //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,copy) NSString * fanoutPhash;                         //@synthesize fanoutPhash=_fanoutPhash - In the implementation block
@property (assign,nonatomic) unsigned long long qCount;                    //@synthesize qCount=_qCount - In the implementation block
@property (nonatomic,readonly) unsigned long long retryCount;              //@synthesize retryCount=_retryCount - In the implementation block
-(NSString *)fanoutPhash;
-(id)initWithMessageId:(id)arg1 retryCount:(unsigned long long)arg2 ;
-(void)setFanoutPhash:(NSString *)arg1 ;
-(unsigned long long)qCount;
-(void)setQCount:(unsigned long long)arg1 ;
-(unsigned long long)retryCount;
-(WAMessageID *)messageId;
@end
