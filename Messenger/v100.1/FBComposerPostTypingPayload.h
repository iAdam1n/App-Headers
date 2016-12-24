/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBComposerPostTypingPayload : FBValueObject <NSCopying> {

	unsigned long long _keystrokesCount;
	unsigned long long _pastesCount;
	unsigned long long _deletesCount;

}

@property (nonatomic,readonly) unsigned long long keystrokesCount;              //@synthesize keystrokesCount=_keystrokesCount - In the implementation block
@property (nonatomic,readonly) unsigned long long pastesCount;                  //@synthesize pastesCount=_pastesCount - In the implementation block
@property (nonatomic,readonly) unsigned long long deletesCount;                 //@synthesize deletesCount=_deletesCount - In the implementation block
-(id)initWithKeystrokesCount:(unsigned long long)arg1 pastesCount:(unsigned long long)arg2 deletesCount:(unsigned long long)arg3 ;
-(unsigned long long)keystrokesCount;
-(unsigned long long)pastesCount;
-(unsigned long long)deletesCount;
@end
