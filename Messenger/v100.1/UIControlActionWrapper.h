/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface UIControlActionWrapper : NSObject <NSCopying> {

	/*^block*/id _action;

}

@property (nonatomic,copy) id action;              //@synthesize action=_action - In the implementation block
+(id)wrapperWithAction:(/*^block*/id)arg1 ;
-(void)invokeWithSender:(id)arg1 event:(unsigned long long)arg2 ;
-(id)action;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAction:(id)arg1 ;
@end
