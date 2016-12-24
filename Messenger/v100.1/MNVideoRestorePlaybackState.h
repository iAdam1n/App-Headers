/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface MNVideoRestorePlaybackState : FBValueObject <NSCopying> {

	NSURL* _contentURL;
	SCD_Struct_FB25 _resumeTime;

}

@property (nonatomic,copy,readonly) NSURL * contentURL;                 //@synthesize contentURL=_contentURL - In the implementation block
@property (nonatomic,readonly) SCD_Struct_FB25 resumeTime;              //@synthesize resumeTime=_resumeTime - In the implementation block
-(id)initWithContentURL:(id)arg1 resumeTime:(SCD_Struct_FB25)arg2 ;
-(SCD_Struct_FB25)resumeTime;
-(NSURL *)contentURL;
@end
