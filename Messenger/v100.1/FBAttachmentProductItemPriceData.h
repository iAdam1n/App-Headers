/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString;

@interface FBAttachmentProductItemPriceData : FBGraphQLInput {

	NSString* _price;
	NSString* _currency;

}

@property (nonatomic,copy) NSString * price;                 //@synthesize price=_price - In the implementation block
@property (nonatomic,copy) NSString * currency;              //@synthesize currency=_currency - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)price;
-(void)setPrice:(NSString *)arg1 ;
-(void)setCurrency:(NSString *)arg1 ;
-(NSString *)currency;
@end
