/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBReactionVPVLoggingType : NSObject <NSCopying> {

	unsigned long long _subtype;
	/*^block*/id _defaultVPVdLogging_augmentingBlock;
	/*^block*/id _customVPVdListener_listenerBlock;
	/*^block*/id _singleVPVListener_augmentingBlock;

}
+(id)defaultVPVdLoggingWithAugmentingBlock:(/*^block*/id)arg1 ;
+(id)customVPVdListenerWithListenerBlock:(/*^block*/id)arg1 ;
+(id)singleVPVListenerWithAugmentingBlock:(/*^block*/id)arg1 ;
-(void)matchDefaultVPVdLogging:(/*^block*/id)arg1 customVPVdListener:(/*^block*/id)arg2 singleVPVListener:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
