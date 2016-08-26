/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:25 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBCommentsStreamFetchLimit : FBValueObject <NSCopying> {

	unsigned long long _initial;
	unsigned long long _head;
	unsigned long long _tail;
	unsigned long long _neck;
	unsigned long long _invalid;

}

@property (nonatomic,readonly) unsigned long long initial;              //@synthesize initial=_initial - In the implementation block
@property (nonatomic,readonly) unsigned long long head;                 //@synthesize head=_head - In the implementation block
@property (nonatomic,readonly) unsigned long long tail;                 //@synthesize tail=_tail - In the implementation block
@property (nonatomic,readonly) unsigned long long neck;                 //@synthesize neck=_neck - In the implementation block
@property (nonatomic,readonly) unsigned long long invalid;              //@synthesize invalid=_invalid - In the implementation block
+(id)fetchLimitWithValue:(unsigned long long)arg1 ;
+(id)fetchLimitFromStreamFetchLimit:(SCD_Struct_FB100)arg1 ;
-(SCD_Struct_FB100)toStreamFetchLimit;
-(BOOL)isValid;
-(unsigned long long)neck;
-(id)initWithInitial:(unsigned long long)arg1 head:(unsigned long long)arg2 tail:(unsigned long long)arg3 neck:(unsigned long long)arg4 invalid:(unsigned long long)arg5 ;
-(unsigned long long)initial;
-(unsigned long long)invalid;
-(unsigned long long)head;
-(unsigned long long)tail;
@end
