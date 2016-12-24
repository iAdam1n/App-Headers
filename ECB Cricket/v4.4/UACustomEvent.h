/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:19:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/08508F9E-DA8B-4AFD-AB09-7444BD482D44/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ECBCricketApp/UAEvent.h>

@class NSDecimalNumber, NSString;

@interface UACustomEvent : UAEvent {

	NSDecimalNumber* _eventValue;
	NSString* _eventName;
	NSString* _interactionID;
	NSString* _interactionType;
	NSString* _transactionID;
	NSString* _conversionSendId;

}

@property (nonatomic,retain) NSDecimalNumber * eventValue;              //@synthesize eventValue=_eventValue - In the implementation block
@property (nonatomic,copy) NSString * eventName;                        //@synthesize eventName=_eventName - In the implementation block
@property (nonatomic,copy) NSString * interactionID;                    //@synthesize interactionID=_interactionID - In the implementation block
@property (nonatomic,copy) NSString * interactionType;                  //@synthesize interactionType=_interactionType - In the implementation block
@property (nonatomic,copy) NSString * transactionID;                    //@synthesize transactionID=_transactionID - In the implementation block
@property (nonatomic,copy) NSString * conversionSendId;                 //@synthesize conversionSendId=_conversionSendId - In the implementation block
+(id)eventWithName:(id)arg1 value:(id)arg2 ;
+(id)eventWithName:(id)arg1 ;
+(id)eventWithName:(id)arg1 valueFromString:(id)arg2 ;
-(NSString *)conversionSendId;
-(id)initWithName:(id)arg1 withValue:(id)arg2 ;
-(void)setInteractionID:(NSString *)arg1 ;
-(NSString *)interactionID;
-(void)setInteractionFromMessage:(id)arg1 ;
-(void)setConversionSendId:(NSString *)arg1 ;
-(void)setInteractionType:(NSString *)arg1 ;
-(BOOL)isValid;
-(id)data;
-(NSString *)interactionType;
-(id)eventType;
-(NSString *)eventName;
-(void)setEventName:(NSString *)arg1 ;
-(NSDecimalNumber *)eventValue;
-(void)setEventValue:(NSDecimalNumber *)arg1 ;
-(void)setTransactionID:(NSString *)arg1 ;
-(NSString *)transactionID;
-(unsigned long long)estimatedSize;
@end
