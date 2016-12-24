/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface FBMessageOutgoingAttachmentPreparationOutput : FBValueObject <NSCopying> {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _progress;
	/*^block*/id _completion;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id progress;                                     //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) id completion;                                   //@synthesize completion=_completion - In the implementation block
-(id)initWithQueue:(id)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)completion;
-(id)progress;
-(NSObject*<OS_dispatch_queue>)queue;
@end
