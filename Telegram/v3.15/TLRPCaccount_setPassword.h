/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TLMetaRpc.h>

@class NSData, NSString;

@interface TLRPCaccount_setPassword : TLMetaRpc {

	NSData* _current_password_hash;
	NSData* _n_new_salt;
	NSData* _n_new_password_hash;
	NSString* _hint;

}

@property (nonatomic,retain) NSData * current_password_hash;              //@synthesize current_password_hash=_current_password_hash - In the implementation block
@property (nonatomic,retain) NSData * n_new_salt;                         //@synthesize n_new_salt=_n_new_salt - In the implementation block
@property (nonatomic,retain) NSData * n_new_password_hash;                //@synthesize n_new_password_hash=_n_new_password_hash - In the implementation block
@property (nonatomic,retain) NSString * hint;                             //@synthesize hint=_hint - In the implementation block
-(int)TLconstructorSignature;
-(int)TLconstructorName;
-(id)TLbuildFromMetaObject:(shared_ptr<TLMetaObject>*)arg1 ;
-(void)TLfillFieldsWithValues:(map<int, TLConstructedValue, std::less<int>, std::allocator<std::pair<const int, TLConstructedValue> > >Ref)arg1 ;
-(int)impliedResponseSignature;
-(int)layerVersion;
-(NSData *)n_new_salt;
-(void)setN_new_salt:(NSData *)arg1 ;
-(void)setCurrent_password_hash:(NSData *)arg1 ;
-(NSData *)current_password_hash;
-(NSData *)n_new_password_hash;
-(void)setN_new_password_hash:(NSData *)arg1 ;
-(Class)responseClass;
-(void)setHint:(NSString *)arg1 ;
-(NSString *)hint;
@end
