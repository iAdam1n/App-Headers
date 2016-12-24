/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:11 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString, NSError;

@interface FBPaymentsCardViewControllerCollectedData : FBValueObject <NSCopying> {

	long long _operationType;
	NSDictionary* _textInputStates;
	NSString* _cardAssociation;
	NSError* _error;

}

@property (nonatomic,readonly) long long operationType;                          //@synthesize operationType=_operationType - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * textInputStates;              //@synthesize textInputStates=_textInputStates - In the implementation block
@property (nonatomic,copy,readonly) NSString * cardAssociation;                  //@synthesize cardAssociation=_cardAssociation - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                             //@synthesize error=_error - In the implementation block
-(NSString *)cardAssociation;
-(id)initWithOperationType:(long long)arg1 textInputStates:(id)arg2 cardAssociation:(id)arg3 error:(id)arg4 ;
-(NSDictionary *)textInputStates;
-(NSError *)error;
-(long long)operationType;
@end
