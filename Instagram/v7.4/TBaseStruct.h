/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:18 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/NSCopying.h>
#import <Instagram/NSMutableCopying.h>

@interface TBaseStruct : NSObject <NSCopying, NSMutableCopying> {

	BOOL _troot_is_immutable;

}
-(void)throwExceptionIfImmutable;
-(BOOL)isImmutable;
-(BOOL)isMutable;
-(BOOL)makeImmutable;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end
