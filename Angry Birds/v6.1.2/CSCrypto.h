/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CSCrypto : NSObject
+(id)md5:(id)arg1 ;
+(id)encryptRSA:(id)arg1 ;
+(id)encryptRSA:(id)arg1 key:(id)arg2 ;
+(void)setPublicKey:(id)arg1 tag:(id)arg2 ;
+(id)getPEMFormattedPrivateKey:(id)arg1 ;
+(id)getX509FormattedPublicKey:(id)arg1 ;
+(void)removeKey:(id)arg1 ;
+(id)dataFromBase64String:(id)arg1 ;
@end
