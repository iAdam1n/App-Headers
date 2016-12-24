/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSArray;

@interface FBEventContext : FBGraphQLInput {

	NSString* _source;
	NSString* _ref;
	NSString* _refNotifType;
	NSArray* _eventActionHistory;

}

@property (nonatomic,copy) NSString * source;                         //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * ref;                            //@synthesize ref=_ref - In the implementation block
@property (nonatomic,copy) NSString * refNotifType;                   //@synthesize refNotifType=_refNotifType - In the implementation block
@property (nonatomic,copy) NSArray * eventActionHistory;              //@synthesize eventActionHistory=_eventActionHistory - In the implementation block
-(void)setEventActionHistory:(NSArray *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)refNotifType;
-(void)setRefNotifType:(NSString *)arg1 ;
-(NSArray *)eventActionHistory;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(NSString *)ref;
-(void)setRef:(NSString *)arg1 ;
@end
