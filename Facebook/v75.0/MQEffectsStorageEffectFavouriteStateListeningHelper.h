/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MQEffectsStorageEffectFavouriteStateListeningHelper : NSObject {

	NSString* _effectId;
	/*^block*/id _block;

}

@property (nonatomic,copy,readonly) NSString * effectId;              //@synthesize effectId=_effectId - In the implementation block
@property (nonatomic,copy,readonly) id block;                         //@synthesize block=_block - In the implementation block
+(id)listenerWithEffectId:(id)arg1 block:(/*^block*/id)arg2 ;
-(NSString *)effectId;
-(id)initWithEffectId:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)block;
@end
