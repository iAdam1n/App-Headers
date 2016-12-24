/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBComposerUpdateAction : NSObject <NSCopying> {

	unsigned long long _subtype;
	BOOL _tryToPublish_shouldLogUserPostAutoTagging;
	BOOL _publish_shouldLogUserPostAutoTagging;

}
+(id)noAction;
+(id)tryToPublishWithShouldLogUserPostAutoTagging:(BOOL)arg1 ;
+(id)publishWithShouldLogUserPostAutoTagging:(BOOL)arg1 ;
+(id)facecastFinishedRecording;
+(id)cancel;
-(void)matchNoAction:(/*^block*/id)arg1 cancel:(/*^block*/id)arg2 facecastFinishedRecording:(/*^block*/id)arg3 tryToPublish:(/*^block*/id)arg4 publish:(/*^block*/id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
