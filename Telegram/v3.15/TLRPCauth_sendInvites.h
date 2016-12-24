/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TLMetaRpc.h>

@class NSArray, NSString;

@interface TLRPCauth_sendInvites : TLMetaRpc {

	NSArray* _phone_numbers;
	NSString* _message;

}

@property (nonatomic,retain) NSArray * phone_numbers;              //@synthesize phone_numbers=_phone_numbers - In the implementation block
@property (nonatomic,retain) NSString * message;                   //@synthesize message=_message - In the implementation block
-(int)TLconstructorSignature;
-(int)TLconstructorName;
-(id)TLbuildFromMetaObject:(shared_ptr<TLMetaObject>*)arg1 ;
-(void)TLfillFieldsWithValues:(map<int, TLConstructedValue, std::less<int>, std::allocator<std::pair<const int, TLConstructedValue> > >Ref)arg1 ;
-(int)impliedResponseSignature;
-(int)layerVersion;
-(void)setPhone_numbers:(NSArray *)arg1 ;
-(NSArray *)phone_numbers;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(Class)responseClass;
@end
