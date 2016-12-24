/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBApplicationCanOpenUrlCheckingResult : FBValueObject <NSCopying> {

	BOOL _canOpen;
	double _updatedTimestamp;

}

@property (nonatomic,readonly) BOOL canOpen;                         //@synthesize canOpen=_canOpen - In the implementation block
@property (nonatomic,readonly) double updatedTimestamp;              //@synthesize updatedTimestamp=_updatedTimestamp - In the implementation block
-(double)updatedTimestamp;
-(id)initWithCanOpen:(BOOL)arg1 updatedTimestamp:(double)arg2 ;
-(BOOL)canOpen;
@end
