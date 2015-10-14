/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:41:49 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/3A543D9E-77DF-4DA3-955A-044E51462F63/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@protocol NSCodingNSCopyingNSObject;
@interface PTHTweetbotOfflineQueueItem : NSObject <NSCoding> {

	SEL _action;
	Class _targetClass;
	id<NSCoding><NSCopying><NSObject> _argument;
	long long _retryCount;

}

@property (assign,nonatomic) SEL action;                                            //@synthesize action=_action - In the implementation block
@property (assign,nonatomic,__weak) Class targetClass;                              //@synthesize targetClass=_targetClass - In the implementation block
@property (nonatomic,copy) id<NSCoding><NSCopying><NSObject> argument;              //@synthesize argument=_argument - In the implementation block
@property (assign,nonatomic) long long retryCount;                                  //@synthesize retryCount=_retryCount - In the implementation block
@property (nonatomic,readonly) BOOL canRetry; 
-(BOOL)canRetry;
-(id<NSCoding><NSCopying><NSObject>)argument;
-(void)setArgument:(id<NSCoding><NSCopying><NSObject>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(SEL)action;
-(void)setAction:(SEL)arg1 ;
-(void)setTargetClass:(Class)arg1 ;
-(Class)targetClass;
-(long long)retryCount;
-(void)setRetryCount:(long long)arg1 ;
@end

