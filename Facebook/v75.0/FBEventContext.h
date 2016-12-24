/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

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
-(void)setRefNotifType:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)refNotifType;
-(NSArray *)eventActionHistory;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(NSString *)ref;
-(void)setRef:(NSString *)arg1 ;
@end
