/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNThreadReadMarkValue;

@interface MNThreadReadMark : FBValueObject <NSCopying, NSCoding> {

	MNThreadReadMarkValue* _markValue;

}

@property (nonatomic,copy,readonly) MNThreadReadMarkValue * markValue;              //@synthesize markValue=_markValue - In the implementation block
+(id)newMarkWithValue:(id)arg1 ;
-(MNThreadReadMarkValue *)markValue;
-(id)initWithMarkValue:(id)arg1 ;
@end

