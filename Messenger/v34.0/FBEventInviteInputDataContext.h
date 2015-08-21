/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:14 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSArray;

@interface FBEventInviteInputDataContext : FBGraphQLInput {

	NSString* _source;
	NSString* _ref;
	NSString* _refNotifType;
	NSArray* _eventActionHistory;

}

@property (nonatomic,copy) NSString * source;                         //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * ref;                            //@synthesize ref=_ref - In the implementation block
@property (nonatomic,copy) NSString * refNotifType;                   //@synthesize refNotifType=_refNotifType - In the implementation block
@property (nonatomic,copy) NSArray * eventActionHistory;              //@synthesize eventActionHistory=_eventActionHistory - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)refNotifType;
-(void)setRefNotifType:(NSString *)arg1 ;
-(NSArray *)eventActionHistory;
-(void)setEventActionHistory:(NSArray *)arg1 ;
-(NSString *)source;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)ref;
-(void)setRef:(NSString *)arg1 ;
@end

