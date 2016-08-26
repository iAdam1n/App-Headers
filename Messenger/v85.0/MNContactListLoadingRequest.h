/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:27 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNContactListLoadingRequest : FBValueObject <NSCopying> {

	unsigned _fetchLimit;
	unsigned long long _type;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned fetchLimit;                  //@synthesize fetchLimit=_fetchLimit - In the implementation block
-(id)initWithType:(unsigned long long)arg1 fetchLimit:(unsigned)arg2 ;
-(unsigned long long)type;
-(unsigned)fetchLimit;
@end
