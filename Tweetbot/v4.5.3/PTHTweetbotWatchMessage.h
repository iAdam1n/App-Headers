/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 6:53:39 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/1B765338-CA71-42BD-BD25-B178C5389776/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@protocol PTHTweetbotWatchMessageObject;
@class NSString, PTHTweetbotObjectDescriptor, NSDictionary;

@interface PTHTweetbotWatchMessage : NSObject <NSCoding> {

	BOOL _dataReply;
	Class _targetClass;
	NSString* _actionName;
	PTHTweetbotObjectDescriptor* _objectDescriptor;
	id<PTHTweetbotWatchMessageObject> _messageObject;
	long long _retryCount;
	double _retryDelay;

}

@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) Class targetClass;                                            //@synthesize targetClass=_targetClass - In the implementation block
@property (nonatomic,readonly) NSString * actionName;                                        //@synthesize actionName=_actionName - In the implementation block
@property (nonatomic,readonly) PTHTweetbotObjectDescriptor * objectDescriptor;               //@synthesize objectDescriptor=_objectDescriptor - In the implementation block
@property (nonatomic,readonly) id<PTHTweetbotWatchMessageObject> messageObject;              //@synthesize messageObject=_messageObject - In the implementation block
@property (assign,nonatomic) long long retryCount;                                           //@synthesize retryCount=_retryCount - In the implementation block
@property (assign,nonatomic) double retryDelay;                                              //@synthesize retryDelay=_retryDelay - In the implementation block
@property (assign,getter=hasDataReply,nonatomic) BOOL dataReply;                             //@synthesize dataReply=_dataReply - In the implementation block
+(id)dictionaryWithTargetClass:(Class)arg1 actionName:(id)arg2 descriptor:(id)arg3 ;
+(BOOL)supportsSecureCoding;
-(id)initWithTargetClass:(Class)arg1 actionName:(id)arg2 descriptor:(id)arg3 ;
-(id)initWithTargetClass:(Class)arg1 actionName:(id)arg2 messageObject:(id)arg3 ;
-(PTHTweetbotObjectDescriptor *)objectDescriptor;
-(id<PTHTweetbotWatchMessageObject>)messageObject;
-(void)setRetryDelay:(double)arg1 ;
-(BOOL)hasDataReply;
-(void)setDataReply:(BOOL)arg1 ;
-(double)retryDelay;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)setRetryCount:(long long)arg1 ;
-(long long)retryCount;
-(NSString *)actionName;
-(Class)targetClass;
@end
