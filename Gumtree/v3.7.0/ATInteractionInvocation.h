/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:00 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/NSCoding.h>
#import <Gumtree/NSCopying.h>

@class NSString, NSDictionary;

@interface ATInteractionInvocation : NSObject <NSCoding, NSCopying> {

	NSString* _interactionID;
	long long _priority;
	NSDictionary* _criteria;

}

@property (nonatomic,copy) NSString * interactionID;               //@synthesize interactionID=_interactionID - In the implementation block
@property (assign,nonatomic) long long priority;                   //@synthesize priority=_priority - In the implementation block
@property (nonatomic,retain) NSDictionary * criteria;              //@synthesize criteria=_criteria - In the implementation block
+(id)invocationWithJSONDictionary:(id)arg1 ;
+(id)invocationsWithJSONArray:(id)arg1 ;
+(id)predicateForInteractionCriteria:(id)arg1 hasError:(BOOL*)arg2 ;
+(id)predicateForCriteria:(id)arg1 operatorExpression:(id)arg2 hasError:(BOOL*)arg3 ;
-(NSString *)interactionID;
-(void)setInteractionID:(NSString *)arg1 ;
-(BOOL)criteriaAreMet;
-(BOOL)criteriaAreMetForUsageData:(id)arg1 ;
-(id)criteriaPredicate;
-(NSDictionary *)criteria;
-(void)setCriteria:(NSDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPriority:(long long)arg1 ;
-(long long)priority;
@end

