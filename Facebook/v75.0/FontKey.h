/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>

@interface FontKey : FBValueObject {

	double _size;
	unsigned long long _weight;
	double _multiplier;

}

@property (nonatomic,readonly) double size;                            //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) unsigned long long weight;              //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) double multiplier;                      //@synthesize multiplier=_multiplier - In the implementation block
-(id)initWithSize:(double)arg1 weight:(unsigned long long)arg2 multiplier:(double)arg3 ;
-(double)size;
-(double)multiplier;
-(unsigned long long)weight;
@end
