/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TLMetaRpc.h>

@class NSString;

@interface TLRPChelp_getTermsOfService : TLMetaRpc {

	NSString* _lang_code;

}

@property (nonatomic,retain) NSString * lang_code;              //@synthesize lang_code=_lang_code - In the implementation block
-(int)TLconstructorSignature;
-(int)TLconstructorName;
-(id)TLbuildFromMetaObject:(shared_ptr<TLMetaObject>*)arg1 ;
-(void)TLfillFieldsWithValues:(map<int, TLConstructedValue, std::less<int>, std::allocator<std::pair<const int, TLConstructedValue> > >Ref)arg1 ;
-(int)impliedResponseSignature;
-(int)layerVersion;
-(NSString *)lang_code;
-(void)setLang_code:(NSString *)arg1 ;
-(Class)responseClass;
@end
