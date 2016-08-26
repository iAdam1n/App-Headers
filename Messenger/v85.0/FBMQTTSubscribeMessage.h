/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableArray, NSString;

@interface FBMQTTSubscribeMessage : NSObject <TBase, NSCoding> {

	NSMutableArray* __thrift_subscribeTopics;
	NSMutableArray* __thrift_subscribeGenericTopics;
	BOOL __thrift_subscribeTopics_set;
	BOOL __thrift_subscribeGenericTopics_set;

}

@property (nonatomic,retain) NSMutableArray * subscribeTopics; 
@property (nonatomic,retain) NSMutableArray * subscribeGenericTopics; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setSubscribeTopics:(NSMutableArray *)arg1 ;
-(void)setSubscribeGenericTopics:(NSMutableArray *)arg1 ;
-(id)initWithSubscribeTopics:(id)arg1 subscribeGenericTopics:(id)arg2 ;
-(NSMutableArray *)subscribeTopics;
-(BOOL)subscribeTopicsIsSet;
-(void)unsetSubscribeTopics;
-(NSMutableArray *)subscribeGenericTopics;
-(BOOL)subscribeGenericTopicsIsSet;
-(void)unsetSubscribeGenericTopics;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)write:(id)arg1 ;
@end
