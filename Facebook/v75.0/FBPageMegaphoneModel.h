/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMemAYMTChannel;

@interface FBPageMegaphoneModel : FBValueObject <NSCopying> {

	BOOL _isHidden;
	FBMemAYMTChannel* _pageMegaphoneAYMTChannel;

}

@property (nonatomic,copy,readonly) FBMemAYMTChannel * pageMegaphoneAYMTChannel;              //@synthesize pageMegaphoneAYMTChannel=_pageMegaphoneAYMTChannel - In the implementation block
@property (nonatomic,readonly) BOOL isHidden;                                                 //@synthesize isHidden=_isHidden - In the implementation block
-(FBMemAYMTChannel *)pageMegaphoneAYMTChannel;
-(id)initWithPageMegaphoneAYMTChannel:(id)arg1 isHidden:(BOOL)arg2 ;
-(BOOL)isHidden;
@end
