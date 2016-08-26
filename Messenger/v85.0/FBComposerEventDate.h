/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:23 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface FBComposerEventDate : FBValueObject <NSCopying, NSCoding> {

	unsigned long long _eventYear;
	unsigned long long _eventMonth;
	unsigned long long _eventDay;

}

@property (nonatomic,readonly) unsigned long long eventYear;               //@synthesize eventYear=_eventYear - In the implementation block
@property (nonatomic,readonly) unsigned long long eventMonth;              //@synthesize eventMonth=_eventMonth - In the implementation block
@property (nonatomic,readonly) unsigned long long eventDay;                //@synthesize eventDay=_eventDay - In the implementation block
-(id)initWithEventYear:(unsigned long long)arg1 eventMonth:(unsigned long long)arg2 eventDay:(unsigned long long)arg3 ;
-(unsigned long long)eventYear;
-(unsigned long long)eventMonth;
-(unsigned long long)eventDay;
@end
