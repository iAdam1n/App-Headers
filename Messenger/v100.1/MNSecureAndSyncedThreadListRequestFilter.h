/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNThreadListRequestFilter, MNSecureThreadListRequestFilter;

@interface MNSecureAndSyncedThreadListRequestFilter : FBValueObject <NSCopying> {

	MNThreadListRequestFilter* _syncedThreadListRequestFilter;
	MNSecureThreadListRequestFilter* _secureThreadListRequestFilter;

}

@property (nonatomic,copy,readonly) MNThreadListRequestFilter * syncedThreadListRequestFilter;                    //@synthesize syncedThreadListRequestFilter=_syncedThreadListRequestFilter - In the implementation block
@property (nonatomic,copy,readonly) MNSecureThreadListRequestFilter * secureThreadListRequestFilter;              //@synthesize secureThreadListRequestFilter=_secureThreadListRequestFilter - In the implementation block
-(id)initWithSyncedThreadListRequestFilter:(id)arg1 secureThreadListRequestFilter:(id)arg2 ;
-(MNThreadListRequestFilter *)syncedThreadListRequestFilter;
-(MNSecureThreadListRequestFilter *)secureThreadListRequestFilter;
@end
