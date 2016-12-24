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

@interface FBBasePaymentInvoiceItemHelperParams : FBGraphQLInput {

	NSString* _client;
	NSString* _sellerId;
	NSString* _text;

}

@property (nonatomic,copy) NSString * client;                //@synthesize client=_client - In the implementation block
@property (nonatomic,copy) NSString * sellerId;              //@synthesize sellerId=_sellerId - In the implementation block
@property (nonatomic,copy) NSString * text;                  //@synthesize text=_text - In the implementation block
-(void)setSellerId:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)sellerId;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSString *)client;
-(void)setClient:(NSString *)arg1 ;
@end
