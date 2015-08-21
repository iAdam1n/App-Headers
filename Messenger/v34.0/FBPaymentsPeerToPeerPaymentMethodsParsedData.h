/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>
#import <Messenger/NSCoding.h>

@class NSArray, FBMemPeerToPeerPaymentMethod, NSDictionary, NSDate;

@interface FBPaymentsPeerToPeerPaymentMethodsParsedData : FBValueObject <NSCopying, NSCoding> {

	BOOL _isCachedResponse;
	NSArray* _sendingPaymentMethods;
	NSArray* _receivingPaymentMethods;
	FBMemPeerToPeerPaymentMethod* _presetPaymentMethod;
	NSArray* _allPaymentMethods;
	NSDictionary* _response;
	NSDate* _downloadDate;

}

@property (nonatomic,copy,readonly) NSArray * sendingPaymentMethods;                                 //@synthesize sendingPaymentMethods=_sendingPaymentMethods - In the implementation block
@property (nonatomic,copy,readonly) NSArray * receivingPaymentMethods;                               //@synthesize receivingPaymentMethods=_receivingPaymentMethods - In the implementation block
@property (nonatomic,copy,readonly) FBMemPeerToPeerPaymentMethod * presetPaymentMethod;              //@synthesize presetPaymentMethod=_presetPaymentMethod - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allPaymentMethods;                                     //@synthesize allPaymentMethods=_allPaymentMethods - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * response;                                         //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) BOOL isCachedResponse;                                                //@synthesize isCachedResponse=_isCachedResponse - In the implementation block
@property (nonatomic,copy,readonly) NSDate * downloadDate;                                           //@synthesize downloadDate=_downloadDate - In the implementation block
-(NSDate *)downloadDate;
-(FBMemPeerToPeerPaymentMethod *)presetPaymentMethod;
-(id)initWithSendingPaymentMethods:(id)arg1 receivingPaymentMethods:(id)arg2 presetPaymentMethod:(id)arg3 allPaymentMethods:(id)arg4 response:(id)arg5 isCachedResponse:(BOOL)arg6 downloadDate:(id)arg7 ;
-(NSArray *)sendingPaymentMethods;
-(NSArray *)receivingPaymentMethods;
-(NSArray *)allPaymentMethods;
-(NSDictionary *)response;
-(BOOL)isCachedResponse;
@end

